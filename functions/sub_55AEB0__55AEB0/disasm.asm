0x55AEB0: mov     eax, [ecx+10h]
0x55AEB3: test    eax, eax
0x55AEB5: jz      short loc_55AEC6
0x55AEB7: mov     ecx, [esp+arg_0]
0x55AEBB: cmp     ecx, 0Fh
0x55AEBE: ja      short loc_55AEC6
0x55AEC0: mov     eax, [eax+ecx*4]
0x55AEC3: retn    4
0x55AEC6: xor     eax, eax
0x55AEC8: retn    4
