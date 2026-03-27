0x446B20: mov     eax, [esp+arg_0]
0x446B24: test    eax, eax
0x446B26: jl      short loc_446B39
0x446B28: cmp     eax, 0FEh ; 'þ'
0x446B2D: ja      short loc_446B39
0x446B2F: mov     eax, [ecx+eax*4+8D4h]
0x446B36: retn    4
0x446B39: xor     eax, eax
0x446B3B: retn    4
