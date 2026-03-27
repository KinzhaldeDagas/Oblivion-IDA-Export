0x6E7A20: push    esi
0x6E7A21: push    edi
0x6E7A22: mov     edi, [esp+8+a2]
0x6E7A26: push    edi; a2
0x6E7A27: mov     esi, ecx
0x6E7A29: call    sub_700670
0x6E7A2E: test    al, al
0x6E7A30: jnz     short loc_6E7A37
0x6E7A32: pop     edi
0x6E7A33: pop     esi
0x6E7A34: retn    4
0x6E7A37: mov     eax, [edi+8]
0x6E7A3A: xor     ecx, ecx
0x6E7A3C: cmp     eax, [esi+8]
0x6E7A3F: pop     edi
0x6E7A40: setz    cl
0x6E7A43: mov     al, cl
0x6E7A45: pop     esi
0x6E7A46: retn    4
