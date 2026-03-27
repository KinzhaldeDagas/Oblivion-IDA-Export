0x70FD80: sub     esp, 8
0x70FD83: fld     [esp+8+arg_0]
0x70FD87: fsincos
0x70FD89: fstp    [esp+8+var_8]
0x70FD8C: fstp    [esp+8+var_4]
0x70FD90: fld     [esp+8+var_8]
0x70FD93: fst     dword ptr [ecx]
0x70FD95: fldz
0x70FD97: fst     dword ptr [ecx+4]
0x70FD9A: fld     [esp+8+var_4]
0x70FD9E: fld     st
0x70FDA0: fchs
0x70FDA2: fstp    dword ptr [ecx+8]
0x70FDA5: fxch    st(1)
0x70FDA7: fst     dword ptr [ecx+0Ch]
0x70FDAA: fld1
0x70FDAC: fstp    dword ptr [ecx+10h]
0x70FDAF: fst     dword ptr [ecx+14h]
0x70FDB2: fstp    dword ptr [ecx+1Ch]
0x70FDB5: fstp    dword ptr [ecx+18h]
0x70FDB8: fstp    dword ptr [ecx+20h]
0x70FDBB: add     esp, 8
0x70FDBE: retn    4
