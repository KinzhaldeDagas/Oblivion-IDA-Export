0x68B3F0: push    esi
0x68B3F1: lea     esi, [ecx+14h]
0x68B3F4: mov     ecx, esi; this
0x68B3F6: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x68B3FB: test    eax, eax
0x68B3FD: jz      short loc_68B40E
0x68B3FF: mov     ecx, esi; this
0x68B401: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x68B406: mov     ecx, eax
0x68B408: pop     esi
0x68B409: jmp     EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x68B40E: mov     eax, offset g_zeroNiPoint3
0x68B413: pop     esi
0x68B414: retn
