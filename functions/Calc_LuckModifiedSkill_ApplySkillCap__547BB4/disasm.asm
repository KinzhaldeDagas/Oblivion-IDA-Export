0x547BB4: fld     qword ptr ds:0A309F0h
0x547BBA: fcom    st(1)
0x547BBC: fnstsw  ax
0x547BBE: test    ah, 41h
0x547BC1: jnz     short loc_547BD4
0x547BC3: fld     st(1)
0x547BC5: fldz
0x547BC7: fcom    st(1)
0x547BC9: fnstsw  ax
0x547BCB: fstp    st(1)
0x547BCD: test    ah, 5
0x547BD0: jp      short loc_547BE8
0x547BD2: fstp    st
0x547BD4: fcom    st(1)
0x547BD6: fnstsw  ax
0x547BD8: test    ah, 41h
0x547BDB: jz      short loc_547BEA
0x547BDD: fstp    st(1)
0x547BDF: fstp    [esp+arg_4]
0x547BE3: fld     [esp+arg_4]
0x547BE7: retn
0x547BE8: fstp    st(2)
0x547BEA: fstp    st
0x547BEC: fstp    [esp+arg_4]
0x547BF0: fld     [esp+arg_4]
0x547BF4: retn
