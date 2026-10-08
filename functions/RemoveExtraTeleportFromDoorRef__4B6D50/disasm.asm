0x4B6D50: push    edi; Verified teleport-extra removal hook: before removing linked-door metadata, it removes the corresponding AStarWorldNode from the low-path space maps; then it clears teleport metadata from the linked door and this reference.
0x4B6D51: mov     edi, [esp+4+doorReference]
0x4B6D55: test    edi, edi
0x4B6D57: jz      short loc_4B6D8C
0x4B6D59: push    esi
0x4B6D5A: mov     ecx, edi; this
0x4B6D5C: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x4B6D61: mov     esi, eax
0x4B6D63: test    esi, esi
0x4B6D65: jz      short loc_4B6D8B
0x4B6D67: push    edi; doorReference
0x4B6D68: call    TravelPath_RemoveAStarWorldNodeFromSpaceMaps; Verified unlink path for a door reference whose ExtraTeleport is being removed: locate its AStarWorldNode by reciprocal space pair and endpoint refs, remove it from both inner lists, remove/free empty inner maps and outer entries, unlink it from LowPathSearchGlobals.allAStarWorldNodes, release its state slot, and free the node. Called from RemoveExtraTeleportFromDoorRef and ExtraData cleanup.
0x4B6D6D: add     esp, 4
0x4B6D70: mov     ecx, esi; this
0x4B6D72: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4B6D77: test    eax, eax
0x4B6D79: jz      short loc_4B6D82
0x4B6D7B: mov     ecx, eax
0x4B6D7D: call    sub_4D76D0
0x4B6D82: pop     esi
0x4B6D83: mov     ecx, edi
0x4B6D85: pop     edi
0x4B6D86: jmp     sub_4D76D0
0x4B6D8B: pop     esi
0x4B6D8C: pop     edi
0x4B6D8D: retn
