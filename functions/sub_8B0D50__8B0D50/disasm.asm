0x8B0D50: mov     eax, [esp+arg_0]
0x8B0D54: mov     edx, [ecx+8]
0x8B0D57: inc     eax
0x8B0D58: cmp     eax, edx
0x8B0D5A: jg      short locret_8B0D6E
0x8B0D5C: mov     ecx, [ecx]
0x8B0D5E: lea     ecx, [ecx+eax*4]
0x8B0D61: cmp     dword ptr [ecx], 0
0x8B0D64: jnz     short locret_8B0D6E
0x8B0D66: inc     eax
0x8B0D67: add     ecx, 4
0x8B0D6A: cmp     eax, edx
0x8B0D6C: jle     short loc_8B0D61
0x8B0D6E: retn    4
