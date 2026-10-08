0x4D7740: push    esi; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x4D7741: lea     esi, [ecx+44h]
0x4D7744: push    edi
0x4D7745: mov     ecx, esi; this
0x4D7747: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4D774C: mov     edi, eax
0x4D774E: test    edi, edi
0x4D7750: jnz     short loc_4D777D
0x4D7752: mov     ecx, esi; this
0x4D7754: call    ExtraDataList_GetTeleport
0x4D7759: mov     esi, eax
0x4D775B: test    esi, esi
0x4D775D: jz      short loc_4D777B
0x4D775F: mov     ecx, esi; this
0x4D7761: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4D7766: test    eax, eax
0x4D7768: jz      short loc_4D777B
0x4D776A: mov     ecx, esi; this
0x4D776C: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4D7771: pop     edi
0x4D7772: lea     ecx, [eax+44h]; this
0x4D7775: pop     esi
0x4D7776: jmp     ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4D777B: mov     eax, edi
0x4D777D: pop     edi
0x4D777E: pop     esi
0x4D777F: retn
