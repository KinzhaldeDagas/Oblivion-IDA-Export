0x985AC2: movq    xmm0, [esp+arg_0]
0x985AC8: psllq   xmm1, xmm2
0x985ACC: movapd  xmm3, xmm0
0x985AD0: cmpltpd xmm0, xmm1
0x985AD5: cmp     eax, 0BFFh
0x985ADA: jl      short _floor___ret_neg_one
0x985ADC: cmp     eax, 0C32h
0x985AE1: jg      short _floor___return_x
0x985AE3: andpd   xmm0, xmmword ptr ds:0AA3F40h
0x985AEB: subsd   xmm1, xmm0
0x985AEF: movq    [esp+arg_0], xmm1
0x985AF5: fld     [esp+arg_0]
0x985AF9: retn
