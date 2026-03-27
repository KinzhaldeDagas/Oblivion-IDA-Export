0xA272B0: push    esi
0xA272B1: mov     esi, dword_B4311C
0xA272B7: test    esi, esi
0xA272B9: jz      short loc_A272D7
0xA272BB: lea     eax, [esi+4]
0xA272BE: push    eax; lpAddend
0xA272BF: call    ds:InterlockedDecrement
0xA272C5: test    eax, eax
0xA272C7: jnz     short loc_A272D7
0xA272C9: test    esi, esi
0xA272CB: jz      short loc_A272D7
0xA272CD: mov     edx, [esi]
0xA272CF: mov     eax, [edx]
0xA272D1: push    1
0xA272D3: mov     ecx, esi
0xA272D5: call    eax
0xA272D7: pop     esi
0xA272D8: retn
