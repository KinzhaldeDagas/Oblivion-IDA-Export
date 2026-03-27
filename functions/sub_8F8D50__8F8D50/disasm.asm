0x8F8D50: mov     ecx, [esp+arg_4]
0x8F8D54: xor     eax, eax
0x8F8D56: cmp     word ptr [ecx+eax*2], 0FFFFh
0x8F8D5C: jz      short loc_8F8D65
0x8F8D5E: inc     eax
0x8F8D5F: cmp     eax, 3
0x8F8D62: jl      short loc_8F8D56
0x8F8D64: retn
0x8F8D65: mov     dx, [esp+arg_8]
0x8F8D6A: mov     [ecx+eax*2], dx
0x8F8D6E: retn
