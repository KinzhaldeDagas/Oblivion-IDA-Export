0xA27460: push    esi
0xA27461: mov     esi, dword_B43124
0xA27467: test    esi, esi
0xA27469: jz      short loc_A27487
0xA2746B: lea     eax, [esi+4]
0xA2746E: push    eax; lpAddend
0xA2746F: call    ds:InterlockedDecrement
0xA27475: test    eax, eax
0xA27477: jnz     short loc_A27487
0xA27479: test    esi, esi
0xA2747B: jz      short loc_A27487
0xA2747D: mov     edx, [esi]
0xA2747F: mov     eax, [edx]
0xA27481: push    1
0xA27483: mov     ecx, esi
0xA27485: call    eax
0xA27487: pop     esi
0xA27488: retn
