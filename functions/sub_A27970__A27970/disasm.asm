0xA27970: push    esi
0xA27971: mov     esi, dword_B47604
0xA27977: test    esi, esi
0xA27979: jz      short loc_A27997
0xA2797B: lea     eax, [esi+4]
0xA2797E: push    eax; lpAddend
0xA2797F: call    ds:InterlockedDecrement
0xA27985: test    eax, eax
0xA27987: jnz     short loc_A27997
0xA27989: test    esi, esi
0xA2798B: jz      short loc_A27997
0xA2798D: mov     edx, [esi]
0xA2798F: mov     eax, [edx]
0xA27991: push    1
0xA27993: mov     ecx, esi
0xA27995: call    eax
0xA27997: pop     esi
0xA27998: retn
