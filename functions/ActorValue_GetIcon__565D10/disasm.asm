0x565D10: mov     eax, [esp+arg_0]
0x565D14: cmp     eax, 20h ; ' '
0x565D17: ja      short loc_565D27
0x565D19: mov     eax, ds:0B12880h[eax*4]
0x565D20: test    eax, eax
0x565D22: jz      short loc_565D27
0x565D24: mov     eax, [eax]
0x565D26: retn
0x565D27: xor     eax, eax
0x565D29: retn
