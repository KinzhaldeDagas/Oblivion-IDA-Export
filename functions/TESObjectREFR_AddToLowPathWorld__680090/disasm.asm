0x680090: cmp     dword ptr ds:0B3BE00h, 0; Verified `LinkDoors` creates reciprocal TeleportData and calls this hook once for a1. The resulting single AStarWorldNode stores both door refs and both spatial forms; its map entries make it reachable from either endpoint space.
0x680097: jz      short locret_680103
0x680099: push    esi
0x68009A: mov     esi, [esp+4+doorReference]
0x68009E: test    esi, esi
0x6800A0: jz      short loc_680102
0x6800A2: mov     eax, [esi]
0x6800A4: mov     edx, [eax+170h]
0x6800AA: mov     ecx, esi
0x6800AC: call    edx
0x6800AE: cmp     byte ptr [eax+4], 18h
0x6800B2: jnz     short loc_680102
0x6800B4: cmp     eax, ds:0B35EBCh
0x6800BA: jz      short loc_680102
0x6800BC: mov     ecx, esi; this
0x6800BE: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x6800C3: test    eax, eax
0x6800C5: jz      short loc_680102
0x6800C7: mov     ecx, eax; this
0x6800C9: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x6800CE: test    eax, eax
0x6800D0: jz      short loc_680102
0x6800D2: push    esi; doorReference
0x6800D3: call    TravelPath_HasAStarWorldNodeForDoor; Verified duplicate test: finds the two endpoint spaces from the door reference and linked door, looks up that pair in the nested map, and checks whether any AStarWorldNode in the list contains this reference at either endpoint. TESObjectREFR::AddToLowPathWorld skips construction/insertion when this returns true.
0x6800D8: add     esp, 4
0x6800DB: test    al, al
0x6800DD: jnz     short loc_680102
0x6800DF: push    esi; doorReference
0x6800E0: call    TravelPath_CreateAStarWorldNode; Verified factory filter: refuses a TESObjectREFR whose TESFormMembr.flags has deleted bit 0x20, then requires ExtraTeleport and a non-null linked door before allocating the AStarWorldNode.
0x6800E5: mov     esi, eax
0x6800E7: add     esp, 4
0x6800EA: test    esi, esi
0x6800EC: jz      short loc_680102
0x6800EE: push    esi; node
0x6800EF: call    TravelPath_AddAStarWorldNodeToSpaceMaps; Verified add path for a newly allocated AStarWorldNode: under LowPathSearchGlobals.lowPathCriticalSection, insert the same node into the nested space map in both directions. The outer map is keyed by spaceA/spaceB; each inner map keys the opposite space and stores BSSimpleList<AStarWorldNode*>. Existing entries/lists are reused; missing maps/lists are allocated. WorldSpace endpoints create 0xBF-bucket inner maps, other endpoint forms create 0x25-bucket maps; why these bucket counts differ is Unknown. Fallout's TeleportDoorSearch::GetNodeConnections enumerates cell/worldspace door lists during search instead of using this Oblivion cached reciprocal map.
0x6800F4: add     esp, 4
0x6800F7: push    esi
0x6800F8: mov     ecx, 0B3BE18h
0x6800FD: call    BSSimpleList_PushFront
0x680102: pop     esi
0x680103: retn
