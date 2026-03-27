0x985A40: movq    xmm0, [esp+arg_0]
0x985A46: movapd  xmm2, xmmword ptr ds:0AA3F50h
0x985A4E: movapd  xmm1, xmm0
0x985A52: movapd  xmm7, xmm0
0x985A56: psrlq   xmm0, 34h ; '4'
0x985A5B: movd    eax, xmm0
0x985A5F: andpd   xmm0, xmmword ptr ds:0AA3F80h
0x985A67: psubd   xmm2, xmm0
0x985A6B: psrlq   xmm1, xmm2
0x985A6F: test    eax, 800h
0x985A74: jnz     short _floor___negat
0x985A76: cmp     eax, 3FFh
0x985A7B: jl      short _floor___ret_zero
0x985A7D: psllq   xmm1, xmm2
0x985A81: cmp     eax, 432h
0x985A86: jg      short _floor___return_x
0x985A88: movq    [esp+arg_0], xmm1
0x985A8E: fld     [esp+arg_0]
0x985A92: retn
