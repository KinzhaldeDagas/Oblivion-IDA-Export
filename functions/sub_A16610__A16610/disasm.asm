0xA16610: push    esi
0xA16611: mov     esi, dword_B333E0
0xA16617: test    esi, esi
0xA16619: jz      short loc_A16637
0xA1661B: lea     eax, [esi+4]
0xA1661E: push    eax; lpAddend
0xA1661F: call    ds:InterlockedDecrement
0xA16625: test    eax, eax
0xA16627: jnz     short loc_A16637
0xA16629: test    esi, esi
0xA1662B: jz      short loc_A16637
0xA1662D: mov     edx, [esi]
0xA1662F: mov     eax, [edx]
0xA16631: push    1
0xA16633: mov     ecx, esi
0xA16635: call    eax
0xA16637: pop     esi
0xA16638: retn
