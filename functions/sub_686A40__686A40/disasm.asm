0x686A40: push    ebp
0x686A41: mov     ebp, esp
0x686A43: and     esp, 0FFFFFFF8h
0x686A46: push    0FFFFFFFFh
0x686A48: push    offset SEH_686A40
0x686A4D: mov     eax, large fs:0
0x686A53: push    eax
0x686A54: sub     esp, 658h
0x686A5A: push    ebx
0x686A5B: push    esi
0x686A5C: push    edi
0x686A5D: mov     eax, ds:0B30AACh
0x686A62: xor     eax, esp
0x686A64: push    eax
0x686A65: lea     eax, [esp+674h+var_C]
0x686A6C: mov     large fs:0, eax
0x686A72: mov     edi, [ebp+arg_C]
0x686A75: mov     esi, [ebp+arg_8]
0x686A78: fld     dword ptr [edi]
0x686A7A: fsub    dword ptr [esi]
0x686A7C: fstp    [esp+674h+var_65C]
0x686A80: fld     dword ptr [edi+4]
0x686A83: fsub    dword ptr [esi+4]
0x686A86: fstp    [esp+674h+var_64C]
0x686A8A: fld     dword ptr [edi+8]
0x686A8D: fsub    dword ptr [esi+8]
0x686A90: fstp    [esp+674h+var_640]
0x686A94: fld     [esp+674h+var_65C]
0x686A98: fstp    [esp+674h+var_658]
0x686A9C: fld     [esp+674h+var_64C]
0x686AA0: fstp    [esp+674h+var_654]
0x686AA4: fld     [esp+674h+var_640]
0x686AA8: fstp    [esp+674h+var_650]
0x686AAC: fld     [esp+674h+var_654]
0x686AB0: fld     [esp+674h+var_658]
0x686AB4: fldz
0x686AB6: fmul    st, st
0x686AB8: fst     [esp+674h+var_618]
0x686ABC: fld     st(2)
0x686ABE: fmulp   st(3), st
0x686AC0: fld     st(1)
0x686AC2: fmulp   st(2), st
0x686AC4: fxch    st(2)
0x686AC6: faddp   st(1), st
0x686AC8: faddp   st(1), st
0x686ACA: fstp    [esp+674h+var_65C]
0x686ACE: fld     [esp+674h+var_65C]
0x686AD2: call    __CIsqrt
0x686AD7: fstp    [esp+674h+var_65C]
0x686ADB: fld     [esp+674h+var_65C]
0x686ADF: fstp    [esp+674h+var_640]
0x686AE3: fld     dword ptr ds:0A56670h
0x686AE9: fcomp   [esp+674h+var_640]
0x686AED: fnstsw  ax
0x686AEF: test    ah, 1
0x686AF2: jnz     short loc_686B1D
0x686AF4: mov     eax, [ebp+arg_0]
0x686AF7: mov     ecx, [edi]
0x686AF9: mov     edx, [edi+4]
0x686AFC: mov     [eax], ecx
0x686AFE: mov     ecx, [edi+8]
0x686B01: mov     [eax+4], edx
0x686B04: mov     [eax+8], ecx
0x686B07: mov     ecx, [esp+674h+var_C]
0x686B0E: mov     large fs:0, ecx
0x686B15: pop     ecx
0x686B16: pop     edi
0x686B17: pop     esi
0x686B18: pop     ebx
0x686B19: mov     esp, ebp
0x686B1B: pop     ebp
0x686B1C: retn
0x686B1D: lea     ecx, [esp+674h+var_658]
0x686B21: call    sub_43F350
0x686B26: fstp    st
0x686B28: fld     [esp+674h+var_658]
0x686B2C: fld     qword ptr ds:0A4D910h
0x686B32: fmul    st(1), st
0x686B34: fxch    st(1)
0x686B36: fstp    [esp+674h+var_658]
0x686B3A: fld     [esp+674h+var_654]
0x686B3E: fmul    st, st(1)
0x686B40: fstp    [esp+674h+var_654]
0x686B44: fmul    [esp+674h+var_650]
0x686B48: fstp    [esp+674h+var_650]
0x686B4C: fld     [esp+674h+var_654]
0x686B50: fld     [esp+674h+var_658]
0x686B54: fld     st(1)
0x686B56: fmulp   st(2), st
0x686B58: fmul    st, st
0x686B5A: faddp   st(1), st
0x686B5C: fstp    [esp+674h+var_65C]
0x686B60: fld     [esp+674h+var_65C]
0x686B64: call    __CIsqrt
0x686B69: fstp    [esp+674h+var_65C]
0x686B6D: fld     [esp+674h+var_65C]
0x686B71: fcomp   qword ptr ds:0A492B0h
0x686B77: fnstsw  ax
0x686B79: test    ah, 41h
0x686B7C: jp      short loc_686BA7
0x686B7E: mov     eax, [ebp+arg_0]
0x686B81: mov     edx, [edi]
0x686B83: mov     ecx, [edi+4]
0x686B86: mov     [eax], edx
0x686B88: mov     edx, [edi+8]
0x686B8B: mov     [eax+4], ecx
0x686B8E: mov     [eax+8], edx
0x686B91: mov     ecx, [esp+674h+var_C]
0x686B98: mov     large fs:0, ecx
0x686B9F: pop     ecx
0x686BA0: pop     edi
0x686BA1: pop     esi
0x686BA2: pop     ebx
0x686BA3: mov     esp, ebp
0x686BA5: pop     ebp
0x686BA6: retn
0x686BA7: mov     edi, [ebp+arg_4]
0x686BAA: fld     dword ptr ds:0A56670h
0x686BB0: test    edi, edi
0x686BB2: fstp    [esp+674h+var_65C]
0x686BB6: jz      short loc_686BD3
0x686BB8: mov     ecx, edi; this
0x686BBA: call    MobileObject_GetCharProxy
0x686BBF: test    eax, eax
0x686BC1: jz      short loc_686BD3
0x686BC3: fld     dword ptr [eax+248h]
0x686BC9: fmul    qword ptr ds:0A372E0h
0x686BCF: fstp    [esp+674h+var_65C]
0x686BD3: fld     dword ptr [esi]
0x686BD5: mov     ecx, [esi+4]
0x686BD8: fadd    [esp+674h+var_658]
0x686BDC: mov     eax, [esi]
0x686BDE: mov     edx, [esi+8]
0x686BE1: mov     [esp+674h+var_60C], ecx
0x686BE5: fstp    [esp+674h+var_64C]
0x686BE9: mov     [esp+674h+var_30C], ecx
0x686BF0: fld     [esp+674h+var_654]
0x686BF4: mov     [esp+674h+var_610], eax
0x686BF8: fadd    dword ptr [esi+4]
0x686BFB: mov     [esp+674h+var_608], edx
0x686BFF: mov     [esp+674h+var_310], eax
0x686C06: mov     [esp+674h+var_308], edx
0x686C0D: fstp    [esp+674h+var_644]
0x686C11: fld     dword ptr [esi+8]
0x686C14: fadd    [esp+674h+var_650]
0x686C18: fstp    [esp+674h+var_648]
0x686C1C: fld     [esp+674h+var_64C]
0x686C20: fstp    [esp+674h+var_658]
0x686C24: mov     eax, [esp+674h+var_658]
0x686C28: fld     [esp+674h+var_644]
0x686C2C: mov     [esp+674h+var_304], eax
0x686C33: fstp    [esp+674h+var_654]
0x686C37: mov     ecx, [esp+674h+var_654]
0x686C3B: fld     [esp+674h+var_648]
0x686C3F: mov     [esp+674h+var_300], ecx
0x686C46: fstp    [esp+674h+var_650]
0x686C4A: mov     edx, [esp+674h+var_650]
0x686C4E: lea     ecx, [esp+674h+var_62C]
0x686C52: mov     [esp+674h+var_2FC], edx
0x686C59: call    sub_68CB30
0x686C5E: push    0
0x686C60: push    1
0x686C62: lea     eax, [esp+67Ch+var_62C]
0x686C66: push    eax
0x686C67: lea     ecx, [esp+680h+var_304]
0x686C6E: push    ecx
0x686C6F: push    edi
0x686C70: mov     [esp+688h+var_4], 0
0x686C7B: call    sub_686450
0x686C80: add     esp, 14h
0x686C83: test    al, al
0x686C85: jnz     short loc_686CAC
0x686C87: mov     esi, [ebp+arg_0]
0x686C8A: mov     edx, [esp+674h+var_304]
0x686C91: mov     eax, [esp+674h+var_300]
0x686C98: mov     ecx, [esp+674h+var_2FC]
0x686C9F: mov     [esi], edx
0x686CA1: mov     [esi+4], eax
0x686CA4: mov     [esi+8], ecx
0x686CA7: jmp     loc_686F21
0x686CAC: lea     ecx, [esp+674h+var_62C]
0x686CB0: call    sub_6899C0
0x686CB5: mov     edx, [eax]
0x686CB7: mov     ecx, [eax+4]
0x686CBA: mov     [esp+674h+var_604], edx
0x686CBE: mov     edx, [eax+8]
0x686CC1: mov     [esp+674h+var_600], ecx
0x686CC5: mov     [esp+674h+var_5FC], edx
0x686CC9: mov     ebx, 2
0x686CCE: xor     edi, edi
0x686CD0: cmp     edi, 2E8h
0x686CD6: mov     [esp+674h+var_644], ebx
0x686CDA: jge     loc_686F07
0x686CE0: fld     [esp+edi+674h+var_604]
0x686CE4: lea     ecx, [esp+674h+var_658]
0x686CE8: fsub    [esp+edi+674h+var_610]
0x686CEC: fstp    [esp+674h+var_648]
0x686CF0: fld     [esp+edi+674h+var_600]
0x686CF4: fsub    [esp+edi+674h+var_60C]
0x686CF8: fstp    [esp+674h+var_64C]
0x686CFC: fld     [esp+edi+674h+var_5FC]
0x686D00: fsub    [esp+edi+674h+var_608]
0x686D04: fstp    [esp+674h+var_660]
0x686D08: fld     [esp+674h+var_648]
0x686D0C: fstp    [esp+674h+var_658]
0x686D10: fld     [esp+674h+var_64C]
0x686D14: fstp    [esp+674h+var_654]
0x686D18: fld     [esp+674h+var_660]
0x686D1C: fstp    [esp+674h+var_650]
0x686D20: call    sub_43F350
0x686D25: fstp    st
0x686D27: lea     eax, [esp+edi+674h+var_2F8]
0x686D2E: fld     [esp+674h+var_658]
0x686D32: push    0
0x686D34: fld     qword ptr ds:0A4D910h
0x686D3A: push    1
0x686D3C: fmul    st(1), st
0x686D3E: fxch    st(1)
0x686D40: fstp    [esp+67Ch+var_658]
0x686D44: fld     [esp+67Ch+var_654]
0x686D48: fmul    st, st(1)
0x686D4A: fstp    [esp+67Ch+var_654]
0x686D4E: fmul    [esp+67Ch+var_650]
0x686D52: fstp    [esp+67Ch+var_650]
0x686D56: fld     [esp+edi+67Ch+var_604]
0x686D5A: fadd    [esp+67Ch+var_658]
0x686D5E: fstp    [esp+67Ch+var_660]
0x686D62: fld     [esp+edi+67Ch+var_600]
0x686D66: fadd    [esp+67Ch+var_654]
0x686D6A: fstp    [esp+67Ch+var_648]
0x686D6E: fld     [esp+edi+67Ch+var_5FC]
0x686D75: fadd    [esp+67Ch+var_650]
0x686D79: fstp    [esp+67Ch+var_64C]
0x686D7D: fld     [esp+67Ch+var_660]
0x686D81: fstp    [esp+67Ch+var_638]
0x686D85: mov     ecx, [esp+67Ch+var_638]
0x686D89: fld     [esp+67Ch+var_648]
0x686D8D: mov     [eax], ecx
0x686D8F: fstp    [esp+67Ch+var_634]
0x686D93: mov     edx, [esp+67Ch+var_634]
0x686D97: fld     [esp+67Ch+var_64C]
0x686D9B: mov     [eax+4], edx
0x686D9E: lea     edx, [esp+67Ch+var_62C]
0x686DA2: fstp    [esp+67Ch+var_630]
0x686DA6: mov     ecx, [esp+67Ch+var_630]
0x686DAA: push    edx
0x686DAB: push    eax
0x686DAC: mov     [eax+8], ecx
0x686DAF: mov     eax, [ebp+arg_4]
0x686DB2: push    eax
0x686DB3: call    sub_686450
0x686DB8: add     esp, 14h
0x686DBB: test    al, al
0x686DBD: jz      loc_686F07
0x686DC3: lea     ecx, [esp+674h+var_62C]
0x686DC7: call    sub_6899C0
0x686DCC: mov     ecx, [eax]
0x686DCE: mov     edx, [eax+4]
0x686DD1: mov     eax, [eax+8]
0x686DD4: mov     [esp+edi+674h+var_5F8], ecx
0x686DD8: mov     [esp+edi+674h+var_5F4], edx
0x686DDF: mov     [esp+edi+674h+var_5F0], eax
0x686DE6: fld     [esp+edi+674h+var_5F8]
0x686DEA: fsub    [esp+674h+var_610]
0x686DEE: fstp    [esp+674h+var_648]
0x686DF2: fld     [esp+edi+674h+var_5F4]
0x686DF9: fsub    [esp+674h+var_60C]
0x686DFD: fstp    [esp+674h+var_660]
0x686E01: fld     [esp+674h+var_660]
0x686E05: fld     [esp+674h+var_648]
0x686E09: fmul    st, st
0x686E0B: fld     st(1)
0x686E0D: fmulp   st(2), st
0x686E0F: faddp   st(1), st
0x686E11: fadd    [esp+674h+var_618]
0x686E15: fstp    [esp+674h+var_660]
0x686E19: fld     [esp+674h+var_660]
0x686E1D: call    __CIsqrt
0x686E22: fstp    [esp+674h+var_660]
0x686E26: fld     [esp+674h+var_660]
0x686E2A: fstp    [esp+674h+var_64C]
0x686E2E: fld     [esp+674h+var_64C]
0x686E32: fld     [esp+674h+var_640]
0x686E36: fcompp
0x686E38: fnstsw  ax
0x686E3A: test    ah, 5
0x686E3D: jnp     loc_686EFE
0x686E43: fld     [esp+edi+674h+var_5F0]
0x686E4A: mov     esi, 1
0x686E4F: cmp     ebx, esi
0x686E51: fsub    [esp+674h+var_608]
0x686E55: fstp    [esp+674h+var_63C]
0x686E59: jle     loc_686EF3
0x686E5F: lea     ebx, [esp+674h+var_604]
0x686E63: fld     dword ptr [ebx]
0x686E65: fsub    [esp+674h+var_610]
0x686E69: fstp    [esp+674h+var_648]
0x686E6D: fld     dword ptr [ebx+4]
0x686E70: fsub    [esp+674h+var_60C]
0x686E74: fstp    [esp+674h+var_660]
0x686E78: fld     [esp+674h+var_660]
0x686E7C: fld     [esp+674h+var_648]
0x686E80: fmul    st, st
0x686E82: fld     st(1)
0x686E84: fmulp   st(2), st
0x686E86: faddp   st(1), st
0x686E88: fadd    [esp+674h+var_618]
0x686E8C: fstp    [esp+674h+var_660]
0x686E90: fld     [esp+674h+var_660]
0x686E94: call    __CIsqrt
0x686E99: fstp    [esp+674h+var_660]
0x686E9D: fld     [esp+674h+var_660]
0x686EA1: fstp    [esp+674h+var_660]
0x686EA5: fld     [esp+674h+var_660]
0x686EA9: fdiv    [esp+674h+var_64C]
0x686EAD: fmul    [esp+674h+var_63C]
0x686EB1: fadd    [esp+674h+var_608]
0x686EB5: fstp    [esp+674h+var_660]
0x686EB9: fld     [esp+674h+var_660]
0x686EBD: fsub    dword ptr [ebx+8]
0x686EC0: fstp    [esp+674h+var_660]
0x686EC4: fld     [esp+674h+var_660]
0x686EC8: fabs
0x686ECA: fstp    [esp+674h+var_660]
0x686ECE: fld     [esp+674h+var_660]
0x686ED2: fld     [esp+674h+var_65C]
0x686ED6: fcompp
0x686ED8: fnstsw  ax
0x686EDA: test    ah, 41h
0x686EDD: jnp     short loc_686F03
0x686EDF: add     esi, 1
0x686EE2: add     ebx, 0Ch
0x686EE5: cmp     esi, [esp+674h+var_644]
0x686EE9: jl      loc_686E63
0x686EEF: mov     ebx, [esp+674h+var_644]
0x686EF3: add     ebx, 1
0x686EF6: add     edi, 0Ch
0x686EF9: jmp     loc_686CD0
0x686EFE: mov     eax, [ebp+arg_C]
0x686F01: jmp     short loc_686F0E
0x686F03: mov     ebx, [esp+674h+var_644]
0x686F07: lea     eax, [ebx+ebx*2]
0x686F0A: lea     eax, [esp+eax*4+674h+var_61C]
0x686F0E: mov     esi, [ebp+arg_0]
0x686F11: mov     ecx, [eax]
0x686F13: mov     edx, [eax+4]
0x686F16: mov     eax, [eax+8]
0x686F19: mov     [esi], ecx
0x686F1B: mov     [esi+4], edx
0x686F1E: mov     [esi+8], eax
0x686F21: lea     ecx, [esp+674h+var_62C]; void *
0x686F25: mov     [esp+674h+var_4], 0FFFFFFFFh
0x686F30: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x686F35: mov     eax, esi
0x686F37: mov     ecx, [esp+674h+var_C]
0x686F3E: mov     large fs:0, ecx
0x686F45: pop     ecx
0x686F46: pop     edi
0x686F47: pop     esi
0x686F48: pop     ebx
0x686F49: mov     esp, ebp
0x686F4B: pop     ebp
0x686F4C: retn
