0x68CE3E: lea     ecx, [edi+4]
0x68CE41: push    ecx; lpAddend
0x68CE42: call    ebp ; InterlockedDecrement
0x68CE44: test    eax, eax
0x68CE46: jnz     short loc_68CE56
0x68CE48: cmp     edi, ebx
0x68CE4A: jz      short loc_68CE56
0x68CE4C: mov     edx, [edi]
0x68CE4E: mov     eax, [edx]
0x68CE50: push    1
0x68CE52: mov     ecx, edi
0x68CE54: call    eax
0x68CE56: mov     [esi+44h], ebx
0x68CE59: mov     edi, [esi+40h]
0x68CE5C: cmp     edi, ebx
0x68CE5E: jz      short ??0AbsorbEffect@@QAE@XZ___Epilogue
