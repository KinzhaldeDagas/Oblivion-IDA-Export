0x4AED60: fldz
0x4AED62: fld     [esp+arg_0]
0x4AED66: fcom    st(1)
0x4AED68: fnstsw  ax
0x4AED6A: fstp    st(1)
0x4AED6C: test    ah, 1
0x4AED6F: jnz     short loc_4AED84
0x4AED71: fld1
0x4AED73: fcomp   st(1)
0x4AED75: fnstsw  ax
0x4AED77: test    ah, 1
0x4AED7A: jnz     short loc_4AED84
0x4AED7C: fstp    dword ptr [ecx+50h]
0x4AED7F: mov     al, 1
0x4AED81: retn    4
0x4AED84: fstp    st
0x4AED86: xor     al, al
0x4AED88: retn    4
