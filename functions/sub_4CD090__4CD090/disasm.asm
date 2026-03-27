0x4CD090: push    ebx
0x4CD091: mov     ebx, ecx
0x4CD093: push    edi
0x4CD094: push    ebx; a2
0x4CD095: mov     ecx, offset stru_B35C80; this
0x4CD09A: call    sub_496EA0
0x4CD09F: lea     edi, [ebx+48h]
0x4CD0A2: test    edi, edi
0x4CD0A4: jz      short loc_4CD123
0x4CD0A6: push    esi
0x4CD0A7: mov     esi, [edi]
0x4CD0A9: test    esi, esi
0x4CD0AB: jz      short loc_4CD11B
0x4CD0AD: mov     eax, [esi]
0x4CD0AF: mov     edx, [eax+154h]
0x4CD0B5: mov     ecx, esi
0x4CD0B7: call    edx
0x4CD0B9: test    eax, eax
0x4CD0BB: jz      short loc_4CD0EC
0x4CD0BD: mov     ecx, esi
0x4CD0BF: call    sub_4D7000
0x4CD0C4: test    al, al
0x4CD0C6: jnz     short loc_4CD0EC
0x4CD0C8: mov     eax, [esi+8]
0x4CD0CB: mov     ecx, eax
0x4CD0CD: shr     ecx, 0Bh
0x4CD0D0: test    cl, 1
0x4CD0D3: jnz     short loc_4CD0DC
0x4CD0D5: shr     eax, 5
0x4CD0D8: test    al, 1
0x4CD0DA: jz      short loc_4CD11B
0x4CD0DC: mov     edx, [esi]
0x4CD0DE: mov     eax, [edx+150h]
0x4CD0E4: push    0
0x4CD0E6: mov     ecx, esi
0x4CD0E8: call    eax
0x4CD0EA: jmp     short loc_4CD11B
0x4CD0EC: mov     eax, [esi+8]
0x4CD0EF: mov     ecx, eax
0x4CD0F1: shr     ecx, 0Bh
0x4CD0F4: test    cl, 1
0x4CD0F7: jnz     short loc_4CD11B
0x4CD0F9: shr     eax, 5
0x4CD0FC: test    al, 1
0x4CD0FE: jnz     short loc_4CD11B
0x4CD100: mov     ecx, ds:0B333A0h
0x4CD106: push    0
0x4CD108: push    ebx
0x4CD109: call    sub_440C80
0x4CD10E: mov     ecx, ds:0B33A1Ch
0x4CD114: push    eax
0x4CD115: push    esi
0x4CD116: call    sub_438060
0x4CD11B: mov     edi, [edi+4]
0x4CD11E: test    edi, edi
0x4CD120: jnz     short loc_4CD0A7
0x4CD122: pop     esi
0x4CD123: push    ebx; a2
0x4CD124: mov     ecx, offset stru_B35C80; this
0x4CD129: call    sub_496F50
0x4CD12E: pop     edi
0x4CD12F: pop     ebx
0x4CD130: retn
