0xA279A0: push    esi
0xA279A1: mov     esi, dword_B47608
0xA279A7: test    esi, esi
0xA279A9: jz      short loc_A279C7
0xA279AB: lea     eax, [esi+4]
0xA279AE: push    eax; lpAddend
0xA279AF: call    ds:InterlockedDecrement
0xA279B5: test    eax, eax
0xA279B7: jnz     short loc_A279C7
0xA279B9: test    esi, esi
0xA279BB: jz      short loc_A279C7
0xA279BD: mov     edx, [esi]
0xA279BF: mov     eax, [edx]
0xA279C1: push    1
0xA279C3: mov     ecx, esi
0xA279C5: call    eax
0xA279C7: pop     esi
0xA279C8: retn
