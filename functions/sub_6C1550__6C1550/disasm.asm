0x6C1550: sub     esp, 0Ch
0x6C1553: mov     eax, [esp+0Ch+arg_0]
0x6C1557: fld     dword ptr [eax+4]
0x6C155A: fsub    [esp+0Ch+arg_4]
0x6C155E: fstp    [esp+0Ch+var_C]
0x6C1561: fld     [esp+0Ch+arg_8]
0x6C1565: fsub    dword ptr [eax+4]
0x6C1568: fstp    [esp+0Ch+var_4]
0x6C156C: fld     dword ptr [eax+10h]
0x6C156F: fld1
0x6C1571: fadd    st(1), st
0x6C1573: fxch    st(1)
0x6C1575: fstp    [esp+0Ch+arg_4]
0x6C1579: fld     dword ptr [eax+10h]
0x6C157C: fsubr   st, st(1)
0x6C157E: fstp    [esp+0Ch+var_8]
0x6C1582: fld     dword ptr [eax+8]
0x6C1585: fsubr   st, st(1)
0x6C1587: fmul    qword ptr ds:0A2FAA0h
0x6C158D: fstp    [esp+0Ch+arg_8]
0x6C1591: fld     dword ptr [eax+0Ch]
0x6C1594: fadd    st, st(1)
0x6C1596: fstp    [esp+0Ch+arg_0]
0x6C159A: fld     [esp+0Ch+arg_0]
0x6C159E: fld     [esp+0Ch+arg_8]
0x6C15A2: fld     st
0x6C15A4: fmulp   st(2), st
0x6C15A6: fxch    st(1)
0x6C15A8: fstp    [esp+0Ch+arg_8]
0x6C15AC: fld     dword ptr [eax+0Ch]
0x6C15AF: fsubp   st(2), st
0x6C15B1: fxch    st(1)
0x6C15B3: fstp    [esp+0Ch+arg_0]
0x6C15B7: fmul    [esp+0Ch+arg_0]
0x6C15BB: fstp    [esp+0Ch+arg_0]
0x6C15BF: fld     [esp+0Ch+arg_C]
0x6C15C3: fld     st
0x6C15C5: fld     [esp+0Ch+arg_10]
0x6C15C9: fld     st
0x6C15CB: faddp   st(2), st
0x6C15CD: fld     qword ptr ds:0A3D0C0h
0x6C15D3: fdivrp  st(2), st
0x6C15D5: fxch    st(1)
0x6C15D7: fstp    [esp+0Ch+arg_C]
0x6C15DB: fld     [esp+0Ch+arg_8]
0x6C15DF: fld     st
0x6C15E1: fld     [esp+0Ch+var_8]
0x6C15E5: fld     st
0x6C15E7: fmulp   st(2), st
0x6C15E9: fld     [esp+0Ch+var_4]
0x6C15ED: fld     st
0x6C15EF: fmulp   st(3), st
0x6C15F1: fld     [esp+0Ch+arg_0]
0x6C15F5: fmul    [esp+0Ch+arg_4]
0x6C15F9: fmul    [esp+0Ch+var_C]
0x6C15FC: faddp   st(3), st
0x6C15FE: fxch    st(2)
0x6C1600: fstp    [esp+0Ch+arg_8]
0x6C1604: fld     [esp+0Ch+arg_8]
0x6C1608: fld     [esp+0Ch+arg_C]
0x6C160C: fld     st
0x6C160E: fmulp   st(7), st
0x6C1610: fxch    st(1)
0x6C1612: fmulp   st(6), st
0x6C1614: fxch    st(5)
0x6C1616: fstp    dword ptr [eax+14h]
0x6C1619: fmul    [esp+0Ch+arg_0]
0x6C161D: fmulp   st(1), st
0x6C161F: fld     [esp+0Ch+arg_4]
0x6C1623: fmulp   st(2), st
0x6C1625: fld     [esp+0Ch+var_C]
0x6C1628: fmulp   st(2), st
0x6C162A: faddp   st(1), st
0x6C162C: fstp    [esp+0Ch+arg_0]
0x6C1630: fld     [esp+0Ch+arg_0]
0x6C1634: fxch    st(2)
0x6C1636: fmulp   st(1), st
0x6C1638: fmulp   st(1), st
0x6C163A: fstp    dword ptr [eax+18h]
0x6C163D: add     esp, 0Ch
0x6C1640: retn
