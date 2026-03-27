0x7ED160: mov     eax, [ecx+70h]
0x7ED163: test    eax, eax
0x7ED165: mov     [ecx+7Ch], eax
0x7ED168: jnz     short loc_7ED16B
0x7ED16A: retn
0x7ED16B: mov     edx, [eax]
0x7ED16D: mov     [ecx+7Ch], edx
0x7ED170: mov     eax, [eax+8]
0x7ED173: retn
