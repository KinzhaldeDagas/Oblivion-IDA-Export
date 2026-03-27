0xA1A700: push    esi
0xA1A701: mov     esi, dword_B35300
0xA1A707: test    esi, esi
0xA1A709: jz      short loc_A1A727
0xA1A70B: lea     eax, [esi+4]
0xA1A70E: push    eax; lpAddend
0xA1A70F: call    ds:InterlockedDecrement
0xA1A715: test    eax, eax
0xA1A717: jnz     short loc_A1A727
0xA1A719: test    esi, esi
0xA1A71B: jz      short loc_A1A727
0xA1A71D: mov     edx, [esi]
0xA1A71F: mov     eax, [edx]
0xA1A721: push    1
0xA1A723: mov     ecx, esi
0xA1A725: call    eax
0xA1A727: pop     esi
0xA1A728: retn
