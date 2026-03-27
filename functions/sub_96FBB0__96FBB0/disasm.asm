0x96FBB0: sub     esp, 18h
0x96FBB3: mov     eax, [esp+18h+arg_0]
0x96FBB7: mov     ecx, [esp+18h+arg_4]
0x96FBBB: fld     dword ptr [eax]
0x96FBBD: fsub    dword ptr [ecx]
0x96FBBF: mov     edx, [esp+18h+arg_8]
0x96FBC3: fstp    [esp+18h+var_18]
0x96FBC6: fld     dword ptr [eax+4]
0x96FBC9: fsub    dword ptr [ecx+4]
0x96FBCC: fstp    [esp+18h+var_14]
0x96FBD0: fld     dword ptr [eax+8]
0x96FBD3: fsub    dword ptr [ecx+8]
0x96FBD6: fstp    [esp+18h+var_10]
0x96FBDA: fld     dword ptr [ecx+10h]
0x96FBDD: fld     [esp+18h+var_14]
0x96FBE1: fld     st
0x96FBE3: fmulp   st(2), st
0x96FBE5: fld     [esp+18h+var_18]
0x96FBE8: fld     st
0x96FBEA: fmul    dword ptr [ecx+0Ch]
0x96FBED: faddp   st(3), st
0x96FBEF: fld     dword ptr [ecx+14h]
0x96FBF2: fld     [esp+18h+var_10]
0x96FBF6: fld     st
0x96FBF8: fmulp   st(2), st
0x96FBFA: fxch    st(4)
0x96FBFC: faddp   st(1), st
0x96FBFE: fstp    [esp+18h+arg_0]
0x96FC02: fld     [esp+18h+arg_0]
0x96FC06: fst     dword ptr [edx]
0x96FC08: fldz
0x96FC0A: fcom    st(1)
0x96FC0C: fnstsw  ax
0x96FC0E: test    ah, 1
0x96FC11: jnz     short loc_96FC1C
0x96FC13: fstp    st(1)
0x96FC15: fstp    dword ptr [edx]
0x96FC17: jmp     loc_96FCB5
0x96FC1C: fstp    st
0x96FC1E: fld     dword ptr [ecx+10h]
0x96FC21: fld     dword ptr [ecx+0Ch]
0x96FC24: fld     dword ptr [ecx+14h]
0x96FC27: fld     st(1)
0x96FC29: fmulp   st(2), st
0x96FC2B: fld     st(2)
0x96FC2D: fmulp   st(3), st
0x96FC2F: fxch    st(1)
0x96FC31: faddp   st(2), st
0x96FC33: fmul    st, st
0x96FC35: faddp   st(1), st
0x96FC37: fstp    [esp+18h+arg_0]
0x96FC3B: fld     [esp+18h+arg_0]
0x96FC3F: fcom    st(1)
0x96FC41: fnstsw  ax
0x96FC43: test    ah, 41h
0x96FC46: jp      short loc_96FC62
0x96FC48: fstp    st(1)
0x96FC4A: fstp    st
0x96FC4C: fld1
0x96FC4E: fstp    dword ptr [edx]
0x96FC50: fsub    dword ptr [ecx+0Ch]
0x96FC53: fstp    [esp+18h+var_18]
0x96FC56: fsub    dword ptr [ecx+10h]
0x96FC59: fstp    [esp+18h+var_14]
0x96FC5D: fsub    dword ptr [ecx+14h]
0x96FC60: jmp     short loc_96FCA6
0x96FC62: fdivp   st(1), st
0x96FC64: fstp    [esp+18h+arg_0]
0x96FC68: fld     [esp+18h+arg_0]
0x96FC6C: fst     dword ptr [edx]
0x96FC6E: fstp    [esp+18h+arg_0]
0x96FC72: fld     dword ptr [ecx+0Ch]
0x96FC75: fld     [esp+18h+arg_0]
0x96FC79: fld     st
0x96FC7B: fmulp   st(2), st
0x96FC7D: fxch    st(1)
0x96FC7F: fstp    [esp+18h+var_C]
0x96FC83: fld     dword ptr [ecx+10h]
0x96FC86: fmul    st, st(1)
0x96FC88: fstp    [esp+18h+var_8]
0x96FC8C: fmul    dword ptr [ecx+14h]
0x96FC8F: fstp    [esp+18h+var_4]
0x96FC93: fsub    [esp+18h+var_C]
0x96FC97: fstp    [esp+18h+var_18]
0x96FC9A: fsub    [esp+18h+var_8]
0x96FC9E: fstp    [esp+18h+var_14]
0x96FCA2: fsub    [esp+18h+var_4]
0x96FCA6: fstp    [esp+18h+var_10]
0x96FCAA: fld     [esp+18h+var_10]
0x96FCAE: fld     [esp+18h+var_14]
0x96FCB2: fld     [esp+18h+var_18]
0x96FCB5: fmul    st, st
0x96FCB7: fld     st(1)
0x96FCB9: fmulp   st(2), st
0x96FCBB: faddp   st(1), st
0x96FCBD: fld     st(1)
0x96FCBF: fmulp   st(2), st
0x96FCC1: faddp   st(1), st
0x96FCC3: fstp    [esp+18h+arg_0]
0x96FCC7: fld     [esp+18h+arg_0]
0x96FCCB: add     esp, 18h
0x96FCCE: retn
