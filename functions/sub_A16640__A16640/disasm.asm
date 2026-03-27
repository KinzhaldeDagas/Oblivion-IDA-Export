0xA16640: push    esi
0xA16641: mov     esi, dword_B333E4
0xA16647: test    esi, esi
0xA16649: jz      short loc_A16667
0xA1664B: lea     eax, [esi+4]
0xA1664E: push    eax; lpAddend
0xA1664F: call    ds:InterlockedDecrement
0xA16655: test    eax, eax
0xA16657: jnz     short loc_A16667
0xA16659: test    esi, esi
0xA1665B: jz      short loc_A16667
0xA1665D: mov     edx, [esi]
0xA1665F: mov     eax, [edx]
0xA16661: push    1
0xA16663: mov     ecx, esi
0xA16665: call    eax
0xA16667: pop     esi
0xA16668: retn
