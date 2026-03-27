0x605F30: add     ecx, 1Ch
0x605F33: cmp     dword ptr [ecx+4], 0
0x605F37: jnz     short loc_605F41
0x605F39: cmp     dword ptr [ecx], 0
0x605F3C: jnz     short loc_605F41
0x605F3E: xor     eax, eax
0x605F40: retn
0x605F41: xor     eax, eax
0x605F43: test    ecx, ecx
0x605F45: jz      short locret_605F56
0x605F47: cmp     dword ptr [ecx], 0
0x605F4A: jz      short loc_605F4F
0x605F4C: add     eax, 1
0x605F4F: mov     ecx, [ecx+4]
0x605F52: test    ecx, ecx
0x605F54: jnz     short loc_605F47
0x605F56: retn
