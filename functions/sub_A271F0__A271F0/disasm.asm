0xA271F0: push    esi
0xA271F1: mov     esi, dword_B430F0
0xA271F7: test    esi, esi
0xA271F9: jz      short loc_A27217
0xA271FB: lea     eax, [esi+4]
0xA271FE: push    eax; lpAddend
0xA271FF: call    ds:InterlockedDecrement
0xA27205: test    eax, eax
0xA27207: jnz     short loc_A27217
0xA27209: test    esi, esi
0xA2720B: jz      short loc_A27217
0xA2720D: mov     edx, [esi]
0xA2720F: mov     eax, [edx]
0xA27211: push    1
0xA27213: mov     ecx, esi
0xA27215: call    eax
0xA27217: pop     esi
0xA27218: retn
