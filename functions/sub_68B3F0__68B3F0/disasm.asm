0x68B3F0: push    esi
0x68B3F1: lea     esi, [ecx+14h]
0x68B3F4: mov     ecx, esi
0x68B3F6: call    sub_42B410
0x68B3FB: test    eax, eax
0x68B3FD: jz      short loc_68B40E
0x68B3FF: mov     ecx, esi
0x68B401: call    sub_42B410
0x68B406: mov     ecx, eax
0x68B408: pop     esi
0x68B409: jmp     sub_6899C0
0x68B40E: mov     eax, offset Vector3_InitValue?
0x68B413: pop     esi
0x68B414: retn
