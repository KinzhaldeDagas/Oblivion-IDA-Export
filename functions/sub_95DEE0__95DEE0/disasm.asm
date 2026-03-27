0x95DEE0: sub     esp, 0Ch
0x95DEE3: mov     edx, [esp+0Ch+arg_C]
0x95DEE7: mov     ecx, [esp+0Ch+arg_4]
0x95DEEB: fld     dword ptr [edx+24h]
0x95DEEE: fmul    dword ptr [ecx+8]
0x95DEF1: fld     dword ptr [edx+20h]
0x95DEF4: fmul    dword ptr [ecx+4]
0x95DEF7: faddp   st(1), st
0x95DEF9: fld     dword ptr [edx+28h]
0x95DEFC: fmul    dword ptr [ecx+0Ch]
0x95DEFF: faddp   st(1), st
0x95DF01: fstp    [esp+0Ch+arg_4]
0x95DF05: fld     [esp+0Ch+arg_4]
0x95DF09: fsub    dword ptr [ecx+10h]
0x95DF0C: fstp    [esp+0Ch+arg_4]
0x95DF10: fld     dword ptr [edx+38h]
0x95DF13: fchs
0x95DF15: fstp    [esp+0Ch+arg_C]
0x95DF19: fld     [esp+0Ch+arg_4]
0x95DF1D: fld     [esp+0Ch+arg_C]
0x95DF21: fcom    st(1)
0x95DF23: fnstsw  ax
0x95DF25: test    ah, 41h
0x95DF28: jp      short loc_95DF34
0x95DF2A: fstp    st(1)
0x95DF2C: mov     al, 1
0x95DF2E: fstp    st
0x95DF30: add     esp, 0Ch
0x95DF33: retn
0x95DF34: fld     dword ptr [edx+30h]
0x95DF37: fmul    dword ptr [ecx+8]
0x95DF3A: fld     dword ptr [edx+2Ch]
0x95DF3D: fmul    dword ptr [ecx+4]
0x95DF40: faddp   st(1), st
0x95DF42: fld     dword ptr [edx+34h]
0x95DF45: fmul    dword ptr [ecx+0Ch]
0x95DF48: faddp   st(1), st
0x95DF4A: fstp    [esp+0Ch+arg_4]
0x95DF4E: fld     [esp+0Ch+arg_4]
0x95DF52: fadd    st, st(2)
0x95DF54: fstp    [esp+0Ch+arg_4]
0x95DF58: fld     [esp+0Ch+arg_4]
0x95DF5C: fcom    st(1)
0x95DF5E: fnstsw  ax
0x95DF60: fstp    st(1)
0x95DF62: test    ah, 1
0x95DF65: jz      short loc_95DF2A
0x95DF67: mov     eax, [esp+0Ch+arg_10]
0x95DF6B: fld     dword ptr [eax]
0x95DF6D: push    esi
0x95DF6E: mov     esi, [esp+10h+arg_8]
0x95DF72: fsub    dword ptr [esi]
0x95DF74: fstp    [esp+10h+var_C]
0x95DF78: fld     dword ptr [eax+4]
0x95DF7B: fsub    dword ptr [esi+4]
0x95DF7E: fstp    [esp+10h+var_8]
0x95DF82: fld     dword ptr [eax+8]
0x95DF85: fsub    dword ptr [esi+8]
0x95DF88: pop     esi
0x95DF89: fstp    [esp+0Ch+var_4]
0x95DF8D: fld     dword ptr [ecx+8]
0x95DF90: fmul    [esp+0Ch+var_8]
0x95DF94: fld     [esp+0Ch+var_C]
0x95DF97: fmul    dword ptr [ecx+4]
0x95DF9A: faddp   st(1), st
0x95DF9C: fld     dword ptr [ecx+0Ch]
0x95DF9F: fmul    [esp+0Ch+var_4]
0x95DFA3: faddp   st(1), st
0x95DFA5: fstp    [esp+0Ch+arg_4]
0x95DFA9: fldz
0x95DFAB: fld     [esp+0Ch+arg_4]
0x95DFAF: fcom    st(1)
0x95DFB1: fnstsw  ax
0x95DFB3: fstp    st(1)
0x95DFB5: test    ah, 41h
0x95DFB8: jp      short loc_95DFC6
0x95DFBA: fstp    st(2)
0x95DFBC: xor     al, al
0x95DFBE: fstp    st(1)
0x95DFC0: fstp    st
0x95DFC2: add     esp, 0Ch
0x95DFC5: retn
0x95DFC6: fmul    [esp+0Ch+arg_0]
0x95DFCA: fadd    dword ptr [edx+38h]
0x95DFCD: fchs
0x95DFCF: fstp    [esp+0Ch+arg_4]
0x95DFD3: fld     [esp+0Ch+arg_4]
0x95DFD7: fcom    st(2)
0x95DFD9: fnstsw  ax
0x95DFDB: fstp    st(2)
0x95DFDD: test    ah, 41h
0x95DFE0: jnp     short loc_95DFF1
0x95DFE2: fcompp
0x95DFE4: fnstsw  ax
0x95DFE6: test    ah, 1
0x95DFE9: jz      short loc_95DFF5
0x95DFEB: xor     eax, eax
0x95DFED: add     esp, 0Ch
0x95DFF0: retn
0x95DFF1: fstp    st(1)
0x95DFF3: fstp    st
0x95DFF5: mov     eax, 1
0x95DFFA: add     esp, 0Ch
0x95DFFD: retn
