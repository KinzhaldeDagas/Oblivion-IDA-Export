0x978C00: sub     esp, 24h
0x978C03: push    ebx
0x978C04: push    ebp
0x978C05: push    esi
0x978C06: mov     esi, [esp+30h+arg_4]
0x978C0A: mov     eax, [esi]
0x978C0C: mov     ecx, [esi+4]
0x978C0F: fld     dword ptr [ecx]
0x978C11: mov     ebx, [esp+30h+arg_14]
0x978C15: fsub    dword ptr [eax]
0x978C17: mov     ebp, [esp+30h+arg_10]
0x978C1B: push    edi
0x978C1C: mov     edi, [esp+34h+arg_0]
0x978C20: fstp    [esp+34h+var_C]
0x978C24: mov     edx, [edi+4]
0x978C27: fld     dword ptr [ecx+4]
0x978C2A: push    ebx; int
0x978C2B: fsub    dword ptr [eax+4]
0x978C2E: push    ebp; int
0x978C2F: fstp    [esp+3Ch+var_8]
0x978C33: fld     dword ptr [ecx+8]
0x978C36: mov     ecx, [esi+8]
0x978C39: fsub    dword ptr [eax+8]
0x978C3C: push    ecx
0x978C3D: fstp    [esp+40h+var_4]
0x978C41: fld     dword ptr [ecx]
0x978C43: fsub    dword ptr [eax]
0x978C45: fstp    [esp+40h+var_18]
0x978C49: fld     dword ptr [ecx+4]
0x978C4C: fsub    dword ptr [eax+4]
0x978C4F: fstp    [esp+40h+var_14]
0x978C53: fld     dword ptr [ecx+8]
0x978C56: fsub    dword ptr [eax+8]
0x978C59: fstp    [esp+40h+var_10]
0x978C5D: fld     [esp+40h+var_10]
0x978C61: fld     st
0x978C63: fld     [esp+40h+var_8]
0x978C67: fld     st
0x978C69: fmulp   st(2), st
0x978C6B: fld     [esp+40h+var_14]
0x978C6F: fld     st
0x978C71: fld     [esp+40h+var_4]
0x978C75: fld     st
0x978C77: fmulp   st(2), st
0x978C79: fxch    st(4)
0x978C7B: fsubrp  st(1), st
0x978C7D: fstp    [esp+40h+var_24]
0x978C81: fld     [esp+40h+var_18]
0x978C85: fld     st
0x978C87: fmulp   st(4), st
0x978C89: fld     [esp+40h+var_C]
0x978C8D: fld     st
0x978C8F: fmulp   st(6), st
0x978C91: fxch    st(4)
0x978C93: fsubrp  st(5), st
0x978C95: fxch    st(4)
0x978C97: fstp    [esp+40h+var_20]
0x978C9B: fmulp   st(2), st
0x978C9D: fmulp   st(2), st
0x978C9F: fsubrp  st(1), st
0x978CA1: fstp    [esp+40h+var_1C]
0x978CA5: fld     dword ptr [eax+4]
0x978CA8: fmul    [esp+40h+var_20]
0x978CAC: fld     dword ptr [eax]
0x978CAE: fmul    [esp+40h+var_24]
0x978CB2: faddp   st(1), st
0x978CB4: fld     dword ptr [eax+8]
0x978CB7: mov     eax, [esp+40h+arg_8]
0x978CBB: fmul    [esp+40h+var_1C]
0x978CBF: faddp   st(1), st
0x978CC1: fstp    [esp+40h+arg_4]
0x978CC5: fld     [esp+40h+arg_C]
0x978CC9: fstp    [esp+40h+var_40]; float
0x978CCC: push    eax; int
0x978CCD: fld     [esp+44h+arg_4]
0x978CD1: mov     eax, [edi]
0x978CD3: push    ecx
0x978CD4: fstp    [esp+48h+var_48]; float
0x978CD7: lea     ecx, [esp+48h+var_24]
0x978CDB: push    ecx; int
0x978CDC: push    esi; int
0x978CDD: push    edx; int
0x978CDE: push    eax; int
0x978CDF: call    sub_978770
0x978CE4: fld     [esp+58h+arg_C]
0x978CE8: add     esp, 24h
0x978CEB: push    ebx; int
0x978CEC: push    ebp; int
0x978CED: push    ecx
0x978CEE: mov     ecx, [esp+40h+arg_8]
0x978CF2: fstp    [esp+40h+var_40]; float
0x978CF5: fld     [esp+40h+arg_4]
0x978CF9: push    ecx; int
0x978CFA: push    ecx
0x978CFB: mov     ecx, [edi]
0x978CFD: fstp    [esp+48h+var_48]; float
0x978D00: lea     edx, [esp+48h+var_24]
0x978D04: push    edx; int
0x978D05: mov     [esp+4Ch+arg_0], eax
0x978D09: mov     eax, [edi+8]
0x978D0C: push    esi; int
0x978D0D: push    eax; int
0x978D0E: push    ecx; int
0x978D0F: call    sub_978770
0x978D14: fld     [esp+58h+arg_C]
0x978D18: mov     edx, [esp+58h+arg_8]
0x978D1C: or      [esp+58h+arg_0], eax
0x978D20: add     esp, 24h
0x978D23: push    ebx; int
0x978D24: push    ebp; int
0x978D25: push    ecx
0x978D26: fstp    [esp+40h+var_40]; float
0x978D29: push    edx; int
0x978D2A: fld     [esp+44h+arg_4]
0x978D2E: mov     edx, [edi+4]
0x978D31: push    ecx
0x978D32: mov     ecx, [edi+8]
0x978D35: fstp    [esp+48h+var_48]; float
0x978D38: lea     eax, [esp+48h+var_24]
0x978D3C: push    eax; int
0x978D3D: push    esi; int
0x978D3E: push    ecx; int
0x978D3F: push    edx; int
0x978D40: call    sub_978770
0x978D45: add     esp, 24h
0x978D48: or      eax, [esp+34h+arg_0]
0x978D4C: pop     edi
0x978D4D: pop     esi
0x978D4E: pop     ebp
0x978D4F: pop     ebx
0x978D50: add     esp, 24h
0x978D53: retn
