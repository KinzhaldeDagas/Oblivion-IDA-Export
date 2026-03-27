0x6A5A10: sub     esp, 6Ch
0x6A5A13: push    esi
0x6A5A14: mov     esi, [esp+70h+arg_0]
0x6A5A18: mov     eax, [esi]
0x6A5A1A: mov     edx, [eax+174h]
0x6A5A20: push    edi
0x6A5A21: mov     ecx, esi
0x6A5A23: call    edx
0x6A5A25: mov     ecx, [esp+74h+arg_4]
0x6A5A29: fld     dword ptr [ecx+4]
0x6A5A2C: fsub    dword ptr [eax+4]
0x6A5A2F: fstp    [esp+74h+arg_0]
0x6A5A33: fld     dword ptr [ecx+8]
0x6A5A36: fsub    dword ptr [eax+8]
0x6A5A39: fstp    [esp+74h+arg_4]
0x6A5A3D: fld     dword ptr [ecx]
0x6A5A3F: fsub    dword ptr [eax]
0x6A5A41: fstp    [esp+74h+var_6C]
0x6A5A45: fld     [esp+74h+arg_0]
0x6A5A49: fst     [esp+74h+var_68]
0x6A5A4D: fld     [esp+74h+arg_4]
0x6A5A51: fst     [esp+74h+var_64]
0x6A5A55: fld     [esp+74h+var_6C]
0x6A5A59: fmul    st, st
0x6A5A5B: fld     st(2)
0x6A5A5D: fmulp   st(3), st
0x6A5A5F: faddp   st(2), st
0x6A5A61: fmul    st, st
0x6A5A63: faddp   st(1), st
0x6A5A65: fstp    [esp+74h+arg_0]
0x6A5A69: fld     [esp+74h+arg_0]
0x6A5A6D: call    __CIsqrt
0x6A5A72: fstp    [esp+74h+arg_0]
0x6A5A76: fld     [esp+74h+arg_0]
0x6A5A7A: fstp    [esp+74h+arg_0]
0x6A5A7E: fld     [esp+74h+arg_0]
0x6A5A82: fld     qword ptr ds:0A529C0h
0x6A5A88: fcom    st(1)
0x6A5A8A: fnstsw  ax
0x6A5A8C: test    ah, 41h
0x6A5A8F: jnz     short loc_6A5A95
0x6A5A91: fdivp   st(1), st
0x6A5A93: jmp     short loc_6A5AB2
0x6A5A95: fld     qword ptr ds:0A3F470h
0x6A5A9B: fcom    st(2)
0x6A5A9D: fnstsw  ax
0x6A5A9F: test    ah, 41h
0x6A5AA2: jnz     short loc_6A5AAA
0x6A5AA4: fsubrp  st(2), st
0x6A5AA6: fdivp   st(1), st
0x6A5AA8: jmp     short loc_6A5AB2
0x6A5AAA: fstp    st(2)
0x6A5AAC: fstp    st
0x6A5AAE: fstp    st
0x6A5AB0: fldz
0x6A5AB2: mov     ecx, [esi+24h]
0x6A5AB5: fstp    [esp+74h+arg_0]
0x6A5AB9: mov     eax, [esi+20h]
0x6A5ABC: mov     edx, [esi+28h]
0x6A5ABF: mov     [esp+74h+var_5C], ecx
0x6A5AC3: mov     ecx, 9
0x6A5AC8: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6A5ACD: lea     edi, [esp+74h+var_48]
0x6A5AD1: rep movsd
0x6A5AD3: mov     [esp+74h+var_58], edx
0x6A5AD7: push    ecx
0x6A5AD8: fld     [esp+78h+var_58]
0x6A5ADC: lea     ecx, [esp+78h+var_48]
0x6A5AE0: mov     [esp+78h+var_60], eax
0x6A5AE4: fstp    [esp+78h+var_78]; float
0x6A5AE7: call    NiMatrix33_InitRotationTransform
0x6A5AEC: lea     eax, [esp+74h+var_24]
0x6A5AF0: push    eax
0x6A5AF1: lea     ecx, [esp+78h+var_48]
0x6A5AF5: call    sub_7103C0
0x6A5AFA: lea     ecx, [esp+74h+var_48]
0x6A5AFE: push    ecx
0x6A5AFF: lea     edx, [esp+78h+var_6C]
0x6A5B03: push    edx
0x6A5B04: lea     eax, [esp+7Ch+var_54]
0x6A5B08: push    eax
0x6A5B09: call    sub_710250
0x6A5B0E: add     esp, 0Ch
0x6A5B11: lea     ecx, [esp+74h+var_54]
0x6A5B15: call    sub_43F350
0x6A5B1A: fstp    st
0x6A5B1C: fld     [esp+74h+var_54]
0x6A5B20: pop     edi
0x6A5B21: fabs
0x6A5B23: pop     esi
0x6A5B24: fstp    [esp+6Ch+arg_4]
0x6A5B28: fld     [esp+6Ch+arg_4]
0x6A5B2C: fld1
0x6A5B2E: fld     st
0x6A5B30: fsubrp  st(2), st
0x6A5B32: fxch    st(1)
0x6A5B34: fstp    [esp+6Ch+arg_4]
0x6A5B38: fld     [esp+6Ch+arg_4]
0x6A5B3C: fmul    st, st
0x6A5B3E: fstp    [esp+6Ch+arg_4]
0x6A5B42: fld     [esp+6Ch+arg_4]
0x6A5B46: fmul    [esp+6Ch+arg_0]
0x6A5B4A: fld     [esp+6Ch+var_50]
0x6A5B4E: faddp   st(2), st
0x6A5B50: fxch    st(1)
0x6A5B52: fmul    qword ptr ds:0A2FAA0h
0x6A5B58: fstp    [esp+6Ch+arg_0]
0x6A5B5C: fmul    [esp+6Ch+arg_0]
0x6A5B60: fstp    [esp+6Ch+arg_0]
0x6A5B64: fld     [esp+6Ch+arg_0]
0x6A5B68: add     esp, 6Ch
0x6A5B6B: retn
