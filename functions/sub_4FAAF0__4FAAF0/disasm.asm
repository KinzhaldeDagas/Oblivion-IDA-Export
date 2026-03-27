0x4FAAF0: mov     eax, ds:0B33A98h
0x4FAAF5: test    eax, eax
0x4FAAF7: jz      short locret_4FAB19
0x4FAAF9: add     eax, 64h ; 'd'
0x4FAAFC: jz      short locret_4FAB19
0x4FAAFE: cmp     dword ptr [eax+4], 0
0x4FAB02: jnz     short loc_4FAB09
0x4FAB04: cmp     dword ptr [eax], 0
0x4FAB07: jz      short locret_4FAB19
0x4FAB09: fldz
0x4FAB0B: mov     ecx, [eax]
0x4FAB0D: mov     eax, [eax+4]
0x4FAB10: fst     dword ptr [ecx+34h]
0x4FAB13: test    eax, eax
0x4FAB15: jnz     short loc_4FAB0B
0x4FAB17: fstp    st
0x4FAB19: retn
