0x6BFE90: sub     esp, 24h
0x6BFE93: fld     [esp+24h+arg_0]
0x6BFE97: mov     eax, [esp+24h+arg_4]
0x6BFE9B: fmul    qword ptr ds:0A3F3A0h
0x6BFEA1: fstp    [esp+24h+arg_0]
0x6BFEA5: fld     dword ptr [eax+40h]
0x6BFEA8: fld     [esp+24h+arg_0]
0x6BFEAC: fld     st
0x6BFEAE: fmulp   st(2), st
0x6BFEB0: fxch    st(1)
0x6BFEB2: fstp    [esp+24h+var_18]
0x6BFEB6: fld     dword ptr [eax+44h]
0x6BFEB9: fmul    st, st(1)
0x6BFEBB: fstp    [esp+24h+var_14]
0x6BFEBF: fmul    dword ptr [eax+48h]
0x6BFEC2: fstp    [esp+24h+var_10]
0x6BFEC6: fld     dword ptr [eax+34h]
0x6BFEC9: fld     qword ptr ds:0A3D0C0h
0x6BFECF: fmul    st(1), st
0x6BFED1: fxch    st(1)
0x6BFED3: fstp    [esp+24h+var_24]
0x6BFED6: fld     dword ptr [eax+38h]
0x6BFED9: fmul    st, st(1)
0x6BFEDB: fstp    [esp+24h+var_20]
0x6BFEDF: fmul    dword ptr [eax+3Ch]
0x6BFEE2: mov     eax, [esp+24h+arg_C]
0x6BFEE6: fstp    [esp+24h+var_1C]
0x6BFEEA: fld     [esp+24h+var_24]
0x6BFEED: fadd    [esp+24h+var_18]
0x6BFEF1: fstp    [esp+24h+var_C]
0x6BFEF5: mov     ecx, [esp+24h+var_C]
0x6BFEF9: fld     [esp+24h+var_14]
0x6BFEFD: mov     [eax], ecx
0x6BFEFF: fadd    [esp+24h+var_20]
0x6BFF03: fstp    [esp+24h+var_8]
0x6BFF07: mov     edx, [esp+24h+var_8]
0x6BFF0B: fld     [esp+24h+var_1C]
0x6BFF0F: mov     [eax+4], edx
0x6BFF12: fadd    [esp+24h+var_10]
0x6BFF16: fstp    [esp+24h+var_4]
0x6BFF1A: mov     ecx, [esp+24h+var_4]
0x6BFF1E: mov     [eax+8], ecx
0x6BFF21: add     esp, 24h
0x6BFF24: retn
