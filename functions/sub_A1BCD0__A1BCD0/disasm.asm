0xA1BCD0: push    esi
0xA1BCD1: mov     esi, dword_B35F8C
0xA1BCD7: test    esi, esi
0xA1BCD9: jz      short loc_A1BCF7
0xA1BCDB: lea     eax, [esi+4]
0xA1BCDE: push    eax; lpAddend
0xA1BCDF: call    ds:InterlockedDecrement
0xA1BCE5: test    eax, eax
0xA1BCE7: jnz     short loc_A1BCF7
0xA1BCE9: test    esi, esi
0xA1BCEB: jz      short loc_A1BCF7
0xA1BCED: mov     edx, [esi]
0xA1BCEF: mov     eax, [edx]
0xA1BCF1: push    1
0xA1BCF3: mov     ecx, esi
0xA1BCF5: call    eax
0xA1BCF7: pop     esi
0xA1BCF8: retn
