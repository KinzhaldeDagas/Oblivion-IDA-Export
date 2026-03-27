0x6BFCD0: sub     esp, 18h
0x6BFCD3: mov     eax, [esp+18h+arg_4]
0x6BFCD7: fld     dword ptr [eax+40h]
0x6BFCDA: fld     [esp+18h+arg_0]
0x6BFCDE: fld     st
0x6BFCE0: fmulp   st(2), st
0x6BFCE2: fxch    st(1)
0x6BFCE4: fstp    [esp+18h+var_18]
0x6BFCE7: fld     dword ptr [eax+44h]
0x6BFCEA: fmul    st, st(1)
0x6BFCEC: fstp    [esp+18h+var_14]
0x6BFCF0: fld     dword ptr [eax+48h]
0x6BFCF3: fmul    st, st(1)
0x6BFCF5: fstp    [esp+18h+var_10]
0x6BFCF9: fld     dword ptr [eax+34h]
0x6BFCFC: fadd    [esp+18h+var_18]
0x6BFCFF: fstp    [esp+18h+var_C]
0x6BFD03: fld     dword ptr [eax+38h]
0x6BFD06: fadd    [esp+18h+var_14]
0x6BFD0A: fstp    [esp+18h+var_8]
0x6BFD0E: fld     dword ptr [eax+3Ch]
0x6BFD11: fadd    [esp+18h+var_10]
0x6BFD15: fstp    [esp+18h+var_4]
0x6BFD19: fld     [esp+18h+var_C]
0x6BFD1D: fmul    st, st(1)
0x6BFD1F: fstp    [esp+18h+var_18]
0x6BFD22: fld     [esp+18h+var_8]
0x6BFD26: fmul    st, st(1)
0x6BFD28: fstp    [esp+18h+var_14]
0x6BFD2C: fld     [esp+18h+var_4]
0x6BFD30: fmul    st, st(1)
0x6BFD32: fstp    [esp+18h+var_10]
0x6BFD36: fld     dword ptr [eax+28h]
0x6BFD39: fadd    [esp+18h+var_18]
0x6BFD3C: fstp    [esp+18h+var_C]
0x6BFD40: fld     dword ptr [eax+2Ch]
0x6BFD43: fadd    [esp+18h+var_14]
0x6BFD47: fstp    [esp+18h+var_8]
0x6BFD4B: fld     dword ptr [eax+30h]
0x6BFD4E: fadd    [esp+18h+var_10]
0x6BFD52: fstp    [esp+18h+var_4]
0x6BFD56: fld     [esp+18h+var_C]
0x6BFD5A: fmul    st, st(1)
0x6BFD5C: fstp    [esp+18h+var_18]
0x6BFD5F: fld     [esp+18h+var_8]
0x6BFD63: fmul    st, st(1)
0x6BFD65: fstp    [esp+18h+var_14]
0x6BFD69: fmul    [esp+18h+var_4]
0x6BFD6D: fstp    [esp+18h+var_10]
0x6BFD71: fld     dword ptr [eax+4]
0x6BFD74: fadd    [esp+18h+var_18]
0x6BFD77: fstp    [esp+18h+var_C]
0x6BFD7B: mov     ecx, [esp+18h+var_C]
0x6BFD7F: fld     dword ptr [eax+8]
0x6BFD82: fadd    [esp+18h+var_14]
0x6BFD86: fstp    [esp+18h+var_8]
0x6BFD8A: mov     edx, [esp+18h+var_8]
0x6BFD8E: fld     dword ptr [eax+0Ch]
0x6BFD91: mov     eax, [esp+18h+arg_C]
0x6BFD95: fadd    [esp+18h+var_10]
0x6BFD99: mov     [eax], ecx
0x6BFD9B: mov     [eax+4], edx
0x6BFD9E: fstp    [esp+18h+var_4]
0x6BFDA2: mov     ecx, [esp+18h+var_4]
0x6BFDA6: mov     [eax+8], ecx
0x6BFDA9: add     esp, 18h
0x6BFDAC: retn
