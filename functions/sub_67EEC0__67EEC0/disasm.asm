0x67EEC0: sub     esp, 10h
0x67EEC3: fld     dword ptr ds:0A32048h
0x67EEC9: push    edi
0x67EECA: mov     edi, [esp+14h+arg_0]
0x67EECE: fstp    [esp+14h+var_10]
0x67EED2: test    edi, edi
0x67EED4: jz      short loc_67EF41
0x67EED6: mov     ecx, [esp+14h+arg_4]
0x67EEDA: test    ecx, ecx
0x67EEDC: jz      short loc_67EF41
0x67EEDE: push    esi
0x67EEDF: call    sub_4BEF40
0x67EEE4: mov     ecx, edi
0x67EEE6: mov     esi, eax
0x67EEE8: call    sub_4BEF40
0x67EEED: fld     dword ptr [eax]
0x67EEEF: fsub    dword ptr [esi]
0x67EEF1: fstp    [esp+18h+var_C]
0x67EEF5: fld     dword ptr [eax+4]
0x67EEF8: fsub    dword ptr [esi+4]
0x67EEFB: fstp    [esp+18h+var_8]
0x67EEFF: fld     dword ptr [eax+8]
0x67EF02: fsub    dword ptr [esi+8]
0x67EF05: fstp    [esp+18h+var_4]
0x67EF09: fld     [esp+18h+var_C]
0x67EF0D: fld     [esp+18h+var_8]
0x67EF11: fld     [esp+18h+var_4]
0x67EF15: fld     st(1)
0x67EF17: fmulp   st(2), st
0x67EF19: fld     st(2)
0x67EF1B: fmulp   st(3), st
0x67EF1D: fxch    st(1)
0x67EF1F: faddp   st(2), st
0x67EF21: fmul    st, st
0x67EF23: faddp   st(1), st
0x67EF25: fstp    [esp+18h+arg_0]
0x67EF29: fld     [esp+18h+arg_0]
0x67EF2D: call    __CIsqrt
0x67EF32: fstp    [esp+18h+arg_0]
0x67EF36: fld     [esp+18h+arg_0]
0x67EF3A: pop     esi
0x67EF3B: fadd    st, st
0x67EF3D: fstp    [esp+14h+var_10]
0x67EF41: fld     [esp+14h+var_10]
0x67EF45: pop     edi
0x67EF46: add     esp, 10h
0x67EF49: retn
