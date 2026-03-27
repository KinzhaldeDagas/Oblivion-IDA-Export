0x791E80: sub     esp, 28h
0x791E83: push    ebx
0x791E84: push    esi
0x791E85: mov     esi, [esp+30h+arg_0]
0x791E89: cmp     dword ptr [esi+28h], 0
0x791E8D: mov     ebx, ecx
0x791E8F: jz      loc_792093
0x791E95: fld     dword ptr ds:0B2B714h
0x791E9B: push    edi
0x791E9C: fstp    [esp+34h+var_28]
0x791EA0: call    _rand
0x791EA5: mov     [esp+34h+arg_0], eax
0x791EA9: fild    [esp+34h+arg_0]
0x791EAD: mov     eax, [esi+28h]
0x791EB0: xor     edi, edi
0x791EB2: test    eax, eax
0x791EB4: fdiv    qword ptr ds:0A3D5A8h
0x791EBA: fstp    [esp+34h+arg_0]
0x791EBE: fld     [esp+34h+arg_0]
0x791EC2: fld     [esp+34h+var_28]
0x791EC6: fldz
0x791EC8: mov     [esp+34h+var_28], edi
0x791ECC: fsub    st(1), st
0x791ECE: fxch    st(1)
0x791ED0: fstp    [esp+34h+arg_0]
0x791ED4: fld     [esp+34h+arg_0]
0x791ED8: mov     [esp+34h+arg_0], eax
0x791EDC: fmulp   st(2), st
0x791EDE: faddp   st(1), st
0x791EE0: fstp    [esp+34h+var_1C]
0x791EE4: fld     dword ptr ds:0B2B714h
0x791EEA: fidiv   [esp+34h+arg_0]
0x791EEE: fstp    [esp+34h+arg_0]
0x791EF2: jle     loc_792092
0x791EF8: add     ebx, 30h ; '0'
0x791EFB: jmp     short loc_791F00
0x791EFD: align 10h
0x791F00: fld     [esp+34h+arg_0]
0x791F04: fmul    dword ptr [esi+2Ch]
0x791F07: fstp    [esp+34h+var_20]
0x791F0B: call    _rand
0x791F10: mov     [esp+34h+var_24], eax
0x791F14: fild    [esp+34h+var_24]
0x791F18: fdiv    qword ptr ds:0A3D5A8h
0x791F1E: fstp    [esp+34h+var_24]
0x791F22: fld     [esp+34h+var_24]
0x791F26: fld     [esp+34h+arg_0]
0x791F2A: fld     [esp+34h+var_20]
0x791F2E: fld     st
0x791F30: fsubp   st(2), st
0x791F32: fxch    st(1)
0x791F34: fstp    [esp+34h+var_20]
0x791F38: fld     [esp+34h+var_20]
0x791F3C: fmulp   st(2), st
0x791F3E: faddp   st(1), st
0x791F40: fstp    [esp+34h+var_20]
0x791F44: fld     [esp+34h+var_20]
0x791F48: fimul   [esp+34h+var_28]
0x791F4C: fadd    [esp+34h+var_1C]
0x791F50: fstp    [esp+34h+var_18]
0x791F54: fld     [esp+34h+var_18]
0x791F58: fld     dword ptr ds:0B2B714h
0x791F5E: fcom    st(1)
0x791F60: fnstsw  ax
0x791F62: test    ah, 5
0x791F65: jp      short loc_791F6F
0x791F67: fsubp   st(1), st
0x791F69: fstp    [esp+34h+var_18]
0x791F6D: jmp     short loc_791F73
0x791F6F: fstp    st(1)
0x791F71: fstp    st
0x791F73: fld     dword ptr [esi+38h]
0x791F76: fstp    [esp+34h+var_10]
0x791F7A: fld     dword ptr [esi+4Ch]
0x791F7D: fstp    [esp+34h+var_8]
0x791F81: fld     dword ptr [esi+30h]
0x791F84: fsub    dword ptr [esi+34h]
0x791F87: fstp    [esp+34h+var_28]
0x791F8B: fld     dword ptr [esi+34h]
0x791F8E: fadd    dword ptr [esi+30h]
0x791F91: fstp    [esp+34h+var_24]
0x791F95: call    _rand
0x791F9A: mov     [esp+34h+var_20], eax
0x791F9E: fild    [esp+34h+var_20]
0x791FA2: fdiv    qword ptr ds:0A3D5A8h
0x791FA8: fstp    [esp+34h+var_20]
0x791FAC: fld     [esp+34h+var_20]
0x791FB0: fld     [esp+34h+var_24]
0x791FB4: fld     [esp+34h+var_28]
0x791FB8: fld     st
0x791FBA: fsubp   st(2), st
0x791FBC: fxch    st(1)
0x791FBE: fstp    [esp+34h+var_20]
0x791FC2: fld     [esp+34h+var_20]
0x791FC6: fmulp   st(2), st
0x791FC8: faddp   st(1), st
0x791FCA: fstp    [esp+34h+var_20]
0x791FCE: fld     [esp+34h+var_20]
0x791FD2: fdiv    qword ptr ds:0A8BA48h
0x791FD8: fstp    [esp+34h+var_14]
0x791FDC: fld     dword ptr [esi+44h]
0x791FDF: fsub    dword ptr [esi+48h]
0x791FE2: fstp    [esp+34h+var_28]
0x791FE6: fld     dword ptr [esi+48h]
0x791FE9: fadd    dword ptr [esi+44h]
0x791FEC: fstp    [esp+34h+var_24]
0x791FF0: call    _rand
0x791FF5: mov     [esp+34h+var_20], eax
0x791FF9: fild    [esp+34h+var_20]
0x791FFD: fdiv    qword ptr ds:0A3D5A8h
0x792003: fstp    [esp+34h+var_20]
0x792007: fld     [esp+34h+var_20]
0x79200B: fld     [esp+34h+var_24]
0x79200F: fld     [esp+34h+var_28]
0x792013: fld     st
0x792015: fsubp   st(2), st
0x792017: fxch    st(1)
0x792019: fstp    [esp+34h+var_20]
0x79201D: fld     [esp+34h+var_20]
0x792021: fmulp   st(2), st
0x792023: faddp   st(1), st
0x792025: fstp    [esp+34h+var_C]
0x792029: fld     dword ptr [esi+3Ch]
0x79202C: fsub    dword ptr [esi+40h]
0x79202F: fstp    [esp+34h+var_28]
0x792033: fld     dword ptr [esi+40h]
0x792036: fadd    dword ptr [esi+3Ch]
0x792039: fstp    [esp+34h+var_24]
0x79203D: call    _rand
0x792042: mov     [esp+34h+var_20], eax
0x792046: fild    [esp+34h+var_20]
0x79204A: lea     eax, [esp+34h+var_18]
0x79204E: push    eax
0x79204F: mov     ecx, ebx
0x792051: fdiv    qword ptr ds:0A3D5A8h
0x792057: fstp    [esp+38h+var_20]
0x79205B: fld     [esp+38h+var_20]
0x79205F: fld     [esp+38h+var_24]
0x792063: fld     [esp+38h+var_28]
0x792067: fld     st
0x792069: fsubp   st(2), st
0x79206B: fxch    st(1)
0x79206D: fstp    [esp+38h+var_20]
0x792071: fld     [esp+38h+var_20]
0x792075: fmulp   st(2), st
0x792077: faddp   st(1), st
0x792079: fstp    [esp+38h+var_4]
0x79207D: call    sub_7916D0
0x792082: add     edi, 1
0x792085: cmp     edi, [esi+28h]
0x792088: mov     [esp+34h+var_28], edi
0x79208C: jl      loc_791F00
0x792092: pop     edi
0x792093: pop     esi
0x792094: pop     ebx
0x792095: add     esp, 28h
0x792098: retn    4
