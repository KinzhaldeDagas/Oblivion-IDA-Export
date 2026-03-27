0x5489E0: fild    [esp+arg_0]
0x5489E4: fmul    dword ptr ds:0B375D8h
0x5489EA: fstp    [esp+arg_0]
0x5489EE: fldz
0x5489F0: fld     [esp+arg_0]
0x5489F4: fcom    st(1)
0x5489F6: fnstsw  ax
0x5489F8: fstp    st(1)
0x5489FA: test    ah, 41h
0x5489FD: jz      short loc_548A07
0x5489FF: fstp    st
0x548A01: fild    dword ptr ds:0B375E0h
0x548A07: fstp    [esp+arg_0]
0x548A0B: fld     [esp+arg_0]
0x548A0F: retn
