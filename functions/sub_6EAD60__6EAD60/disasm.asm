0x6EAD60: push    esi
0x6EAD61: push    edi
0x6EAD62: mov     edi, [esp+8+arg_0]
0x6EAD66: push    edi
0x6EAD67: mov     esi, ecx
0x6EAD69: call    sub_6CCD10
0x6EAD6E: test    al, al
0x6EAD70: jnz     short loc_6EAD77
0x6EAD72: pop     edi
0x6EAD73: pop     esi
0x6EAD74: retn    4
0x6EAD77: add     edi, 30h ; '0'
0x6EAD7A: push    edi
0x6EAD7B: lea     ecx, [esi+30h]
0x6EAD7E: call    sub_8AA390
0x6EAD83: test    al, al
0x6EAD85: pop     edi
0x6EAD86: setz    al
0x6EAD89: pop     esi
0x6EAD8A: retn    4
