0x5489A0: push    ecx
0x5489A1: fldz
0x5489A3: fst     [esp+4+var_4]
0x5489A6: fld     [esp+4+arg_0]
0x5489AA: fucom   st(1)
0x5489AC: fnstsw  ax
0x5489AE: fstp    st(1)
0x5489B0: test    ah, 44h
0x5489B3: jnp     short loc_5489D5
0x5489B5: fld     dword ptr ds:0B37A60h
0x5489BB: fmul    [esp+4+arg_4]
0x5489BF: faddp   st(1), st
0x5489C1: fld     dword ptr ds:0B37A68h
0x5489C7: fmul    [esp+4+arg_8]
0x5489CB: faddp   st(1), st
0x5489CD: fstp    [esp+4+var_4]
0x5489D0: fld     [esp+4+var_4]
0x5489D3: pop     ecx
0x5489D4: retn
0x5489D5: fstp    st
0x5489D7: fld     [esp+4+var_4]
0x5489DA: pop     ecx
0x5489DB: retn
