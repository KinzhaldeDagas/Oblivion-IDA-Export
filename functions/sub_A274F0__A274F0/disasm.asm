0xA274F0: push    esi
0xA274F1: mov     esi, dword_B430FC
0xA274F7: test    esi, esi
0xA274F9: jz      short loc_A27517
0xA274FB: lea     eax, [esi+4]
0xA274FE: push    eax; lpAddend
0xA274FF: call    ds:InterlockedDecrement
0xA27505: test    eax, eax
0xA27507: jnz     short loc_A27517
0xA27509: test    esi, esi
0xA2750B: jz      short loc_A27517
0xA2750D: mov     edx, [esi]
0xA2750F: mov     eax, [edx]
0xA27511: push    1
0xA27513: mov     ecx, esi
0xA27515: call    eax
0xA27517: pop     esi
0xA27518: retn
