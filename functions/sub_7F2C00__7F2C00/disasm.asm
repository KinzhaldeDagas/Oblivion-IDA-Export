0x7F2C00: sub     esp, 2Ch
0x7F2C03: mov     edx, [esp+2Ch+arg_0]
0x7F2C07: push    ebx
0x7F2C08: mov     ebx, [esp+30h+arg_8]
0x7F2C0C: push    esi
0x7F2C0D: mov     esi, ecx
0x7F2C0F: mov     eax, [esi+14Ch]
0x7F2C15: mov     ecx, [esp+34h+arg_4]
0x7F2C19: imul    eax, edx
0x7F2C1C: push    edi
0x7F2C1D: lea     edi, [eax+ecx]
0x7F2C20: mov     ecx, [esi+6Ch]
0x7F2C23: add     eax, ebx
0x7F2C25: shl     eax, 4
0x7F2C28: mov     ebx, [eax+ecx]
0x7F2C2B: add     eax, ecx
0x7F2C2D: mov     [esp+38h+var_20], ebx
0x7F2C31: mov     ebx, [eax+4]
0x7F2C34: fld     [esp+38h+var_20]
0x7F2C38: mov     [esp+38h+var_1C], ebx
0x7F2C3C: mov     ebx, [eax+8]
0x7F2C3F: mov     eax, [eax+0Ch]
0x7F2C42: mov     [esp+38h+var_14], eax
0x7F2C46: mov     eax, [esi+14Ch]
0x7F2C4C: mov     [esp+38h+arg_8], eax
0x7F2C50: imul    eax, edx
0x7F2C53: add     eax, [esp+38h+arg_C]
0x7F2C57: mov     [esp+38h+var_18], ebx
0x7F2C5B: shl     eax, 4
0x7F2C5E: mov     edx, [eax+ecx+4]
0x7F2C62: add     eax, ecx
0x7F2C64: mov     ecx, [eax]
0x7F2C66: mov     [esp+38h+var_10], ecx
0x7F2C6A: mov     ecx, [eax+8]
0x7F2C6D: fsub    [esp+38h+var_10]
0x7F2C71: mov     [esp+38h+var_C], edx
0x7F2C75: mov     edx, [eax+0Ch]
0x7F2C78: mov     [esp+38h+var_8], ecx
0x7F2C7C: fstp    dword ptr [esp+38h+var_2C]
0x7F2C80: mov     [esp+38h+var_4], edx
0x7F2C84: fld     [esp+38h+var_1C]
0x7F2C88: fsub    [esp+38h+var_C]
0x7F2C8C: fstp    dword ptr [esp+38h+var_2C+4]
0x7F2C90: fld     [esp+38h+var_18]
0x7F2C94: fsub    [esp+38h+var_8]
0x7F2C98: fstp    [esp+38h+var_24]
0x7F2C9C: fldz
0x7F2C9E: fcomp   dword ptr [esp+38h+var_2C+4]
0x7F2CA2: fnstsw  ax
0x7F2CA4: test    ah, 41h
0x7F2CA7: jnz     short loc_7F2CC6
0x7F2CA9: mov     eax, ds:0B3F9A8h
0x7F2CAE: mov     ecx, ds:0B3F9ACh
0x7F2CB4: mov     edx, ds:0B3F9B0h
0x7F2CBA: mov     dword ptr [esp+38h+var_2C], eax
0x7F2CBE: mov     dword ptr [esp+38h+var_2C+4], ecx
0x7F2CC2: mov     [esp+38h+var_24], edx
0x7F2CC6: fld     dword ptr [esp+38h+var_2C+4]
0x7F2CCA: lea     ecx, [esp+38h+var_2C]
0x7F2CCE: fadd    qword ptr ds:0A2F928h
0x7F2CD4: fstp    dword ptr [esp+38h+var_2C+4]
0x7F2CD8: call    sub_43F350
0x7F2CDD: fstp    st
0x7F2CDF: fld     dword ptr [esi+150h]
0x7F2CE5: fstp    [esp+38h+arg_0]
0x7F2CE9: fld     [esp+38h+arg_0]
0x7F2CED: fld     st
0x7F2CEF: fmul    dword ptr [esp+38h+var_2C]
0x7F2CF3: fstp    dword ptr [esp+38h+var_2C]
0x7F2CF7: fld     st
0x7F2CF9: fmul    dword ptr [esp+38h+var_2C+4]
0x7F2CFD: fstp    dword ptr [esp+38h+var_2C+4]
0x7F2D01: fmul    [esp+38h+var_24]
0x7F2D05: fstp    [esp+38h+var_24]
0x7F2D09: fild    [esp+38h+arg_4]
0x7F2D0D: fidiv   [esp+38h+arg_8]
0x7F2D11: fstp    [esp+38h+arg_0]
0x7F2D15: call    _rand
0x7F2D1A: mov     [esp+38h+arg_4], eax
0x7F2D1E: fild    [esp+38h+arg_4]
0x7F2D22: mov     eax, [esi+6Ch]
0x7F2D25: shl     edi, 4
0x7F2D28: fdiv    qword ptr ds:0A3D5A8h
0x7F2D2E: fstp    [esp+38h+arg_4]
0x7F2D32: fld     dword ptr [esi+154h]
0x7F2D38: fmul    [esp+38h+arg_4]
0x7F2D3C: fld     dword ptr [esp+38h+var_2C]
0x7F2D40: fadd    [esp+38h+var_20]
0x7F2D44: faddp   st(1), st
0x7F2D46: fld     dword ptr [esi+154h]
0x7F2D4C: fmul    qword ptr ds:0A2FAA0h
0x7F2D52: fsubp   st(1), st
0x7F2D54: fstp    [esp+38h+arg_4]
0x7F2D58: fld     [esp+38h+arg_4]
0x7F2D5C: fstp    dword ptr [edi+eax]
0x7F2D5F: mov     ecx, [esi+6Ch]
0x7F2D62: fld     dword ptr [esp+38h+var_2C+4]
0x7F2D66: fadd    [esp+38h+var_1C]
0x7F2D6A: fstp    [esp+38h+arg_4]
0x7F2D6E: fld     [esp+38h+arg_4]
0x7F2D72: fstp    dword ptr [ecx+edi+4]
0x7F2D76: call    _rand
0x7F2D7B: mov     [esp+38h+arg_4], eax
0x7F2D7F: fild    [esp+38h+arg_4]
0x7F2D83: mov     edx, [esi+6Ch]
0x7F2D86: fdiv    qword ptr ds:0A3D5A8h
0x7F2D8C: fstp    [esp+38h+arg_4]
0x7F2D90: fld     dword ptr [esi+154h]
0x7F2D96: fmul    [esp+38h+arg_4]
0x7F2D9A: fld     [esp+38h+var_24]
0x7F2D9E: fadd    [esp+38h+var_18]
0x7F2DA2: faddp   st(1), st
0x7F2DA4: fld     dword ptr [esi+154h]
0x7F2DAA: fmul    qword ptr ds:0A2FAA0h
0x7F2DB0: fsubp   st(1), st
0x7F2DB2: fstp    [esp+38h+arg_4]
0x7F2DB6: fld     [esp+38h+arg_4]
0x7F2DBA: fstp    dword ptr [edx+edi+8]
0x7F2DBE: mov     eax, [esi+6Ch]
0x7F2DC1: fld     dword ptr [esi+70h]
0x7F2DC4: add     eax, edi
0x7F2DC6: fld     [esp+38h+arg_0]
0x7F2DCA: fld     st
0x7F2DCC: fmulp   st(2), st
0x7F2DCE: fld     dword ptr [eax]
0x7F2DD0: fsubp   st(2), st
0x7F2DD2: fxch    st(1)
0x7F2DD4: fstp    dword ptr [esp+38h+var_2C]
0x7F2DD8: fmul    dword ptr [esi+78h]
0x7F2DDB: fsub    dword ptr [eax+8]
0x7F2DDE: fstp    dword ptr [esp+38h+var_2C+4]
0x7F2DE2: fld     dword ptr [esp+38h+var_2C+4]
0x7F2DE6: fld     dword ptr [esp+38h+var_2C]
0x7F2DEA: fmul    st, st
0x7F2DEC: fld     st(1)
0x7F2DEE: fmulp   st(2), st
0x7F2DF0: faddp   st(1), st
0x7F2DF2: fstp    [esp+38h+arg_4]
0x7F2DF6: fld     [esp+38h+arg_4]
0x7F2DFA: call    __CIsqrt
0x7F2DFF: fstp    [esp+38h+arg_4]
0x7F2E03: fld     [esp+38h+arg_4]
0x7F2E07: fstp    [esp+38h+arg_4]
0x7F2E0B: fld     [esp+38h+arg_4]
0x7F2E0F: fld     dword ptr [esi+13Ch]
0x7F2E15: fcomp   st(1)
0x7F2E17: fnstsw  ax
0x7F2E19: test    ah, 5
0x7F2E1C: jp      loc_7F2EAD
0x7F2E22: fld     st
0x7F2E24: fsub    dword ptr [esi+13Ch]
0x7F2E2A: fld     dword ptr [esi+140h]
0x7F2E30: fmul    st, st(1)
0x7F2E32: fdiv    st, st(2)
0x7F2E34: fstp    [esp+38h+arg_4]
0x7F2E38: fld     [esp+38h+arg_4]
0x7F2E3C: fld     st
0x7F2E3E: fmul    st, st(3)
0x7F2E40: fstp    [esp+38h+arg_4]
0x7F2E44: fld     [esp+38h+arg_4]
0x7F2E48: fabs
0x7F2E4A: fstp    [esp+38h+arg_4]
0x7F2E4E: fld     [esp+38h+arg_4]
0x7F2E52: fld     dword ptr [esi+13Ch]
0x7F2E58: fcompp
0x7F2E5A: fnstsw  ax
0x7F2E5C: test    ah, 5
0x7F2E5F: jp      short loc_7F2E6F
0x7F2E61: fstp    st
0x7F2E63: fdivrp  st(1), st
0x7F2E65: fstp    [esp+38h+arg_4]
0x7F2E69: fld     [esp+38h+arg_4]
0x7F2E6D: jmp     short loc_7F2E73
0x7F2E6F: fstp    st(2)
0x7F2E71: fstp    st
0x7F2E73: fld     dword ptr [esp+38h+var_2C]
0x7F2E77: mov     ecx, [esi+6Ch]
0x7F2E7A: fmul    st, st(1)
0x7F2E7C: lea     eax, [ecx+edi]
0x7F2E7F: fstp    dword ptr [esp+38h+var_2C]
0x7F2E83: fmul    dword ptr [esp+38h+var_2C+4]
0x7F2E87: fstp    dword ptr [esp+38h+var_2C+4]
0x7F2E8B: fld     dword ptr [eax]
0x7F2E8D: fadd    dword ptr [esp+38h+var_2C]
0x7F2E91: fstp    dword ptr [eax]
0x7F2E93: mov     edx, [esi+6Ch]
0x7F2E96: fld     dword ptr [edx+edi+8]
0x7F2E9A: lea     eax, [edx+edi+8]
0x7F2E9E: fadd    dword ptr [esp+38h+var_2C+4]
0x7F2EA2: pop     edi
0x7F2EA3: pop     esi
0x7F2EA4: pop     ebx
0x7F2EA5: fstp    dword ptr [eax]
0x7F2EA7: add     esp, 2Ch
0x7F2EAA: retn    10h
0x7F2EAD: pop     edi
0x7F2EAE: fstp    st
0x7F2EB0: pop     esi
0x7F2EB1: pop     ebx
0x7F2EB2: add     esp, 2Ch
0x7F2EB5: retn    10h
