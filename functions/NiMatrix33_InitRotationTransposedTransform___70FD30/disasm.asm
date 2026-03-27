0x70FD30: sub     esp, 8
0x70FD33: fld     [esp+8+arg_0]
0x70FD37: fsincos
0x70FD39: fstp    [esp+8+var_8]
0x70FD3C: fstp    [esp+8+var_4]
0x70FD40: fld1
0x70FD42: fstp    dword ptr [ecx]
0x70FD44: fldz
0x70FD46: fst     dword ptr [ecx+4]
0x70FD49: fst     dword ptr [ecx+8]
0x70FD4C: fst     dword ptr [ecx+0Ch]
0x70FD4F: fld     [esp+8+var_8]
0x70FD52: fst     dword ptr [ecx+10h]
0x70FD55: fld     [esp+8+var_4]
0x70FD59: fst     dword ptr [ecx+14h]
0x70FD5C: fxch    st(2)
0x70FD5E: fstp    dword ptr [ecx+18h]
0x70FD61: fxch    st(1)
0x70FD63: fchs
0x70FD65: fstp    dword ptr [ecx+1Ch]
0x70FD68: fstp    dword ptr [ecx+20h]
0x70FD6B: add     esp, 8
0x70FD6E: retn    4
