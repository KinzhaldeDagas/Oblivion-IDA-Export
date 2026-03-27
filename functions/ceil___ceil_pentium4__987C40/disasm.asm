0x987C40: movq    xmm0, [esp+arg_0]
0x987C46: movapd  xmm2, ds:xmmword_AA3FA0
0x987C4E: movapd  xmm1, xmm0
0x987C52: movapd  xmm7, xmm0
0x987C56: psrlq   xmm0, 34h ; '4'
0x987C5B: movd    eax, xmm0
0x987C5F: andpd   xmm0, ds:xmmword_AA3FC0
0x987C67: psubd   xmm2, xmm0
0x987C6B: psrlq   xmm1, xmm2
0x987C6F: test    eax, 800h
0x987C74: jz      short _ceil___positive
0x987C76: cmp     eax, 0BFFh
0x987C7B: jl      short _ceil___ret_zero_1
0x987C7D: psllq   xmm1, xmm2
0x987C81: cmp     eax, 0C32h
0x987C86: jg      short _ceil___return_x_0
0x987C88: movq    [esp+arg_0], xmm1
0x987C8E: fld     [esp+arg_0]
0x987C92: retn
