0x799F10: mov     eax, [ecx+4]
0x799F13: test    eax, eax
0x799F15: jnz     short loc_799F18
0x799F17: retn
0x799F18: mov     ecx, [ecx+8]
0x799F1B: sub     ecx, eax
0x799F1D: mov     eax, 2AAAAAABh
0x799F22: imul    ecx
0x799F24: sar     edx, 3
0x799F27: mov     eax, edx
0x799F29: shr     eax, 1Fh
0x799F2C: add     eax, edx
0x799F2E: retn
