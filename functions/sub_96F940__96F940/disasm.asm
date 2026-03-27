0x96F940: sub     esp, 34h
0x96F943: push    esi
0x96F944: mov     esi, ecx
0x96F946: fld     dword ptr [esi+44h]
0x96F949: push    ecx
0x96F94A: mov     ecx, [esi+38h]
0x96F94D: fstp    [esp+3Ch+var_3C]; float
0x96F950: lea     eax, [esp+3Ch+var_30]
0x96F954: push    eax; int
0x96F955: add     ecx, 20h ; ' '
0x96F958: call    sub_976A50
0x96F95D: fld     dword ptr [esi+48h]
0x96F960: push    ecx
0x96F961: lea     ecx, [esp+3Ch+var_24]
0x96F965: fstp    [esp+3Ch+var_3C]; float
0x96F968: push    ecx; int
0x96F969: mov     ecx, [esi+3Ch]
0x96F96C: add     ecx, 20h ; ' '
0x96F96F: call    sub_976A50
0x96F974: cmp     dword ptr [esi+18h], 2
0x96F978: jnz     loc_96FACC
0x96F97E: mov     eax, [esp+38h+arg_0]
0x96F982: fld     dword ptr [esi+1Ch]
0x96F985: fstp    [esp+38h+var_34]
0x96F989: push    edi
0x96F98A: fld     dword ptr [eax]
0x96F98C: lea     edi, [esi+2Ch]
0x96F98F: fld     [esp+3Ch+var_34]
0x96F993: fld     st
0x96F995: fmulp   st(2), st
0x96F997: fxch    st(1)
0x96F999: fstp    [esp+3Ch+var_18]
0x96F99D: fld     dword ptr [eax+4]
0x96F9A0: fmul    st, st(1)
0x96F9A2: fstp    [esp+3Ch+var_14]
0x96F9A6: fmul    dword ptr [eax+8]
0x96F9A9: mov     eax, [esp+3Ch+arg_4]
0x96F9AD: fstp    [esp+3Ch+var_10]
0x96F9B1: fld     [esp+3Ch+var_18]
0x96F9B5: fadd    [esp+3Ch+var_30]
0x96F9B9: fstp    [esp+3Ch+var_30]
0x96F9BD: fld     [esp+3Ch+var_2C]
0x96F9C1: fadd    [esp+3Ch+var_14]
0x96F9C5: fstp    [esp+3Ch+var_2C]
0x96F9C9: fld     [esp+3Ch+var_28]
0x96F9CD: fadd    [esp+3Ch+var_10]
0x96F9D1: fstp    [esp+3Ch+var_28]
0x96F9D5: fld     dword ptr [esi+1Ch]
0x96F9D8: fstp    [esp+3Ch+arg_0]
0x96F9DC: fld     dword ptr [eax]
0x96F9DE: fld     [esp+3Ch+arg_0]
0x96F9E2: fld     st
0x96F9E4: fmulp   st(2), st
0x96F9E6: fxch    st(1)
0x96F9E8: fstp    [esp+3Ch+var_18]
0x96F9EC: fld     dword ptr [eax+4]
0x96F9EF: fmul    st, st(1)
0x96F9F1: fstp    [esp+3Ch+var_14]
0x96F9F5: fmul    dword ptr [eax+8]
0x96F9F8: fstp    [esp+3Ch+var_10]
0x96F9FC: fld     [esp+3Ch+var_18]
0x96FA00: fadd    [esp+3Ch+var_24]
0x96FA04: fstp    [esp+3Ch+var_24]
0x96FA08: fld     [esp+3Ch+var_20]
0x96FA0C: fadd    [esp+3Ch+var_14]
0x96FA10: fstp    [esp+3Ch+var_20]
0x96FA14: fld     [esp+3Ch+var_1C]
0x96FA18: fadd    [esp+3Ch+var_10]
0x96FA1C: fstp    [esp+3Ch+var_1C]
0x96FA20: fld     [esp+3Ch+var_24]
0x96FA24: fsub    [esp+3Ch+var_30]
0x96FA28: fstp    [esp+3Ch+var_18]
0x96FA2C: mov     edx, [esp+3Ch+var_18]
0x96FA30: fld     [esp+3Ch+var_20]
0x96FA34: mov     [edi], edx
0x96FA36: fsub    [esp+3Ch+var_2C]
0x96FA3A: fstp    [esp+3Ch+var_14]
0x96FA3E: mov     eax, [esp+3Ch+var_14]
0x96FA42: fld     [esp+3Ch+var_1C]
0x96FA46: mov     [edi+4], eax
0x96FA49: fsub    [esp+3Ch+var_28]
0x96FA4D: fstp    [esp+3Ch+var_10]
0x96FA51: mov     ecx, [esp+3Ch+var_10]
0x96FA55: mov     [edi+8], ecx
0x96FA58: mov     ecx, edi
0x96FA5A: call    sub_43F350
0x96FA5F: fstp    st
0x96FA61: mov     edx, [esi+38h]
0x96FA64: fld     dword ptr [edx+38h]
0x96FA67: fstp    [esp+3Ch+arg_0]
0x96FA6B: fld     dword ptr [edi]
0x96FA6D: fld     [esp+3Ch+arg_0]
0x96FA71: fld     st
0x96FA73: fmulp   st(2), st
0x96FA75: fxch    st(1)
0x96FA77: fstp    [esp+3Ch+var_18]
0x96FA7B: fld     dword ptr [edi+4]
0x96FA7E: fmul    st, st(1)
0x96FA80: fstp    [esp+3Ch+var_14]
0x96FA84: fmul    dword ptr [edi+8]
0x96FA87: fstp    [esp+3Ch+var_10]
0x96FA8B: fld     [esp+3Ch+var_18]
0x96FA8F: fadd    [esp+3Ch+var_30]
0x96FA93: pop     edi
0x96FA94: fstp    [esp+38h+var_24]
0x96FA98: mov     eax, [esp+38h+var_24]
0x96FA9C: fld     [esp+38h+var_14]
0x96FAA0: mov     [esi+20h], eax
0x96FAA3: fadd    [esp+38h+var_2C]
0x96FAA7: fstp    [esp+38h+var_20]
0x96FAAB: mov     ecx, [esp+38h+var_20]
0x96FAAF: fld     [esp+38h+var_10]
0x96FAB3: mov     [esi+24h], ecx
0x96FAB6: fadd    [esp+38h+var_28]
0x96FABA: fstp    [esp+38h+var_1C]
0x96FABE: mov     edx, [esp+38h+var_1C]
0x96FAC2: mov     [esi+28h], edx
0x96FAC5: pop     esi
0x96FAC6: add     esp, 34h
0x96FAC9: retn    8
0x96FACC: fld     [esp+38h+var_24]
0x96FAD0: fadd    [esp+38h+var_30]
0x96FAD4: fstp    [esp+38h+var_18]
0x96FAD8: fld     [esp+38h+var_20]
0x96FADC: fadd    [esp+38h+var_2C]
0x96FAE0: fstp    [esp+38h+var_14]
0x96FAE4: fld     [esp+38h+var_1C]
0x96FAE8: fadd    [esp+38h+var_28]
0x96FAEC: fstp    [esp+38h+var_10]
0x96FAF0: fld     [esp+38h+var_18]
0x96FAF4: fld     qword ptr ds:0A2FAA0h
0x96FAFA: fmul    st(1), st
0x96FAFC: fxch    st(1)
0x96FAFE: fstp    [esp+38h+var_C]
0x96FB02: mov     eax, [esp+38h+var_C]
0x96FB06: fld     [esp+38h+var_14]
0x96FB0A: mov     [esi+20h], eax
0x96FB0D: fmul    st, st(1)
0x96FB0F: lea     eax, [esp+38h+var_30]
0x96FB13: push    eax
0x96FB14: fstp    [esp+3Ch+var_8]
0x96FB18: mov     ecx, [esp+3Ch+var_8]
0x96FB1C: mov     [esi+24h], ecx
0x96FB1F: fmul    [esp+3Ch+var_10]
0x96FB23: lea     ecx, [esp+3Ch+var_24]
0x96FB27: fstp    [esp+3Ch+var_4]
0x96FB2B: mov     edx, [esp+3Ch+var_4]
0x96FB2F: mov     [esi+28h], edx
0x96FB32: call    sub_8AA390
0x96FB37: test    al, al
0x96FB39: jz      short loc_96FB84
0x96FB3B: fld     [esp+38h+var_24]
0x96FB3F: lea     ecx, [esi+2Ch]
0x96FB42: fsub    [esp+38h+var_30]
0x96FB46: fstp    [esp+38h+var_C]
0x96FB4A: mov     edx, [esp+38h+var_C]
0x96FB4E: fld     [esp+38h+var_20]
0x96FB52: mov     [ecx], edx
0x96FB54: fsub    [esp+38h+var_2C]
0x96FB58: fstp    [esp+38h+var_8]
0x96FB5C: mov     eax, [esp+38h+var_8]
0x96FB60: fld     [esp+38h+var_1C]
0x96FB64: mov     [ecx+4], eax
0x96FB67: fsub    [esp+38h+var_28]
0x96FB6B: fstp    [esp+38h+var_4]
0x96FB6F: mov     edx, [esp+38h+var_4]
0x96FB73: mov     [ecx+8], edx
0x96FB76: call    sub_43F350
0x96FB7B: fstp    st
0x96FB7D: pop     esi
0x96FB7E: add     esp, 34h
0x96FB81: retn    8
0x96FB84: mov     eax, ds:0B258E8h
0x96FB89: mov     [esi+2Ch], eax
0x96FB8C: mov     ecx, ds:0B258ECh
0x96FB92: mov     [esi+30h], ecx
0x96FB95: mov     edx, ds:0B258F0h
0x96FB9B: mov     [esi+34h], edx
0x96FB9E: pop     esi
0x96FB9F: add     esp, 34h
0x96FBA2: retn    8
