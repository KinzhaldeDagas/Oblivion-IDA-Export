0x7C59E0: mov     eax, [ecx+0E0h]
0x7C59E6: test    eax, eax
0x7C59E8: jl      short loc_7C59FF
0x7C59EA: movzx   edx, word ptr [ecx+0B6h]
0x7C59F1: cmp     eax, edx
0x7C59F3: jge     short loc_7C59FF
0x7C59F5: mov     ecx, [ecx+0B0h]
0x7C59FB: mov     eax, [ecx+eax*4]
0x7C59FE: retn
0x7C59FF: xor     eax, eax
0x7C5A01: retn
