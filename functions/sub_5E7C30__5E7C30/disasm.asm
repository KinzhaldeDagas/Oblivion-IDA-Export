0x5E7C30: push    ebx
0x5E7C31: push    ebp
0x5E7C32: push    esi
0x5E7C33: push    edi
0x5E7C34: mov     edi, ecx
0x5E7C36: mov     ecx, [esp+10h+arg_0]; this
0x5E7C3A: test    ecx, ecx
0x5E7C3C: jz      loc_5E7CF7
0x5E7C42: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x5E7C47: mov     ecx, eax; this
0x5E7C49: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x5E7C4E: mov     ecx, eax; this
0x5E7C50: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x5E7C55: mov     esi, eax
0x5E7C57: test    esi, esi
0x5E7C59: jz      loc_5E7CF7
0x5E7C5F: mov     ecx, esi
0x5E7C61: call    sub_42B460; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x5E7C66: mov     ecx, esi; linkedDoor
0x5E7C68: mov     ebx, eax
0x5E7C6A: call    TeleportData_GetLinkedDoorWorldspace; Verified: given the linked-door reference slot from TeleportData, resolves its loaded parent cell or child cell and returns that cell's worldspace; returns null when the linked reference or its cell is unavailable.
0x5E7C6F: mov     ecx, esi
0x5E7C71: mov     ebp, eax
0x5E7C73: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x5E7C78: mov     edx, [eax]
0x5E7C7A: sub     esp, 0Ch
0x5E7C7D: mov     ecx, esp
0x5E7C7F: mov     [ecx], edx
0x5E7C81: mov     edx, [eax+4]
0x5E7C84: mov     eax, [eax+8]
0x5E7C87: mov     [ecx+4], edx
0x5E7C8A: mov     [ecx+8], eax
0x5E7C8D: mov     ecx, edi; this
0x5E7C8F: call    TESObjectREFR_SetPosition
0x5E7C94: test    ebx, ebx
0x5E7C96: jz      short loc_5E7CC3
0x5E7C98: mov     ecx, ds:0B333A0h
0x5E7C9E: push    0; a2
0x5E7CA0: push    ebx; a1
0x5E7CA1: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5E7CA6: test    al, al
0x5E7CA8: jz      short loc_5E7CC3
0x5E7CAA: mov     ecx, esi
0x5E7CAC: call    sub_42B430
0x5E7CB1: fld     dword ptr [eax+8]
0x5E7CB4: push    ecx
0x5E7CB5: mov     ecx, edi; this
0x5E7CB7: fstp    [esp+14h+radians]; radians
0x5E7CBA: call    TESObjectREFR_SetRotationZ; TES4 authoritative: write reference rotation Z at TESObjectREFR+0x28, then notify the reference through virtual slot +0x40 with change mask 4.
0x5E7CBF: fldz
0x5E7CC1: jmp     short loc_5E7CC9
0x5E7CC3: fld     dword ptr ds:0A32048h
0x5E7CC9: push    ecx
0x5E7CCA: mov     ecx, edi; this
0x5E7CCC: fstp    [esp+18h+var_18]; radians
0x5E7CCF: call    TESObjectREFR_SetRotationX; TES4 authoritative: write reference rotation X at TESObjectREFR+0x20, then notify the reference through virtual slot +0x40 with change mask 4.
0x5E7CD4: push    ebp; int
0x5E7CD5: push    ebx; int
0x5E7CD6: push    edi; Concurrency::details::SchedulerBase *
0x5E7CD7: call    sub_4DD4B0
0x5E7CDC: mov     ecx, [edi+58h]
0x5E7CDF: mov     ecx, [ecx+8]
0x5E7CE2: add     esp, 0Ch
0x5E7CE5: test    ecx, ecx
0x5E7CE7: jz      short loc_5E7CF7
0x5E7CE9: cmp     byte ptr [esp+18h], 0
0x5E7CEE: jz      short loc_5E7CF7
0x5E7CF0: push    1
0x5E7CF2: call    sub_5668E0
0x5E7CF7: pop     edi
0x5E7CF8: pop     esi
0x5E7CF9: pop     ebp
0x5E7CFA: pop     ebx
0x5E7CFB: retn    8
