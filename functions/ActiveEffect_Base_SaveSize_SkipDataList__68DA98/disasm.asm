0x68DA98: mov     ecx, ds:0B33B00h
0x68DA9E: mov     al, [ecx+7Ch]
0x68DAA1: cmp     al, 48h ; 'H'
0x68DAA3: pop     edi
0x68DAA4: jb      short ActiveEffect_Base_SaveSize___LowbitUnk14
0x68DAA6: add     [esp-4+arg_0], 4
0x68DAAA: mov     ax, word ptr [esp-4+arg_0]
0x68DAAE: pop     ecx
0x68DAAF: retn    4
