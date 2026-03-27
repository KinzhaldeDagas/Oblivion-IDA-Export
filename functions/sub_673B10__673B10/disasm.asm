0x673B10: fld     [esp+arg_0]
0x673B14: fst     dword ptr ds:0B3BCF0h
0x673B1A: fcomp   dword ptr ds:0A3F3D8h
0x673B20: fnstsw  ax
0x673B22: test    ah, 41h
0x673B25: jnz     short loc_673B2F
0x673B27: fldz
0x673B29: fstp    dword ptr ds:0B3BCF0h
0x673B2F: fld     dword ptr ds:0B3BCF0h
0x673B35: sub     esp, 8
0x673B38: fstp    [esp+8+X]; X
0x673B3B: call    __isnan
0x673B40: add     esp, 8
0x673B43: test    eax, eax
0x673B45: jnz     short loc_673B5F
0x673B47: fld     dword ptr ds:0B3BCF0h
0x673B4D: sub     esp, 8
0x673B50: fstp    [esp+8+X]; X
0x673B53: call    __finite
0x673B58: add     esp, 8
0x673B5B: test    eax, eax
0x673B5D: jnz     short locret_673B67
0x673B5F: fldz
0x673B61: fstp    dword ptr ds:0B3BCF0h
0x673B67: retn    4
