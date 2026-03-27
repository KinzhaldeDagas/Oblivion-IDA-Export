0x55AE70: mov     eax, [ecx+8]
0x55AE73: test    eax, eax
0x55AE75: jz      short loc_55AE86
0x55AE77: mov     ecx, [esp+arg_0]
0x55AE7B: cmp     ecx, 0Ch
0x55AE7E: ja      short loc_55AE86
0x55AE80: mov     eax, [eax+ecx*4]
0x55AE83: retn    4
0x55AE86: xor     eax, eax
0x55AE88: retn    4
