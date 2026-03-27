0x6E8FC0: mov     eax, [esp+arg_0]
0x6E8FC4: push    ebp
0x6E8FC5: push    eax
0x6E8FC6: mov     ebp, ecx
0x6E8FC8: call    sub_715F10
0x6E8FCD: test    al, al
0x6E8FCF: jnz     short loc_6E8FD5
0x6E8FD1: pop     ebp
0x6E8FD2: retn    4
0x6E8FD5: push    ebx
0x6E8FD6: xor     ebx, ebx
0x6E8FD8: cmp     [ebp+5Eh], bx
0x6E8FDC: jbe     short loc_6E901E
0x6E8FDE: push    esi
0x6E8FDF: push    edi
0x6E8FE0: mov     ecx, [ebp+58h]
0x6E8FE3: mov     esi, [ecx+ebx*4]
0x6E8FE6: test    esi, esi
0x6E8FE8: jz      short loc_6E9011
0x6E8FEA: xor     edi, edi
0x6E8FEC: cmp     [esi+8], edi
0x6E8FEF: jbe     short loc_6E9011
0x6E8FF1: mov     edx, [esi]
0x6E8FF3: mov     eax, [edx+edi*4]
0x6E8FF6: mov     ecx, [eax+4]
0x6E8FF9: test    ecx, ecx
0x6E8FFB: jz      short loc_6E9009
0x6E8FFD: mov     eax, [ecx]
0x6E8FFF: mov     edx, [esp+10h+arg_0]
0x6E9003: mov     eax, [eax+24h]
0x6E9006: push    edx
0x6E9007: call    eax
0x6E9009: add     edi, 1
0x6E900C: cmp     edi, [esi+8]
0x6E900F: jb      short loc_6E8FF1
0x6E9011: movzx   ecx, word ptr [ebp+5Eh]
0x6E9015: add     ebx, 1
0x6E9018: cmp     ebx, ecx
0x6E901A: jb      short loc_6E8FE0
0x6E901C: pop     edi
0x6E901D: pop     esi
0x6E901E: pop     ebx
0x6E901F: mov     al, 1
0x6E9021: pop     ebp
0x6E9022: retn    4
