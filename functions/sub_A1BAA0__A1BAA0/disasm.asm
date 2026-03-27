0xA1BAA0: push    esi
0xA1BAA1: mov     esi, bhkWorldM
0xA1BAA7: test    esi, esi
0xA1BAA9: jz      short loc_A1BAC7
0xA1BAAB: lea     eax, [esi+4]
0xA1BAAE: push    eax; lpAddend
0xA1BAAF: call    ds:InterlockedDecrement
0xA1BAB5: test    eax, eax
0xA1BAB7: jnz     short loc_A1BAC7
0xA1BAB9: test    esi, esi
0xA1BABB: jz      short loc_A1BAC7
0xA1BABD: mov     edx, [esi]
0xA1BABF: mov     eax, [edx]
0xA1BAC1: push    1
0xA1BAC3: mov     ecx, esi
0xA1BAC5: call    eax
0xA1BAC7: pop     esi
0xA1BAC8: retn
