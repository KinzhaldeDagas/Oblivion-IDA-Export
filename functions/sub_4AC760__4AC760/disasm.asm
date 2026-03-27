0x4AC760: fld     [esp+arg_0]
0x4AC764: fld     [esp+arg_4]
0x4AC768: fcom    st(1)
0x4AC76A: fnstsw  ax
0x4AC76C: test    ah, 41h
0x4AC76F: jnz     short loc_4AC77C
0x4AC771: fstp    st
0x4AC773: fstp    [esp+arg_0]
0x4AC777: fld     [esp+arg_0]
0x4AC77B: retn
0x4AC77C: fstp    st(1)
0x4AC77E: fstp    [esp+arg_0]
0x4AC782: fld     [esp+arg_0]
0x4AC786: retn
