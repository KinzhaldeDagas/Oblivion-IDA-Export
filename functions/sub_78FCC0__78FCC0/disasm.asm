0x78FCC0: mov     eax, [esp+arg_0]
0x78FCC4: fld     dword ptr [eax+4]
0x78FCC7: fmul    dword ptr [ecx+4]
0x78FCCA: fld     dword ptr [eax]
0x78FCCC: fmul    dword ptr [ecx]
0x78FCCE: faddp   st(1), st
0x78FCD0: fld     dword ptr [eax+8]
0x78FCD3: fmul    dword ptr [ecx+8]
0x78FCD6: faddp   st(1), st
0x78FCD8: fstp    [esp+arg_0]
0x78FCDC: fld     dword ptr ds:0A30634h
0x78FCE2: fld     [esp+arg_0]
0x78FCE6: fcom    st(1)
0x78FCE8: fnstsw  ax
0x78FCEA: test    ah, 5
0x78FCED: jp      short loc_78FD09
0x78FCEF: fstp    st
0x78FCF1: fstp    [esp+arg_0]
0x78FCF5: fld     [esp+arg_0]
0x78FCF9: call    __CIacos
0x78FCFE: fstp    [esp+arg_0]
0x78FD02: fld     [esp+arg_0]
0x78FD06: retn    4
0x78FD09: fstp    st(1)
0x78FD0B: fld1
0x78FD0D: fcom    st(1)
0x78FD0F: fnstsw  ax
0x78FD11: fstp    st(1)
0x78FD13: test    ah, 5
0x78FD16: jnp     short loc_78FCF1
0x78FD18: fstp    st
0x78FD1A: fld     [esp+arg_0]
0x78FD1E: call    __CIacos
0x78FD23: fstp    [esp+arg_0]
0x78FD27: fld     [esp+arg_0]
0x78FD2B: retn    4
