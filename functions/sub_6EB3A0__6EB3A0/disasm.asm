0x6EB3A0: push    esi
0x6EB3A1: push    edi
0x6EB3A2: mov     edi, [esp+8+arg_0]
0x6EB3A6: push    edi
0x6EB3A7: mov     esi, ecx
0x6EB3A9: call    sub_6CCD10
0x6EB3AE: test    al, al
0x6EB3B0: jnz     short loc_6EB3B7
0x6EB3B2: pop     edi
0x6EB3B3: pop     esi
0x6EB3B4: retn    4
0x6EB3B7: add     edi, 30h ; '0'
0x6EB3BA: push    edi
0x6EB3BB: lea     ecx, [esi+30h]
0x6EB3BE: call    sub_632310
0x6EB3C3: test    al, al
0x6EB3C5: pop     edi
0x6EB3C6: setz    al
0x6EB3C9: pop     esi
0x6EB3CA: retn    4
