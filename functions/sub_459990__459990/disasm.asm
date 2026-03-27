0x459990: mov     eax, [ecx+78h]
0x459993: movzx   ecx, [esp+arg_0]
0x459998: cmp     ecx, [eax+0Ch]
0x45999B: jb      short loc_4599A2
0x45999D: xor     eax, eax
0x45999F: retn    4
0x4599A2: mov     eax, [eax+4]
0x4599A5: mov     eax, [eax+ecx*4]
0x4599A8: retn    4
