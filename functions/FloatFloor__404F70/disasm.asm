0x404F70: fld     [esp+arg_0]
0x404F74: fld     st
0x404F76: call    Double_To_SInt32
0x404F7B: mov     [esp+arg_0], eax
0x404F7F: fild    [esp+arg_0]
0x404F83: fstp    [esp+arg_0]
0x404F87: fld     [esp+arg_0]
0x404F8B: fld     st
0x404F8D: fsubp   st(2), st
0x404F8F: fxch    st(1)
0x404F91: fcomp   ds:dbl_A2FC68
0x404F97: fnstsw  ax
0x404F99: test    ah, 1
0x404F9C: jz      short loc_404FA4
0x404F9E: fsub    ds:dbl_A2F928
0x404FA4: fstp    [esp+arg_0]
0x404FA8: fld     [esp+arg_0]
0x404FAC: retn
