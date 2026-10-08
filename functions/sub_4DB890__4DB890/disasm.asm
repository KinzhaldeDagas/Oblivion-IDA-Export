0x4DB890: mov     eax, [esp+owner]
0x4DB894: push    esi
0x4DB895: mov     esi, ecx
0x4DB897: push    edi
0x4DB898: lea     edi, [esi+44h]
0x4DB89B: push    eax; owner
0x4DB89C: mov     ecx, edi; this
0x4DB89E: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x4DB8A3: mov     edx, [esi]
0x4DB8A5: mov     eax, [edx+40h]
0x4DB8A8: push    80h ; '€'
0x4DB8AD: mov     ecx, esi
0x4DB8AF: call    eax
0x4DB8B1: mov     ecx, edi; this
0x4DB8B3: call    ExtraDataList_GetTeleport
0x4DB8B8: mov     esi, eax
0x4DB8BA: test    esi, esi
0x4DB8BC: jz      short loc_4DB8F4
0x4DB8BE: mov     ecx, esi; this
0x4DB8C0: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB8C5: test    eax, eax
0x4DB8C7: jz      short loc_4DB8F4
0x4DB8C9: mov     ecx, esi; this
0x4DB8CB: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB8D0: push    0; owner
0x4DB8D2: lea     ecx, [eax+44h]; this
0x4DB8D5: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x4DB8DA: mov     ecx, esi; this
0x4DB8DC: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB8E1: mov     edx, [eax]
0x4DB8E3: pop     edi
0x4DB8E4: pop     esi
0x4DB8E5: mov     [esp+owner], 80h ; '€'
0x4DB8ED: mov     ecx, eax
0x4DB8EF: mov     eax, [edx+40h]
0x4DB8F2: jmp     eax
0x4DB8F4: pop     edi
0x4DB8F5: pop     esi
0x4DB8F6: retn    4
