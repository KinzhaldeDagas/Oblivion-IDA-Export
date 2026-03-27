0x8F8D20: mov     dx, [esp+arg_8]
0x8F8D25: mov     ecx, [esp+arg_4]
0x8F8D29: xor     eax, eax
0x8F8D2B: jmp     short loc_8F8D30
0x8F8D2D: align 10h
0x8F8D30: cmp     [ecx+eax*2], dx
0x8F8D34: jz      short loc_8F8D3D
0x8F8D36: inc     eax
0x8F8D37: cmp     eax, 3
0x8F8D3A: jl      short loc_8F8D30
0x8F8D3C: retn
0x8F8D3D: mov     word ptr [ecx+eax*2], 0FFFFh
0x8F8D43: retn
