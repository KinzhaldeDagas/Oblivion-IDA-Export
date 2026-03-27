0x6BFDB0: sub     esp, 24h
0x6BFDB3: mov     eax, [esp+24h+arg_4]
0x6BFDB7: fld     [esp+24h+arg_0]
0x6BFDBB: fld     qword ptr ds:0A30E48h
0x6BFDC1: fmul    st, st(1)
0x6BFDC3: fstp    [esp+24h+arg_0]
0x6BFDC7: fld     dword ptr [eax+40h]
0x6BFDCA: fld     [esp+24h+arg_0]
0x6BFDCE: fld     st
0x6BFDD0: fmulp   st(2), st
0x6BFDD2: fxch    st(1)
0x6BFDD4: fstp    [esp+24h+var_18]
0x6BFDD8: fld     dword ptr [eax+44h]
0x6BFDDB: fmul    st, st(1)
0x6BFDDD: fstp    [esp+24h+var_14]
0x6BFDE1: fmul    dword ptr [eax+48h]
0x6BFDE4: fstp    [esp+24h+var_10]
0x6BFDE8: fld     dword ptr [eax+34h]
0x6BFDEB: fld     qword ptr ds:0A3D0C0h
0x6BFDF1: fmul    st(1), st
0x6BFDF3: fxch    st(1)
0x6BFDF5: fstp    [esp+24h+var_24]
0x6BFDF8: fld     dword ptr [eax+38h]
0x6BFDFB: fmul    st, st(1)
0x6BFDFD: fstp    [esp+24h+var_20]
0x6BFE01: fmul    dword ptr [eax+3Ch]
0x6BFE04: fstp    [esp+24h+var_1C]
0x6BFE08: fld     [esp+24h+var_24]
0x6BFE0B: fadd    [esp+24h+var_18]
0x6BFE0F: fstp    [esp+24h+var_C]
0x6BFE13: fld     [esp+24h+var_20]
0x6BFE17: fadd    [esp+24h+var_14]
0x6BFE1B: fstp    [esp+24h+var_8]
0x6BFE1F: fld     [esp+24h+var_1C]
0x6BFE23: fadd    [esp+24h+var_10]
0x6BFE27: fstp    [esp+24h+var_4]
0x6BFE2B: fld     [esp+24h+var_C]
0x6BFE2F: fmul    st, st(1)
0x6BFE31: fstp    [esp+24h+var_18]
0x6BFE35: fld     [esp+24h+var_8]
0x6BFE39: fmul    st, st(1)
0x6BFE3B: fstp    [esp+24h+var_14]
0x6BFE3F: fmul    [esp+24h+var_4]
0x6BFE43: fstp    [esp+24h+var_10]
0x6BFE47: fld     dword ptr [eax+28h]
0x6BFE4A: fadd    [esp+24h+var_18]
0x6BFE4E: fstp    [esp+24h+var_C]
0x6BFE52: mov     ecx, [esp+24h+var_C]
0x6BFE56: fld     dword ptr [eax+2Ch]
0x6BFE59: fadd    [esp+24h+var_14]
0x6BFE5D: fstp    [esp+24h+var_8]
0x6BFE61: mov     edx, [esp+24h+var_8]
0x6BFE65: fld     dword ptr [eax+30h]
0x6BFE68: mov     eax, [esp+24h+arg_C]
0x6BFE6C: fadd    [esp+24h+var_10]
0x6BFE70: mov     [eax], ecx
0x6BFE72: mov     [eax+4], edx
0x6BFE75: fstp    [esp+24h+var_4]
0x6BFE79: mov     ecx, [esp+24h+var_4]
0x6BFE7D: mov     [eax+8], ecx
0x6BFE80: add     esp, 24h
0x6BFE83: retn
