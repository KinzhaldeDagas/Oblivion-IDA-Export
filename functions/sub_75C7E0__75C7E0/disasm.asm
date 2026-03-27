0x75C7E0: push    esi
0x75C7E1: push    edi
0x75C7E2: mov     edi, [esp+8+arg_0]
0x75C7E6: push    edi
0x75C7E7: mov     esi, ecx
0x75C7E9: call    sub_75E890
0x75C7EE: test    al, al
0x75C7F0: jnz     short loc_75C7F7
0x75C7F2: pop     edi
0x75C7F3: pop     esi
0x75C7F4: retn    4
0x75C7F7: add     esi, 40h ; '@'
0x75C7FA: push    esi
0x75C7FB: lea     ecx, [edi+40h]
0x75C7FE: call    sub_8AA390
0x75C803: test    al, al
0x75C805: pop     edi
0x75C806: setz    al
0x75C809: pop     esi
0x75C80A: retn    4
