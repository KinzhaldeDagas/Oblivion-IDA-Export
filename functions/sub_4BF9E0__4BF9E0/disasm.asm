0x4BF9E0: sub     esp, 0Ch
0x4BF9E3: mov     eax, [esp+0Ch+arg_4]
0x4BF9E7: fld     dword ptr [eax+8]
0x4BF9EA: fmul    dword ptr [ecx+4]
0x4BF9ED: fld     dword ptr [eax+4]
0x4BF9F0: fmul    dword ptr [ecx+8]
0x4BF9F3: fsubp   st(1), st
0x4BF9F5: fstp    [esp+0Ch+var_C]
0x4BF9F8: fld     dword ptr [ecx+8]
0x4BF9FB: fmul    dword ptr [eax]
0x4BF9FD: fld     dword ptr [ecx]
0x4BF9FF: fmul    dword ptr [eax+8]
0x4BFA02: fsubp   st(1), st
0x4BFA04: fstp    [esp+0Ch+var_8]
0x4BFA08: fld     dword ptr [eax+4]
0x4BFA0B: fmul    dword ptr [ecx]
0x4BFA0D: fld     dword ptr [eax]
0x4BFA0F: fmul    dword ptr [ecx+4]
0x4BFA12: fsubp   st(1), st
0x4BFA14: fstp    [esp+0Ch+var_4]
0x4BFA18: fld     [esp+0Ch+var_8]
0x4BFA1C: fld     [esp+0Ch+var_C]
0x4BFA1F: fld     [esp+0Ch+var_4]
0x4BFA23: fld     st(1)
0x4BFA25: fmulp   st(2), st
0x4BFA27: fld     st(2)
0x4BFA29: fmulp   st(3), st
0x4BFA2B: fxch    st(1)
0x4BFA2D: faddp   st(2), st
0x4BFA2F: fmul    st, st
0x4BFA31: faddp   st(1), st
0x4BFA33: fstp    [esp+0Ch+arg_4]
0x4BFA37: fld     [esp+0Ch+arg_4]
0x4BFA3B: call    __CIsqrt
0x4BFA40: fstp    [esp+0Ch+arg_4]
0x4BFA44: fld     [esp+0Ch+arg_4]
0x4BFA48: fstp    [esp+0Ch+arg_4]
0x4BFA4C: fld     dword ptr ds:0A372CCh
0x4BFA52: fld     [esp+0Ch+arg_4]
0x4BFA56: fcom    st(1)
0x4BFA58: fnstsw  ax
0x4BFA5A: fstp    st(1)
0x4BFA5C: test    ah, 41h
0x4BFA5F: mov     eax, [esp+0Ch+arg_0]
0x4BFA63: jnz     short loc_4BFA8E
0x4BFA65: fld1
0x4BFA67: fdivrp  st(1), st
0x4BFA69: fstp    [esp+0Ch+arg_4]
0x4BFA6D: fld     [esp+0Ch+arg_4]
0x4BFA71: fld     st
0x4BFA73: fmul    [esp+0Ch+var_C]
0x4BFA76: fstp    dword ptr [eax]
0x4BFA78: fld     st
0x4BFA7A: fmul    [esp+0Ch+var_8]
0x4BFA7E: fstp    dword ptr [eax+4]
0x4BFA81: fmul    [esp+0Ch+var_4]
0x4BFA85: fstp    dword ptr [eax+8]
0x4BFA88: add     esp, 0Ch
0x4BFA8B: retn    8
0x4BFA8E: fstp    st
0x4BFA90: fldz
0x4BFA92: fst     dword ptr [eax]
0x4BFA94: fst     dword ptr [eax+4]
0x4BFA97: fstp    dword ptr [eax+8]
0x4BFA9A: add     esp, 0Ch
0x4BFA9D: retn    8
