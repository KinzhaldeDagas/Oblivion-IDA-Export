0xA1BC90: push    esi
0xA1BC91: mov     esi, dword_B35F88
0xA1BC97: test    esi, esi
0xA1BC99: jz      short loc_A1BCB7
0xA1BC9B: lea     eax, [esi+4]
0xA1BC9E: push    eax; lpAddend
0xA1BC9F: call    ds:InterlockedDecrement
0xA1BCA5: test    eax, eax
0xA1BCA7: jnz     short loc_A1BCB7
0xA1BCA9: test    esi, esi
0xA1BCAB: jz      short loc_A1BCB7
0xA1BCAD: mov     edx, [esi]
0xA1BCAF: mov     eax, [edx]
0xA1BCB1: push    1
0xA1BCB3: mov     ecx, esi
0xA1BCB5: call    eax
0xA1BCB7: pop     esi
0xA1BCB8: retn
