0x9530E0: mov     eax, [esp+arg_4]
0x9530E4: sub     eax, 0
0x9530E7: jz      short loc_953103
0x9530E9: dec     eax
0x9530EA: jz      short loc_9530F8
0x9530EC: dec     eax
0x9530ED: jnz     short loc_95310A
0x9530EF: mov     eax, [ecx+0Ch]
0x9530F2: sub     eax, [esp+arg_0]
0x9530F6: jmp     short loc_953107
0x9530F8: mov     edx, [esp+arg_0]
0x9530FC: mov     eax, [ecx+8]
0x9530FF: add     eax, edx
0x953101: jmp     short loc_953107
0x953103: mov     eax, [esp+arg_0]
0x953107: mov     [ecx+8], eax
0x95310A: mov     eax, [ecx+8]
0x95310D: mov     edx, [ecx+0Ch]
0x953110: cmp     eax, edx
0x953112: jle     short loc_95311C
0x953114: mov     [ecx+0Ch], eax
0x953117: xor     eax, eax
0x953119: retn    8
0x95311C: mov     [ecx+0Ch], edx
0x95311F: xor     eax, eax
0x953121: retn    8
