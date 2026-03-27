0xA27430: push    esi
0xA27431: mov     esi, dword_B430F4
0xA27437: test    esi, esi
0xA27439: jz      short loc_A27457
0xA2743B: lea     eax, [esi+4]
0xA2743E: push    eax; lpAddend
0xA2743F: call    ds:InterlockedDecrement
0xA27445: test    eax, eax
0xA27447: jnz     short loc_A27457
0xA27449: test    esi, esi
0xA2744B: jz      short loc_A27457
0xA2744D: mov     edx, [esi]
0xA2744F: mov     eax, [edx]
0xA27451: push    1
0xA27453: mov     ecx, esi
0xA27455: call    eax
0xA27457: pop     esi
0xA27458: retn
