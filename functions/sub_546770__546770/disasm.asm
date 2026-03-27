0x546770: fild    [esp+arg_0]
0x546774: fmul    dword ptr ds:0B36988h
0x54677A: fadd    dword ptr ds:0B36980h
0x546780: fstp    [esp+arg_0]
0x546784: fld     [esp+arg_0]
0x546788: fadd    dword ptr ds:0B36998h
0x54678E: fstp    [esp+arg_0]
0x546792: fld     [esp+arg_0]
0x546796: fld     qword ptr ds:0A309F0h
0x54679C: fld     st
0x54679E: fsubrp  st(2), st
0x5467A0: fdivp   st(1), st
0x5467A2: fstp    [esp+arg_0]
0x5467A6: fld     [esp+arg_0]
0x5467AA: fabs
0x5467AC: fstp    [esp+arg_0]
0x5467B0: fld     [esp+arg_0]
0x5467B4: fstp    [esp+arg_0]
0x5467B8: fldz
0x5467BA: fld     [esp+arg_0]
0x5467BE: fcom    st(1)
0x5467C0: fnstsw  ax
0x5467C2: test    ah, 41h
0x5467C5: jp      short loc_5467CA
0x5467C7: fstp    st
0x5467C9: retn
0x5467CA: fmul    qword ptr ds:0A49360h
0x5467D0: fsubr   qword ptr ds:0A2FCC8h
0x5467D6: fstp    [esp+arg_0]
0x5467DA: fcom    [esp+arg_0]
0x5467DE: fnstsw  ax
0x5467E0: test    ah, 41h
0x5467E3: jnz     short loc_5467EE
0x5467E5: fstp    [esp+arg_0]
0x5467E9: fld     [esp+arg_0]
0x5467ED: retn
0x5467EE: fstp    st
0x5467F0: fld     [esp+arg_0]
0x5467F4: retn
