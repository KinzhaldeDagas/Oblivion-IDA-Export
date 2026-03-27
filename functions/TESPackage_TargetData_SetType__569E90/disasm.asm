0x569E90: movzx   edx, byte ptr [ecx]
0x569E93: mov     eax, [esp+arg_0]
0x569E97: cmp     edx, eax
0x569E99: jz      short locret_569EB3
0x569E9B: mov     [ecx], al
0x569E9D: movzx   eax, al
0x569EA0: xor     edx, edx
0x569EA2: sub     eax, edx
0x569EA4: jz      short loc_569EB0
0x569EA6: sub     eax, 1
0x569EA9: jz      short loc_569EB0
0x569EAB: sub     eax, 1
0x569EAE: jnz     short locret_569EB3
0x569EB0: mov     [ecx+4], edx
0x569EB3: retn    4
