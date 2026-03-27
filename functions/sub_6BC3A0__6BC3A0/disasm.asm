0x6BC3A0: sub     esp, 18h
0x6BC3A3: mov     eax, [esp+18h+arg_4]
0x6BC3A7: fld     dword ptr [eax+34h]
0x6BC3AA: fld     [esp+18h+arg_0]
0x6BC3AE: fld     st
0x6BC3B0: fmulp   st(2), st
0x6BC3B2: fxch    st(1)
0x6BC3B4: fstp    [esp+18h+var_18]
0x6BC3B7: fld     dword ptr [eax+38h]
0x6BC3BA: fmul    st, st(1)
0x6BC3BC: fstp    [esp+18h+var_14]
0x6BC3C0: fld     dword ptr [eax+3Ch]
0x6BC3C3: fmul    st, st(1)
0x6BC3C5: fstp    [esp+18h+var_10]
0x6BC3C9: fld     dword ptr [eax+28h]
0x6BC3CC: fadd    [esp+18h+var_18]
0x6BC3CF: fstp    [esp+18h+var_C]
0x6BC3D3: fld     dword ptr [eax+2Ch]
0x6BC3D6: fadd    [esp+18h+var_14]
0x6BC3DA: fstp    [esp+18h+var_8]
0x6BC3DE: fld     dword ptr [eax+30h]
0x6BC3E1: fadd    [esp+18h+var_10]
0x6BC3E5: fstp    [esp+18h+var_4]
0x6BC3E9: fld     [esp+18h+var_C]
0x6BC3ED: fmul    st, st(1)
0x6BC3EF: fstp    [esp+18h+var_18]
0x6BC3F2: fld     [esp+18h+var_8]
0x6BC3F6: fmul    st, st(1)
0x6BC3F8: fstp    [esp+18h+var_14]
0x6BC3FC: fld     [esp+18h+var_4]
0x6BC400: fmul    st, st(1)
0x6BC402: fstp    [esp+18h+var_10]
0x6BC406: fld     dword ptr [eax+1Ch]
0x6BC409: fadd    [esp+18h+var_18]
0x6BC40C: fstp    [esp+18h+var_C]
0x6BC410: fld     dword ptr [eax+20h]
0x6BC413: fadd    [esp+18h+var_14]
0x6BC417: fstp    [esp+18h+var_8]
0x6BC41B: fld     dword ptr [eax+24h]
0x6BC41E: fadd    [esp+18h+var_10]
0x6BC422: fstp    [esp+18h+var_4]
0x6BC426: fld     [esp+18h+var_C]
0x6BC42A: fmul    st, st(1)
0x6BC42C: fstp    [esp+18h+var_18]
0x6BC42F: fld     [esp+18h+var_8]
0x6BC433: fmul    st, st(1)
0x6BC435: fstp    [esp+18h+var_14]
0x6BC439: fmul    [esp+18h+var_4]
0x6BC43D: fstp    [esp+18h+var_10]
0x6BC441: fld     dword ptr [eax+4]
0x6BC444: fadd    [esp+18h+var_18]
0x6BC447: fstp    [esp+18h+var_C]
0x6BC44B: mov     ecx, [esp+18h+var_C]
0x6BC44F: fld     dword ptr [eax+8]
0x6BC452: fadd    [esp+18h+var_14]
0x6BC456: fstp    [esp+18h+var_8]
0x6BC45A: mov     edx, [esp+18h+var_8]
0x6BC45E: fld     dword ptr [eax+0Ch]
0x6BC461: mov     eax, [esp+18h+arg_C]
0x6BC465: fadd    [esp+18h+var_10]
0x6BC469: mov     [eax], ecx
0x6BC46B: mov     [eax+4], edx
0x6BC46E: fstp    [esp+18h+var_4]
0x6BC472: mov     ecx, [esp+18h+var_4]
0x6BC476: mov     [eax+8], ecx
0x6BC479: add     esp, 18h
0x6BC47C: retn
