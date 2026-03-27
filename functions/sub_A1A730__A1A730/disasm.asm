0xA1A730: push    esi
0xA1A731: mov     esi, dword_B35410
0xA1A737: test    esi, esi
0xA1A739: jz      short loc_A1A757
0xA1A73B: lea     eax, [esi+4]
0xA1A73E: push    eax; lpAddend
0xA1A73F: call    ds:InterlockedDecrement
0xA1A745: test    eax, eax
0xA1A747: jnz     short loc_A1A757
0xA1A749: test    esi, esi
0xA1A74B: jz      short loc_A1A757
0xA1A74D: mov     edx, [esi]
0xA1A74F: mov     eax, [edx]
0xA1A751: push    1
0xA1A753: mov     ecx, esi
0xA1A755: call    eax
0xA1A757: pop     esi
0xA1A758: retn
