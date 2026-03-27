0x43F350: push    ecx
0x43F351: push    esi
0x43F352: mov     esi, ecx
0x43F354: fld     dword ptr [esi+4]
0x43F357: fld     dword ptr [esi]
0x43F359: fld     dword ptr [esi+8]
0x43F35C: fld     st(1)
0x43F35E: fmulp   st(2), st
0x43F360: fld     st(2)
0x43F362: fmulp   st(3), st
0x43F364: fxch    st(1)
0x43F366: faddp   st(2), st
0x43F368: fmul    st, st
0x43F36A: faddp   st(1), st
0x43F36C: fstp    [esp+8+var_4]
0x43F370: fld     [esp+8+var_4]
0x43F374: call    __CIsqrt
0x43F379: fstp    [esp+8+var_4]
0x43F37D: fld     [esp+8+var_4]
0x43F381: fstp    [esp+8+var_4]
0x43F385: fld     dword ptr ds:0A372CCh
0x43F38B: fld     [esp+8+var_4]
0x43F38F: fcom    st(1)
0x43F391: fnstsw  ax
0x43F393: fstp    st(1)
0x43F395: test    ah, 41h
0x43F398: jnz     short loc_43F3C3
0x43F39A: fld     st
0x43F39C: fld1
0x43F39E: fdivrp  st(1), st
0x43F3A0: fstp    [esp+8+var_4]
0x43F3A4: fld     dword ptr [esi]
0x43F3A6: fld     [esp+8+var_4]
0x43F3AA: fld     st
0x43F3AC: fmulp   st(2), st
0x43F3AE: fxch    st(1)
0x43F3B0: fstp    dword ptr [esi]
0x43F3B2: fld     st
0x43F3B4: fmul    dword ptr [esi+4]
0x43F3B7: fstp    dword ptr [esi+4]
0x43F3BA: fmul    dword ptr [esi+8]
0x43F3BD: fstp    dword ptr [esi+8]
0x43F3C0: pop     esi
0x43F3C1: pop     ecx
0x43F3C2: retn
0x43F3C3: fstp    st
0x43F3C5: fldz
0x43F3C7: fst     dword ptr [esi]
0x43F3C9: fst     dword ptr [esi+4]
0x43F3CC: fst     dword ptr [esi+8]
0x43F3CF: fstp    [esp+8+var_4]
0x43F3D3: pop     esi
0x43F3D4: fld     [esp+4+var_4]
0x43F3D7: pop     ecx
0x43F3D8: retn
