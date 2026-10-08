0x683AA0: push    esi
0x683AA1: lea     esi, [ecx+14h]
0x683AA4: mov     ecx, esi; this
0x683AA6: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x683AAB: test    eax, eax
0x683AAD: jz      short loc_683AC6
0x683AAF: mov     ecx, esi; this
0x683AB1: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x683AB6: mov     ecx, eax
0x683AB8: call    NiDX92DBufferData__GetSurfaceData
0x683ABD: neg     eax
0x683ABF: sbb     eax, eax
0x683AC1: add     eax, 1
0x683AC4: pop     esi
0x683AC5: retn
0x683AC6: xor     al, al
0x683AC8: pop     esi
0x683AC9: retn
