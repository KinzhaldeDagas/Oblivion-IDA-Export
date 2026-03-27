0x6D18F0: push    esi
0x6D18F1: push    edi
0x6D18F2: mov     edi, [esp+8+arg_0]
0x6D18F6: push    edi
0x6D18F7: mov     esi, ecx
0x6D18F9: call    sub_6EC5C0
0x6D18FE: test    al, al
0x6D1900: jnz     short loc_6D1907
0x6D1902: pop     edi
0x6D1903: pop     esi
0x6D1904: retn    4
0x6D1907: mov     eax, [esi+54h]
0x6D190A: cmp     eax, [edi+54h]
0x6D190D: pop     edi
0x6D190E: setz    al
0x6D1911: pop     esi
0x6D1912: retn    4
