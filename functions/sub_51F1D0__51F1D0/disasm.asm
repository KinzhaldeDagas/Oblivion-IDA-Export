0x51F1D0: push    esi
0x51F1D1: xor     esi, esi
0x51F1D3: xor     eax, eax
0x51F1D5: add     ecx, 3Ch ; '<'
0x51F1D8: jz      short loc_51F1FF
0x51F1DA: push    edi
0x51F1DB: mov     edi, [esp+8+arg_0]
0x51F1DF: nop
0x51F1E0: mov     edx, [ecx+4]
0x51F1E3: test    edx, edx
0x51F1E5: jnz     short loc_51F1EB
0x51F1E7: cmp     [ecx], edx
0x51F1E9: jz      short loc_51F1FE
0x51F1EB: test    eax, eax
0x51F1ED: jnz     short loc_51F1FE
0x51F1EF: cmp     esi, edi
0x51F1F1: jnz     short loc_51F1F5
0x51F1F3: mov     eax, [ecx]
0x51F1F5: mov     ecx, edx
0x51F1F7: add     esi, 1
0x51F1FA: test    ecx, ecx
0x51F1FC: jnz     short loc_51F1E0
0x51F1FE: pop     edi
0x51F1FF: pop     esi
0x51F200: retn    4
