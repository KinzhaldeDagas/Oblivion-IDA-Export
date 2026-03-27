0x72A6B0: sub     esp, 20h
0x72A6B3: push    esi
0x72A6B4: mov     esi, ecx
0x72A6B6: fld     dword ptr [esi]
0x72A6B8: push    edi
0x72A6B9: mov     edi, [esp+28h+arg_0]
0x72A6BD: fsub    dword ptr [edi]
0x72A6BF: fstp    [esp+28h+var_18]
0x72A6C3: fld     dword ptr [esi+4]
0x72A6C6: fsub    dword ptr [edi+4]
0x72A6C9: fstp    [esp+28h+var_14]
0x72A6CD: fld     dword ptr [esi+8]
0x72A6D0: fsub    dword ptr [edi+8]
0x72A6D3: fstp    [esp+28h+var_10]
0x72A6D7: fld     [esp+28h+var_18]
0x72A6DB: fld     [esp+28h+var_14]
0x72A6DF: fld     [esp+28h+var_10]
0x72A6E3: fld     st(1)
0x72A6E5: fmulp   st(2), st
0x72A6E7: fld     st(2)
0x72A6E9: fmulp   st(3), st
0x72A6EB: fxch    st(1)
0x72A6ED: faddp   st(2), st
0x72A6EF: fmul    st, st
0x72A6F1: faddp   st(1), st
0x72A6F3: fstp    [esp+28h+var_1C]
0x72A6F7: fld     dword ptr [edi+0Ch]
0x72A6FA: fsub    dword ptr [esi+0Ch]
0x72A6FD: fstp    [esp+28h+var_20]
0x72A701: fld     [esp+28h+var_20]
0x72A705: fld     st
0x72A707: fmul    st, st
0x72A709: fstp    [esp+28h+arg_0]
0x72A70D: fldz
0x72A70F: fcompp
0x72A711: fnstsw  ax
0x72A713: fld     [esp+28h+arg_0]
0x72A717: fld     [esp+28h+var_1C]
0x72A71B: test    ah, 41h
0x72A71E: fcom    st(1)
0x72A720: fnstsw  ax
0x72A722: fstp    st(1)
0x72A724: jp      loc_72A7F2
0x72A72A: test    ah, 41h
0x72A72D: jp      short loc_72A74F
0x72A72F: mov     eax, [edi]
0x72A731: fstp    st
0x72A733: mov     [esi], eax
0x72A735: mov     ecx, [edi+4]
0x72A738: mov     [esi+4], ecx
0x72A73B: mov     edx, [edi+8]
0x72A73E: mov     [esi+8], edx
0x72A741: fld     dword ptr [edi+0Ch]
0x72A744: pop     edi
0x72A745: fstp    dword ptr [esi+0Ch]
0x72A748: pop     esi
0x72A749: add     esp, 20h
0x72A74C: retn    4
0x72A74F: call    __CIsqrt
0x72A754: fstp    [esp+28h+arg_0]
0x72A758: fld     [esp+28h+arg_0]
0x72A75C: fstp    [esp+28h+arg_0]
0x72A760: fld     [esp+28h+arg_0]
0x72A764: fld     dword ptr ds:0B27520h
0x72A76A: fcomp   st(1)
0x72A76C: fnstsw  ax
0x72A76E: test    ah, 5
0x72A771: jp      short loc_72A7DB
0x72A773: fld     st
0x72A775: fsub    [esp+28h+var_20]
0x72A779: fld     st(1)
0x72A77B: fadd    st, st
0x72A77D: fdivp   st(1), st
0x72A77F: fstp    [esp+28h+arg_0]
0x72A783: fld     [esp+28h+var_18]
0x72A787: fld     [esp+28h+arg_0]
0x72A78B: fld     st
0x72A78D: fmulp   st(2), st
0x72A78F: fxch    st(1)
0x72A791: fstp    [esp+28h+var_C]
0x72A795: fld     [esp+28h+var_14]
0x72A799: fmul    st, st(1)
0x72A79B: fstp    [esp+28h+var_8]
0x72A79F: fmul    [esp+28h+var_10]
0x72A7A3: fstp    [esp+28h+var_4]
0x72A7A7: fld     dword ptr [edi]
0x72A7A9: fadd    [esp+28h+var_C]
0x72A7AD: fstp    [esp+28h+var_18]
0x72A7B1: mov     eax, [esp+28h+var_18]
0x72A7B5: fld     [esp+28h+var_8]
0x72A7B9: fadd    dword ptr [edi+4]
0x72A7BC: fstp    [esp+28h+var_14]
0x72A7C0: mov     ecx, [esp+28h+var_14]
0x72A7C4: fld     dword ptr [edi+8]
0x72A7C7: mov     [esi], eax
0x72A7C9: fadd    [esp+28h+var_4]
0x72A7CD: mov     [esi+4], ecx
0x72A7D0: fstp    [esp+28h+var_10]
0x72A7D4: mov     edx, [esp+28h+var_10]
0x72A7D8: mov     [esi+8], edx
0x72A7DB: fadd    dword ptr [edi+0Ch]
0x72A7DE: pop     edi
0x72A7DF: fadd    dword ptr [esi+0Ch]
0x72A7E2: fmul    qword ptr ds:0A2FAA0h
0x72A7E8: fstp    dword ptr [esi+0Ch]
0x72A7EB: pop     esi
0x72A7EC: add     esp, 20h
0x72A7EF: retn    4
0x72A7F2: test    ah, 41h
0x72A7F5: jnz     short loc_72A809
0x72A7F7: call    __CIsqrt
0x72A7FC: fstp    [esp+28h+arg_0]
0x72A800: fld     [esp+28h+arg_0]
0x72A804: jmp     loc_72A75C
0x72A809: pop     edi
0x72A80A: fstp    st
0x72A80C: pop     esi
0x72A80D: add     esp, 20h
0x72A810: retn    4
