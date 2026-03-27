0x68A9D0: fldz
0x68A9D2: fld     [esp+arg_0]
0x68A9D6: fcom    st(1)
0x68A9D8: fnstsw  ax
0x68A9DA: fstp    st(1)
0x68A9DC: test    ah, 5
0x68A9DF: jp      short loc_68A9E9
0x68A9E1: fstp    st
0x68A9E3: fld     dword ptr ds:0B3A458h
0x68A9E9: fstp    dword ptr [ecx+0Ch]
0x68A9EC: retn    4
