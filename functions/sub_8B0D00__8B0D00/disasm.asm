0x8B0D00: mov     edx, [ecx+8]
0x8B0D03: xor     eax, eax
0x8B0D05: test    edx, edx
0x8B0D07: jl      short locret_8B0D1D
0x8B0D09: mov     ecx, [ecx]
0x8B0D0B: jmp     short loc_8B0D10
0x8B0D0D: align 10h
0x8B0D10: cmp     dword ptr [ecx], 0
0x8B0D13: jnz     short locret_8B0D1D
0x8B0D15: inc     eax
0x8B0D16: add     ecx, 4
0x8B0D19: cmp     eax, edx
0x8B0D1B: jle     short loc_8B0D10
0x8B0D1D: retn
