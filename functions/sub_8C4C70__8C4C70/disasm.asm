0x8C4C70: mov     ecx, [ecx+10h]
0x8C4C73: mov     eax, [esp+arg_0]
0x8C4C77: movzx   edx, word ptr [ecx+10h]
0x8C4C7B: shr     eax, 18h
0x8C4C7E: cmp     eax, edx
0x8C4C80: jl      short loc_8C4C87
0x8C4C82: xor     eax, eax
0x8C4C84: retn    4
0x8C4C87: mov     ecx, [ecx+1Ch]
0x8C4C8A: lea     eax, [eax+eax*2]
0x8C4C8D: mov     eax, [ecx+eax*4]
0x8C4C90: retn    4
