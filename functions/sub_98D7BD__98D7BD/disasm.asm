0x98D7BD: push    esi
0x98D7BE: push    edi
0x98D7BF: mov     eax, offset unk_AD6E04
0x98D7C4: mov     edi, offset unk_AD6E04
0x98D7C9: cmp     eax, edi
0x98D7CB: mov     esi, eax
0x98D7CD: jnb     short loc_98D7DE
0x98D7CF: mov     eax, [esi]
0x98D7D1: test    eax, eax
0x98D7D3: jz      short loc_98D7D7
0x98D7D5: call    eax
0x98D7D7: add     esi, 4
0x98D7DA: cmp     esi, edi
0x98D7DC: jb      short loc_98D7CF
0x98D7DE: pop     edi
0x98D7DF: pop     esi
0x98D7E0: retn
