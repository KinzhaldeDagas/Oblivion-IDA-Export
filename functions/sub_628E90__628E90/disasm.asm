0x628E90: push    ecx
0x628E91: fldz
0x628E93: fcom    dword ptr [ecx+0CCh]
0x628E99: fnstsw  ax
0x628E9B: test    ah, 41h
0x628E9E: jz      short loc_628EA8
0x628EA0: fstp    st
0x628EA2: fld     dword ptr [ecx+0CCh]
0x628EA8: fstp    [esp+4+var_4]
0x628EAB: fld     [esp+4+var_4]
0x628EAE: pop     ecx
0x628EAF: retn
