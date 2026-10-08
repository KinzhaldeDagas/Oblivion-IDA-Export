0x4DB7D0: push    ebx; Verified effective ownership-condition global lookup: use this reference's XGLB first, then the linked door's XGLB, then the parent cell's XGLB. Fallout's TESObjectREFR::GetOwnershipGlobal has the same fallback sequence. This is distinct from TESObjectREFR_GetOwner's owner-form inheritance.
0x4DB7D1: push    esi
0x4DB7D2: mov     ebx, ecx
0x4DB7D4: push    edi
0x4DB7D5: lea     edi, [ebx+44h]
0x4DB7D8: mov     ecx, edi; this
0x4DB7DA: call    ExtraDataList_GetGlobal; Verified accessor: returns the TESGlobal* in ExtraGlobal (extra type 0x28/XGLB), or null if the extra is absent.
0x4DB7DF: mov     esi, eax
0x4DB7E1: test    esi, esi
0x4DB7E3: jnz     short loc_4DB823
0x4DB7E5: mov     ecx, edi; this
0x4DB7E7: call    ExtraDataList_GetTeleport
0x4DB7EC: mov     edi, eax
0x4DB7EE: test    edi, edi
0x4DB7F0: jz      short loc_4DB812
0x4DB7F2: mov     ecx, edi; this
0x4DB7F4: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB7F9: test    eax, eax
0x4DB7FB: jz      short loc_4DB812
0x4DB7FD: mov     ecx, edi; this
0x4DB7FF: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB804: lea     ecx, [eax+44h]; this
0x4DB807: call    ExtraDataList_GetGlobal; Verified accessor: returns the TESGlobal* in ExtraGlobal (extra type 0x28/XGLB), or null if the extra is absent.
0x4DB80C: mov     esi, eax
0x4DB80E: test    esi, esi
0x4DB810: jnz     short loc_4DB823
0x4DB812: mov     ecx, [ebx+40h]
0x4DB815: test    ecx, ecx
0x4DB817: jz      short loc_4DB821
0x4DB819: pop     edi
0x4DB81A: pop     esi
0x4DB81B: pop     ebx
0x4DB81C: jmp     loc_4CA980
0x4DB821: mov     eax, esi
0x4DB823: pop     edi
0x4DB824: pop     esi
0x4DB825: pop     ebx
0x4DB826: retn
0x4CA980: add     ecx, 28h ; '('; this
0x4CA983: jmp     ExtraDataList_GetGlobal; Verified accessor: returns the TESGlobal* in ExtraGlobal (extra type 0x28/XGLB), or null if the extra is absent.
