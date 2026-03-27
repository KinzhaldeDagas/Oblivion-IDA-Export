0x6E0A20: push    esi
0x6E0A21: push    edi
0x6E0A22: mov     edi, [esp+8+arg_0]
0x6E0A26: push    edi
0x6E0A27: mov     esi, ecx
0x6E0A29: call    sub_6EC5C0
0x6E0A2E: test    al, al
0x6E0A30: jnz     short loc_6E0A37
0x6E0A32: pop     edi
0x6E0A33: pop     esi
0x6E0A34: retn    4
0x6E0A37: mov     al, [edi+40h]
0x6E0A3A: not     al
0x6E0A3C: xor     al, [esi+40h]
0x6E0A3F: pop     edi
0x6E0A40: and     al, 1
0x6E0A42: pop     esi
0x6E0A43: retn    4
