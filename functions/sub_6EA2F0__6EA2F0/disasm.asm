0x6EA2F0: push    esi
0x6EA2F1: push    edi
0x6EA2F2: mov     edi, [esp+8+arg_0]
0x6EA2F6: push    edi
0x6EA2F7: mov     esi, ecx
0x6EA2F9: call    sub_6CCD10
0x6EA2FE: test    al, al
0x6EA300: jnz     short loc_6EA307
0x6EA302: pop     edi
0x6EA303: pop     esi
0x6EA304: retn    4
0x6EA307: add     edi, 30h ; '0'
0x6EA30A: push    edi
0x6EA30B: lea     ecx, [esi+30h]
0x6EA30E: call    sub_6D5A40
0x6EA313: test    al, al
0x6EA315: pop     edi
0x6EA316: setz    al
0x6EA319: pop     esi
0x6EA31A: retn    4
