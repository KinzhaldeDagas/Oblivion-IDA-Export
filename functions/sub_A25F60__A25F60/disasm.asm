0xA25F60: push    esi
0xA25F61: mov     esi, dword_B3C0A0
0xA25F67: test    esi, esi
0xA25F69: jz      short loc_A25F87
0xA25F6B: lea     eax, [esi+4]
0xA25F6E: push    eax; lpAddend
0xA25F6F: call    ds:InterlockedDecrement
0xA25F75: test    eax, eax
0xA25F77: jnz     short loc_A25F87
0xA25F79: test    esi, esi
0xA25F7B: jz      short loc_A25F87
0xA25F7D: mov     edx, [esi]
0xA25F7F: mov     eax, [edx]
0xA25F81: push    1
0xA25F83: mov     ecx, esi
0xA25F85: call    eax
0xA25F87: pop     esi
0xA25F88: retn
