0x55AE90: mov     eax, [ecx+0Ch]
0x55AE93: test    eax, eax
0x55AE95: jz      short loc_55AEA6
0x55AE97: mov     ecx, [esp+arg_0]
0x55AE9B: cmp     ecx, 10h
0x55AE9E: ja      short loc_55AEA6
0x55AEA0: mov     eax, [eax+ecx*4]
0x55AEA3: retn    4
0x55AEA6: xor     eax, eax
0x55AEA8: retn    4
