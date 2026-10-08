0x68B3D0: add     ecx, 14h; this
0x68B3D3: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x68B3D8: neg     eax
0x68B3DA: sbb     eax, eax
0x68B3DC: add     eax, 1
0x68B3DF: retn
