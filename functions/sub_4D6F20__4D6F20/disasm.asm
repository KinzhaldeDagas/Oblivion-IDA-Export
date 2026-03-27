0x4D6F20: push    esi
0x4D6F21: mov     esi, ecx
0x4D6F23: mov     eax, [esi]
0x4D6F25: mov     edx, [eax+190h]
0x4D6F2B: call    edx
0x4D6F2D: test    al, al
0x4D6F2F: jz      short loc_4D6F35
0x4D6F31: xor     al, al
0x4D6F33: pop     esi
0x4D6F34: retn
0x4D6F35: mov     eax, [esi+8]
0x4D6F38: shr     eax, 14h
0x4D6F3B: and     al, 1
0x4D6F3D: pop     esi
0x4D6F3E: retn
