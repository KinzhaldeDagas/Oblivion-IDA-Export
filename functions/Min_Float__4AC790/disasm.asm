0x4AC790: fld     [esp+arg_0]
0x4AC794: fld     [esp+arg_4]
0x4AC798: fcom    st(1)
0x4AC79A: fnstsw  ax
0x4AC79C: test    ah, 5
0x4AC79F: jp      short loc_4AC7AC
0x4AC7A1: fstp    st
0x4AC7A3: fstp    [esp+arg_0]
0x4AC7A7: fld     [esp+arg_0]
0x4AC7AB: retn
0x4AC7AC: fstp    st(1)
0x4AC7AE: fstp    [esp+arg_0]
0x4AC7B2: fld     [esp+arg_0]
0x4AC7B6: retn
