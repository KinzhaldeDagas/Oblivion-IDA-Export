0x67DE90: sub     esp, 30h
0x67DE93: push    esi
0x67DE94: push    edi
0x67DE95: mov     edi, [esp+38h+arg_0]
0x67DE99: test    edi, edi
0x67DE9B: mov     esi, ecx
0x67DE9D: jz      loc_67DFED
0x67DEA3: mov     ecx, edi
0x67DEA5: call    sub_42B410
0x67DEAA: test    eax, eax
0x67DEAC: jz      loc_67DFED
0x67DEB2: mov     eax, ds:0B333A0h
0x67DEB7: cmp     dword ptr [eax+34h], 0
0x67DEBB: jnz     loc_67DFED
0x67DEC1: mov     ecx, [esi+24h]
0x67DEC4: test    ecx, ecx
0x67DEC6: jnz     short loc_67DF17
0x67DEC8: mov     [esp+38h+arg_0], ecx
0x67DECC: lea     ecx, [esp+38h+arg_0]
0x67DED0: push    ecx
0x67DED1: mov     ecx, edi
0x67DED3: call    TESHealthForm_GetHealth
0x67DED8: push    eax
0x67DED9: mov     ecx, edi
0x67DEDB: call    sub_68BF60
0x67DEE0: test    al, al
0x67DEE2: jz      short loc_67DF07
0x67DEE4: mov     ecx, [esp+38h+arg_0]
0x67DEE8: test    ecx, ecx
0x67DEEA: jz      short loc_67DF07
0x67DEEC: call    sub_6899C0
0x67DEF1: mov     edx, [eax]
0x67DEF3: mov     [esp+38h+var_30], edx
0x67DEF7: mov     ecx, [eax+4]
0x67DEFA: mov     [esp+38h+var_2C], ecx
0x67DEFE: mov     edx, [eax+8]
0x67DF01: mov     [esp+38h+var_28], edx
0x67DF05: jmp     short loc_67DF30
0x67DF07: mov     ecx, edi
0x67DF09: call    sub_42B410
0x67DF0E: mov     ecx, eax
0x67DF10: call    sub_6899C0
0x67DF15: jmp     short loc_67DF1C
0x67DF17: call    sub_4BEF40
0x67DF1C: mov     ecx, [eax]
0x67DF1E: mov     [esp+38h+var_30], ecx
0x67DF22: mov     edx, [eax+4]
0x67DF25: mov     [esp+38h+var_2C], edx
0x67DF29: mov     eax, [eax+8]
0x67DF2C: mov     [esp+38h+var_28], eax
0x67DF30: fld1
0x67DF32: push    ecx
0x67DF33: fstp    [esp+3Ch+var_3C]; float
0x67DF36: lea     ecx, [esp+3Ch+var_18]
0x67DF3A: push    ecx; int
0x67DF3B: mov     ecx, ds:0B333A0h
0x67DF41: add     esi, 0Ch
0x67DF44: push    esi; int
0x67DF45: lea     edx, [esp+44h+var_30]
0x67DF49: push    edx; int
0x67DF4A: call    sub_43F7C0
0x67DF4F: test    eax, eax
0x67DF51: jz      loc_67DFED
0x67DF57: fld     dword ptr [esi]
0x67DF59: lea     ecx, [esp+38h+var_24]
0x67DF5D: fsub    [esp+38h+var_30]
0x67DF61: fstp    [esp+38h+var_24]
0x67DF65: fld     dword ptr [esi+4]
0x67DF68: fsub    [esp+38h+var_2C]
0x67DF6C: fstp    [esp+38h+var_20]
0x67DF70: fld     dword ptr [esi+8]
0x67DF73: fsub    [esp+38h+var_28]
0x67DF77: fstp    [esp+38h+var_1C]
0x67DF7B: call    sub_43F350
0x67DF80: fstp    st
0x67DF82: mov     ecx, edi
0x67DF84: fld     [esp+38h+var_28]
0x67DF88: fst     [esp+38h+var_10]
0x67DF8C: fld     [esp+38h+var_18]
0x67DF90: fld     st
0x67DF92: fld     [esp+38h+var_24]
0x67DF96: fld     st
0x67DF98: faddp   st(2), st
0x67DF9A: fxch    st(1)
0x67DF9C: fstp    [esp+38h+var_C]
0x67DFA0: fld     [esp+38h+var_14]
0x67DFA4: fld     st
0x67DFA6: fld     [esp+38h+var_20]
0x67DFAA: fld     st
0x67DFAC: faddp   st(2), st
0x67DFAE: fxch    st(1)
0x67DFB0: fstp    [esp+38h+var_8]
0x67DFB4: fld     [esp+38h+var_1C]
0x67DFB8: fld     st
0x67DFBA: fadd    st, st(6)
0x67DFBC: fstp    [esp+38h+var_4]
0x67DFC0: fxch    st(4)
0x67DFC2: fsubrp  st(3), st
0x67DFC4: fxch    st(2)
0x67DFC6: fstp    [esp+38h+var_24]
0x67DFCA: fsubrp  st(1), st
0x67DFCC: fstp    [esp+38h+var_20]
0x67DFD0: fsubp   st(1), st
0x67DFD2: fstp    [esp+38h+var_1C]
0x67DFD6: call    TESHealthForm_GetHealth
0x67DFDB: push    eax
0x67DFDC: lea     eax, [esp+3Ch+var_C]
0x67DFE0: push    eax
0x67DFE1: lea     ecx, [esp+40h+var_24]
0x67DFE5: push    ecx
0x67DFE6: mov     ecx, edi
0x67DFE8: call    sub_68C3A0
0x67DFED: pop     edi
0x67DFEE: pop     esi
0x67DFEF: add     esp, 30h
0x67DFF2: retn    4
