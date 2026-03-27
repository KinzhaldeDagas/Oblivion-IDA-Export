0x4D8D90: sub     esp, 30h
0x4D8D93: push    esi
0x4D8D94: mov     esi, ecx
0x4D8D96: mov     eax, [esi]
0x4D8D98: mov     edx, [eax+15Ch]
0x4D8D9E: push    edi
0x4D8D9F: lea     ecx, [esp+38h+var_18]
0x4D8DA3: push    ecx
0x4D8DA4: mov     ecx, esi
0x4D8DA6: call    edx
0x4D8DA8: mov     edi, eax
0x4D8DAA: mov     eax, [esi]
0x4D8DAC: mov     edx, [eax+158h]
0x4D8DB2: lea     ecx, [esp+38h+var_C]
0x4D8DB6: push    ecx
0x4D8DB7: mov     ecx, esi
0x4D8DB9: call    edx
0x4D8DBB: fld     dword ptr [eax]
0x4D8DBD: fadd    dword ptr [edi]
0x4D8DBF: mov     ecx, esi
0x4D8DC1: fstp    [esp+38h+var_30]
0x4D8DC5: fld     dword ptr [edi+4]
0x4D8DC8: fadd    dword ptr [eax+4]
0x4D8DCB: fstp    [esp+38h+var_2C]
0x4D8DCF: fld     dword ptr [edi+8]
0x4D8DD2: fadd    dword ptr [eax+8]
0x4D8DD5: mov     eax, [esi]
0x4D8DD7: mov     edx, [eax+174h]
0x4D8DDD: fstp    [esp+38h+var_28]
0x4D8DE1: fld     [esp+38h+var_30]
0x4D8DE5: fld     qword ptr ds:0A2FAA0h
0x4D8DEB: fmul    st(1), st
0x4D8DED: fxch    st(1)
0x4D8DEF: fstp    [esp+38h+var_24]
0x4D8DF3: fld     [esp+38h+var_2C]
0x4D8DF7: fmul    st, st(1)
0x4D8DF9: fstp    [esp+38h+var_20]
0x4D8DFD: fmul    [esp+38h+var_28]
0x4D8E01: fstp    [esp+38h+var_1C]
0x4D8E05: call    edx
0x4D8E07: fld     dword ptr [eax]
0x4D8E09: mov     ecx, [esp+38h+arg_0]
0x4D8E0D: fadd    [esp+38h+var_24]
0x4D8E11: pop     edi
0x4D8E12: pop     esi
0x4D8E13: fstp    dword ptr [ecx]
0x4D8E15: fld     dword ptr [eax+4]
0x4D8E18: fadd    [esp+30h+var_20]
0x4D8E1C: fstp    dword ptr [ecx+4]
0x4D8E1F: fld     dword ptr [eax+8]
0x4D8E22: mov     eax, ecx
0x4D8E24: fadd    [esp+30h+var_1C]
0x4D8E28: fstp    dword ptr [ecx+8]
0x4D8E2B: add     esp, 30h
0x4D8E2E: retn    4
