0x98D7E1: push    esi
0x98D7E2: push    edi
0x98D7E3: mov     eax, offset unk_AD6E0C
0x98D7E8: mov     edi, offset unk_AD6E0C
0x98D7ED: cmp     eax, edi
0x98D7EF: mov     esi, eax
0x98D7F1: jnb     short loc_98D802
0x98D7F3: mov     eax, [esi]
0x98D7F5: test    eax, eax
0x98D7F7: jz      short loc_98D7FB
0x98D7F9: call    eax
0x98D7FB: add     esi, 4
0x98D7FE: cmp     esi, edi
0x98D800: jb      short loc_98D7F3
0x98D802: pop     edi
0x98D803: pop     esi
0x98D804: retn
