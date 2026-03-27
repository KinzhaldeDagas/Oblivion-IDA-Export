0xA27700: push    esi
0xA27701: mov     esi, dword_B45FA8
0xA27707: test    esi, esi
0xA27709: jz      short loc_A27727
0xA2770B: lea     eax, [esi+4]
0xA2770E: push    eax; lpAddend
0xA2770F: call    ds:InterlockedDecrement
0xA27715: test    eax, eax
0xA27717: jnz     short loc_A27727
0xA27719: test    esi, esi
0xA2771B: jz      short loc_A27727
0xA2771D: mov     edx, [esi]
0xA2771F: mov     eax, [edx]
0xA27721: push    1
0xA27723: mov     ecx, esi
0xA27725: call    eax
0xA27727: pop     esi
0xA27728: retn
