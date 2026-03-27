0x6BC480: sub     esp, 24h
0x6BC483: mov     eax, [esp+24h+arg_4]
0x6BC487: fld     [esp+24h+arg_0]
0x6BC48B: fld     qword ptr ds:0A30E48h
0x6BC491: fmul    st, st(1)
0x6BC493: fstp    [esp+24h+arg_0]
0x6BC497: fld     dword ptr [eax+34h]
0x6BC49A: fld     [esp+24h+arg_0]
0x6BC49E: fld     st
0x6BC4A0: fmulp   st(2), st
0x6BC4A2: fxch    st(1)
0x6BC4A4: fstp    [esp+24h+var_18]
0x6BC4A8: fld     dword ptr [eax+38h]
0x6BC4AB: fmul    st, st(1)
0x6BC4AD: fstp    [esp+24h+var_14]
0x6BC4B1: fmul    dword ptr [eax+3Ch]
0x6BC4B4: fstp    [esp+24h+var_10]
0x6BC4B8: fld     dword ptr [eax+28h]
0x6BC4BB: fld     qword ptr ds:0A3D0C0h
0x6BC4C1: fmul    st(1), st
0x6BC4C3: fxch    st(1)
0x6BC4C5: fstp    [esp+24h+var_24]
0x6BC4C8: fld     dword ptr [eax+2Ch]
0x6BC4CB: fmul    st, st(1)
0x6BC4CD: fstp    [esp+24h+var_20]
0x6BC4D1: fmul    dword ptr [eax+30h]
0x6BC4D4: fstp    [esp+24h+var_1C]
0x6BC4D8: fld     [esp+24h+var_24]
0x6BC4DB: fadd    [esp+24h+var_18]
0x6BC4DF: fstp    [esp+24h+var_C]
0x6BC4E3: fld     [esp+24h+var_20]
0x6BC4E7: fadd    [esp+24h+var_14]
0x6BC4EB: fstp    [esp+24h+var_8]
0x6BC4EF: fld     [esp+24h+var_1C]
0x6BC4F3: fadd    [esp+24h+var_10]
0x6BC4F7: fstp    [esp+24h+var_4]
0x6BC4FB: fld     [esp+24h+var_C]
0x6BC4FF: fmul    st, st(1)
0x6BC501: fstp    [esp+24h+var_18]
0x6BC505: fld     [esp+24h+var_8]
0x6BC509: fmul    st, st(1)
0x6BC50B: fstp    [esp+24h+var_14]
0x6BC50F: fmul    [esp+24h+var_4]
0x6BC513: fstp    [esp+24h+var_10]
0x6BC517: fld     dword ptr [eax+1Ch]
0x6BC51A: fadd    [esp+24h+var_18]
0x6BC51E: fstp    [esp+24h+var_C]
0x6BC522: mov     ecx, [esp+24h+var_C]
0x6BC526: fld     dword ptr [eax+20h]
0x6BC529: fadd    [esp+24h+var_14]
0x6BC52D: fstp    [esp+24h+var_8]
0x6BC531: mov     edx, [esp+24h+var_8]
0x6BC535: fld     dword ptr [eax+24h]
0x6BC538: mov     eax, [esp+24h+arg_C]
0x6BC53C: fadd    [esp+24h+var_10]
0x6BC540: mov     [eax], ecx
0x6BC542: mov     [eax+4], edx
0x6BC545: fstp    [esp+24h+var_4]
0x6BC549: mov     ecx, [esp+24h+var_4]
0x6BC54D: mov     [eax+8], ecx
0x6BC550: add     esp, 24h
0x6BC553: retn
