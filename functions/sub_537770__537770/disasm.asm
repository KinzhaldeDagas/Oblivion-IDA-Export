0x537770: fldz
0x537772: fld     [esp+arg_0]
0x537776: fcom    st(1)
0x537778: fnstsw  ax
0x53777A: test    ah, 41h
0x53777D: jnz     short loc_53778E
0x53777F: fstp    st(1)
0x537781: fstp    st
0x537783: fld1
0x537785: fstp    [esp+arg_0]
0x537789: fld     [esp+arg_0]
0x53778D: retn
0x53778E: fcomp   st(1)
0x537790: fnstsw  ax
0x537792: test    ah, 5
0x537795: jp      short loc_53779F
0x537797: fstp    st
0x537799: fld     dword ptr ds:0A30634h
0x53779F: fstp    [esp+arg_0]
0x5377A3: fld     [esp+arg_0]
0x5377A7: retn
