0x65BC70: cmp     [esp+arg_8], 0
0x65BC75: fld     [esp+arg_0]
0x65BC79: fadd    [esp+arg_4]
0x65BC7D: fstp    [esp+arg_0]
0x65BC81: jnz     short loc_65BC98
0x65BC83: fldz
0x65BC85: fld     [esp+arg_0]
0x65BC89: fcom    st(1)
0x65BC8B: fnstsw  ax
0x65BC8D: test    ah, 41h
0x65BC90: jnz     short loc_65BC9D
0x65BC92: fstp    st
0x65BC94: fstp    [esp+arg_0]
0x65BC98: fld     [esp+arg_0]
0x65BC9C: retn
0x65BC9D: fstp    st(1)
0x65BC9F: retn
