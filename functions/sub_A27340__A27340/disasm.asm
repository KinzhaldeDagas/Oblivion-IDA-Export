0xA27340: push    esi
0xA27341: mov     esi, dword_B43110
0xA27347: test    esi, esi
0xA27349: jz      short loc_A27367
0xA2734B: lea     eax, [esi+4]
0xA2734E: push    eax; lpAddend
0xA2734F: call    ds:InterlockedDecrement
0xA27355: test    eax, eax
0xA27357: jnz     short loc_A27367
0xA27359: test    esi, esi
0xA2735B: jz      short loc_A27367
0xA2735D: mov     edx, [esi]
0xA2735F: mov     eax, [edx]
0xA27361: push    1
0xA27363: mov     ecx, esi
0xA27365: call    eax
0xA27367: pop     esi
0xA27368: retn
