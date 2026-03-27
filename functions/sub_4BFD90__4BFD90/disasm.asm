0x4BFD90: push    ecx
0x4BFD91: mov     eax, [ecx+2Ch]
0x4BFD94: test    eax, eax
0x4BFD96: push    esi
0x4BFD97: mov     esi, [esp+8+arg_0]
0x4BFD9B: mov     [esp+8+var_4], 0
0x4BFDA3: mov     [esi], eax
0x4BFDA5: jz      short loc_4BFDB1
0x4BFDA7: add     eax, 4
0x4BFDAA: push    eax; lpAddend
0x4BFDAB: call    dword ptr ds:0A28078h
0x4BFDB1: mov     eax, esi
0x4BFDB3: pop     esi
0x4BFDB4: pop     ecx
0x4BFDB5: retn    4
