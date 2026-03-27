0x987CC2: movq    xmm0, [esp+arg_0]
0x987CC8: psllq   xmm1, xmm2
0x987CCC: movapd  xmm3, xmm0
0x987CD0: cmpnlepd xmm0, xmm1
0x987CD5: cmp     eax, 3FFh
0x987CDA: jl      short _ceil___ret_one
0x987CDC: cmp     eax, 432h
0x987CE1: jg      short _ceil___return_x_0
0x987CE3: andpd   xmm0, ds:xmmword_AA3F90
0x987CEB: addsd   xmm1, xmm0
0x987CEF: movq    [esp+arg_0], xmm1
0x987CF5: fld     [esp+arg_0]
0x987CF9: retn
