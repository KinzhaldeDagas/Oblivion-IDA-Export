0x77AF70: fldz
0x77AF72: fld     [esp+arg_0]
0x77AF76: fcom    st(1)
0x77AF78: fnstsw  ax
0x77AF7A: fstp    st(1)
0x77AF7C: test    ah, 41h
0x77AF7F: jp      short loc_77AF91
0x77AF81: fstp    st
0x77AF83: fld     dword ptr ds:0A3C778h
0x77AF89: fstp    [esp+arg_0]
0x77AF8D: fld     [esp+arg_0]
0x77AF91: fst     dword ptr [ecx+88h]
0x77AF97: fld1
0x77AF99: fld     st
0x77AF9B: fdivrp  st(2), st
0x77AF9D: fsubp   st(1), st
0x77AF9F: fstp    dword ptr [ecx+84h]
0x77AFA5: retn    4
