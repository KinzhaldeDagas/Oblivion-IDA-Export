0x68CDFA: lea     eax, [edi+4]
0x68CDFD: push    eax; lpAddend
0x68CDFE: call    ebp ; InterlockedDecrement
0x68CE00: test    eax, eax
0x68CE02: jnz     short loc_68CE12
0x68CE04: cmp     edi, ebx
0x68CE06: jz      short loc_68CE12
0x68CE08: mov     edx, [edi]
0x68CE0A: mov     eax, [edx]
0x68CE0C: push    1
0x68CE0E: mov     ecx, edi
0x68CE10: call    eax
0x68CE12: mov     [esi+48h], ebx
0x68CE15: mov     edi, [esi+3Ch]
0x68CE18: cmp     edi, ebx
0x68CE1A: jz      short loc_68CE37
