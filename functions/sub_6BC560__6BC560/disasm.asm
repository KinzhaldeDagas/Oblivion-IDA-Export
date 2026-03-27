0x6BC560: sub     esp, 24h
0x6BC563: fld     [esp+24h+arg_0]
0x6BC567: mov     eax, [esp+24h+arg_4]
0x6BC56B: fmul    qword ptr ds:0A3F3A0h
0x6BC571: fstp    [esp+24h+arg_0]
0x6BC575: fld     dword ptr [eax+34h]
0x6BC578: fld     [esp+24h+arg_0]
0x6BC57C: fld     st
0x6BC57E: fmulp   st(2), st
0x6BC580: fxch    st(1)
0x6BC582: fstp    [esp+24h+var_18]
0x6BC586: fld     dword ptr [eax+38h]
0x6BC589: fmul    st, st(1)
0x6BC58B: fstp    [esp+24h+var_14]
0x6BC58F: fmul    dword ptr [eax+3Ch]
0x6BC592: fstp    [esp+24h+var_10]
0x6BC596: fld     dword ptr [eax+28h]
0x6BC599: fld     qword ptr ds:0A3D0C0h
0x6BC59F: fmul    st(1), st
0x6BC5A1: fxch    st(1)
0x6BC5A3: fstp    [esp+24h+var_24]
0x6BC5A6: fld     dword ptr [eax+2Ch]
0x6BC5A9: fmul    st, st(1)
0x6BC5AB: fstp    [esp+24h+var_20]
0x6BC5AF: fmul    dword ptr [eax+30h]
0x6BC5B2: mov     eax, [esp+24h+arg_C]
0x6BC5B6: fstp    [esp+24h+var_1C]
0x6BC5BA: fld     [esp+24h+var_24]
0x6BC5BD: fadd    [esp+24h+var_18]
0x6BC5C1: fstp    [esp+24h+var_C]
0x6BC5C5: mov     ecx, [esp+24h+var_C]
0x6BC5C9: fld     [esp+24h+var_14]
0x6BC5CD: mov     [eax], ecx
0x6BC5CF: fadd    [esp+24h+var_20]
0x6BC5D3: fstp    [esp+24h+var_8]
0x6BC5D7: mov     edx, [esp+24h+var_8]
0x6BC5DB: fld     [esp+24h+var_1C]
0x6BC5DF: mov     [eax+4], edx
0x6BC5E2: fadd    [esp+24h+var_10]
0x6BC5E6: fstp    [esp+24h+var_4]
0x6BC5EA: mov     ecx, [esp+24h+var_4]
0x6BC5EE: mov     [eax+8], ecx
0x6BC5F1: add     esp, 24h
0x6BC5F4: retn
