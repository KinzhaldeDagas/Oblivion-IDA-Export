0x67EF50: sub     esp, 10h
0x67EF53: fld     dword ptr ds:0A32048h
0x67EF59: push    edi
0x67EF5A: mov     edi, [esp+14h+arg_0]
0x67EF5E: fstp    [esp+14h+var_10]
0x67EF62: test    edi, edi
0x67EF64: jz      short loc_67EFCF
0x67EF66: mov     ecx, [esp+14h+arg_4]
0x67EF6A: test    ecx, ecx
0x67EF6C: jz      short loc_67EFCF
0x67EF6E: push    esi
0x67EF6F: call    sub_4BEF40
0x67EF74: mov     ecx, edi
0x67EF76: mov     esi, eax
0x67EF78: call    sub_4BEF40
0x67EF7D: fld     dword ptr [eax]
0x67EF7F: fsub    dword ptr [esi]
0x67EF81: fstp    [esp+18h+var_C]
0x67EF85: fld     dword ptr [eax+4]
0x67EF88: fsub    dword ptr [esi+4]
0x67EF8B: fstp    [esp+18h+var_8]
0x67EF8F: fld     dword ptr [eax+8]
0x67EF92: fsub    dword ptr [esi+8]
0x67EF95: fstp    [esp+18h+var_4]
0x67EF99: fld     [esp+18h+var_C]
0x67EF9D: fld     [esp+18h+var_8]
0x67EFA1: fld     [esp+18h+var_4]
0x67EFA5: fld     st(1)
0x67EFA7: fmulp   st(2), st
0x67EFA9: fld     st(2)
0x67EFAB: fmulp   st(3), st
0x67EFAD: fxch    st(1)
0x67EFAF: faddp   st(2), st
0x67EFB1: fmul    st, st
0x67EFB3: faddp   st(1), st
0x67EFB5: fstp    [esp+18h+arg_0]
0x67EFB9: fld     [esp+18h+arg_0]
0x67EFBD: call    __CIsqrt
0x67EFC2: fstp    [esp+18h+arg_0]
0x67EFC6: fld     [esp+18h+arg_0]
0x67EFCA: pop     esi
0x67EFCB: fstp    [esp+14h+var_10]
0x67EFCF: fld     [esp+14h+var_10]
0x67EFD3: pop     edi
0x67EFD4: add     esp, 10h
0x67EFD7: retn
