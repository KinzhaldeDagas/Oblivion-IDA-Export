0x401050: push    esi
0x401051: mov     esi, ecx
0x401053: lea     eax, [esi+4]
0x401056: push    eax; lpAddend
0x401057: call    ds:InterlockedDecrement
0x40105D: test    eax, eax
0x40105F: jnz     short loc_40106F
0x401061: test    esi, esi
0x401063: jz      short loc_40106F
0x401065: mov     edx, [esi]
0x401067: mov     eax, [edx]
0x401069: push    1
0x40106B: mov     ecx, esi
0x40106D: call    eax
0x40106F: pop     esi
0x401070: retn
