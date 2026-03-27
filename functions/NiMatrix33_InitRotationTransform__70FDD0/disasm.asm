0x70FDD0: sub     esp, 8
0x70FDD3: fld     [esp+8+arg_0]
0x70FDD7: fsincos
0x70FDD9: fstp    [esp+8+var_8]
0x70FDDC: fstp    [esp+8+var_4]
0x70FDE0: fld     [esp+8+var_8]
0x70FDE3: fst     dword ptr [ecx]
0x70FDE5: fld     [esp+8+var_4]
0x70FDE9: fst     dword ptr [ecx+4]
0x70FDEC: fldz
0x70FDEE: fst     dword ptr [ecx+8]
0x70FDF1: fxch    st(1)
0x70FDF3: fchs
0x70FDF5: fstp    dword ptr [ecx+0Ch]
0x70FDF8: fxch    st(1)
0x70FDFA: fstp    dword ptr [ecx+10h]
0x70FDFD: fst     dword ptr [ecx+14h]
0x70FE00: fst     dword ptr [ecx+18h]
0x70FE03: fstp    dword ptr [ecx+1Ch]
0x70FE06: fld1
0x70FE08: fstp    dword ptr [ecx+20h]
0x70FE0B: add     esp, 8
0x70FE0E: retn    4
