0xA27220: push    esi
0xA27221: mov     esi, dword_B430E0
0xA27227: test    esi, esi
0xA27229: jz      short loc_A27247
0xA2722B: lea     eax, [esi+4]
0xA2722E: push    eax; lpAddend
0xA2722F: call    ds:InterlockedDecrement
0xA27235: test    eax, eax
0xA27237: jnz     short loc_A27247
0xA27239: test    esi, esi
0xA2723B: jz      short loc_A27247
0xA2723D: mov     edx, [esi]
0xA2723F: mov     eax, [edx]
0xA27241: push    1
0xA27243: mov     ecx, esi
0xA27245: call    eax
0xA27247: pop     esi
0xA27248: retn
