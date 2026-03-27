0x68CE1C: lea     ecx, [edi+4]
0x68CE1F: push    ecx; lpAddend
0x68CE20: call    ebp ; InterlockedDecrement
0x68CE22: test    eax, eax
0x68CE24: jnz     short loc_68CE34
0x68CE26: cmp     edi, ebx
0x68CE28: jz      short loc_68CE34
0x68CE2A: mov     edx, [edi]
0x68CE2C: mov     eax, [edx]
0x68CE2E: push    1
0x68CE30: mov     ecx, edi
0x68CE32: call    eax
0x68CE34: mov     [esi+3Ch], ebx
0x68CE37: mov     edi, [esi+44h]
0x68CE3A: cmp     edi, ebx
0x68CE3C: jz      short loc_68CE59
