0x68CE60: lea     ecx, [edi+4]
0x68CE63: push    ecx; lpAddend
0x68CE64: call    ebp ; InterlockedDecrement
0x68CE66: test    eax, eax
0x68CE68: jnz     short loc_68CE78
0x68CE6A: cmp     edi, ebx
0x68CE6C: jz      short loc_68CE78
0x68CE6E: mov     edx, [edi]
0x68CE70: mov     eax, [edx]
0x68CE72: push    1
0x68CE74: mov     ecx, edi
0x68CE76: call    eax
0x68CE78: mov     [esi+40h], ebx
