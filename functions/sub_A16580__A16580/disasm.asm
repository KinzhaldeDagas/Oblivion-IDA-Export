0xA16580: push    esi
0xA16581: mov     esi, g_Interface3DScenegraph
0xA16587: test    esi, esi
0xA16589: jz      short loc_A165A7
0xA1658B: lea     eax, [esi+4]
0xA1658E: push    eax; lpAddend
0xA1658F: call    ds:InterlockedDecrement
0xA16595: test    eax, eax
0xA16597: jnz     short loc_A165A7
0xA16599: test    esi, esi
0xA1659B: jz      short loc_A165A7
0xA1659D: mov     edx, [esi]
0xA1659F: mov     eax, [edx]
0xA165A1: push    1
0xA165A3: mov     ecx, esi
0xA165A5: call    eax
0xA165A7: pop     esi
0xA165A8: retn
