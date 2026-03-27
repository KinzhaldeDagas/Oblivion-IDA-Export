0xA27400: push    esi
0xA27401: mov     esi, dword_B43114
0xA27407: test    esi, esi
0xA27409: jz      short loc_A27427
0xA2740B: lea     eax, [esi+4]
0xA2740E: push    eax; lpAddend
0xA2740F: call    ds:InterlockedDecrement
0xA27415: test    eax, eax
0xA27417: jnz     short loc_A27427
0xA27419: test    esi, esi
0xA2741B: jz      short loc_A27427
0xA2741D: mov     edx, [esi]
0xA2741F: mov     eax, [edx]
0xA27421: push    1
0xA27423: mov     ecx, esi
0xA27425: call    eax
0xA27427: pop     esi
0xA27428: retn
