0xA27A80: push    esi
0xA27A81: mov     esi, dword_BA7B88
0xA27A87: test    esi, esi
0xA27A89: jz      short loc_A27AA7
0xA27A8B: lea     eax, [esi+4]
0xA27A8E: push    eax; lpAddend
0xA27A8F: call    ds:InterlockedDecrement
0xA27A95: test    eax, eax
0xA27A97: jnz     short loc_A27AA7
0xA27A99: test    esi, esi
0xA27A9B: jz      short loc_A27AA7
0xA27A9D: mov     edx, [esi]
0xA27A9F: mov     eax, [edx]
0xA27AA1: push    1
0xA27AA3: mov     ecx, esi
0xA27AA5: call    eax
0xA27AA7: pop     esi
0xA27AA8: retn
