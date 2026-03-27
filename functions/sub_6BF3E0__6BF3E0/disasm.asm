0x6BF3E0: sub     esp, 24h
0x6BF3E3: fld     [esp+24h+arg_0]
0x6BF3E7: mov     eax, [esp+24h+arg_4]
0x6BF3EB: fld     st
0x6BF3ED: fld1
0x6BF3EF: fsubrp  st(1), st
0x6BF3F1: fstp    [esp+24h+arg_4]
0x6BF3F5: fld     dword ptr [eax+4]
0x6BF3F8: fld     [esp+24h+arg_4]
0x6BF3FC: fld     st
0x6BF3FE: fmulp   st(2), st
0x6BF400: fxch    st(1)
0x6BF402: fstp    [esp+24h+var_18]
0x6BF406: fld     dword ptr [eax+8]
0x6BF409: fmul    st, st(1)
0x6BF40B: fstp    [esp+24h+var_14]
0x6BF40F: fmul    dword ptr [eax+0Ch]
0x6BF412: mov     eax, [esp+24h+arg_8]
0x6BF416: fstp    [esp+24h+var_10]
0x6BF41A: fld     dword ptr [eax+4]
0x6BF41D: fmul    st, st(1)
0x6BF41F: fstp    [esp+24h+var_24]
0x6BF422: fld     dword ptr [eax+8]
0x6BF425: fmul    st, st(1)
0x6BF427: fstp    [esp+24h+var_20]
0x6BF42B: fmul    dword ptr [eax+0Ch]
0x6BF42E: mov     eax, [esp+24h+arg_C]
0x6BF432: fstp    [esp+24h+var_1C]
0x6BF436: fld     [esp+24h+var_24]
0x6BF439: fadd    [esp+24h+var_18]
0x6BF43D: fstp    [esp+24h+var_C]
0x6BF441: mov     ecx, [esp+24h+var_C]
0x6BF445: fld     [esp+24h+var_14]
0x6BF449: mov     [eax], ecx
0x6BF44B: fadd    [esp+24h+var_20]
0x6BF44F: fstp    [esp+24h+var_8]
0x6BF453: mov     edx, [esp+24h+var_8]
0x6BF457: fld     [esp+24h+var_1C]
0x6BF45B: mov     [eax+4], edx
0x6BF45E: fadd    [esp+24h+var_10]
0x6BF462: fstp    [esp+24h+var_4]
0x6BF466: mov     ecx, [esp+24h+var_4]
0x6BF46A: mov     [eax+8], ecx
0x6BF46D: add     esp, 24h
0x6BF470: retn
