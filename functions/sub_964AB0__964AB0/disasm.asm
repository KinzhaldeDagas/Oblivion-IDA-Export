0x964AB0: push    ebp
0x964AB1: mov     ebp, esp
0x964AB3: and     esp, 0FFFFFFF8h
0x964AB6: sub     esp, 22Ch
0x964ABC: mov     ecx, [ebp+arg_8]
0x964ABF: push    ebx
0x964AC0: push    esi
0x964AC1: mov     esi, [ebp+arg_18]
0x964AC4: fld     dword ptr [esi]
0x964AC6: mov     eax, [ebp+arg_4]
0x964AC9: fsub    dword ptr [ecx]
0x964ACB: lea     edx, [eax+34h]
0x964ACE: push    edi
0x964ACF: lea     ebx, [eax+10h]
0x964AD2: fstp    [esp+238h+var_13C]
0x964AD9: mov     [esp+238h+var_224], edx
0x964ADD: fld     dword ptr [esi+4]
0x964AE0: fsub    dword ptr [ecx+4]
0x964AE3: fstp    [esp+238h+var_138]
0x964AEA: fld     dword ptr [esi+8]
0x964AED: mov     esi, [ebp+arg_10]
0x964AF0: fsub    dword ptr [ecx+8]
0x964AF3: mov     ecx, [ebp+arg_C]
0x964AF6: fstp    [esp+238h+var_134]
0x964AFD: fld     dword ptr [ecx]
0x964AFF: fld     dword ptr [esi]
0x964B01: fsub    st, st(1)
0x964B03: fstp    [esp+238h+var_160]
0x964B0A: fld     dword ptr [ecx+4]
0x964B0D: fld     dword ptr [esi+4]
0x964B10: fsub    st, st(1)
0x964B12: fstp    [esp+238h+var_15C]
0x964B19: fld     dword ptr [ecx+8]
0x964B1C: mov     ecx, [esp+238h+var_160]
0x964B23: fld     dword ptr [esi+8]
0x964B26: mov     [esp+238h+var_184], ecx
0x964B2D: mov     ecx, [esp+238h+var_15C]
0x964B34: fsub    st, st(1)
0x964B36: mov     [esp+238h+var_180], ecx
0x964B3D: fstp    [esp+238h+var_158]
0x964B44: mov     ecx, [esp+238h+var_158]
0x964B4B: mov     [esp+238h+var_17C], ecx
0x964B52: mov     ecx, [ebp+arg_14]
0x964B55: fld     dword ptr [ecx]
0x964B57: fsub    st, st(3)
0x964B59: fstp    [esp+238h+var_1FC]
0x964B5D: fld     dword ptr [ecx+4]
0x964B60: fsub    st, st(2)
0x964B62: fstp    [esp+238h+var_1F8]
0x964B66: fld     dword ptr [ecx+8]
0x964B69: mov     ecx, [esp+238h+var_1FC]
0x964B6D: fsub    st, st(1)
0x964B6F: mov     [esp+238h+var_178], ecx
0x964B76: mov     ecx, [esp+238h+var_1F8]
0x964B7A: mov     [esp+238h+var_174], ecx
0x964B81: fstp    [esp+238h+var_1F4]
0x964B85: mov     ecx, [esp+238h+var_1F4]
0x964B89: fld     [esp+238h+var_1F4]
0x964B8D: mov     [esp+238h+var_170], ecx
0x964B94: fst     [esp+238h+var_A0]
0x964B9B: fld     [esp+238h+var_15C]
0x964BA2: fst     [esp+238h+var_60]
0x964BA9: fld     [esp+238h+var_1F8]
0x964BAD: fst     [esp+238h+var_120]
0x964BB4: fld     [esp+238h+var_158]
0x964BBB: fst     [esp+238h+var_70]
0x964BC2: fld     st(2)
0x964BC4: fmul    st, st(4)
0x964BC6: fxch    st(1)
0x964BC8: fmul    st, st(2)
0x964BCA: fsubp   st(1), st
0x964BCC: fstp    [esp+238h+var_BC]
0x964BD3: fld     [esp+238h+var_1FC]
0x964BD7: fst     [esp+238h+var_148]
0x964BDE: fld     [esp+238h+var_160]
0x964BE5: fst     [esp+238h+var_118]
0x964BEC: fxch    st(1)
0x964BEE: fmul    [esp+238h+var_70]
0x964BF5: fxch    st(1)
0x964BF7: fmulp   st(4), st
0x964BF9: fsubrp  st(3), st
0x964BFB: fxch    st(2)
0x964BFD: fstp    [esp+238h+var_B8]
0x964C04: fld     [esp+238h+var_118]
0x964C0B: fmulp   st(2), st
0x964C0D: fmul    [esp+238h+var_148]
0x964C14: mov     esi, [ebp+arg_1C]
0x964C17: add     eax, 4
0x964C1A: mov     ecx, [esp+238h+var_BC]
0x964C21: fsubp   st(1), st
0x964C23: mov     [esp+238h+var_F0], ecx
0x964C2A: mov     ecx, [esp+238h+var_B8]
0x964C31: mov     [esp+238h+var_EC], ecx
0x964C38: fstp    [esp+238h+var_B4]
0x964C3F: mov     ecx, [esp+238h+var_B4]
0x964C46: fld     dword ptr [eax]
0x964C48: mov     [esp+238h+var_1D0], eax
0x964C4C: fsubp   st(3), st
0x964C4E: mov     [esp+238h+var_E8], ecx
0x964C55: fxch    st(2)
0x964C57: xor     edi, edi
0x964C59: mov     [esp+238h+var_218], edi
0x964C5D: fstp    [esp+238h+var_1FC]
0x964C61: fsub    dword ptr [eax+4]
0x964C64: fstp    [esp+238h+var_1F8]
0x964C68: mov     ecx, [esp+238h+var_1F8]
0x964C6C: mov     [esp+238h+var_150], ecx
0x964C73: fsub    dword ptr [eax+8]
0x964C76: mov     eax, [esp+238h+var_1FC]
0x964C7A: mov     [esp+238h+var_154], eax
0x964C81: xor     ecx, ecx
0x964C83: fstp    [esp+238h+var_1F4]
0x964C87: mov     eax, [esp+238h+var_1F4]
0x964C8B: fldz
0x964C8D: mov     [esp+238h+var_14C], eax
0x964C94: fstp    dword ptr [esi]
0x964C96: fld     [esp+238h+var_B8]
0x964C9D: fld     [esp+238h+var_BC]
0x964CA4: fld     [esp+238h+var_B4]
0x964CAB: fld     dword ptr [ebx]
0x964CAD: fmul    st, st(2)
0x964CAF: fld     dword ptr [ebx+4]
0x964CB2: fmul    st, st(4)
0x964CB4: faddp   st(1), st
0x964CB6: fld     dword ptr [ebx+8]
0x964CB9: fmul    st, st(2)
0x964CBB: faddp   st(1), st
0x964CBD: fstp    [esp+238h+var_1DC]
0x964CC1: fld     dword ptr [ebx+10h]
0x964CC4: fmul    st, st(3)
0x964CC6: fld     dword ptr [ebx+0Ch]
0x964CC9: fmul    st, st(3)
0x964CCB: faddp   st(1), st
0x964CCD: fld     dword ptr [ebx+14h]
0x964CD0: fmul    st, st(2)
0x964CD2: faddp   st(1), st
0x964CD4: fstp    [esp+238h+var_1D8]
0x964CD8: fld     dword ptr [ebx+1Ch]
0x964CDB: fmul    st, st(3)
0x964CDD: fld     dword ptr [ebx+18h]
0x964CE0: fmul    st, st(3)
0x964CE2: faddp   st(1), st
0x964CE4: fld     dword ptr [ebx+20h]
0x964CE7: fmul    st, st(2)
0x964CE9: faddp   st(1), st
0x964CEB: fstp    [esp+238h+var_1D4]
0x964CEF: fld     [esp+238h+var_1D8]
0x964CF3: fst     [esp+238h+var_10]
0x964CFA: fld     [esp+238h+var_1DC]
0x964CFE: fst     [esp+238h+var_130]
0x964D05: fld     [esp+238h+var_1D4]
0x964D09: fst     [esp+238h+var_D8]
0x964D10: fxch    st(2)
0x964D12: fabs
0x964D14: fstp    dword ptr [esp+238h+var_1F0]
0x964D18: fld     dword ptr [esp+238h+var_1F0]
0x964D1C: fmul    dword ptr [edx+4]
0x964D1F: fxch    st(1)
0x964D21: fabs
0x964D23: fstp    dword ptr [esp+238h+var_1F0]
0x964D27: fld     dword ptr [esp+238h+var_1F0]
0x964D2B: fmul    dword ptr [edx]
0x964D2D: faddp   st(1), st
0x964D2F: fxch    st(1)
0x964D31: fabs
0x964D33: fstp    dword ptr [esp+238h+var_1F0]
0x964D37: fld     dword ptr [esp+238h+var_1F0]
0x964D3B: fmul    dword ptr [edx+8]
0x964D3E: faddp   st(1), st
0x964D40: fstp    [esp+238h+var_22C]
0x964D44: fld     [esp+238h+var_1F8]
0x964D48: fst     [esp+238h+var_30]
0x964D4F: fld     [esp+238h+var_1FC]
0x964D53: fst     [esp+238h+var_50]
0x964D5A: fld     [esp+238h+var_1F4]
0x964D5E: fst     [esp+238h+var_20]
0x964D65: fxch    st(1)
0x964D67: fmul    st, st(4)
0x964D69: fxch    st(2)
0x964D6B: fmul    st, st(5)
0x964D6D: faddp   st(2), st
0x964D6F: fmul    st, st(2)
0x964D71: faddp   st(1), st
0x964D73: fstp    dword ptr [esp+238h+var_1F0]
0x964D77: fld     dword ptr [esp+238h+var_1F0]
0x964D7B: fld     [esp+238h+var_22C]
0x964D7F: fld     st
0x964D81: fcom    st(2)
0x964D83: fnstsw  ax
0x964D85: fld     [esp+238h+var_134]
0x964D8C: test    ah, 5
0x964D8F: fld     [esp+238h+var_138]
0x964D96: jp      short loc_964E0F
0x964D98: fstp    st(3)
0x964D9A: fld     st(2)
0x964D9C: fmulp   st(7), st
0x964D9E: fld     [esp+238h+var_13C]
0x964DA5: fmulp   st(6), st
0x964DA7: fxch    st(6)
0x964DA9: faddp   st(5), st
0x964DAB: fld     st(5)
0x964DAD: fmulp   st(4), st
0x964DAF: fxch    st(4)
0x964DB1: faddp   st(3), st
0x964DB3: fxch    st(2)
0x964DB5: fstp    [esp+238h+var_214]
0x964DB9: fld     [esp+238h+var_214]
0x964DBD: fld     [ebp+arg_0]
0x964DC0: fmul    st, st(1)
0x964DC2: fadd    st, st(2)
0x964DC4: fcomp   st(4)
0x964DC6: fnstsw  ax
0x964DC8: test    ah, 41h
0x964DCB: jnz     short loc_964DE0
0x964DCD: fstp    st(1)
0x964DCF: xor     al, al
0x964DD1: fstp    st
0x964DD3: fstp    st(1)
0x964DD5: fstp    st(1)
0x964DD7: fstp    st
0x964DD9: pop     edi
0x964DDA: pop     esi
0x964DDB: pop     ebx
0x964DDC: mov     esp, ebp
0x964DDE: pop     ebp
0x964DDF: retn
0x964DE0: fxch    st(3)
0x964DE2: fsubrp  st(1), st
0x964DE4: fdivrp  st(2), st
0x964DE6: fxch    st(1)
0x964DE8: fstp    [esp+238h+var_214]
0x964DEC: fldz
0x964DEE: fld     [esp+238h+var_214]
0x964DF2: fcom    st(1)
0x964DF4: fnstsw  ax
0x964DF6: fstp    st(1)
0x964DF8: test    ah, 41h
0x964DFB: jnz     loc_964E96
0x964E01: mov     ecx, 1
0x964E06: fstp    dword ptr [esi]
0x964E08: mov     edi, ecx
0x964E0A: jmp     loc_964E98
0x964E0F: fxch    st(3)
0x964E11: fchs
0x964E13: fst     [esp+238h+var_80]
0x964E1A: fcomp   st(4)
0x964E1C: fnstsw  ax
0x964E1E: test    ah, 41h
0x964E21: jnz     short loc_964E8A
0x964E23: fld     st(2)
0x964E25: fmulp   st(7), st
0x964E27: fld     [esp+238h+var_13C]
0x964E2E: fmulp   st(6), st
0x964E30: fxch    st(6)
0x964E32: faddp   st(5), st
0x964E34: fld     st(5)
0x964E36: fmulp   st(4), st
0x964E38: fxch    st(4)
0x964E3A: faddp   st(3), st
0x964E3C: fxch    st(2)
0x964E3E: fstp    [esp+238h+var_214]
0x964E42: fld     [esp+238h+var_214]
0x964E46: fld     [ebp+arg_0]
0x964E49: fmul    st, st(1)
0x964E4B: fadd    st, st(2)
0x964E4D: fcomp   [esp+238h+var_80]
0x964E54: fnstsw  ax
0x964E56: test    ah, 5
0x964E59: jnp     loc_964DCD
0x964E5F: fxch    st(3)
0x964E61: faddp   st(1), st
0x964E63: fdivrp  st(2), st
0x964E65: fxch    st(1)
0x964E67: fchs
0x964E69: fstp    [esp+238h+var_214]
0x964E6D: fldz
0x964E6F: fld     [esp+238h+var_214]
0x964E73: fcom    st(1)
0x964E75: fnstsw  ax
0x964E77: fstp    st(1)
0x964E79: test    ah, 41h
0x964E7C: jnz     short loc_964E96
0x964E7E: fstp    dword ptr [esi]
0x964E80: mov     ecx, 1
0x964E85: or      edi, 0FFFFFFFFh
0x964E88: jmp     short loc_964E98
0x964E8A: fstp    st(3)
0x964E8C: fstp    st(5)
0x964E8E: fstp    st(3)
0x964E90: fstp    st(1)
0x964E92: fstp    st(2)
0x964E94: jmp     short loc_964E98
0x964E96: fstp    st
0x964E98: lea     eax, [esp+238h+var_1C8]
0x964E9C: fstp    [esp+238h+var_90]
0x964EA3: fld     [esp+238h+var_13C]
0x964EAA: mov     dword ptr [esp+238h+var_1E8], eax
0x964EAE: lea     eax, [ebx+8]
0x964EB1: fstp    [esp+238h+var_40]
0x964EB8: mov     dword ptr [esp+238h+var_1F0], eax
0x964EBC: lea     eax, [esp+238h+var_1FC]
0x964EC0: fstp    [esp+238h+var_80]
0x964EC7: fld     [ebp+arg_0]
0x964ECA: sub     eax, edx
0x964ECC: mov     dword ptr [esp+238h+var_220], eax
0x964ED0: mov     eax, dword ptr [esp+238h+var_1F0]
0x964ED4: mov     [esp+238h+var_228], 2
0x964EDC: jmp     short loc_964EE2
0x964EDE: mov     edx, [esp+238h+var_214]
0x964EE2: fld     dword ptr [eax-4]
0x964EE5: fld     dword ptr [eax-8]
0x964EE8: fld     dword ptr [eax]
0x964EEA: mov     eax, dword ptr [esp+238h+var_220]
0x964EEE: fld     [esp+238h+var_50]
0x964EF5: fmul    st, st(2)
0x964EF7: fld     [esp+238h+var_30]
0x964EFE: fmul    st, st(4)
0x964F00: faddp   st(1), st
0x964F02: fld     [esp+238h+var_20]
0x964F09: fmul    st, st(2)
0x964F0B: faddp   st(1), st
0x964F0D: fstp    [esp+238h+var_214]
0x964F11: fld     [esp+238h+var_214]
0x964F15: fst     dword ptr [eax+edx]
0x964F18: mov     eax, dword ptr [esp+238h+var_1E8]
0x964F1C: fld     [esp+238h+var_118]
0x964F23: fmul    st, st(3)
0x964F25: fld     [esp+238h+var_60]
0x964F2C: fmul    st, st(5)
0x964F2E: faddp   st(1), st
0x964F30: fld     [esp+238h+var_70]
0x964F37: fmul    st, st(3)
0x964F39: faddp   st(1), st
0x964F3B: fstp    [esp+238h+var_214]
0x964F3F: fld     [esp+238h+var_214]
0x964F43: fst     dword ptr [eax-4]
0x964F46: fld     [esp+238h+var_148]
0x964F4D: fmul    st, st(4)
0x964F4F: fld     [esp+238h+var_120]
0x964F56: fmul    st, st(6)
0x964F58: faddp   st(1), st
0x964F5A: fld     [esp+238h+var_A0]
0x964F61: fmul    st, st(4)
0x964F63: faddp   st(1), st
0x964F65: fstp    [esp+238h+var_214]
0x964F69: fld     [esp+238h+var_214]
0x964F6D: fst     dword ptr [eax]
0x964F6F: fld     [esp+238h+var_40]
0x964F76: fmulp   st(5), st
0x964F78: fld     [esp+238h+var_90]
0x964F7F: fmulp   st(6), st
0x964F81: fxch    st(4)
0x964F83: faddp   st(5), st
0x964F85: fld     [esp+238h+var_80]
0x964F8C: fmulp   st(3), st
0x964F8E: fxch    st(4)
0x964F90: faddp   st(2), st
0x964F92: fxch    st(1)
0x964F94: fstp    [esp+238h+var_22C]
0x964F98: fld     dword ptr [edx]
0x964F9A: fcom    st(1)
0x964F9C: fnstsw  ax
0x964F9E: test    ah, 5
0x964FA1: jp      loc_9650E8
0x964FA7: fldz
0x964FA9: fcom    st(4)
0x964FAB: fnstsw  ax
0x964FAD: test    ah, 5
0x964FB0: jp      short loc_965011
0x964FB2: fstp    st(4)
0x964FB4: fxch    st(3)
0x964FB6: fcomp   st(2)
0x964FB8: fnstsw  ax
0x964FBA: test    ah, 41h
0x964FBD: jp      short loc_96500D
0x964FBF: fstp    st(1)
0x964FC1: fld     [esp+238h+var_22C]
0x964FC5: fld     st(3)
0x964FC7: fmul    st, st(1)
0x964FC9: fadd    st, st(2)
0x964FCB: fcomp   st(3)
0x964FCD: fnstsw  ax
0x964FCF: test    ah, 41h
0x964FD2: jz      loc_965888
0x964FD8: fxch    st(2)
0x964FDA: fsubrp  st(1), st
0x964FDC: fdivrp  st(1), st
0x964FDE: fstp    [esp+238h+var_22C]
0x964FE2: fld     [esp+238h+var_22C]
0x964FE6: fld     dword ptr [esi]
0x964FE8: fcomp   st(1)
0x964FEA: fnstsw  ax
0x964FEC: test    ah, 5
0x964FEF: jp      loc_96527C
0x964FF5: mov     ecx, [esp+238h+var_228]
0x964FF9: fstp    dword ptr [esi]
0x964FFB: mov     [esp+238h+var_218], 0
0x965003: mov     edi, 1
0x965008: jmp     loc_96527E
0x96500D: faddp   st(1), st
0x96500F: jmp     short loc_965024
0x965011: fstp    st
0x965013: fxch    st(2)
0x965015: fcom    st(3)
0x965017: fnstsw  ax
0x965019: test    ah, 41h
0x96501C: jp      short loc_965085
0x96501E: fstp    st(3)
0x965020: faddp   st(2), st
0x965022: fxch    st(1)
0x965024: fstp    [esp+238h+var_214]
0x965028: fld     [esp+238h+var_214]
0x96502C: fcom    st(1)
0x96502E: fnstsw  ax
0x965030: test    ah, 41h
0x965033: jnz     loc_96527A
0x965039: fld     [esp+238h+var_22C]
0x96503D: fld     st(3)
0x96503F: fmul    st, st(1)
0x965041: fadd    st, st(2)
0x965043: fcomp   st(3)
0x965045: fnstsw  ax
0x965047: test    ah, 41h
0x96504A: jz      loc_965888
0x965050: fxch    st(2)
0x965052: fsubrp  st(1), st
0x965054: fdivrp  st(1), st
0x965056: fstp    [esp+238h+var_22C]
0x96505A: fld     [esp+238h+var_22C]
0x96505E: fld     dword ptr [esi]
0x965060: fcomp   st(1)
0x965062: fnstsw  ax
0x965064: test    ah, 5
0x965067: jp      loc_96527C
0x96506D: mov     ecx, [esp+238h+var_228]
0x965071: fstp    dword ptr [esi]
0x965073: mov     [esp+238h+var_218], 2
0x96507B: mov     edi, 1
0x965080: jmp     loc_96527E
0x965085: fstp    st
0x965087: faddp   st(2), st
0x965089: fxch    st(1)
0x96508B: fstp    [esp+238h+var_214]
0x96508F: fld     [esp+238h+var_214]
0x965093: fcom    st(1)
0x965095: fnstsw  ax
0x965097: test    ah, 41h
0x96509A: jnz     loc_96527A
0x9650A0: fld     [esp+238h+var_22C]
0x9650A4: fld     st(3)
0x9650A6: fmul    st, st(1)
0x9650A8: fadd    st, st(2)
0x9650AA: fcomp   st(3)
0x9650AC: fnstsw  ax
0x9650AE: test    ah, 41h
0x9650B1: jz      loc_965888
0x9650B7: fxch    st(2)
0x9650B9: fsubrp  st(1), st
0x9650BB: fdivrp  st(1), st
0x9650BD: fstp    [esp+238h+var_22C]
0x9650C1: fld     [esp+238h+var_22C]
0x9650C5: fld     dword ptr [esi]
0x9650C7: fcomp   st(1)
0x9650C9: fnstsw  ax
0x9650CB: test    ah, 5
0x9650CE: jp      loc_96527C
0x9650D4: mov     ecx, [esp+238h+var_228]
0x9650D8: fstp    dword ptr [esi]
0x9650DA: mov     edi, 1
0x9650DF: mov     [esp+238h+var_218], edi
0x9650E3: jmp     loc_96527E
0x9650E8: fld     dword ptr [edx]
0x9650EA: fchs
0x9650EC: fcom    st(2)
0x9650EE: fnstsw  ax
0x9650F0: test    ah, 41h
0x9650F3: jnz     loc_965268
0x9650F9: fldz
0x9650FB: fcom    st(5)
0x9650FD: fnstsw  ax
0x9650FF: test    ah, 1
0x965102: jnz     loc_96519B
0x965108: fstp    st(5)
0x96510A: fxch    st(4)
0x96510C: fcomp   st(3)
0x96510E: fnstsw  ax
0x965110: test    ah, 1
0x965113: jnz     short loc_965163
0x965115: fstp    st(2)
0x965117: fld     [esp+238h+var_22C]
0x96511B: fld     st(4)
0x96511D: fmul    st, st(1)
0x96511F: fadd    st, st(2)
0x965121: fcomp   st(4)
0x965123: fnstsw  ax
0x965125: fstp    st(3)
0x965127: test    ah, 5
0x96512A: jnp     loc_9653FB
0x965130: faddp   st(1), st
0x965132: fdivrp  st(1), st
0x965134: fchs
0x965136: fstp    [esp+238h+var_22C]
0x96513A: fld     [esp+238h+var_22C]
0x96513E: fld     dword ptr [esi]
0x965140: fcomp   st(1)
0x965142: fnstsw  ax
0x965144: test    ah, 5
0x965147: jp      loc_96527C
0x96514D: mov     ecx, [esp+238h+var_228]
0x965151: fstp    dword ptr [esi]
0x965153: mov     [esp+238h+var_218], 0
0x96515B: or      edi, 0FFFFFFFFh
0x96515E: jmp     loc_96527E
0x965163: fxch    st(2)
0x965165: faddp   st(1), st
0x965167: fstp    [esp+238h+var_214]
0x96516B: fld     [esp+238h+var_214]
0x96516F: fcom    st(2)
0x965171: fnstsw  ax
0x965173: test    ah, 5
0x965176: jp      loc_965272
0x96517C: fld     [esp+238h+var_22C]
0x965180: fld     st(4)
0x965182: fmul    st, st(1)
0x965184: fadd    st, st(2)
0x965186: fcomp   st(4)
0x965188: fnstsw  ax
0x96518A: fstp    st(3)
0x96518C: test    ah, 5
0x96518F: jnp     loc_9653FB
0x965195: faddp   st(1), st
0x965197: fdivrp  st(1), st
0x965199: jmp     short loc_9651E0
0x96519B: fstp    st
0x96519D: fxch    st(3)
0x96519F: fcom    st(4)
0x9651A1: fnstsw  ax
0x9651A3: test    ah, 1
0x9651A6: jnz     short loc_96520C
0x9651A8: fstp    st(4)
0x9651AA: fxch    st(3)
0x9651AC: faddp   st(1), st
0x9651AE: fstp    [esp+238h+var_214]
0x9651B2: fld     [esp+238h+var_214]
0x9651B6: fcom    st(1)
0x9651B8: fnstsw  ax
0x9651BA: test    ah, 5
0x9651BD: jp      loc_965278
0x9651C3: fld     [esp+238h+var_22C]
0x9651C7: fld     st(4)
0x9651C9: fmul    st, st(1)
0x9651CB: fadd    st, st(2)
0x9651CD: fcomp   st(3)
0x9651CF: fnstsw  ax
0x9651D1: fstp    st(2)
0x9651D3: test    ah, 5
0x9651D6: jnp     loc_965561
0x9651DC: faddp   st(2), st
0x9651DE: fdivp   st(1), st
0x9651E0: fchs
0x9651E2: fstp    [esp+238h+var_22C]
0x9651E6: fld     [esp+238h+var_22C]
0x9651EA: fld     dword ptr [esi]
0x9651EC: fcomp   st(1)
0x9651EE: fnstsw  ax
0x9651F0: test    ah, 5
0x9651F3: jp      loc_96527C
0x9651F9: mov     ecx, [esp+238h+var_228]
0x9651FD: fstp    dword ptr [esi]
0x9651FF: mov     [esp+238h+var_218], 2
0x965207: or      edi, 0FFFFFFFFh
0x96520A: jmp     short loc_96527E
0x96520C: fstp    st
0x96520E: fxch    st(3)
0x965210: faddp   st(1), st
0x965212: fstp    [esp+238h+var_214]
0x965216: fld     [esp+238h+var_214]
0x96521A: fcom    st(1)
0x96521C: fnstsw  ax
0x96521E: test    ah, 5
0x965221: jp      short loc_965278
0x965223: fld     [esp+238h+var_22C]
0x965227: fld     st(4)
0x965229: fmul    st, st(1)
0x96522B: fadd    st, st(2)
0x96522D: fcomp   st(3)
0x96522F: fnstsw  ax
0x965231: fstp    st(2)
0x965233: test    ah, 5
0x965236: jnp     loc_965561
0x96523C: faddp   st(2), st
0x96523E: fdivp   st(1), st
0x965240: fchs
0x965242: fstp    [esp+238h+var_22C]
0x965246: fld     [esp+238h+var_22C]
0x96524A: fld     dword ptr [esi]
0x96524C: fcomp   st(1)
0x96524E: fnstsw  ax
0x965250: test    ah, 5
0x965253: jp      short loc_96527C
0x965255: mov     ecx, [esp+238h+var_228]
0x965259: fstp    dword ptr [esi]
0x96525B: mov     [esp+238h+var_218], 1
0x965263: or      edi, 0FFFFFFFFh
0x965266: jmp     short loc_96527E
0x965268: fstp    st(1)
0x96526A: fstp    st(1)
0x96526C: fstp    st
0x96526E: fstp    st
0x965270: jmp     short loc_96527C
0x965272: fstp    st(1)
0x965274: fstp    st
0x965276: jmp     short loc_96527C
0x965278: fstp    st(2)
0x96527A: fstp    st(1)
0x96527C: fstp    st
0x96527E: mov     eax, dword ptr [esp+238h+var_1F0]
0x965282: add     dword ptr [esp+238h+var_1E8], 0Ch
0x965287: add     edx, 4
0x96528A: mov     [esp+238h+var_214], edx
0x96528E: mov     edx, [esp+238h+var_228]
0x965292: add     edx, 1
0x965295: mov     [esp+238h+var_228], edx
0x965299: add     eax, 0Ch
0x96529C: add     edx, 0FFFFFFFEh
0x96529F: cmp     edx, 3
0x9652A2: mov     dword ptr [esp+238h+var_1F0], eax
0x9652A6: jl      loc_964EDE
0x9652AC: fld     dword ptr [ebx+4]
0x9652AF: mov     [esp+238h+var_228], edi
0x9652B3: fld     dword ptr [ebx+8]
0x9652B6: fld     [esp+238h+var_70]
0x9652BD: fld     st
0x9652BF: fmul    st, st(3)
0x9652C1: fld     [esp+238h+var_60]
0x9652C8: fld     st
0x9652CA: fmul    st, st(4)
0x9652CC: fsubp   st(2), st
0x9652CE: fxch    st(1)
0x9652D0: fstp    [esp+238h+var_1FC]
0x9652D4: mov     edx, [esp+238h+var_1FC]
0x9652D8: fld     dword ptr [ebx]
0x9652DA: mov     [esp+238h+var_C8], edx; int
0x9652E1: fld     [esp+238h+var_118]
0x9652E8: fld     st
0x9652EA: fmulp   st(5), st
0x9652EC: fld     st(1)
0x9652EE: fmulp   st(4), st
0x9652F0: fxch    st(4)
0x9652F2: fsubrp  st(3), st
0x9652F4: fxch    st(2)
0x9652F6: fstp    [esp+238h+var_1F8]
0x9652FA: mov     eax, [esp+238h+var_1F8]
0x9652FE: mov     [esp+238h+var_C4], eax; int
0x965305: fmulp   st(1), st
0x965307: mov     eax, [esp+238h+var_224]
0x96530B: fxch    st(1)
0x96530D: fmulp   st(2), st
0x96530F: fsubrp  st(1), st
0x965311: fstp    [esp+238h+var_1F4]
0x965315: mov     edx, [esp+238h+var_1F4]
0x965319: fld     [esp+238h+var_1F8]
0x96531D: mov     [esp+238h+var_C0], edx; int
0x965324: fld     [esp+238h+var_1FC]
0x965328: fld     [esp+238h+var_1F4]
0x96532C: fld     [esp+238h+var_50]
0x965333: fmul    st, st(2)
0x965335: fld     [esp+238h+var_30]
0x96533C: fmul    st, st(4)
0x96533E: faddp   st(1), st
0x965340: fld     [esp+238h+var_20]
0x965347: fmul    st, st(2)
0x965349: faddp   st(1), st
0x96534B: fstp    dword ptr [esp+238h+var_1E8]
0x96534F: fld     [esp+238h+var_40]
0x965356: fmulp   st(2), st
0x965358: fld     [esp+238h+var_90]
0x96535F: fmulp   st(3), st
0x965361: fxch    st(1)
0x965363: faddp   st(2), st
0x965365: fmul    [esp+238h+var_80]
0x96536C: faddp   st(1), st
0x96536E: fstp    dword ptr [esp+238h+var_1F0]
0x965372: fld     [esp+238h+var_1C0]
0x965376: fabs
0x965378: fstp    dword ptr [esp+238h+var_220]
0x96537C: fld     dword ptr [esp+238h+var_220]
0x965380: fst     [esp+238h+var_1A8]
0x965387: fld     [esp+238h+var_1B4]
0x96538E: fabs
0x965390: fstp    dword ptr [esp+238h+var_220]
0x965394: fld     dword ptr [esp+238h+var_220]
0x965398: fst     qword ptr [esp+238h+var_110]
0x96539F: fmul    dword ptr [eax+4]
0x9653A2: fld     dword ptr [eax+8]
0x9653A5: fmulp   st(2), st
0x9653A7: faddp   st(1), st
0x9653A9: fstp    [esp+238h+var_22C]
0x9653AD: fld     dword ptr [esp+238h+var_1E8]
0x9653B1: fld     [esp+238h+var_22C]
0x9653B5: fld     st
0x9653B7: fcom    st(2)
0x9653B9: fnstsw  ax
0x9653BB: fld     dword ptr [esp+238h+var_1F0]
0x9653BF: test    ah, 5
0x9653C2: jp      loc_9654C4
0x9653C8: fstp    st(2)
0x9653CA: fldz
0x9653CC: fcomp   [esp+238h+var_1DC]
0x9653D0: fnstsw  ax
0x9653D2: test    ah, 41h
0x9653D5: jp      short loc_965448
0x9653D7: fld     st(1)
0x9653D9: fld     st(4)
0x9653DB: fmul    st, st(1)
0x9653DD: fadd    st, st(4)
0x9653DF: fcomp   st(2)
0x9653E1: fnstsw  ax
0x9653E3: test    ah, 41h
0x9653E6: jnz     short loc_96540C
0x9653E8: fstp    st(1)
0x9653EA: xor     al, al
0x9653EC: fstp    st
0x9653EE: fstp    st(1)
0x9653F0: fstp    st
0x9653F2: fstp    st
0x9653F4: pop     edi
0x9653F5: pop     esi
0x9653F6: pop     ebx
0x9653F7: mov     esp, ebp
0x9653F9: pop     ebp
0x9653FA: retn
0x9653FB: fstp    st(1)
0x9653FD: xor     al, al
0x9653FF: fstp    st
0x965401: fstp    st
0x965403: fstp    st
0x965405: pop     edi
0x965406: pop     esi
0x965407: pop     ebx
0x965408: mov     esp, ebp
0x96540A: pop     ebp
0x96540B: retn
0x96540C: fxch    st(1)
0x96540E: fsub    st, st(3)
0x965410: fdivrp  st(1), st
0x965412: fstp    [esp+238h+var_22C]
0x965416: fld     [esp+238h+var_22C]
0x96541A: fld     dword ptr [esi]
0x96541C: fcomp   st(1)
0x96541E: fnstsw  ax
0x965420: test    ah, 5
0x965423: jp      loc_9655AC
0x965429: mov     edx, 1
0x96542E: fstp    dword ptr [esi]
0x965430: mov     edi, edx
0x965432: mov     ecx, 5
0x965437: mov     [esp+238h+var_218], 0
0x96543F: mov     [esp+238h+var_228], edi
0x965443: jmp     loc_9655B3
0x965448: fld     [esp+238h+var_130]
0x96544F: fadd    st, st(3)
0x965451: fstp    dword ptr [esp+238h+var_220]
0x965455: fld     dword ptr [esp+238h+var_220]
0x965459: fcom    st(1)
0x96545B: fnstsw  ax
0x96545D: test    ah, 41h
0x965460: jnz     loc_9655A4
0x965466: fld     st(2)
0x965468: fld     st(5)
0x96546A: fmul    st, st(1)
0x96546C: fadd    st, st(2)
0x96546E: fcomp   st(3)
0x965470: fnstsw  ax
0x965472: test    ah, 41h
0x965475: jnz     short loc_96548C
0x965477: fstp    st(2)
0x965479: xor     al, al
0x96547B: fstp    st
0x96547D: fstp    st
0x96547F: fstp    st(1)
0x965481: fstp    st
0x965483: fstp    st
0x965485: pop     edi
0x965486: pop     esi
0x965487: pop     ebx
0x965488: mov     esp, ebp
0x96548A: pop     ebp
0x96548B: retn
0x96548C: fxch    st(2)
0x96548E: fsubrp  st(1), st
0x965490: fdivrp  st(1), st
0x965492: fstp    [esp+238h+var_22C]
0x965496: fld     [esp+238h+var_22C]
0x96549A: fld     dword ptr [esi]
0x96549C: fcomp   st(1)
0x96549E: fnstsw  ax
0x9654A0: test    ah, 5
0x9654A3: jp      loc_9655AC
0x9654A9: mov     edx, 1
0x9654AE: fstp    dword ptr [esi]
0x9654B0: mov     edi, edx
0x9654B2: mov     ecx, 5
0x9654B7: mov     [esp+238h+var_218], edx
0x9654BB: mov     [esp+238h+var_228], edi
0x9654BF: jmp     loc_9655B3
0x9654C4: fxch    st(2)
0x9654C6: fchs
0x9654C8: fcom    st(3)
0x9654CA: fnstsw  ax
0x9654CC: test    ah, 41h
0x9654CF: jnz     loc_9655A4
0x9654D5: fldz
0x9654D7: fcomp   [esp+238h+var_1DC]
0x9654DB: fnstsw  ax
0x9654DD: test    ah, 1
0x9654E0: jnz     short loc_965530
0x9654E2: fld     st(2)
0x9654E4: fld     st(5)
0x9654E6: fmul    st, st(1)
0x9654E8: fadd    st, st(5)
0x9654EA: fcomp   st(2)
0x9654EC: fnstsw  ax
0x9654EE: fstp    st(1)
0x9654F0: test    ah, 5
0x9654F3: jnp     loc_9653E8
0x9654F9: fxch    st(1)
0x9654FB: fadd    st, st(3)
0x9654FD: fdivrp  st(1), st
0x9654FF: fchs
0x965501: fstp    [esp+238h+var_22C]
0x965505: fld     [esp+238h+var_22C]
0x965509: fld     dword ptr [esi]
0x96550B: fcomp   st(1)
0x96550D: fnstsw  ax
0x96550F: test    ah, 5
0x965512: jp      loc_9655AC
0x965518: or      edi, 0FFFFFFFFh
0x96551B: fstp    dword ptr [esi]
0x96551D: mov     ecx, 5
0x965522: mov     [esp+238h+var_218], 0
0x96552A: mov     [esp+238h+var_228], edi
0x96552E: jmp     short loc_9655AE
0x965530: fld     [esp+238h+var_130]
0x965537: fadd    st, st(4)
0x965539: fstp    dword ptr [esp+238h+var_220]
0x96553D: fld     dword ptr [esp+238h+var_220]
0x965541: fcom    st(1)
0x965543: fnstsw  ax
0x965545: test    ah, 5
0x965548: jp      short loc_9655A8
0x96554A: fld     st(3)
0x96554C: fld     st(6)
0x96554E: fmul    st, st(1)
0x965550: fadd    st, st(2)
0x965552: fcomp   st(3)
0x965554: fnstsw  ax
0x965556: fstp    st(2)
0x965558: test    ah, 5
0x96555B: jp      short loc_965572
0x96555D: fstp    st(2)
0x96555F: fstp    st(1)
0x965561: fstp    st(2)
0x965563: xor     al, al
0x965565: fstp    st(1)
0x965567: fstp    st
0x965569: fstp    st
0x96556B: pop     edi
0x96556C: pop     esi
0x96556D: pop     ebx
0x96556E: mov     esp, ebp
0x965570: pop     ebp
0x965571: retn
0x965572: faddp   st(2), st
0x965574: fdivp   st(1), st
0x965576: fchs
0x965578: fstp    [esp+238h+var_22C]
0x96557C: fld     [esp+238h+var_22C]
0x965580: fld     dword ptr [esi]
0x965582: fcomp   st(1)
0x965584: fnstsw  ax
0x965586: test    ah, 5
0x965589: jp      short loc_9655AC
0x96558B: mov     edx, 1
0x965590: fstp    dword ptr [esi]
0x965592: or      edi, 0FFFFFFFFh
0x965595: mov     ecx, 5
0x96559A: mov     [esp+238h+var_218], edx
0x96559E: mov     [esp+238h+var_228], edi
0x9655A2: jmp     short loc_9655B3
0x9655A4: fstp    st(1)
0x9655A6: jmp     short loc_9655AC
0x9655A8: fstp    st(2)
0x9655AA: fstp    st
0x9655AC: fstp    st
0x9655AE: mov     edx, 1
0x9655B3: fld     dword ptr [ebx+4]
0x9655B6: fld     dword ptr [ebx+8]
0x9655B9: fld     [esp+238h+var_A0]
0x9655C0: fld     st
0x9655C2: fmul    st, st(3)
0x9655C4: fld     [esp+238h+var_120]
0x9655CB: fmul    st, st(3)
0x9655CD: fsubp   st(1), st
0x9655CF: fstp    [esp+238h+var_1FC]
0x9655D3: mov     eax, [esp+238h+var_1FC]
0x9655D7: fld     dword ptr [ebx]
0x9655D9: mov     [esp+238h+var_160], eax; int
0x9655E0: fld     [esp+238h+var_148]
0x9655E7: fmulp   st(3), st
0x9655E9: fld     st
0x9655EB: fmulp   st(2), st
0x9655ED: fxch    st(2)
0x9655EF: fsubrp  st(1), st
0x9655F1: fstp    [esp+238h+var_1F8]
0x9655F5: mov     eax, [esp+238h+var_1F8]
0x9655F9: mov     [esp+238h+var_15C], eax; int
0x965600: fmul    [esp+238h+var_120]
0x965607: fld     [esp+238h+var_148]
0x96560E: fmulp   st(2), st
0x965610: fsubrp  st(1), st
0x965612: fstp    [esp+238h+var_1F4]
0x965616: mov     eax, [esp+238h+var_1F4]
0x96561A: fld     [esp+238h+var_1F8]
0x96561E: mov     [esp+238h+var_158], eax; int
0x965625: fld     [esp+238h+var_1FC]
0x965629: mov     eax, [esp+238h+var_224]
0x96562D: fld     [esp+238h+var_1F4]
0x965631: fld     [esp+238h+var_50]
0x965638: fmul    st, st(2)
0x96563A: fld     [esp+238h+var_30]
0x965641: fmul    st, st(4)
0x965643: faddp   st(1), st
0x965645: fld     [esp+238h+var_20]
0x96564C: fmul    st, st(2)
0x96564E: faddp   st(1), st
0x965650: fstp    dword ptr [esp+238h+var_1E8]
0x965654: fld     [esp+238h+var_40]
0x96565B: fmulp   st(2), st
0x96565D: fld     [esp+238h+var_90]
0x965664: fmulp   st(3), st
0x965666: fxch    st(1)
0x965668: faddp   st(2), st
0x96566A: fmul    [esp+238h+var_80]
0x965671: faddp   st(1), st
0x965673: fstp    [esp+238h+var_214]
0x965677: fld     [esp+238h+var_1BC]
0x96567B: fabs
0x96567D: fstp    dword ptr [esp+238h+var_220]
0x965681: fld     dword ptr [esp+238h+var_220]
0x965685: fst     [esp+238h+var_210]; int
0x965689: fld     [esp+238h+var_1B0]
0x965690: fabs
0x965692: fstp    dword ptr [esp+238h+var_220]
0x965696: fld     dword ptr [esp+238h+var_220]
0x96569A: fst     [esp+238h+var_130]
0x9656A1: fmul    dword ptr [eax+4]
0x9656A4: fld     dword ptr [eax+8]
0x9656A7: fmulp   st(2), st
0x9656A9: faddp   st(1), st
0x9656AB: fstp    [esp+238h+var_22C]
0x9656AF: fld     dword ptr [esp+238h+var_1E8]
0x9656B3: fld     [esp+238h+var_22C]
0x9656B7: fld     st
0x9656B9: fcom    st(2)
0x9656BB: fnstsw  ax
0x9656BD: fld     [esp+238h+var_214]
0x9656C1: test    ah, 5
0x9656C4: jp      loc_9657BF
0x9656CA: fstp    st(2)
0x9656CC: fld     [esp+238h+var_1DC]
0x9656D0: fchs
0x9656D2: fstp    [esp+238h+var_22C]
0x9656D6: fldz
0x9656D8: fld     [esp+238h+var_22C]
0x9656DC: fcom    st(1)
0x9656DE: fnstsw  ax
0x9656E0: fstp    st(1)
0x9656E2: test    ah, 1
0x9656E5: jnz     short loc_965748
0x9656E7: fstp    st
0x9656E9: fld     st(1)
0x9656EB: fld     st(6)
0x9656ED: fmul    st, st(1)
0x9656EF: fadd    st, st(4)
0x9656F1: fcomp   st(2)
0x9656F3: fnstsw  ax
0x9656F5: test    ah, 41h
0x9656F8: jnz     short loc_965711
0x9656FA: fstp    st(3)
0x9656FC: xor     al, al
0x9656FE: fstp    st
0x965700: fstp    st(1)
0x965702: fstp    st(2)
0x965704: fstp    st(1)
0x965706: fstp    st
0x965708: fstp    st
0x96570A: pop     edi
0x96570B: pop     esi
0x96570C: pop     ebx
0x96570D: mov     esp, ebp
0x96570F: pop     ebp
0x965710: retn
0x965711: fxch    st(1)
0x965713: fsub    st, st(3)
0x965715: fdivrp  st(1), st
0x965717: fstp    [esp+238h+var_22C]
0x96571B: fld     [esp+238h+var_22C]
0x96571F: fld     dword ptr [esi]
0x965721: fcomp   st(1)
0x965723: fnstsw  ax
0x965725: test    ah, 5
0x965728: jp      loc_9659FA
0x96572E: mov     edi, edx
0x965730: fstp    dword ptr [esi]
0x965732: mov     ecx, 6
0x965737: mov     [esp+238h+var_218], 0
0x96573F: mov     [esp+238h+var_228], edi
0x965743: jmp     loc_9658DB
0x965748: fadd    st, st(3)
0x96574A: fstp    dword ptr [esp+238h+var_220]
0x96574E: fld     dword ptr [esp+238h+var_220]
0x965752: fcom    st(1)
0x965754: fnstsw  ax
0x965756: test    ah, 41h
0x965759: jnz     loc_9659F8
0x96575F: fld     st(2)
0x965761: fmul    st(7), st
0x965763: fxch    st(7)
0x965765: fadd    st, st(1)
0x965767: fcomp   st(2)
0x965769: fnstsw  ax
0x96576B: test    ah, 41h
0x96576E: jnz     short loc_965787
0x965770: fstp    st(3)
0x965772: xor     al, al
0x965774: fstp    st
0x965776: fstp    st(1)
0x965778: fstp    st(2)
0x96577A: fstp    st(2)
0x96577C: fstp    st
0x96577E: fstp    st
0x965780: pop     edi
0x965781: pop     esi
0x965782: pop     ebx
0x965783: mov     esp, ebp
0x965785: pop     ebp
0x965786: retn
0x965787: fsubp   st(1), st
0x965789: fdivrp  st(5), st
0x96578B: fxch    st(4)
0x96578D: fstp    [esp+238h+var_22C]
0x965791: fld     [esp+238h+var_22C]
0x965795: fld     dword ptr [esi]
0x965797: fcomp   st(1)
0x965799: fnstsw  ax
0x96579B: test    ah, 5
0x96579E: jp      loc_9659DC
0x9657A4: fstp    dword ptr [esi]
0x9657A6: mov     edi, edx
0x9657A8: fld     [ebp+arg_0]
0x9657AB: mov     ecx, 6
0x9657B0: mov     [esp+238h+var_218], edx
0x9657B4: fxch    st(4)
0x9657B6: mov     [esp+238h+var_228], edi
0x9657BA: jmp     loc_9658DB
0x9657BF: fxch    st(2)
0x9657C1: fchs
0x9657C3: fcom    st(3)
0x9657C5: fnstsw  ax
0x9657C7: test    ah, 41h
0x9657CA: jnz     loc_9659F8
0x9657D0: fstp    st(6)
0x9657D2: fld     [esp+238h+var_1DC]
0x9657D6: fchs
0x9657D8: fstp    [esp+238h+var_22C]
0x9657DC: fldz
0x9657DE: fld     [esp+238h+var_22C]
0x9657E2: fcom    st(1)
0x9657E4: fnstsw  ax
0x9657E6: fstp    st(1)
0x9657E8: test    ah, 41h
0x9657EB: jp      short loc_965857
0x9657ED: fstp    st
0x9657EF: fld     st(1)
0x9657F1: fld     [ebp+arg_0]
0x9657F4: fmul    st, st(1)
0x9657F6: fadd    st, st(4)
0x9657F8: fcomp   st(7)
0x9657FA: fnstsw  ax
0x9657FC: fstp    st(6)
0x9657FE: test    ah, 5
0x965801: jp      short loc_965818
0x965803: fstp    st(2)
0x965805: xor     al, al
0x965807: fstp    st(1)
0x965809: fstp    st(2)
0x96580B: fstp    st(2)
0x96580D: fstp    st
0x96580F: fstp    st
0x965811: pop     edi
0x965812: pop     esi
0x965813: pop     ebx
0x965814: mov     esp, ebp
0x965816: pop     ebp
0x965817: retn
0x965818: fadd    st, st(2)
0x96581A: fdivrp  st(5), st
0x96581C: fxch    st(4)
0x96581E: fchs
0x965820: fstp    [esp+238h+var_22C]
0x965824: fld     [esp+238h+var_22C]
0x965828: fld     dword ptr [esi]
0x96582A: fcomp   st(1)
0x96582C: fnstsw  ax
0x96582E: test    ah, 5
0x965831: jp      loc_9659DC
0x965837: fstp    dword ptr [esi]
0x965839: or      edi, 0FFFFFFFFh
0x96583C: fld     [ebp+arg_0]
0x96583F: mov     ecx, 6
0x965844: mov     [esp+238h+var_218], 0
0x96584C: fxch    st(4)
0x96584E: mov     [esp+238h+var_228], edi
0x965852: jmp     loc_9658DB
0x965857: fadd    st, st(3)
0x965859: fstp    dword ptr [esp+238h+var_220]
0x96585D: fld     dword ptr [esp+238h+var_220]
0x965861: fcom    st(6)
0x965863: fnstsw  ax
0x965865: test    ah, 5
0x965868: jp      loc_9659E8
0x96586E: fstp    st(4)
0x965870: fld     st(1)
0x965872: fld     [ebp+arg_0]
0x965875: fmul    st, st(1)
0x965877: fadd    st, st(5)
0x965879: fcomp   st(7)
0x96587B: fnstsw  ax
0x96587D: fstp    st(6)
0x96587F: test    ah, 5
0x965882: jp      short loc_965899
0x965884: fstp    st(2)
0x965886: fstp    st(1)
0x965888: fstp    st(2)
0x96588A: xor     al, al
0x96588C: fstp    st
0x96588E: fstp    st
0x965890: fstp    st
0x965892: pop     edi
0x965893: pop     esi
0x965894: pop     ebx
0x965895: mov     esp, ebp
0x965897: pop     ebp
0x965898: retn
0x965899: faddp   st(3), st
0x96589B: fxch    st(2)
0x96589D: fdivrp  st(4), st
0x96589F: fxch    st(3)
0x9658A1: fchs
0x9658A3: fstp    [esp+238h+var_22C]
0x9658A7: fld     [esp+238h+var_22C]
0x9658AB: fld     dword ptr [esi]
0x9658AD: fcomp   st(1)
0x9658AF: fnstsw  ax
0x9658B1: test    ah, 5
0x9658B4: jp      loc_9659D5
0x9658BA: or      edi, 0FFFFFFFFh
0x9658BD: fstp    dword ptr [esi]
0x9658BF: mov     ecx, 6
0x9658C4: mov     [esp+238h+var_218], edx
0x9658C8: mov     [esp+238h+var_228], edi
0x9658CC: fld     [ebp+arg_0]
0x9658CF: fld     dword ptr [esp+238h+var_1F0]
0x9658D3: fxch    st(1)
0x9658D5: fxch    st(4)
0x9658D7: fxch    st(1)
0x9658D9: fxch    st(2)
0x9658DB: fld     [esp+238h+var_1BC]
0x9658DF: mov     eax, [esp+238h+var_224]
0x9658E3: fsub    [esp+238h+var_1C0]
0x9658E7: fstp    [esp+238h+var_1B8]; int
0x9658EE: fld     [esp+238h+var_1B0]
0x9658F5: fsub    [esp+238h+var_1B4]
0x9658FC: fstp    [esp+238h+var_1AC]; int
0x965903: fxch    st(1)
0x965905: fsubrp  st(3), st
0x965907: fxch    st(2)
0x965909: fstp    dword ptr [esp+238h+var_1F0]
0x96590D: fsubp   st(1), st
0x96590F: fstp    [esp+238h+var_214]
0x965913: fld     [esp+238h+var_1AC]
0x96591A: fabs
0x96591C: fstp    dword ptr [esp+238h+var_220]
0x965920: fld     dword ptr [esp+238h+var_220]
0x965924: fst     [esp+238h+var_100]
0x96592B: fld     [esp+238h+var_1B8]
0x965932: fabs
0x965934: fstp    dword ptr [esp+238h+var_220]
0x965938: fld     dword ptr [esp+238h+var_220]
0x96593C: fst     [esp+238h+var_198]; int
0x965943: fmul    dword ptr [eax+8]
0x965946: fld     dword ptr [eax+4]
0x965949: fmulp   st(2), st
0x96594B: faddp   st(1), st
0x96594D: fstp    [esp+238h+var_22C]
0x965951: fld     dword ptr [esp+238h+var_1F0]
0x965955: fld     [esp+238h+var_22C]
0x965959: fld     st
0x96595B: fcom    st(2)
0x96595D: fnstsw  ax
0x96595F: test    ah, 5
0x965962: jp      loc_965A71
0x965968: fstp    st(1)
0x96596A: fld     [esp+238h+var_1DC]
0x96596E: fchs
0x965970: fstp    [esp+238h+var_22C]
0x965974: fldz
0x965976: fld     [esp+238h+var_22C]
0x96597A: fcom    st(1)
0x96597C: fnstsw  ax
0x96597E: fstp    st(1)
0x965980: test    ah, 1
0x965983: jnz     short loc_965A01
0x965985: fstp    st
0x965987: fld     [esp+238h+var_214]
0x96598B: fld     st(3)
0x96598D: fmul    st, st(1)
0x96598F: fadd    st, st(3)
0x965991: fcomp   st(2)
0x965993: fnstsw  ax
0x965995: test    ah, 41h
0x965998: jz      loc_965888
0x96599E: fxch    st(1)
0x9659A0: fsubrp  st(2), st
0x9659A2: fdivp   st(1), st
0x9659A4: fstp    [esp+238h+var_22C]
0x9659A8: fld     [esp+238h+var_22C]
0x9659AC: fld     dword ptr [esi]
0x9659AE: fcomp   st(1)
0x9659B0: fnstsw  ax
0x9659B2: test    ah, 5
0x9659B5: jp      loc_965B5F
0x9659BB: mov     edi, edx
0x9659BD: fstp    dword ptr [esi]
0x9659BF: mov     ecx, 7
0x9659C4: mov     [esp+238h+var_218], 0
0x9659CC: mov     [esp+238h+var_228], edi
0x9659D0: jmp     loc_965B61
0x9659D5: fstp    st
0x9659D7: jmp     loc_9658CC
0x9659DC: fstp    st
0x9659DE: fld     [ebp+arg_0]
0x9659E1: fxch    st(4)
0x9659E3: jmp     loc_9658DB
0x9659E8: fstp    st(1)
0x9659EA: fstp    st(5)
0x9659EC: fstp    st(4)
0x9659EE: fld     [ebp+arg_0]
0x9659F1: fxch    st(4)
0x9659F3: jmp     loc_9658DB
0x9659F8: fstp    st(1)
0x9659FA: fstp    st
0x9659FC: jmp     loc_9658DB
0x965A01: faddp   st(2), st
0x965A03: fxch    st(1)
0x965A05: fstp    dword ptr [esp+238h+var_220]
0x965A09: fld     dword ptr [esp+238h+var_220]
0x965A0D: fcom    st(1)
0x965A0F: fnstsw  ax
0x965A11: test    ah, 41h
0x965A14: jnz     loc_965B5D
0x965A1A: fld     [esp+238h+var_214]
0x965A1E: fld     st(3)
0x965A20: fmul    st, st(1)
0x965A22: fadd    st, st(2)
0x965A24: fcomp   st(3)
0x965A26: fnstsw  ax
0x965A28: test    ah, 41h
0x965A2B: jnz     short loc_965A3E
0x965A2D: fstp    st(1)
0x965A2F: xor     al, al
0x965A31: fstp    st(1)
0x965A33: fstp    st
0x965A35: fstp    st
0x965A37: pop     edi
0x965A38: pop     esi
0x965A39: pop     ebx
0x965A3A: mov     esp, ebp
0x965A3C: pop     ebp
0x965A3D: retn
0x965A3E: fxch    st(2)
0x965A40: fsubrp  st(1), st
0x965A42: fdivrp  st(1), st
0x965A44: fstp    [esp+238h+var_22C]
0x965A48: fld     [esp+238h+var_22C]
0x965A4C: fld     dword ptr [esi]
0x965A4E: fcomp   st(1)
0x965A50: fnstsw  ax
0x965A52: test    ah, 5
0x965A55: jp      loc_965B5F
0x965A5B: mov     edi, edx
0x965A5D: fstp    dword ptr [esi]
0x965A5F: mov     ecx, 7
0x965A64: mov     [esp+238h+var_218], edx
0x965A68: mov     [esp+238h+var_228], edi
0x965A6C: jmp     loc_965B61
0x965A71: fxch    st(1)
0x965A73: fchs
0x965A75: fcom    st(2)
0x965A77: fnstsw  ax
0x965A79: test    ah, 41h
0x965A7C: jnz     loc_965B57
0x965A82: fld     [esp+238h+var_1DC]
0x965A86: fchs
0x965A88: fstp    [esp+238h+var_22C]
0x965A8C: fldz
0x965A8E: fld     [esp+238h+var_22C]
0x965A92: fcom    st(1)
0x965A94: fnstsw  ax
0x965A96: fstp    st(1)
0x965A98: test    ah, 41h
0x965A9B: jp      short loc_965AEF
0x965A9D: fstp    st
0x965A9F: fld     [esp+238h+var_214]
0x965AA3: fld     st(4)
0x965AA5: fmul    st, st(1)
0x965AA7: fadd    st, st(4)
0x965AA9: fcomp   st(2)
0x965AAB: fnstsw  ax
0x965AAD: fstp    st(1)
0x965AAF: test    ah, 5
0x965AB2: jnp     loc_965888
0x965AB8: fxch    st(1)
0x965ABA: faddp   st(2), st
0x965ABC: fdivp   st(1), st
0x965ABE: fchs
0x965AC0: fstp    [esp+238h+var_22C]
0x965AC4: fld     [esp+238h+var_22C]
0x965AC8: fld     dword ptr [esi]
0x965ACA: fcomp   st(1)
0x965ACC: fnstsw  ax
0x965ACE: test    ah, 5
0x965AD1: jp      loc_965B5F
0x965AD7: or      edi, 0FFFFFFFFh
0x965ADA: fstp    dword ptr [esi]
0x965ADC: mov     ecx, 7
0x965AE1: mov     [esp+238h+var_218], 0
0x965AE9: mov     [esp+238h+var_228], edi
0x965AED: jmp     short loc_965B61
0x965AEF: faddp   st(3), st
0x965AF1: fxch    st(2)
0x965AF3: fstp    dword ptr [esp+238h+var_220]
0x965AF7: fld     dword ptr [esp+238h+var_220]
0x965AFB: fcom    st(2)
0x965AFD: fnstsw  ax
0x965AFF: test    ah, 5
0x965B02: jp      short loc_965B5B
0x965B04: fld     [esp+238h+var_214]
0x965B08: fld     st(4)
0x965B0A: fmul    st, st(1)
0x965B0C: fadd    st, st(2)
0x965B0E: fcomp   st(4)
0x965B10: fnstsw  ax
0x965B12: fstp    st(3)
0x965B14: test    ah, 5
0x965B17: jp      short loc_965B2A
0x965B19: fstp    st
0x965B1B: xor     al, al
0x965B1D: fstp    st
0x965B1F: fstp    st
0x965B21: fstp    st
0x965B23: pop     edi
0x965B24: pop     esi
0x965B25: pop     ebx
0x965B26: mov     esp, ebp
0x965B28: pop     ebp
0x965B29: retn
0x965B2A: faddp   st(1), st
0x965B2C: fdivrp  st(1), st
0x965B2E: fchs
0x965B30: fstp    [esp+238h+var_22C]
0x965B34: fld     [esp+238h+var_22C]
0x965B38: fld     dword ptr [esi]
0x965B3A: fcomp   st(1)
0x965B3C: fnstsw  ax
0x965B3E: test    ah, 5
0x965B41: jp      short loc_965B5F
0x965B43: or      edi, 0FFFFFFFFh
0x965B46: fstp    dword ptr [esi]
0x965B48: mov     ecx, 7
0x965B4D: mov     [esp+238h+var_218], edx
0x965B51: mov     [esp+238h+var_228], edi
0x965B55: jmp     short loc_965B61
0x965B57: fstp    st(2)
0x965B59: jmp     short loc_965B5D
0x965B5B: fstp    st
0x965B5D: fstp    st
0x965B5F: fstp    st
0x965B61: fld     dword ptr [ebx+10h]
0x965B64: fld     dword ptr [ebx+14h]
0x965B67: fld     [esp+238h+var_70]
0x965B6E: fld     st
0x965B70: fmul    st, st(3)
0x965B72: fld     [esp+238h+var_60]
0x965B79: fld     st
0x965B7B: fmul    st, st(4)
0x965B7D: fsubp   st(2), st
0x965B7F: fxch    st(1)
0x965B81: fstp    [esp+238h+var_1FC]
0x965B85: mov     eax, [esp+238h+var_1FC]
0x965B89: fld     dword ptr [ebx+0Ch]
0x965B8C: mov     [esp+238h+var_E4], eax; int
0x965B93: fld     [esp+238h+var_118]
0x965B9A: fld     st
0x965B9C: fmulp   st(5), st
0x965B9E: fxch    st(3)
0x965BA0: fmul    st, st(1)
0x965BA2: fsubp   st(4), st
0x965BA4: fxch    st(3)
0x965BA6: fstp    [esp+238h+var_1F8]
0x965BAA: mov     eax, [esp+238h+var_1F8]
0x965BAE: mov     [esp+238h+var_E0], eax; int
0x965BB5: fmulp   st(2), st
0x965BB7: fmulp   st(2), st
0x965BB9: fsubrp  st(1), st
0x965BBB: fstp    [esp+238h+var_1F4]
0x965BBF: mov     eax, [esp+238h+var_1F4]
0x965BC3: fld     [esp+238h+var_1F8]
0x965BC7: mov     [esp+238h+var_DC], eax; int
0x965BCE: fld     [esp+238h+var_1FC]
0x965BD2: mov     eax, [esp+238h+var_224]
0x965BD6: fld     [esp+238h+var_1F4]
0x965BDA: fld     [esp+238h+var_50]
0x965BE1: fmul    st, st(2)
0x965BE3: fld     [esp+238h+var_30]
0x965BEA: fmul    st, st(4)
0x965BEC: faddp   st(1), st
0x965BEE: fld     [esp+238h+var_20]
0x965BF5: fmul    st, st(2)
0x965BF7: faddp   st(1), st
0x965BF9: fstp    dword ptr [esp+238h+var_1E8]
0x965BFD: fld     [esp+238h+var_40]
0x965C04: fmulp   st(2), st
0x965C06: fld     [esp+238h+var_90]
0x965C0D: fmulp   st(3), st
0x965C0F: fxch    st(1)
0x965C11: faddp   st(2), st
0x965C13: fmul    [esp+238h+var_80]
0x965C1A: faddp   st(1), st
0x965C1C: fstp    dword ptr [esp+238h+var_1F0]
0x965C20: fld     [esp+238h+var_1CC]
0x965C24: fabs
0x965C26: fstp    dword ptr [esp+238h+var_220]
0x965C2A: fld     dword ptr [esp+238h+var_220]
0x965C2E: fst     [esp+238h+var_B0]
0x965C35: fmul    dword ptr [eax+8]
0x965C38: fld     dword ptr [eax]
0x965C3A: fmul    qword ptr [esp+238h+var_110]
0x965C41: faddp   st(1), st
0x965C43: fstp    [esp+238h+var_22C]
0x965C47: fld     dword ptr [esp+238h+var_1E8]
0x965C4B: fld     [esp+238h+var_22C]
0x965C4F: fld     st
0x965C51: fcom    st(2)
0x965C53: fnstsw  ax
0x965C55: fld     dword ptr [esp+238h+var_1F0]
0x965C59: test    ah, 5
0x965C5C: jp      loc_965D23
0x965C62: fstp    st(2)
0x965C64: fldz
0x965C66: fcomp   [esp+238h+var_1D8]
0x965C6A: fnstsw  ax
0x965C6C: test    ah, 41h
0x965C6F: jp      short loc_965CBD
0x965C71: fld     st(1)
0x965C73: fld     st(4)
0x965C75: fmul    st, st(1)
0x965C77: fadd    st, st(4)
0x965C79: fcomp   st(2)
0x965C7B: fnstsw  ax
0x965C7D: test    ah, 41h
0x965C80: jz      loc_9653E8
0x965C86: fxch    st(1)
0x965C88: fsub    st, st(3)
0x965C8A: fdivrp  st(1), st
0x965C8C: fstp    [esp+238h+var_22C]
0x965C90: fld     [esp+238h+var_22C]
0x965C94: fld     dword ptr [esi]
0x965C96: fcomp   st(1)
0x965C98: fnstsw  ax
0x965C9A: test    ah, 5
0x965C9D: jp      loc_965DF1
0x965CA3: mov     edi, edx
0x965CA5: fstp    dword ptr [esi]
0x965CA7: mov     ecx, 8
0x965CAC: mov     [esp+238h+var_218], 0
0x965CB4: mov     [esp+238h+var_228], edi
0x965CB8: jmp     loc_965DF3
0x965CBD: fld     [esp+238h+var_10]
0x965CC4: fadd    st, st(3)
0x965CC6: fstp    dword ptr [esp+238h+var_220]
0x965CCA: fld     dword ptr [esp+238h+var_220]
0x965CCE: fcom    st(1)
0x965CD0: fnstsw  ax
0x965CD2: test    ah, 41h
0x965CD5: jnz     loc_965DE9
0x965CDB: fld     st(2)
0x965CDD: fld     st(5)
0x965CDF: fmul    st, st(1)
0x965CE1: fadd    st, st(2)
0x965CE3: fcomp   st(3)
0x965CE5: fnstsw  ax
0x965CE7: test    ah, 41h
0x965CEA: jz      loc_965477
0x965CF0: fxch    st(2)
0x965CF2: fsubrp  st(1), st
0x965CF4: fdivrp  st(1), st
0x965CF6: fstp    [esp+238h+var_22C]
0x965CFA: fld     [esp+238h+var_22C]
0x965CFE: fld     dword ptr [esi]
0x965D00: fcomp   st(1)
0x965D02: fnstsw  ax
0x965D04: test    ah, 5
0x965D07: jp      loc_965DF1
0x965D0D: mov     edi, edx
0x965D0F: fstp    dword ptr [esi]
0x965D11: mov     ecx, 8
0x965D16: mov     [esp+238h+var_218], edx
0x965D1A: mov     [esp+238h+var_228], edi
0x965D1E: jmp     loc_965DF3
0x965D23: fxch    st(2)
0x965D25: fchs
0x965D27: fcom    st(3)
0x965D29: fnstsw  ax
0x965D2B: test    ah, 41h
0x965D2E: jnz     loc_965DE9
0x965D34: fldz
0x965D36: fcomp   [esp+238h+var_1D8]
0x965D3A: fnstsw  ax
0x965D3C: test    ah, 1
0x965D3F: jnz     short loc_965D8B
0x965D41: fld     st(2)
0x965D43: fld     st(5)
0x965D45: fmul    st, st(1)
0x965D47: fadd    st, st(5)
0x965D49: fcomp   st(2)
0x965D4B: fnstsw  ax
0x965D4D: fstp    st(1)
0x965D4F: test    ah, 5
0x965D52: jnp     loc_9653E8
0x965D58: fxch    st(1)
0x965D5A: fadd    st, st(3)
0x965D5C: fdivrp  st(1), st
0x965D5E: fchs
0x965D60: fstp    [esp+238h+var_22C]
0x965D64: fld     [esp+238h+var_22C]
0x965D68: fld     dword ptr [esi]
0x965D6A: fcomp   st(1)
0x965D6C: fnstsw  ax
0x965D6E: test    ah, 5
0x965D71: jp      short loc_965DF1
0x965D73: or      edi, 0FFFFFFFFh
0x965D76: fstp    dword ptr [esi]
0x965D78: mov     ecx, 8
0x965D7D: mov     [esp+238h+var_218], 0
0x965D85: mov     [esp+238h+var_228], edi
0x965D89: jmp     short loc_965DF3
0x965D8B: fld     [esp+238h+var_10]
0x965D92: fadd    st, st(4)
0x965D94: fstp    dword ptr [esp+238h+var_220]
0x965D98: fld     dword ptr [esp+238h+var_220]
0x965D9C: fcom    st(1)
0x965D9E: fnstsw  ax
0x965DA0: test    ah, 5
0x965DA3: jp      short loc_965DED
0x965DA5: fld     st(3)
0x965DA7: fld     st(6)
0x965DA9: fmul    st, st(1)
0x965DAB: fadd    st, st(2)
0x965DAD: fcomp   st(3)
0x965DAF: fnstsw  ax
0x965DB1: fstp    st(2)
0x965DB3: test    ah, 5
0x965DB6: jnp     loc_96555D
0x965DBC: faddp   st(2), st
0x965DBE: fdivp   st(1), st
0x965DC0: fchs
0x965DC2: fstp    [esp+238h+var_22C]
0x965DC6: fld     [esp+238h+var_22C]
0x965DCA: fld     dword ptr [esi]
0x965DCC: fcomp   st(1)
0x965DCE: fnstsw  ax
0x965DD0: test    ah, 5
0x965DD3: jp      short loc_965DF1
0x965DD5: or      edi, 0FFFFFFFFh
0x965DD8: fstp    dword ptr [esi]
0x965DDA: mov     ecx, 8
0x965DDF: mov     [esp+238h+var_218], edx
0x965DE3: mov     [esp+238h+var_228], edi
0x965DE7: jmp     short loc_965DF3
0x965DE9: fstp    st(1)
0x965DEB: jmp     short loc_965DF1
0x965DED: fstp    st(2)
0x965DEF: fstp    st
0x965DF1: fstp    st
0x965DF3: fld     dword ptr [ebx+10h]
0x965DF6: fld     dword ptr [ebx+14h]
0x965DF9: fld     [esp+238h+var_A0]
0x965E00: fld     st
0x965E02: fmul    st, st(3)
0x965E04: fld     [esp+238h+var_120]
0x965E0B: fmul    st, st(3)
0x965E0D: fsubp   st(1), st
0x965E0F: fstp    [esp+238h+var_110]
0x965E16: mov     eax, [esp+238h+var_110]
0x965E1D: fld     dword ptr [ebx+0Ch]
0x965E20: mov     [esp+238h+var_1FC], eax; float
0x965E24: fld     [esp+238h+var_148]
0x965E2B: fmulp   st(3), st
0x965E2D: fmul    st(1), st
0x965E2F: fxch    st(2)
0x965E31: fsubrp  st(1), st
0x965E33: fstp    [esp+238h+var_110+4]; int
0x965E3A: mov     eax, [esp+238h+var_110+4]
0x965E41: mov     [esp+238h+var_1F8], eax; float
0x965E45: fmul    [esp+238h+var_120]
0x965E4C: fld     [esp+238h+var_148]
0x965E53: fmulp   st(2), st
0x965E55: fsubrp  st(1), st
0x965E57: fstp    [esp+238h+var_108]; int
0x965E5E: mov     eax, [esp+238h+var_108]
0x965E65: fld     [esp+238h+var_110+4]
0x965E6C: mov     [esp+238h+var_1F4], eax; float
0x965E70: fld     [esp+238h+var_110]
0x965E77: mov     eax, [esp+238h+var_224]
0x965E7B: fld     [esp+238h+var_108]
0x965E82: fld     [esp+238h+var_50]
0x965E89: fmul    st, st(2)
0x965E8B: fld     [esp+238h+var_30]
0x965E92: fmul    st, st(4)
0x965E94: faddp   st(1), st
0x965E96: fld     [esp+238h+var_20]
0x965E9D: fmul    st, st(2)
0x965E9F: faddp   st(1), st
0x965EA1: fstp    dword ptr [esp+238h+var_1E8]
0x965EA5: fld     [esp+238h+var_40]
0x965EAC: fmulp   st(2), st
0x965EAE: fld     [esp+238h+var_90]
0x965EB5: fmulp   st(3), st
0x965EB7: fxch    st(1)
0x965EB9: faddp   st(2), st
0x965EBB: fmul    [esp+238h+var_80]
0x965EC2: faddp   st(1), st
0x965EC4: fstp    [esp+238h+var_214]
0x965EC8: fld     [esp+238h+var_1C8]
0x965ECC: fabs
0x965ECE: fstp    dword ptr [esp+238h+var_220]
0x965ED2: fld     dword ptr [esp+238h+var_220]
0x965ED6: fst     qword ptr [esp+238h+var_110]; int
0x965EDD: fmul    dword ptr [eax+8]
0x965EE0: fld     dword ptr [eax]
0x965EE2: fmul    [esp+238h+var_130]
0x965EE9: faddp   st(1), st
0x965EEB: fstp    [esp+238h+var_22C]
0x965EEF: fld     dword ptr [esp+238h+var_1E8]
0x965EF3: fld     [esp+238h+var_22C]
0x965EF7: fld     st
0x965EF9: fcom    st(2)
0x965EFB: fnstsw  ax
0x965EFD: fld     [esp+238h+var_214]
0x965F01: test    ah, 5
0x965F04: jp      loc_965FFF
0x965F0A: fstp    st(2)
0x965F0C: fld     [esp+238h+var_1D8]
0x965F10: fchs
0x965F12: fstp    [esp+238h+var_22C]
0x965F16: fldz
0x965F18: fld     [esp+238h+var_22C]
0x965F1C: fcom    st(1)
0x965F1E: fnstsw  ax
0x965F20: fstp    st(1)
0x965F22: test    ah, 1
0x965F25: jnz     short loc_965F88
0x965F27: fstp    st
0x965F29: fld     st(1)
0x965F2B: fld     st(6)
0x965F2D: fmul    st, st(1)
0x965F2F: fadd    st, st(4)
0x965F31: fcomp   st(2)
0x965F33: fnstsw  ax
0x965F35: test    ah, 41h
0x965F38: jnz     short loc_965F51
0x965F3A: fstp    st(3)
0x965F3C: xor     al, al
0x965F3E: fstp    st
0x965F40: fstp    st(1)
0x965F42: fstp    st(2)
0x965F44: fstp    st
0x965F46: fstp    st
0x965F48: fstp    st
0x965F4A: pop     edi
0x965F4B: pop     esi
0x965F4C: pop     ebx
0x965F4D: mov     esp, ebp
0x965F4F: pop     ebp
0x965F50: retn
0x965F51: fxch    st(1)
0x965F53: fsub    st, st(3)
0x965F55: fdivrp  st(1), st
0x965F57: fstp    [esp+238h+var_22C]
0x965F5B: fld     [esp+238h+var_22C]
0x965F5F: fld     dword ptr [esi]
0x965F61: fcomp   st(1)
0x965F63: fnstsw  ax
0x965F65: test    ah, 5
0x965F68: jp      loc_96620D
0x965F6E: mov     edi, edx
0x965F70: fstp    dword ptr [esi]
0x965F72: mov     ecx, 9
0x965F77: mov     [esp+238h+var_218], 0
0x965F7F: mov     [esp+238h+var_228], edi
0x965F83: jmp     loc_96611B
0x965F88: fadd    st, st(3)
0x965F8A: fstp    dword ptr [esp+238h+var_220]
0x965F8E: fld     dword ptr [esp+238h+var_220]
0x965F92: fcom    st(1)
0x965F94: fnstsw  ax
0x965F96: test    ah, 41h
0x965F99: jnz     loc_96620B
0x965F9F: fld     st(2)
0x965FA1: fmul    st(7), st
0x965FA3: fxch    st(7)
0x965FA5: fadd    st, st(1)
0x965FA7: fcomp   st(2)
0x965FA9: fnstsw  ax
0x965FAB: test    ah, 41h
0x965FAE: jnz     short loc_965FC7
0x965FB0: fstp    st(3)
0x965FB2: xor     al, al
0x965FB4: fstp    st
0x965FB6: fstp    st(1)
0x965FB8: fstp    st(2)
0x965FBA: fstp    st(2)
0x965FBC: fstp    st(1)
0x965FBE: fstp    st
0x965FC0: pop     edi
0x965FC1: pop     esi
0x965FC2: pop     ebx
0x965FC3: mov     esp, ebp
0x965FC5: pop     ebp
0x965FC6: retn
0x965FC7: fsubp   st(1), st
0x965FC9: fdivrp  st(5), st
0x965FCB: fxch    st(4)
0x965FCD: fstp    [esp+238h+var_22C]
0x965FD1: fld     [esp+238h+var_22C]
0x965FD5: fld     dword ptr [esi]
0x965FD7: fcomp   st(1)
0x965FD9: fnstsw  ax
0x965FDB: test    ah, 5
0x965FDE: jp      loc_9661EF
0x965FE4: fstp    dword ptr [esi]
0x965FE6: mov     edi, edx
0x965FE8: fld     [ebp+arg_0]
0x965FEB: mov     ecx, 9
0x965FF0: mov     [esp+238h+var_218], edx
0x965FF4: fxch    st(4)
0x965FF6: mov     [esp+238h+var_228], edi
0x965FFA: jmp     loc_96611B
0x965FFF: fxch    st(2)
0x966001: fchs
0x966003: fcom    st(3)
0x966005: fnstsw  ax
0x966007: test    ah, 41h
0x96600A: jnz     loc_96620B
0x966010: fstp    st(6)
0x966012: fld     [esp+238h+var_1D8]
0x966016: fchs
0x966018: fstp    [esp+238h+var_22C]
0x96601C: fldz
0x96601E: fld     [esp+238h+var_22C]
0x966022: fcom    st(1)
0x966024: fnstsw  ax
0x966026: fstp    st(1)
0x966028: test    ah, 41h
0x96602B: jp      short loc_966097
0x96602D: fstp    st
0x96602F: fld     st(1)
0x966031: fld     [ebp+arg_0]
0x966034: fmul    st, st(1)
0x966036: fadd    st, st(4)
0x966038: fcomp   st(7)
0x96603A: fnstsw  ax
0x96603C: fstp    st(6)
0x96603E: test    ah, 5
0x966041: jp      short loc_966058
0x966043: fstp    st(2)
0x966045: xor     al, al
0x966047: fstp    st(1)
0x966049: fstp    st(2)
0x96604B: fstp    st(2)
0x96604D: fstp    st(1)
0x96604F: fstp    st
0x966051: pop     edi
0x966052: pop     esi
0x966053: pop     ebx
0x966054: mov     esp, ebp
0x966056: pop     ebp
0x966057: retn
0x966058: fadd    st, st(2)
0x96605A: fdivrp  st(5), st
0x96605C: fxch    st(4)
0x96605E: fchs
0x966060: fstp    [esp+238h+var_22C]
0x966064: fld     [esp+238h+var_22C]
0x966068: fld     dword ptr [esi]
0x96606A: fcomp   st(1)
0x96606C: fnstsw  ax
0x96606E: test    ah, 5
0x966071: jp      loc_9661EF
0x966077: fstp    dword ptr [esi]
0x966079: or      edi, 0FFFFFFFFh
0x96607C: fld     [ebp+arg_0]
0x96607F: mov     ecx, 9
0x966084: mov     [esp+238h+var_218], 0
0x96608C: fxch    st(4)
0x96608E: mov     [esp+238h+var_228], edi
0x966092: jmp     loc_96611B
0x966097: fadd    st, st(3)
0x966099: fstp    dword ptr [esp+238h+var_220]
0x96609D: fld     dword ptr [esp+238h+var_220]
0x9660A1: fcom    st(6)
0x9660A3: fnstsw  ax
0x9660A5: test    ah, 5
0x9660A8: jp      loc_9661FB
0x9660AE: fstp    st(4)
0x9660B0: fld     st(1)
0x9660B2: fld     [ebp+arg_0]
0x9660B5: fmul    st, st(1)
0x9660B7: fadd    st, st(5)
0x9660B9: fcomp   st(7)
0x9660BB: fnstsw  ax
0x9660BD: fstp    st(6)
0x9660BF: test    ah, 5
0x9660C2: jp      short loc_9660D9
0x9660C4: fstp    st(2)
0x9660C6: xor     al, al
0x9660C8: fstp    st(1)
0x9660CA: fstp    st(2)
0x9660CC: fstp    st
0x9660CE: fstp    st(1)
0x9660D0: fstp    st
0x9660D2: pop     edi
0x9660D3: pop     esi
0x9660D4: pop     ebx
0x9660D5: mov     esp, ebp
0x9660D7: pop     ebp
0x9660D8: retn
0x9660D9: faddp   st(3), st
0x9660DB: fxch    st(2)
0x9660DD: fdivrp  st(4), st
0x9660DF: fxch    st(3)
0x9660E1: fchs
0x9660E3: fstp    [esp+238h+var_22C]
0x9660E7: fld     [esp+238h+var_22C]
0x9660EB: fld     dword ptr [esi]
0x9660ED: fcomp   st(1)
0x9660EF: fnstsw  ax
0x9660F1: test    ah, 5
0x9660F4: jp      loc_9661E8
0x9660FA: or      edi, 0FFFFFFFFh
0x9660FD: fstp    dword ptr [esi]
0x9660FF: mov     ecx, 9
0x966104: mov     [esp+238h+var_218], edx
0x966108: mov     [esp+238h+var_228], edi
0x96610C: fld     [ebp+arg_0]
0x96610F: fld     dword ptr [esp+238h+var_1F0]
0x966113: fxch    st(1)
0x966115: fxch    st(4)
0x966117: fxch    st(1)
0x966119: fxch    st(2)
0x96611B: fld     [esp+238h+var_1C8]
0x96611F: mov     eax, [esp+238h+var_224]
0x966123: fsub    [esp+238h+var_1CC]
0x966127: fstp    [esp+238h+var_1C4]; int
0x96612B: fxch    st(1)
0x96612D: fsubrp  st(3), st
0x96612F: fxch    st(2)
0x966131: fstp    dword ptr [esp+238h+var_1F0]
0x966135: fsubp   st(1), st
0x966137: fstp    [esp+238h+var_214]
0x96613B: fld     [esp+238h+var_1C4]
0x96613F: fabs
0x966141: fstp    dword ptr [esp+238h+var_220]
0x966145: fld     dword ptr [esp+238h+var_220]
0x966149: fst     [esp+238h+var_10]
0x966150: fld     dword ptr [eax]
0x966152: fmul    [esp+238h+var_100]
0x966159: fld     dword ptr [eax+8]
0x96615C: fmulp   st(2), st
0x96615E: faddp   st(1), st
0x966160: fstp    [esp+238h+var_22C]
0x966164: fld     dword ptr [esp+238h+var_1F0]
0x966168: fld     [esp+238h+var_22C]
0x96616C: fld     st
0x96616E: fcom    st(2)
0x966170: fnstsw  ax
0x966172: test    ah, 5
0x966175: jp      loc_966277
0x96617B: fstp    st(1)
0x96617D: fld     [esp+238h+var_1D8]
0x966181: fchs
0x966183: fstp    [esp+238h+var_22C]
0x966187: fldz
0x966189: fld     [esp+238h+var_22C]
0x96618D: fcom    st(1)
0x96618F: fnstsw  ax
0x966191: fstp    st(1)
0x966193: test    ah, 1
0x966196: jnz     short loc_966214
0x966198: fstp    st
0x96619A: fld     [esp+238h+var_214]
0x96619E: fld     st(3)
0x9661A0: fmul    st, st(1)
0x9661A2: fadd    st, st(3)
0x9661A4: fcomp   st(2)
0x9661A6: fnstsw  ax
0x9661A8: test    ah, 41h
0x9661AB: jz      loc_965888
0x9661B1: fxch    st(1)
0x9661B3: fsubrp  st(2), st
0x9661B5: fdivp   st(1), st
0x9661B7: fstp    [esp+238h+var_22C]
0x9661BB: fld     [esp+238h+var_22C]
0x9661BF: fld     dword ptr [esi]
0x9661C1: fcomp   st(1)
0x9661C3: fnstsw  ax
0x9661C5: test    ah, 5
0x9661C8: jp      loc_966354
0x9661CE: mov     edi, edx
0x9661D0: fstp    dword ptr [esi]
0x9661D2: mov     ecx, 0Ah
0x9661D7: mov     [esp+238h+var_218], 0
0x9661DF: mov     [esp+238h+var_228], edi
0x9661E3: jmp     loc_966356
0x9661E8: fstp    st
0x9661EA: jmp     loc_96610C
0x9661EF: fstp    st
0x9661F1: fld     [ebp+arg_0]
0x9661F4: fxch    st(4)
0x9661F6: jmp     loc_96611B
0x9661FB: fstp    st(1)
0x9661FD: fstp    st(5)
0x9661FF: fstp    st(4)
0x966201: fld     [ebp+arg_0]
0x966204: fxch    st(4)
0x966206: jmp     loc_96611B
0x96620B: fstp    st(1)
0x96620D: fstp    st
0x96620F: jmp     loc_96611B
0x966214: faddp   st(2), st
0x966216: fxch    st(1)
0x966218: fstp    dword ptr [esp+238h+var_220]
0x96621C: fld     dword ptr [esp+238h+var_220]
0x966220: fcom    st(1)
0x966222: fnstsw  ax
0x966224: test    ah, 41h
0x966227: jnz     loc_966352
0x96622D: fld     [esp+238h+var_214]
0x966231: fld     st(3)
0x966233: fmul    st, st(1)
0x966235: fadd    st, st(2)
0x966237: fcomp   st(3)
0x966239: fnstsw  ax
0x96623B: test    ah, 41h
0x96623E: jz      loc_965A2D
0x966244: fxch    st(2)
0x966246: fsubrp  st(1), st
0x966248: fdivrp  st(1), st
0x96624A: fstp    [esp+238h+var_22C]
0x96624E: fld     [esp+238h+var_22C]
0x966252: fld     dword ptr [esi]
0x966254: fcomp   st(1)
0x966256: fnstsw  ax
0x966258: test    ah, 5
0x96625B: jp      loc_966354
0x966261: mov     edi, edx
0x966263: fstp    dword ptr [esi]
0x966265: mov     ecx, 0Ah
0x96626A: mov     [esp+238h+var_218], edx
0x96626E: mov     [esp+238h+var_228], edi
0x966272: jmp     loc_966356
0x966277: fxch    st(1)
0x966279: fchs
0x96627B: fcom    st(2)
0x96627D: fnstsw  ax
0x96627F: test    ah, 41h
0x966282: jnz     loc_96634C
0x966288: fld     [esp+238h+var_1D8]
0x96628C: fchs
0x96628E: fstp    [esp+238h+var_22C]
0x966292: fldz
0x966294: fld     [esp+238h+var_22C]
0x966298: fcom    st(1)
0x96629A: fnstsw  ax
0x96629C: fstp    st(1)
0x96629E: test    ah, 41h
0x9662A1: jp      short loc_9662F1
0x9662A3: fstp    st
0x9662A5: fld     [esp+238h+var_214]
0x9662A9: fld     st(4)
0x9662AB: fmul    st, st(1)
0x9662AD: fadd    st, st(4)
0x9662AF: fcomp   st(2)
0x9662B1: fnstsw  ax
0x9662B3: fstp    st(1)
0x9662B5: test    ah, 5
0x9662B8: jnp     loc_965888
0x9662BE: fxch    st(1)
0x9662C0: faddp   st(2), st
0x9662C2: fdivp   st(1), st
0x9662C4: fchs
0x9662C6: fstp    [esp+238h+var_22C]
0x9662CA: fld     [esp+238h+var_22C]
0x9662CE: fld     dword ptr [esi]
0x9662D0: fcomp   st(1)
0x9662D2: fnstsw  ax
0x9662D4: test    ah, 5
0x9662D7: jp      short loc_966354
0x9662D9: or      edi, 0FFFFFFFFh
0x9662DC: fstp    dword ptr [esi]
0x9662DE: mov     ecx, 0Ah
0x9662E3: mov     [esp+238h+var_218], 0
0x9662EB: mov     [esp+238h+var_228], edi
0x9662EF: jmp     short loc_966356
0x9662F1: faddp   st(3), st
0x9662F3: fxch    st(2)
0x9662F5: fstp    dword ptr [esp+238h+var_220]
0x9662F9: fld     dword ptr [esp+238h+var_220]
0x9662FD: fcom    st(2)
0x9662FF: fnstsw  ax
0x966301: test    ah, 5
0x966304: jp      short loc_966350
0x966306: fld     [esp+238h+var_214]
0x96630A: fld     st(4)
0x96630C: fmul    st, st(1)
0x96630E: fadd    st, st(2)
0x966310: fcomp   st(4)
0x966312: fnstsw  ax
0x966314: fstp    st(3)
0x966316: test    ah, 5
0x966319: jnp     loc_965B19
0x96631F: faddp   st(1), st
0x966321: fdivrp  st(1), st
0x966323: fchs
0x966325: fstp    [esp+238h+var_22C]
0x966329: fld     [esp+238h+var_22C]
0x96632D: fld     dword ptr [esi]
0x96632F: fcomp   st(1)
0x966331: fnstsw  ax
0x966333: test    ah, 5
0x966336: jp      short loc_966354
0x966338: or      edi, 0FFFFFFFFh
0x96633B: fstp    dword ptr [esi]
0x96633D: mov     ecx, 0Ah
0x966342: mov     [esp+238h+var_218], edx
0x966346: mov     [esp+238h+var_228], edi
0x96634A: jmp     short loc_966356
0x96634C: fstp    st(2)
0x96634E: jmp     short loc_966352
0x966350: fstp    st
0x966352: fstp    st
0x966354: fstp    st
0x966356: fld     dword ptr [ebx+1Ch]
0x966359: fld     dword ptr [ebx+20h]
0x96635C: fld     [esp+238h+var_70]
0x966363: fld     st
0x966365: fmul    st, st(3)
0x966367: fld     [esp+238h+var_60]
0x96636E: fld     st
0x966370: fmul    st, st(4)
0x966372: fsubp   st(2), st
0x966374: fxch    st(1)
0x966376: fstp    dword ptr [esp+238h+var_130]; int
0x96637D: mov     eax, dword ptr [esp+238h+var_130]
0x966384: fld     dword ptr [ebx+18h]
0x966387: mov     dword ptr [esp+238h+var_100], eax; int
0x96638E: fld     [esp+238h+var_118]
0x966395: fld     st
0x966397: fmulp   st(5), st
0x966399: fxch    st(3)
0x96639B: fmul    st, st(1)
0x96639D: fsubp   st(4), st
0x96639F: fxch    st(3)
0x9663A1: fstp    dword ptr [esp+238h+var_130+4]; int
0x9663A8: mov     eax, dword ptr [esp+238h+var_130+4]
0x9663AF: mov     dword ptr [esp+238h+var_100+4], eax; int
0x9663B6: fmulp   st(2), st
0x9663B8: fmulp   st(2), st
0x9663BA: fsubrp  st(1), st
0x9663BC: fstp    [esp+238h+var_128]; int
0x9663C3: mov     eax, [esp+238h+var_128]
0x9663CA: fld     dword ptr [esp+238h+var_130+4]
0x9663D1: mov     [esp+238h+var_F8], eax; int
0x9663D8: fld     dword ptr [esp+238h+var_130]
0x9663DF: mov     eax, [esp+238h+var_224]
0x9663E3: fld     [esp+238h+var_128]
0x9663EA: fld     [esp+238h+var_50]
0x9663F1: fmul    st, st(2)
0x9663F3: fld     [esp+238h+var_30]
0x9663FA: fmul    st, st(4)
0x9663FC: faddp   st(1), st
0x9663FE: fld     [esp+238h+var_20]
0x966405: fmul    st, st(2)
0x966407: faddp   st(1), st
0x966409: fstp    dword ptr [esp+238h+var_220]
0x96640D: fld     [esp+238h+var_40]
0x966414: fmulp   st(2), st
0x966416: fld     [esp+238h+var_90]
0x96641D: fmulp   st(3), st
0x96641F: fxch    st(1)
0x966421: faddp   st(2), st
0x966423: fmul    [esp+238h+var_80]
0x96642A: faddp   st(1), st
0x96642C: fstp    dword ptr [esp+238h+var_1F0]; int
0x966430: fld     dword ptr [eax+4]
0x966433: fmul    [esp+238h+var_B0]
0x96643A: fld     dword ptr [eax]
0x96643C: fmul    [esp+238h+var_1A8]
0x966443: faddp   st(1), st
0x966445: fstp    [esp+238h+var_22C]
0x966449: fld     dword ptr [esp+238h+var_220]
0x96644D: fld     [esp+238h+var_22C]
0x966451: fld     st
0x966453: fcom    st(2)
0x966455: fnstsw  ax
0x966457: fld     dword ptr [esp+238h+var_1F0]
0x96645B: test    ah, 5
0x96645E: jp      loc_966525
0x966464: fstp    st(2)
0x966466: fldz
0x966468: fcomp   [esp+238h+var_1D4]
0x96646C: fnstsw  ax
0x96646E: test    ah, 41h
0x966471: jp      short loc_9664BF
0x966473: fld     st(1)
0x966475: fld     st(4)
0x966477: fmul    st, st(1)
0x966479: fadd    st, st(4)
0x96647B: fcomp   st(2)
0x96647D: fnstsw  ax
0x96647F: test    ah, 41h
0x966482: jz      loc_9653E8
0x966488: fxch    st(1)
0x96648A: fsub    st, st(3)
0x96648C: fdivrp  st(1), st
0x96648E: fstp    [esp+238h+var_22C]
0x966492: fld     [esp+238h+var_22C]
0x966496: fld     dword ptr [esi]
0x966498: fcomp   st(1)
0x96649A: fnstsw  ax
0x96649C: test    ah, 5
0x96649F: jp      loc_9665F3
0x9664A5: mov     edi, edx
0x9664A7: fstp    dword ptr [esi]
0x9664A9: mov     ecx, 0Bh
0x9664AE: mov     [esp+238h+var_218], 0
0x9664B6: mov     [esp+238h+var_228], edi
0x9664BA: jmp     loc_9665F5
0x9664BF: fld     [esp+238h+var_D8]
0x9664C6: fadd    st, st(3)
0x9664C8: fstp    dword ptr [esp+238h+var_220]
0x9664CC: fld     dword ptr [esp+238h+var_220]
0x9664D0: fcom    st(1)
0x9664D2: fnstsw  ax
0x9664D4: test    ah, 41h
0x9664D7: jnz     loc_9665EB
0x9664DD: fld     st(2)
0x9664DF: fld     st(5)
0x9664E1: fmul    st, st(1)
0x9664E3: fadd    st, st(2)
0x9664E5: fcomp   st(3)
0x9664E7: fnstsw  ax
0x9664E9: test    ah, 41h
0x9664EC: jz      loc_965477
0x9664F2: fxch    st(2)
0x9664F4: fsubrp  st(1), st
0x9664F6: fdivrp  st(1), st
0x9664F8: fstp    [esp+238h+var_22C]
0x9664FC: fld     [esp+238h+var_22C]
0x966500: fld     dword ptr [esi]
0x966502: fcomp   st(1)
0x966504: fnstsw  ax
0x966506: test    ah, 5
0x966509: jp      loc_9665F3
0x96650F: mov     edi, edx
0x966511: fstp    dword ptr [esi]
0x966513: mov     ecx, 0Bh
0x966518: mov     [esp+238h+var_218], edx
0x96651C: mov     [esp+238h+var_228], edi
0x966520: jmp     loc_9665F5
0x966525: fxch    st(2)
0x966527: fchs
0x966529: fcom    st(3)
0x96652B: fnstsw  ax
0x96652D: test    ah, 41h
0x966530: jnz     loc_9665EB
0x966536: fldz
0x966538: fcomp   [esp+238h+var_1D4]
0x96653C: fnstsw  ax
0x96653E: test    ah, 1
0x966541: jnz     short loc_96658D
0x966543: fld     st(2)
0x966545: fld     st(5)
0x966547: fmul    st, st(1)
0x966549: fadd    st, st(5)
0x96654B: fcomp   st(2)
0x96654D: fnstsw  ax
0x96654F: fstp    st(1)
0x966551: test    ah, 5
0x966554: jnp     loc_9653E8
0x96655A: fxch    st(1)
0x96655C: fadd    st, st(3)
0x96655E: fdivrp  st(1), st
0x966560: fchs
0x966562: fstp    [esp+238h+var_22C]
0x966566: fld     [esp+238h+var_22C]
0x96656A: fld     dword ptr [esi]
0x96656C: fcomp   st(1)
0x96656E: fnstsw  ax
0x966570: test    ah, 5
0x966573: jp      short loc_9665F3
0x966575: or      edi, 0FFFFFFFFh
0x966578: fstp    dword ptr [esi]
0x96657A: mov     ecx, 0Bh
0x96657F: mov     [esp+238h+var_218], 0
0x966587: mov     [esp+238h+var_228], edi
0x96658B: jmp     short loc_9665F5
0x96658D: fld     [esp+238h+var_D8]
0x966594: fadd    st, st(4)
0x966596: fstp    dword ptr [esp+238h+var_220]
0x96659A: fld     dword ptr [esp+238h+var_220]
0x96659E: fcom    st(1)
0x9665A0: fnstsw  ax
0x9665A2: test    ah, 5
0x9665A5: jp      short loc_9665EF
0x9665A7: fld     st(3)
0x9665A9: fld     st(6)
0x9665AB: fmul    st, st(1)
0x9665AD: fadd    st, st(2)
0x9665AF: fcomp   st(3)
0x9665B1: fnstsw  ax
0x9665B3: fstp    st(2)
0x9665B5: test    ah, 5
0x9665B8: jnp     loc_96555D
0x9665BE: faddp   st(2), st
0x9665C0: fdivp   st(1), st
0x9665C2: fchs
0x9665C4: fstp    [esp+238h+var_22C]
0x9665C8: fld     [esp+238h+var_22C]
0x9665CC: fld     dword ptr [esi]
0x9665CE: fcomp   st(1)
0x9665D0: fnstsw  ax
0x9665D2: test    ah, 5
0x9665D5: jp      short loc_9665F3
0x9665D7: or      edi, 0FFFFFFFFh
0x9665DA: fstp    dword ptr [esi]
0x9665DC: mov     ecx, 0Bh
0x9665E1: mov     [esp+238h+var_218], edx
0x9665E5: mov     [esp+238h+var_228], edi
0x9665E9: jmp     short loc_9665F5
0x9665EB: fstp    st(1)
0x9665ED: jmp     short loc_9665F3
0x9665EF: fstp    st(2)
0x9665F1: fstp    st
0x9665F3: fstp    st
0x9665F5: fld     dword ptr [ebx+1Ch]
0x9665F8: fld     dword ptr [ebx+20h]
0x9665FB: fld     [esp+238h+var_A0]
0x966602: fld     st
0x966604: fmul    st, st(3)
0x966606: fld     [esp+238h+var_120]
0x96660D: fmul    st, st(3)
0x96660F: fsubp   st(1), st
0x966611: fstp    dword ptr [esp+238h+var_B0]
0x966618: mov     eax, dword ptr [esp+238h+var_B0]
0x96661F: fld     dword ptr [ebx+18h]
0x966622: mov     dword ptr [esp+238h+var_1A8], eax; int
0x966629: fld     [esp+238h+var_148]
0x966630: fmulp   st(3), st
0x966632: fmul    st(1), st
0x966634: fxch    st(2)
0x966636: fsubrp  st(1), st
0x966638: fstp    dword ptr [esp+238h+var_B0+4]
0x96663F: mov     eax, dword ptr [esp+238h+var_B0+4]
0x966646: mov     dword ptr [esp+238h+var_1A8+4], eax; int
0x96664D: fmul    [esp+238h+var_120]
0x966654: fld     [esp+238h+var_148]
0x96665B: fmulp   st(2), st
0x96665D: fsubrp  st(1), st
0x96665F: fstp    [esp+238h+var_A8]
0x966666: mov     eax, [esp+238h+var_A8]
0x96666D: fld     dword ptr [esp+238h+var_B0+4]
0x966674: mov     [esp+238h+var_1A0], eax; int
0x96667B: fld     dword ptr [esp+238h+var_B0]
0x966682: mov     eax, [esp+238h+var_224]
0x966686: fld     [esp+238h+var_A8]
0x96668D: fld     [esp+238h+var_50]
0x966694: fmul    st, st(2)
0x966696: fld     [esp+238h+var_30]
0x96669D: fmul    st, st(4)
0x96669F: faddp   st(1), st
0x9666A1: fld     [esp+238h+var_20]
0x9666A8: fmul    st, st(2)
0x9666AA: faddp   st(1), st
0x9666AC: fstp    dword ptr [esp+238h+var_220]
0x9666B0: fld     [esp+238h+var_40]
0x9666B7: fmulp   st(2), st
0x9666B9: fld     [esp+238h+var_90]
0x9666C0: fmulp   st(3), st
0x9666C2: fxch    st(1)
0x9666C4: faddp   st(2), st
0x9666C6: fmul    [esp+238h+var_80]
0x9666CD: faddp   st(1), st
0x9666CF: fstp    dword ptr [esp+238h+var_1E8]; int
0x9666D3: fld     dword ptr [eax+4]
0x9666D6: fmul    qword ptr [esp+238h+var_110]
0x9666DD: fld     dword ptr [eax]
0x9666DF: fmul    [esp+238h+var_210]
0x9666E3: faddp   st(1), st
0x9666E5: fstp    [esp+238h+var_22C]
0x9666E9: fld     dword ptr [esp+238h+var_220]
0x9666ED: fld     [esp+238h+var_22C]
0x9666F1: fld     st
0x9666F3: fcom    st(2)
0x9666F5: fnstsw  ax
0x9666F7: fld     dword ptr [esp+238h+var_1E8]
0x9666FB: test    ah, 5
0x9666FE: jp      loc_9667D3
0x966704: fstp    st(2)
0x966706: fld     [esp+238h+var_1D4]
0x96670A: fchs
0x96670C: fstp    [esp+238h+var_22C]
0x966710: fldz
0x966712: fld     [esp+238h+var_22C]
0x966716: fcom    st(1)
0x966718: fnstsw  ax
0x96671A: fstp    st(1)
0x96671C: test    ah, 1
0x96671F: jnz     short loc_96676F
0x966721: fstp    st
0x966723: fld     st(1)
0x966725: fld     st(6)
0x966727: fmul    st, st(1)
0x966729: fadd    st, st(4)
0x96672B: fcomp   st(2)
0x96672D: fnstsw  ax
0x96672F: test    ah, 41h
0x966732: jz      loc_965F3A
0x966738: fxch    st(1)
0x96673A: fsub    st, st(3)
0x96673C: fdivrp  st(1), st
0x96673E: fstp    [esp+238h+var_22C]
0x966742: fld     [esp+238h+var_22C]
0x966746: fld     dword ptr [esi]
0x966748: fcomp   st(1)
0x96674A: fnstsw  ax
0x96674C: test    ah, 5
0x96674F: jp      loc_96697C
0x966755: mov     edi, edx
0x966757: fstp    dword ptr [esi]
0x966759: mov     ecx, 0Ch
0x96675E: mov     [esp+238h+var_218], 0
0x966766: mov     [esp+238h+var_228], edi
0x96676A: jmp     loc_9668CA
0x96676F: fadd    st, st(3)
0x966771: fstp    dword ptr [esp+238h+var_220]
0x966775: fld     dword ptr [esp+238h+var_220]
0x966779: fcom    st(1)
0x96677B: fnstsw  ax
0x96677D: test    ah, 41h
0x966780: jnz     loc_96697A
0x966786: fld     st(2)
0x966788: fmul    st(7), st
0x96678A: fxch    st(7)
0x96678C: fadd    st, st(1)
0x96678E: fcomp   st(2)
0x966790: fnstsw  ax
0x966792: test    ah, 41h
0x966795: jz      loc_965FB0
0x96679B: fsubp   st(1), st
0x96679D: fdivrp  st(5), st
0x96679F: fxch    st(4)
0x9667A1: fstp    [esp+238h+var_22C]
0x9667A5: fld     [esp+238h+var_22C]
0x9667A9: fld     dword ptr [esi]
0x9667AB: fcomp   st(1)
0x9667AD: fnstsw  ax
0x9667AF: test    ah, 5
0x9667B2: jp      loc_96695E
0x9667B8: fstp    dword ptr [esi]
0x9667BA: mov     edi, edx
0x9667BC: fld     [ebp+arg_0]
0x9667BF: mov     ecx, 0Ch
0x9667C4: mov     [esp+238h+var_218], edx
0x9667C8: fxch    st(4)
0x9667CA: mov     [esp+238h+var_228], edi
0x9667CE: jmp     loc_9668CA
0x9667D3: fxch    st(2)
0x9667D5: fchs
0x9667D7: fcom    st(3)
0x9667D9: fnstsw  ax
0x9667DB: test    ah, 41h
0x9667DE: jnz     loc_96697A
0x9667E4: fstp    st(6)
0x9667E6: fld     [esp+238h+var_1D4]
0x9667EA: fchs
0x9667EC: fstp    [esp+238h+var_22C]
0x9667F0: fldz
0x9667F2: fld     [esp+238h+var_22C]
0x9667F6: fcom    st(1)
0x9667F8: fnstsw  ax
0x9667FA: fstp    st(1)
0x9667FC: test    ah, 41h
0x9667FF: jp      short loc_966857
0x966801: fstp    st
0x966803: fld     st(1)
0x966805: fld     [ebp+arg_0]
0x966808: fmul    st, st(1)
0x96680A: fadd    st, st(4)
0x96680C: fcomp   st(7)
0x96680E: fnstsw  ax
0x966810: fstp    st(6)
0x966812: test    ah, 5
0x966815: jnp     loc_966043
0x96681B: fadd    st, st(2)
0x96681D: fdivrp  st(5), st
0x96681F: fxch    st(4)
0x966821: fchs
0x966823: fstp    [esp+238h+var_22C]
0x966827: fld     [esp+238h+var_22C]
0x96682B: fld     dword ptr [esi]
0x96682D: fcomp   st(1)
0x96682F: fnstsw  ax
0x966831: test    ah, 5
0x966834: jp      loc_96695E
0x96683A: fstp    dword ptr [esi]
0x96683C: or      edi, 0FFFFFFFFh
0x96683F: fld     [ebp+arg_0]
0x966842: mov     ecx, 0Ch
0x966847: mov     [esp+238h+var_218], 0
0x96684F: fxch    st(4)
0x966851: mov     [esp+238h+var_228], edi
0x966855: jmp     short loc_9668CA
0x966857: fadd    st, st(3)
0x966859: fstp    dword ptr [esp+238h+var_220]
0x96685D: fld     dword ptr [esp+238h+var_220]
0x966861: fcom    st(6)
0x966863: fnstsw  ax
0x966865: test    ah, 5
0x966868: jp      loc_96696A
0x96686E: fstp    st(4)
0x966870: fld     st(1)
0x966872: fld     [ebp+arg_0]
0x966875: fmul    st, st(1)
0x966877: fadd    st, st(5)
0x966879: fcomp   st(7)
0x96687B: fnstsw  ax
0x96687D: fstp    st(6)
0x96687F: test    ah, 5
0x966882: jnp     loc_9660C4
0x966888: faddp   st(3), st
0x96688A: fxch    st(2)
0x96688C: fdivrp  st(4), st
0x96688E: fxch    st(3)
0x966890: fchs
0x966892: fstp    [esp+238h+var_22C]
0x966896: fld     [esp+238h+var_22C]
0x96689A: fld     dword ptr [esi]
0x96689C: fcomp   st(1)
0x96689E: fnstsw  ax
0x9668A0: test    ah, 5
0x9668A3: jp      loc_966957
0x9668A9: or      edi, 0FFFFFFFFh
0x9668AC: fstp    dword ptr [esi]
0x9668AE: mov     ecx, 0Ch
0x9668B3: mov     [esp+238h+var_218], edx; int
0x9668B7: mov     [esp+238h+var_228], edi; int
0x9668BB: fld     [ebp+arg_0]
0x9668BE: fld     dword ptr [esp+238h+var_1F0]
0x9668C2: fxch    st(1)
0x9668C4: fxch    st(4)
0x9668C6: fxch    st(1)
0x9668C8: fxch    st(2)
0x9668CA: mov     eax, [esp+238h+var_224]
0x9668CE: fxch    st(1)
0x9668D0: fsubrp  st(3), st
0x9668D2: fxch    st(2)
0x9668D4: fstp    dword ptr [esp+238h+var_220]
0x9668D8: fsubp   st(1), st
0x9668DA: fstp    [esp+238h+var_214]; int
0x9668DE: fld     dword ptr [eax+4]
0x9668E1: fmul    [esp+238h+var_10]
0x9668E8: fld     dword ptr [eax]
0x9668EA: fmul    [esp+238h+var_198]
0x9668F1: faddp   st(1), st
0x9668F3: fstp    [esp+238h+var_22C]
0x9668F7: fld     dword ptr [esp+238h+var_220]
0x9668FB: fld     [esp+238h+var_22C]
0x9668FF: fld     st
0x966901: fcom    st(2)
0x966903: fnstsw  ax
0x966905: test    ah, 5
0x966908: jp      loc_966A32
0x96690E: fstp    st(1)
0x966910: fld     [esp+238h+var_1D4]
0x966914: fld     st
0x966916: fchs
0x966918: fstp    [esp+238h+var_22C]
0x96691C: fldz
0x96691E: fld     [esp+238h+var_22C]
0x966922: fcom    st(1)
0x966924: fnstsw  ax
0x966926: test    ah, 1
0x966929: jnz     loc_9669BE
0x96692F: fstp    st
0x966931: fld     [esp+238h+var_214]
0x966935: fmul    st(5), st
0x966937: fxch    st(5)
0x966939: fadd    st, st(4)
0x96693B: fcomp   st(3)
0x96693D: fnstsw  ax
0x96693F: test    ah, 41h
0x966942: jnz     short loc_966983
0x966944: fstp    st(3)
0x966946: xor     al, al
0x966948: fstp    st(1)
0x96694A: fstp    st(2)
0x96694C: fstp    st
0x96694E: fstp    st
0x966950: pop     edi
0x966951: pop     esi
0x966952: pop     ebx
0x966953: mov     esp, ebp
0x966955: pop     ebp
0x966956: retn
0x966957: fstp    st
0x966959: jmp     loc_9668BB
0x96695E: fstp    st
0x966960: fld     [ebp+arg_0]
0x966963: fxch    st(4)
0x966965: jmp     loc_9668CA
0x96696A: fstp    st(1)
0x96696C: fstp    st(5)
0x96696E: fstp    st(4)
0x966970: fld     [ebp+arg_0]
0x966973: fxch    st(4)
0x966975: jmp     loc_9668CA
0x96697A: fstp    st(1)
0x96697C: fstp    st
0x96697E: jmp     loc_9668CA
0x966983: fxch    st(2)
0x966985: fsubrp  st(3), st
0x966987: fxch    st(2)
0x966989: fdivrp  st(3), st
0x96698B: fxch    st(2)
0x96698D: fstp    [esp+238h+var_22C]
0x966991: fld     [esp+238h+var_22C]
0x966995: fld     dword ptr [esi]
0x966997: fcomp   st(1)
0x966999: fnstsw  ax
0x96699B: test    ah, 5
0x96699E: jp      loc_966B44
0x9669A4: mov     edi, edx
0x9669A6: fstp    dword ptr [esi]
0x9669A8: mov     ecx, 0Dh
0x9669AD: mov     [esp+238h+var_218], 0
0x9669B5: mov     [esp+238h+var_228], edi
0x9669B9: jmp     loc_966B5E
0x9669BE: faddp   st(4), st
0x9669C0: fxch    st(3)
0x9669C2: fstp    dword ptr [esp+238h+var_220]; int
0x9669C6: fld     dword ptr [esp+238h+var_220]
0x9669CA: fcom    st(2)
0x9669CC: fnstsw  ax
0x9669CE: test    ah, 41h
0x9669D1: jnz     loc_966B48
0x9669D7: fld     [esp+238h+var_214]
0x9669DB: fmul    st(5), st
0x9669DD: fxch    st(5)
0x9669DF: fadd    st, st(1)
0x9669E1: fcomp   st(3)
0x9669E3: fnstsw  ax
0x9669E5: test    ah, 41h
0x9669E8: jnz     short loc_9669FD
0x9669EA: fstp    st
0x9669EC: xor     al, al
0x9669EE: fstp    st(1)
0x9669F0: fstp    st(2)
0x9669F2: fstp    st
0x9669F4: fstp    st
0x9669F6: pop     edi
0x9669F7: pop     esi
0x9669F8: pop     ebx
0x9669F9: mov     esp, ebp
0x9669FB: pop     ebp
0x9669FC: retn
0x9669FD: fsubp   st(2), st
0x9669FF: fxch    st(1)
0x966A01: fdivrp  st(3), st
0x966A03: fxch    st(2)
0x966A05: fstp    [esp+238h+var_22C]; int
0x966A09: fld     [esp+238h+var_22C]
0x966A0D: fld     dword ptr [esi]
0x966A0F: fcomp   st(1)
0x966A11: fnstsw  ax
0x966A13: test    ah, 5
0x966A16: jp      loc_966B5A
0x966A1C: mov     edi, edx
0x966A1E: fstp    dword ptr [esi]
0x966A20: mov     ecx, 0Dh
0x966A25: mov     [esp+238h+var_218], edx
0x966A29: mov     [esp+238h+var_228], edi
0x966A2D: jmp     loc_966B5C
0x966A32: fxch    st(1)
0x966A34: fchs
0x966A36: fcom    st(2)
0x966A38: fnstsw  ax
0x966A3A: test    ah, 41h
0x966A3D: jnz     loc_966B34
0x966A43: fld     [esp+238h+var_1D4]
0x966A47: fld     st
0x966A49: fchs
0x966A4B: fstp    [esp+238h+var_22C]
0x966A4F: fldz
0x966A51: fld     [esp+238h+var_22C]
0x966A55: fcom    st(1)
0x966A57: fnstsw  ax
0x966A59: test    ah, 41h
0x966A5C: jp      short loc_966AC6
0x966A5E: fstp    st
0x966A60: fld     [esp+238h+var_214]
0x966A64: fmul    st(6), st
0x966A66: fxch    st(6)
0x966A68: fadd    st, st(5)
0x966A6A: fcomp   st(3)
0x966A6C: fnstsw  ax
0x966A6E: fstp    st(2)
0x966A70: test    ah, 5
0x966A73: jp      short loc_966A88
0x966A75: fstp    st(3)
0x966A77: xor     al, al
0x966A79: fstp    st(1)
0x966A7B: fstp    st(2)
0x966A7D: fstp    st(1)
0x966A7F: fstp    st
0x966A81: pop     edi
0x966A82: pop     esi
0x966A83: pop     ebx
0x966A84: mov     esp, ebp
0x966A86: pop     ebp
0x966A87: retn
0x966A88: fxch    st(2)
0x966A8A: faddp   st(3), st
0x966A8C: fxch    st(2)
0x966A8E: fdivrp  st(3), st
0x966A90: fxch    st(2)
0x966A92: fchs
0x966A94: fstp    [esp+238h+var_22C]
0x966A98: fld     [esp+238h+var_22C]
0x966A9C: fld     dword ptr [esi]
0x966A9E: fcomp   st(1)
0x966AA0: fnstsw  ax
0x966AA2: test    ah, 5
0x966AA5: jp      loc_966B5A
0x966AAB: or      edi, 0FFFFFFFFh
0x966AAE: fstp    dword ptr [esi]
0x966AB0: mov     ecx, 0Dh
0x966AB5: mov     [esp+238h+var_218], 0
0x966ABD: mov     [esp+238h+var_228], edi
0x966AC1: jmp     loc_966B5C
0x966AC6: faddp   st(5), st
0x966AC8: fxch    st(4)
0x966ACA: fstp    dword ptr [esp+238h+var_220]
0x966ACE: fld     dword ptr [esp+238h+var_220]
0x966AD2: fcom    st(2)
0x966AD4: fnstsw  ax
0x966AD6: test    ah, 5
0x966AD9: jp      short loc_966B50
0x966ADB: fld     [esp+238h+var_214]
0x966ADF: fmul    st(6), st
0x966AE1: fxch    st(6)
0x966AE3: fadd    st, st(1)
0x966AE5: fcomp   st(3)
0x966AE7: fnstsw  ax
0x966AE9: fstp    st(2)
0x966AEB: test    ah, 5
0x966AEE: jp      short loc_966B03
0x966AF0: fstp    st(1)
0x966AF2: xor     al, al
0x966AF4: fstp    st(1)
0x966AF6: fstp    st(2)
0x966AF8: fstp    st
0x966AFA: fstp    st
0x966AFC: pop     edi
0x966AFD: pop     esi
0x966AFE: pop     ebx
0x966AFF: mov     esp, ebp
0x966B01: pop     ebp
0x966B02: retn
0x966B03: fxch    st(2)
0x966B05: faddp   st(1), st
0x966B07: fdivrp  st(3), st
0x966B09: fxch    st(2)
0x966B0B: fchs
0x966B0D: fstp    [esp+238h+var_22C]
0x966B11: fld     [esp+238h+var_22C]
0x966B15: fld     dword ptr [esi]
0x966B17: fcomp   st(1)
0x966B19: fnstsw  ax
0x966B1B: test    ah, 5
0x966B1E: jp      short loc_966B5A
0x966B20: or      edi, 0FFFFFFFFh
0x966B23: fstp    dword ptr [esi]
0x966B25: mov     ecx, 0Dh
0x966B2A: mov     [esp+238h+var_218], edx
0x966B2E: mov     [esp+238h+var_228], edi
0x966B32: jmp     short loc_966B5C
0x966B34: fstp    st(2)
0x966B36: fstp    st
0x966B38: fstp    st
0x966B3A: fstp    st
0x966B3C: fld     [esp+238h+var_1D4]
0x966B40: fldz
0x966B42: jmp     short loc_966B5C
0x966B44: fstp    st
0x966B46: jmp     short loc_966B5E
0x966B48: fstp    st
0x966B4A: fstp    st(1)
0x966B4C: fstp    st(2)
0x966B4E: jmp     short loc_966B5C
0x966B50: fstp    st
0x966B52: fstp    st(2)
0x966B54: fstp    st
0x966B56: fstp    st(2)
0x966B58: jmp     short loc_966B5C
0x966B5A: fstp    st
0x966B5C: fxch    st(1)
0x966B5E: cmp     ecx, 0Dh; switch 14 cases
0x966B61: ja      def_966B67
0x966B67: jmp     ds:jpt_966B67[ecx*4]; switch jump
0x966B6E: mov     ecx, [esp+238h+var_1D0]; jumptable 00966B67 case 0
0x966B72: fstp    st(1)
0x966B74: mov     eax, [ebp+arg_14]
0x966B77: fstp    st
0x966B79: push    ecx
0x966B7A: lea     edx, [esp+23Ch+var_1FC]
0x966B7E: push    edx
0x966B7F: mov     edx, [ebp+arg_10]
0x966B82: push    eax
0x966B83: lea     ecx, [esp+244h+var_160]
0x966B8A: push    ecx
0x966B8B: mov     ecx, [ebp+arg_C]
0x966B8E: push    edx
0x966B8F: lea     eax, [esp+24Ch+var_E4]
0x966B96: push    eax
0x966B97: call    sub_47D9B0
0x966B9C: mov     ecx, eax
0x966B9E: call    sub_47D9B0
0x966BA3: fld     dword ptr ds:0B307F0h
0x966BA9: push    eax; int
0x966BAA: push    ecx
0x966BAB: lea     ecx, [esp+248h+var_C8]
0x966BB2: fstp    [esp+248h+var_248]; float
0x966BB5: push    ecx; int
0x966BB6: call    sub_47DA10
0x966BBB: add     esp, 0Ch
0x966BBE: mov     ecx, eax
0x966BC0: call    sub_47D9B0
0x966BC5: fld     dword ptr ds:0A3D65Ch
0x966BCB: push    eax; int
0x966BCC: push    ecx
0x966BCD: lea     edx, [esp+240h+var_F0]
0x966BD4: fstp    [esp+240h+var_240]; float
0x966BD7: push    edx; int
0x966BD8: call    sub_47DA10
0x966BDD: add     esp, 0Ch
0x966BE0: mov     edx, [eax]
0x966BE2: mov     ecx, [ebp+arg_20]
0x966BE5: mov     [ecx], edx
0x966BE7: mov     edx, [eax+4]
0x966BEA: mov     [ecx+4], edx
0x966BED: mov     eax, [eax+8]
0x966BF0: mov     [ecx+8], eax
0x966BF3: jmp     loc_968164
0x966BF8: fld     [esp+238h+var_1DC]; jumptable 00966B67 case 1
0x966BFC: fcom    st(2)
0x966BFE: fnstsw  ax
0x966C00: test    ah, 41h
0x966C03: jnz     short loc_966C17
0x966C05: mov     ecx, [esp+238h+var_224]
0x966C09: fstp    st
0x966C0B: fild    [esp+238h+var_228]
0x966C0F: fmul    dword ptr [ecx]
0x966C11: fstp    dword ptr [esp+238h+var_210]
0x966C15: jmp     short loc_966C44
0x966C17: fcomp   st(2)
0x966C19: fnstsw  ax
0x966C1B: test    ah, 5
0x966C1E: jp      short loc_966C38
0x966C20: mov     ecx, edi
0x966C22: neg     ecx
0x966C24: mov     dword ptr [esp+238h+var_220], ecx
0x966C28: fild    dword ptr [esp+238h+var_220]
0x966C2C: mov     ecx, [esp+238h+var_224]
0x966C30: fmul    dword ptr [ecx]
0x966C32: fstp    dword ptr [esp+238h+var_210]
0x966C36: jmp     short loc_966C44
0x966C38: mov     ecx, [esp+238h+var_224]
0x966C3C: fxch    st(1)
0x966C3E: fst     dword ptr [esp+238h+var_210]
0x966C42: fxch    st(1)
0x966C44: fld     [esp+238h+var_1D8]
0x966C48: fcom    st(2)
0x966C4A: fnstsw  ax
0x966C4C: test    ah, 41h
0x966C4F: jnz     short loc_966C60
0x966C51: fstp    st
0x966C53: fild    [esp+238h+var_228]
0x966C57: fmul    dword ptr [ecx+4]
0x966C5A: fstp    dword ptr [esp+238h+var_210+4]
0x966C5E: jmp     short loc_966C86
0x966C60: fcomp   st(2)
0x966C62: fnstsw  ax
0x966C64: test    ah, 5
0x966C67: jp      short loc_966C7E
0x966C69: mov     edx, edi
0x966C6B: neg     edx
0x966C6D: mov     dword ptr [esp+238h+var_220], edx
0x966C71: fild    dword ptr [esp+238h+var_220]
0x966C75: fmul    dword ptr [ecx+4]
0x966C78: fstp    dword ptr [esp+238h+var_210+4]
0x966C7C: jmp     short loc_966C86
0x966C7E: fxch    st(1)
0x966C80: fst     dword ptr [esp+238h+var_210+4]
0x966C84: fxch    st(1)
0x966C86: fcom    st(1)
0x966C88: fnstsw  ax
0x966C8A: test    ah, 41h
0x966C8D: jnz     short loc_966C99
0x966C8F: fstp    st(1)
0x966C91: fstp    st
0x966C93: fild    [esp+238h+var_228]
0x966C97: jmp     short loc_966CAE
0x966C99: fcomp   st(1)
0x966C9B: fnstsw  ax
0x966C9D: test    ah, 5
0x966CA0: jp      short loc_966CB1
0x966CA2: neg     edi
0x966CA4: fstp    st
0x966CA6: mov     dword ptr [esp+238h+var_220], edi
0x966CAA: fild    dword ptr [esp+238h+var_220]
0x966CAE: fmul    dword ptr [ecx+8]
0x966CB1: fstp    [esp+238h+var_208]
0x966CB5: mov     ecx, [ebp+arg_8]
0x966CB8: fld     dword ptr [esp+238h+var_210]
0x966CBC: mov     edx, [esp+238h+var_1D0]
0x966CC0: fld     dword ptr [esp+238h+var_210+4]
0x966CC4: mov     eax, [ebp+arg_20]
0x966CC7: fld     [esp+238h+var_208]
0x966CCB: fld     dword ptr [esi]
0x966CCD: fmul    dword ptr [ecx]
0x966CCF: fadd    dword ptr [edx]
0x966CD1: fld     dword ptr [ebx]
0x966CD3: fmul    st, st(4)
0x966CD5: faddp   st(1), st
0x966CD7: fld     dword ptr [ebx+0Ch]
0x966CDA: fmul    st, st(3)
0x966CDC: faddp   st(1), st
0x966CDE: fld     dword ptr [ebx+18h]
0x966CE1: fmul    st, st(2)
0x966CE3: faddp   st(1), st
0x966CE5: fstp    dword ptr [eax]
0x966CE7: fld     dword ptr [esi]
0x966CE9: fmul    dword ptr [ecx+4]
0x966CEC: fadd    dword ptr [edx+4]
0x966CEF: fld     dword ptr [ebx+4]
0x966CF2: fmul    st, st(4)
0x966CF4: faddp   st(1), st
0x966CF6: fld     dword ptr [ebx+10h]
0x966CF9: fmul    st, st(3)
0x966CFB: faddp   st(1), st
0x966CFD: fld     dword ptr [ebx+1Ch]
0x966D00: fmul    st, st(2)
0x966D02: faddp   st(1), st
0x966D04: fstp    dword ptr [eax+4]
0x966D07: fld     dword ptr [esi]
0x966D09: fmul    dword ptr [ecx+8]
0x966D0C: fadd    dword ptr [edx+8]
0x966D0F: fld     dword ptr [ebx+8]
0x966D12: fmulp   st(4), st
0x966D14: faddp   st(3), st
0x966D16: fld     dword ptr [ebx+14h]
0x966D19: fmulp   st(2), st
0x966D1B: fxch    st(2)
0x966D1D: faddp   st(1), st
0x966D1F: fld     dword ptr [ebx+20h]
0x966D22: fmulp   st(2), st
0x966D24: faddp   st(1), st
0x966D26: fstp    dword ptr [eax+8]
0x966D29: jmp     loc_968164
0x966D2E: mov     eax, [esp+238h+var_218]; jumptable 00966B67 cases 2-4
0x966D32: fstp    st(1)
0x966D34: test    eax, eax
0x966D36: fstp    st
0x966D38: fld     dword ptr [esi]
0x966D3A: jnz     short loc_966D67
0x966D3C: mov     eax, [ebp+arg_18]
0x966D3F: push    eax; int
0x966D40: push    ecx
0x966D41: lea     ecx, [esp+240h+var_13C]
0x966D48: fstp    [esp+240h+var_240]; float
0x966D4B: push    ecx; int
0x966D4C: call    sub_47DA10
0x966D51: mov     ecx, [ebp+arg_C]
0x966D54: add     esp, 0Ch
0x966D57: push    eax
0x966D58: lea     edx, [esp+23Ch+var_1DC]
0x966D5C: push    edx
0x966D5D: call    sub_47D9B0
0x966D62: jmp     loc_966BE0
0x966D67: cmp     eax, 1
0x966D6A: mov     ecx, [ebp+arg_18]
0x966D6D: jnz     short loc_966DD7
0x966D6F: push    ecx; int
0x966D70: push    ecx
0x966D71: lea     edx, [esp+240h+var_198]
0x966D78: fstp    [esp+240h+var_240]; float
0x966D7B: push    edx; int
0x966D7C: call    sub_47DA10
0x966D81: mov     ecx, [ebp+arg_C]
0x966D84: add     esp, 0Ch
0x966D87: push    eax
0x966D88: lea     eax, [esp+23Ch+var_210]
0x966D8C: push    eax
0x966D8D: call    sub_47D9B0
0x966D92: fld     dword ptr [eax]
0x966D94: fadd    [esp+238h+var_118]
0x966D9B: fstp    [esp+238h+var_1FC]
0x966D9F: mov     ecx, [esp+238h+var_1FC]
0x966DA3: fld     dword ptr [eax+4]
0x966DA6: fadd    [esp+238h+var_60]
0x966DAD: fstp    [esp+238h+var_1F8]
0x966DB1: mov     edx, [esp+238h+var_1F8]
0x966DB5: fld     dword ptr [eax+8]
0x966DB8: mov     eax, [ebp+arg_20]
0x966DBB: fadd    [esp+238h+var_70]
0x966DC2: mov     [eax], ecx
0x966DC4: mov     [eax+4], edx
0x966DC7: fstp    [esp+238h+var_1F4]
0x966DCB: mov     ecx, [esp+238h+var_1F4]
0x966DCF: mov     [eax+8], ecx
0x966DD2: jmp     loc_968164
0x966DD7: lea     edx, [esp+238h+var_178]
0x966DDE: push    edx
0x966DDF: lea     eax, [esp+23Ch+var_1A8]
0x966DE6: push    eax
0x966DE7: push    ecx; int
0x966DE8: push    ecx
0x966DE9: lea     edx, [esp+248h+var_B0]
0x966DF0: fstp    [esp+248h+var_248]; float
0x966DF3: push    edx; int
0x966DF4: call    sub_47DA10
0x966DF9: mov     ecx, [ebp+arg_C]
0x966DFC: add     esp, 0Ch
0x966DFF: push    eax
0x966E00: lea     eax, [esp+244h+var_100]
0x966E07: push    eax
0x966E08: call    sub_47D9B0
0x966E0D: mov     ecx, eax
0x966E0F: call    sub_47D9B0
0x966E14: jmp     loc_966BE0
0x966E19: fstp    st; jumptable 00966B67 case 5
0x966E1B: fld     [esp+238h+var_1B4]
0x966E22: fcom    st(1)
0x966E24: fnstsw  ax
0x966E26: test    ah, 41h
0x966E29: jnz     short loc_966E46
0x966E2B: mov     ecx, edi
0x966E2D: fstp    st
0x966E2F: neg     ecx
0x966E31: mov     dword ptr [esp+238h+var_220], ecx
0x966E35: fild    dword ptr [esp+238h+var_220]
0x966E39: mov     ecx, [esp+238h+var_224]
0x966E3D: fmul    dword ptr [ecx+4]
0x966E40: fstp    dword ptr [esp+238h+var_210+4]
0x966E44: jmp     short loc_966E64
0x966E46: mov     ecx, [esp+238h+var_224]
0x966E4A: fcomp   st(1)
0x966E4C: fnstsw  ax
0x966E4E: test    ah, 5
0x966E51: jp      short loc_966E60
0x966E53: fild    [esp+238h+var_228]
0x966E57: fmul    dword ptr [ecx+4]
0x966E5A: fstp    dword ptr [esp+238h+var_210+4]
0x966E5E: jmp     short loc_966E64
0x966E60: fst     dword ptr [esp+238h+var_210+4]
0x966E64: fld     [esp+238h+var_1C0]
0x966E68: fcom    st(1)
0x966E6A: fnstsw  ax
0x966E6C: test    ah, 41h
0x966E6F: jnz     short loc_966E7B
0x966E71: fstp    st
0x966E73: fstp    st
0x966E75: fild    [esp+238h+var_228]
0x966E79: jmp     short loc_966E90
0x966E7B: fcomp   st(1)
0x966E7D: fnstsw  ax
0x966E7F: test    ah, 5
0x966E82: jp      short loc_966E93
0x966E84: neg     edi
0x966E86: fstp    st
0x966E88: mov     dword ptr [esp+238h+var_220], edi
0x966E8C: fild    dword ptr [esp+238h+var_220]
0x966E90: fmul    dword ptr [ecx+8]
0x966E93: lea     edx, [esp+238h+var_13C]
0x966E9A: fstp    [esp+238h+var_208]
0x966E9E: fld     dword ptr [esi]
0x966EA0: push    edx; int
0x966EA1: push    ecx
0x966EA2: lea     eax, [esp+240h+var_110]
0x966EA9: fstp    [esp+240h+var_240]; float
0x966EAC: push    eax; int
0x966EAD: call    sub_47DA10
0x966EB2: add     esp, 0Ch
0x966EB5: push    eax
0x966EB6: lea     ecx, [esp+23Ch+var_154]
0x966EBD: call    sub_4121D0
0x966EC2: lea     ecx, [esp+238h+var_184]
0x966EC9: push    ecx
0x966ECA: lea     edx, [esp+23Ch+var_D8]
0x966ED1: push    edx
0x966ED2: lea     ecx, [esp+240h+var_154]
0x966ED9: call    sub_498FE0
0x966EDE: mov     ecx, [eax]
0x966EE0: mov     edx, [eax+4]
0x966EE3: mov     eax, [eax+8]
0x966EE6: mov     [esp+238h+var_184], ecx
0x966EED: lea     ecx, [esp+238h+var_C8]
0x966EF4: push    ecx
0x966EF5: mov     [esp+23Ch+var_180], edx
0x966EFC: mov     [esp+23Ch+var_17C], eax
0x966F03: call    sub_47D9E0
0x966F08: fstp    [esp+238h+var_1CC]
0x966F0C: lea     edx, [esp+238h+var_E4]
0x966F13: push    edx
0x966F14: lea     ecx, [esp+23Ch+var_C8]
0x966F1B: call    sub_47D9E0
0x966F20: fstp    [esp+238h+var_1C0]
0x966F24: lea     eax, [esp+238h+var_100]
0x966F2B: push    eax
0x966F2C: lea     ecx, [esp+23Ch+var_C8]
0x966F33: call    sub_47D9E0
0x966F38: fstp    [esp+238h+var_1B4]
0x966F3F: fld     dword ptr [esp+238h+var_210+4]
0x966F43: lea     ecx, [esp+238h+var_184]
0x966F4A: fstp    [esp+238h+var_1E8]
0x966F4E: push    ecx
0x966F4F: fld     [esp+23Ch+var_208]
0x966F53: lea     ecx, [esp+23Ch+var_C8]
0x966F5A: fstp    [esp+23Ch+var_220]
0x966F5E: call    sub_47D9E0
0x966F63: cmp     [esp+238h+var_218], 0
0x966F68: fld     [esp+238h+var_1C0]
0x966F6C: fld     [esp+238h+var_1E8]
0x966F70: fmul    st(1), st
0x966F72: fxch    st(2)
0x966F74: fsubrp  st(1), st
0x966F76: fld     [esp+238h+var_1B4]
0x966F7D: fld     [esp+238h+var_220]
0x966F81: fmul    st(1), st
0x966F83: fxch    st(2)
0x966F85: fsubrp  st(1), st
0x966F87: fstp    [esp+238h+var_224]
0x966F8B: jnz     short loc_966F9B
0x966F8D: fld     [esp+238h+var_224]
0x966F91: fdiv    [esp+238h+var_1CC]
0x966F95: fstp    dword ptr [esp+238h+var_210]
0x966F99: jmp     short loc_966FD5
0x966F9B: fstp    st(1)
0x966F9D: lea     edx, [esp+238h+var_F0]
0x966FA4: fstp    st
0x966FA6: push    edx
0x966FA7: fld     [esp+23Ch+var_224]
0x966FAB: lea     ecx, [esp+23Ch+var_C8]
0x966FB2: fstp    [esp+23Ch+var_198]
0x966FB9: call    sub_47D9E0
0x966FBE: fsubr   [esp+238h+var_198]
0x966FC5: fdiv    [esp+238h+var_1CC]
0x966FC9: fstp    dword ptr [esp+238h+var_210]
0x966FCD: fld     [esp+238h+var_1E8]
0x966FD1: fld     [esp+238h+var_220]
0x966FD5: fld     dword ptr [esp+238h+var_210]
0x966FD9: mov     ecx, [ebp+arg_8]
0x966FDC: fld     dword ptr [esi]
0x966FDE: mov     edx, [esp+238h+var_1D0]
0x966FE2: fmul    dword ptr [ecx]
0x966FE4: mov     eax, [ebp+arg_20]
0x966FE7: fadd    dword ptr [edx]
0x966FE9: fld     dword ptr [ebx]
0x966FEB: fmul    st, st(2)
0x966FED: faddp   st(1), st
0x966FEF: fld     dword ptr [ebx+0Ch]
0x966FF2: fmul    st, st(4)
0x966FF4: faddp   st(1), st
0x966FF6: fld     dword ptr [ebx+18h]
0x966FF9: fmul    st, st(3)
0x966FFB: faddp   st(1), st
0x966FFD: fstp    dword ptr [eax]
0x966FFF: fld     dword ptr [esi]
0x967001: fmul    dword ptr [ecx+4]
0x967004: fadd    dword ptr [edx+4]
0x967007: fld     dword ptr [ebx+4]
0x96700A: fmul    st, st(2)
0x96700C: faddp   st(1), st
0x96700E: fld     dword ptr [ebx+10h]
0x967011: fmul    st, st(4)
0x967013: faddp   st(1), st
0x967015: fld     dword ptr [ebx+1Ch]
0x967018: fmul    st, st(3)
0x96701A: faddp   st(1), st
0x96701C: fstp    dword ptr [eax+4]
0x96701F: fld     dword ptr [esi]
0x967021: fmul    dword ptr [ecx+8]
0x967024: fadd    dword ptr [edx+8]
0x967027: fld     dword ptr [ebx+8]
0x96702A: fmulp   st(2), st
0x96702C: faddp   st(1), st
0x96702E: fld     dword ptr [ebx+14h]
0x967031: fmulp   st(3), st
0x967033: faddp   st(2), st
0x967035: fmul    dword ptr [ebx+20h]
0x967038: faddp   st(1), st
0x96703A: fstp    dword ptr [eax+8]
0x96703D: jmp     loc_968164
0x967042: mov     ecx, [esp+238h+var_224]; jumptable 00966B67 case 6
0x967046: fstp    st
0x967048: fld     [esp+238h+var_1B0]
0x96704F: fcom    st(1)
0x967051: fnstsw  ax
0x967053: test    ah, 41h
0x967056: jnz     short loc_96706F
0x967058: mov     eax, edi
0x96705A: fstp    st
0x96705C: neg     eax
0x96705E: mov     dword ptr [esp+238h+var_220], eax
0x967062: fild    dword ptr [esp+238h+var_220]
0x967066: fmul    dword ptr [ecx+4]
0x967069: fstp    dword ptr [esp+238h+var_210+4]
0x96706D: jmp     short loc_967089
0x96706F: fcomp   st(1)
0x967071: fnstsw  ax
0x967073: test    ah, 5
0x967076: jp      short loc_967085
0x967078: fild    [esp+238h+var_228]
0x96707C: fmul    dword ptr [ecx+4]
0x96707F: fstp    dword ptr [esp+238h+var_210+4]
0x967083: jmp     short loc_967089
0x967085: fst     dword ptr [esp+238h+var_210+4]
0x967089: fld     [esp+238h+var_1BC]
0x96708D: fcom    st(1)
0x96708F: fnstsw  ax
0x967091: test    ah, 41h
0x967094: jnz     short loc_9670A0
0x967096: fstp    st
0x967098: fstp    st
0x96709A: fild    [esp+238h+var_228]
0x96709E: jmp     short loc_9670B5
0x9670A0: fcomp   st(1)
0x9670A2: fnstsw  ax
0x9670A4: test    ah, 5
0x9670A7: jp      short loc_9670B8
0x9670A9: neg     edi
0x9670AB: fstp    st
0x9670AD: mov     dword ptr [esp+238h+var_220], edi
0x9670B1: fild    dword ptr [esp+238h+var_220]
0x9670B5: fmul    dword ptr [ecx+8]
0x9670B8: lea     ecx, [esp+238h+var_13C]
0x9670BF: fstp    [esp+238h+var_208]
0x9670C3: fld     dword ptr [esi]
0x9670C5: push    ecx; int
0x9670C6: push    ecx
0x9670C7: lea     edx, [esp+240h+var_10]
0x9670CE: fstp    [esp+240h+var_240]; float
0x9670D1: push    edx; int
0x9670D2: call    sub_47DA10
0x9670D7: add     esp, 0Ch
0x9670DA: push    eax
0x9670DB: lea     ecx, [esp+23Ch+var_154]
0x9670E2: call    sub_4121D0
0x9670E7: lea     eax, [esp+238h+var_178]
0x9670EE: push    eax
0x9670EF: lea     ecx, [esp+23Ch+var_D8]
0x9670F6: push    ecx
0x9670F7: lea     ecx, [esp+240h+var_154]
0x9670FE: call    sub_498FE0
0x967103: mov     edx, [eax]
0x967105: mov     ecx, [eax+4]
0x967108: mov     [esp+238h+var_178], edx
0x96710F: mov     edx, [eax+8]
0x967112: lea     eax, [esp+238h+var_160]
0x967119: mov     [esp+238h+var_174], ecx
0x967120: push    eax
0x967121: mov     ecx, eax
0x967123: mov     [esp+23Ch+var_170], edx
0x96712A: call    sub_47D9E0
0x96712F: fstp    [esp+238h+var_1C8]
0x967133: lea     ecx, [esp+238h+var_1FC]
0x967137: push    ecx
0x967138: lea     ecx, [esp+23Ch+var_160]
0x96713F: call    sub_47D9E0
0x967144: fstp    [esp+238h+var_1BC]
0x967148: lea     edx, [esp+238h+var_1A8]
0x96714F: push    edx
0x967150: lea     ecx, [esp+23Ch+var_160]
0x967157: call    sub_47D9E0
0x96715C: fstp    [esp+238h+var_1B0]
0x967163: fld     dword ptr [esp+238h+var_210+4]
0x967167: lea     eax, [esp+238h+var_178]
0x96716E: fstp    [esp+238h+var_1E8]
0x967172: push    eax
0x967173: fld     [esp+23Ch+var_208]
0x967177: lea     ecx, [esp+23Ch+var_160]
0x96717E: fstp    [esp+23Ch+var_220]
0x967182: call    sub_47D9E0
0x967187: cmp     [esp+238h+var_218], 0
0x96718C: fld     [esp+238h+var_1BC]
0x967190: fld     [esp+238h+var_1E8]
0x967194: fmul    st(1), st
0x967196: fxch    st(2)
0x967198: fsubrp  st(1), st
0x96719A: fld     [esp+238h+var_1B0]
0x9671A1: fld     [esp+238h+var_220]
0x9671A5: fmul    st(1), st
0x9671A7: fxch    st(2)
0x9671A9: fsubrp  st(1), st
0x9671AB: fstp    [esp+238h+var_224]
0x9671AF: jnz     short loc_9671C2
0x9671B1: fld     [esp+238h+var_224]
0x9671B5: fdiv    [esp+238h+var_1C8]
0x9671B9: fstp    dword ptr [esp+238h+var_210]
0x9671BD: jmp     loc_966FD5
0x9671C2: lea     ecx, [esp+238h+var_F0]
0x9671C9: fstp    st(1)
0x9671CB: push    ecx
0x9671CC: fstp    st
0x9671CE: lea     ecx, [esp+23Ch+var_160]
0x9671D5: call    sub_47D9E0
0x9671DA: fadd    [esp+238h+var_224]
0x9671DE: fdiv    [esp+238h+var_1C8]
0x9671E2: jmp     loc_966FC9
0x9671E7: fstp    st(1); jumptable 00966B67 case 7
0x9671E9: fstp    st
0x9671EB: fld     [esp+238h+var_148]
0x9671F2: fsub    [esp+238h+var_118]
0x9671F9: fstp    [esp+238h+var_1FC]
0x9671FD: mov     edx, [esp+238h+var_1FC]
0x967201: fld     [esp+238h+var_120]
0x967208: mov     [esp+238h+var_16C], edx
0x96720F: fsub    [esp+238h+var_60]
0x967216: lea     edx, [esp+238h+var_16C]
0x96721D: push    edx
0x96721E: fstp    [esp+23Ch+var_1F8]
0x967222: mov     eax, [esp+23Ch+var_1F8]
0x967226: fld     [esp+23Ch+var_A0]
0x96722D: mov     [esp+23Ch+var_168], eax
0x967234: fsub    [esp+23Ch+var_70]
0x96723B: lea     eax, [esp+23Ch+var_D8]
0x967242: push    eax
0x967243: fstp    [esp+240h+var_1F4]
0x967247: mov     ecx, [esp+240h+var_1F4]
0x96724B: mov     [esp+240h+var_164], ecx
0x967252: mov     ecx, ebx
0x967254: call    sub_498FE0
0x967259: mov     ecx, [eax]
0x96725B: mov     [esp+238h+var_1DC], ecx
0x96725F: mov     edx, [eax+4]
0x967262: mov     [esp+238h+var_1D8], edx
0x967266: mov     eax, [eax+8]
0x967269: lea     ecx, [esp+238h+var_16C]
0x967270: push    ecx
0x967271: lea     edx, [esp+23Ch+var_130]
0x967278: push    edx
0x967279: lea     ecx, [ebx+0Ch]
0x96727C: mov     [esp+240h+var_1D4], eax
0x967280: call    sub_498FE0
0x967285: mov     ecx, [eax]
0x967287: mov     dword ptr [esp+238h+var_198], ecx
0x96728E: mov     edx, [eax+4]
0x967291: mov     dword ptr [esp+238h+var_198+4], edx
0x967298: mov     eax, [eax+8]
0x96729B: lea     ecx, [esp+238h+var_16C]
0x9672A2: push    ecx
0x9672A3: lea     edx, [esp+23Ch+var_A0]
0x9672AA: push    edx
0x9672AB: lea     ecx, [ebx+18h]
0x9672AE: mov     [esp+240h+var_190], eax
0x9672B5: call    sub_498FE0
0x9672BA: fldz
0x9672BC: mov     ecx, [eax]
0x9672BE: fld     [esp+238h+var_1AC]
0x9672C5: mov     dword ptr [esp+238h+var_1A8], ecx
0x9672CC: fcom    st(1)
0x9672CE: mov     edx, [eax+4]
0x9672D1: mov     dword ptr [esp+238h+var_1A8+4], edx
0x9672D8: mov     eax, [eax+8]
0x9672DB: mov     [esp+238h+var_1A0], eax
0x9672E2: fnstsw  ax
0x9672E4: test    ah, 41h
0x9672E7: jnz     short loc_967304
0x9672E9: mov     edx, [esp+238h+var_224]
0x9672ED: fstp    st
0x9672EF: mov     ecx, edi
0x9672F1: neg     ecx
0x9672F3: mov     dword ptr [esp+238h+var_220], ecx
0x9672F7: fild    dword ptr [esp+238h+var_220]
0x9672FB: fmul    dword ptr [edx+4]
0x9672FE: fstp    dword ptr [esp+238h+var_210+4]
0x967302: jmp     short loc_967322
0x967304: fcomp   st(1)
0x967306: fnstsw  ax
0x967308: test    ah, 5
0x96730B: jp      short loc_96731E
0x96730D: fild    [esp+238h+var_228]
0x967311: mov     eax, [esp+238h+var_224]
0x967315: fmul    dword ptr [eax+4]
0x967318: fstp    dword ptr [esp+238h+var_210+4]
0x96731C: jmp     short loc_967322
0x96731E: fst     dword ptr [esp+238h+var_210+4]
0x967322: fld     [esp+238h+var_1B8]
0x967329: fcom    st(1)
0x96732B: fnstsw  ax
0x96732D: test    ah, 41h
0x967330: jnz     short loc_967343
0x967332: mov     ecx, [esp+238h+var_224]
0x967336: fstp    st(1)
0x967338: fstp    st
0x96733A: fild    [esp+238h+var_228]
0x96733E: fmul    dword ptr [ecx+8]
0x967341: jmp     short loc_96735F
0x967343: fcomp   st(1)
0x967345: fnstsw  ax
0x967347: test    ah, 5
0x96734A: jp      short loc_96735F
0x96734C: mov     edx, [esp+238h+var_224]
0x967350: fstp    st
0x967352: neg     edi
0x967354: mov     dword ptr [esp+238h+var_220], edi
0x967358: fild    dword ptr [esp+238h+var_220]
0x96735C: fmul    dword ptr [edx+8]
0x96735F: lea     eax, [esp+238h+var_13C]
0x967366: fstp    [esp+238h+var_208]
0x96736A: fld     dword ptr [esi]
0x96736C: push    eax; int
0x96736D: push    ecx
0x96736E: lea     ecx, [esp+240h+var_80]
0x967375: fstp    [esp+240h+var_240]; float
0x967378: push    ecx; int
0x967379: call    sub_47DA10
0x96737E: add     esp, 0Ch
0x967381: push    eax
0x967382: lea     ecx, [esp+23Ch+var_154]
0x967389: call    sub_4121D0
0x96738E: lea     edx, [esp+238h+var_16C]
0x967395: push    edx
0x967396: lea     eax, [esp+23Ch+var_90]
0x96739D: push    eax
0x96739E: lea     ecx, [esp+240h+var_154]
0x9673A5: call    sub_498FE0
0x9673AA: mov     ecx, [eax]
0x9673AC: mov     edx, [eax+4]
0x9673AF: mov     eax, [eax+8]
0x9673B2: mov     [esp+238h+var_16C], ecx
0x9673B9: lea     ecx, [esp+238h+var_1DC]
0x9673BD: push    ecx
0x9673BE: mov     [esp+23Ch+var_168], edx
0x9673C5: mov     [esp+23Ch+var_164], eax
0x9673CC: call    sub_47D9E0
0x9673D1: fstp    [esp+238h+var_1C4]
0x9673D5: lea     edx, [esp+238h+var_198]
0x9673DC: push    edx
0x9673DD: lea     ecx, [esp+23Ch+var_1DC]
0x9673E1: call    sub_47D9E0
0x9673E6: fstp    [esp+238h+var_1B8]
0x9673ED: lea     eax, [esp+238h+var_1A8]
0x9673F4: push    eax
0x9673F5: lea     ecx, [esp+23Ch+var_1DC]
0x9673F9: call    sub_47D9E0
0x9673FE: fstp    [esp+238h+var_1AC]
0x967405: fld     dword ptr [esp+238h+var_210+4]
0x967409: lea     ecx, [esp+238h+var_16C]
0x967410: fstp    [esp+238h+var_1E8]
0x967414: push    ecx
0x967415: fld     [esp+23Ch+var_208]
0x967419: lea     ecx, [esp+23Ch+var_1DC]
0x96741D: fstp    [esp+23Ch+var_220]
0x967421: call    sub_47D9E0
0x967426: cmp     [esp+238h+var_218], 0
0x96742B: fld     [esp+238h+var_1B8]
0x967432: fld     [esp+238h+var_1E8]
0x967436: fmul    st(1), st
0x967438: fxch    st(2)
0x96743A: fsubrp  st(1), st
0x96743C: fld     [esp+238h+var_1AC]
0x967443: fld     [esp+238h+var_220]
0x967447: fmul    st(1), st
0x967449: fxch    st(2)
0x96744B: fsubrp  st(1), st
0x96744D: fstp    [esp+238h+var_224]
0x967451: jnz     short loc_967464
0x967453: fld     [esp+238h+var_224]
0x967457: fdiv    [esp+238h+var_1C4]
0x96745B: fstp    dword ptr [esp+238h+var_210]
0x96745F: jmp     loc_966FD5
0x967464: lea     edx, [esp+238h+var_F0]
0x96746B: fstp    st(1)
0x96746D: push    edx
0x96746E: fstp    st
0x967470: lea     ecx, [esp+23Ch+var_1DC]
0x967474: call    sub_47D9E0
0x967479: fadd    [esp+238h+var_224]
0x96747D: fdiv    [esp+238h+var_1C4]
0x967481: jmp     loc_966FC9
0x967486: mov     ecx, [esp+238h+var_224]; jumptable 00966B67 case 8
0x96748A: fstp    st
0x96748C: fld     [esp+238h+var_1B4]
0x967493: fcom    st(1)
0x967495: fnstsw  ax
0x967497: test    ah, 41h
0x96749A: jnz     short loc_9674AA
0x96749C: fstp    st
0x96749E: fild    [esp+238h+var_228]
0x9674A2: fmul    dword ptr [ecx]
0x9674A4: fstp    dword ptr [esp+238h+var_210]
0x9674A8: jmp     short loc_9674CB
0x9674AA: fcomp   st(1)
0x9674AC: fnstsw  ax
0x9674AE: test    ah, 5
0x9674B1: jp      short loc_9674C7
0x9674B3: mov     eax, edi
0x9674B5: neg     eax
0x9674B7: mov     dword ptr [esp+238h+var_220], eax
0x9674BB: fild    dword ptr [esp+238h+var_220]
0x9674BF: fmul    dword ptr [ecx]
0x9674C1: fstp    dword ptr [esp+238h+var_210]
0x9674C5: jmp     short loc_9674CB
0x9674C7: fst     dword ptr [esp+238h+var_210]
0x9674CB: fld     [esp+238h+var_1CC]
0x9674CF: fcom    st(1)
0x9674D1: fnstsw  ax
0x9674D3: test    ah, 41h
0x9674D6: jnz     short loc_9674E8
0x9674D8: fstp    st
0x9674DA: neg     edi
0x9674DC: mov     dword ptr [esp+238h+var_220], edi
0x9674E0: fstp    st
0x9674E2: fild    dword ptr [esp+238h+var_220]
0x9674E6: jmp     short loc_9674F7
0x9674E8: fcomp   st(1)
0x9674EA: fnstsw  ax
0x9674EC: test    ah, 5
0x9674EF: jp      short loc_9674FA
0x9674F1: fstp    st
0x9674F3: fild    [esp+238h+var_228]
0x9674F7: fmul    dword ptr [ecx+8]
0x9674FA: lea     ecx, [esp+238h+var_13C]
0x967501: fstp    [esp+238h+var_208]
0x967505: fld     dword ptr [esi]
0x967507: push    ecx; int
0x967508: push    ecx
0x967509: lea     edx, [esp+240h+var_40]
0x967510: fstp    [esp+240h+var_240]; float
0x967513: push    edx; int
0x967514: call    sub_47DA10
0x967519: add     esp, 0Ch
0x96751C: push    eax
0x96751D: lea     ecx, [esp+23Ch+var_154]
0x967524: call    sub_4121D0
0x967529: lea     eax, [esp+238h+var_184]
0x967530: push    eax
0x967531: lea     ecx, [esp+23Ch+var_D8]
0x967538: push    ecx
0x967539: lea     ecx, [esp+240h+var_154]
0x967540: call    sub_498FE0
0x967545: mov     edx, [eax]
0x967547: mov     ecx, [eax+4]
0x96754A: mov     [esp+238h+var_184], edx
0x967551: mov     edx, [eax+8]
0x967554: lea     eax, [esp+238h+var_C8]
0x96755B: mov     [esp+238h+var_180], ecx
0x967562: push    eax
0x967563: lea     ecx, [esp+23Ch+var_E4]
0x96756A: mov     [esp+23Ch+var_17C], edx
0x967571: call    sub_47D9E0
0x967576: fstp    [esp+238h+var_1CC]
0x96757A: lea     ecx, [esp+238h+var_E4]
0x967581: push    ecx
0x967582: call    sub_47D9E0
0x967587: fstp    [esp+238h+var_1C0]
0x96758B: lea     edx, [esp+238h+var_100]
0x967592: push    edx
0x967593: lea     ecx, [esp+23Ch+var_E4]
0x96759A: call    sub_47D9E0
0x96759F: fstp    [esp+238h+var_1B4]
0x9675A6: fld     dword ptr [esp+238h+var_210]
0x9675AA: lea     eax, [esp+238h+var_184]
0x9675B1: fstp    [esp+238h+var_1F0]
0x9675B5: push    eax
0x9675B6: fld     [esp+23Ch+var_208]
0x9675BA: lea     ecx, [esp+23Ch+var_E4]
0x9675C1: fstp    [esp+23Ch+var_220]
0x9675C5: call    sub_47D9E0
0x9675CA: cmp     [esp+238h+var_218], 0
0x9675CF: fld     [esp+238h+var_1CC]
0x9675D3: fld     [esp+238h+var_1F0]
0x9675D7: fmul    st(1), st
0x9675D9: fxch    st(2)
0x9675DB: fsubrp  st(1), st
0x9675DD: fld     [esp+238h+var_1B4]
0x9675E4: fld     [esp+238h+var_220]
0x9675E8: fmul    st(1), st
0x9675EA: fxch    st(2)
0x9675EC: fsubrp  st(1), st
0x9675EE: fstp    [esp+238h+var_224]
0x9675F2: jnz     short loc_967602
0x9675F4: fld     [esp+238h+var_224]
0x9675F8: fdiv    [esp+238h+var_1C0]
0x9675FC: fstp    dword ptr [esp+238h+var_210+4]
0x967600: jmp     short loc_96763C
0x967602: fstp    st(1)
0x967604: lea     ecx, [esp+238h+var_F0]
0x96760B: fstp    st
0x96760D: push    ecx
0x96760E: fld     [esp+23Ch+var_224]
0x967612: lea     ecx, [esp+23Ch+var_E4]
0x967619: fstp    [esp+23Ch+var_198]
0x967620: call    sub_47D9E0
0x967625: fsubr   [esp+238h+var_198]
0x96762C: fdiv    [esp+238h+var_1C0]
0x967630: fstp    dword ptr [esp+238h+var_210+4]
0x967634: fld     [esp+238h+var_1F0]
0x967638: fld     [esp+238h+var_220]
0x96763C: fld     dword ptr [esp+238h+var_210+4]
0x967640: mov     ecx, [ebp+arg_8]
0x967643: fld     dword ptr [esi]
0x967645: mov     edx, [esp+238h+var_1D0]
0x967649: fmul    dword ptr [ecx]
0x96764B: mov     eax, [ebp+arg_20]
0x96764E: fadd    dword ptr [edx]
0x967650: fld     dword ptr [ebx]
0x967652: fmul    st, st(4)
0x967654: faddp   st(1), st
0x967656: fld     dword ptr [ebx+0Ch]
0x967659: fmul    st, st(2)
0x96765B: faddp   st(1), st
0x96765D: fld     dword ptr [ebx+18h]
0x967660: fmul    st, st(3)
0x967662: faddp   st(1), st
0x967664: fstp    dword ptr [eax]
0x967666: fld     dword ptr [esi]
0x967668: fmul    dword ptr [ecx+4]
0x96766B: fadd    dword ptr [edx+4]
0x96766E: fld     dword ptr [ebx+4]
0x967671: fmul    st, st(4)
0x967673: faddp   st(1), st
0x967675: fld     dword ptr [ebx+10h]
0x967678: fmul    st, st(2)
0x96767A: faddp   st(1), st
0x96767C: fld     dword ptr [ebx+1Ch]
0x96767F: fmul    st, st(3)
0x967681: faddp   st(1), st
0x967683: fstp    dword ptr [eax+4]
0x967686: fld     dword ptr [esi]
0x967688: fmul    dword ptr [ecx+8]
0x96768B: fadd    dword ptr [edx+8]
0x96768E: fld     dword ptr [ebx+8]
0x967691: fmulp   st(4), st
0x967693: faddp   st(3), st
0x967695: fmul    dword ptr [ebx+14h]
0x967698: faddp   st(2), st
0x96769A: fmul    dword ptr [ebx+20h]
0x96769D: faddp   st(1), st
0x96769F: fstp    dword ptr [eax+8]
0x9676A2: jmp     loc_968164
0x9676A7: mov     ecx, [esp+238h+var_224]; jumptable 00966B67 case 9
0x9676AB: fstp    st
0x9676AD: fld     [esp+238h+var_1B0]
0x9676B4: fcom    st(1)
0x9676B6: fnstsw  ax
0x9676B8: test    ah, 41h
0x9676BB: jnz     short loc_9676CB
0x9676BD: fstp    st
0x9676BF: fild    [esp+238h+var_228]
0x9676C3: fmul    dword ptr [ecx]
0x9676C5: fstp    dword ptr [esp+238h+var_210]
0x9676C9: jmp     short loc_9676EC
0x9676CB: fcomp   st(1)
0x9676CD: fnstsw  ax
0x9676CF: test    ah, 5
0x9676D2: jp      short loc_9676E8
0x9676D4: mov     edx, edi
0x9676D6: neg     edx
0x9676D8: mov     dword ptr [esp+238h+var_220], edx
0x9676DC: fild    dword ptr [esp+238h+var_220]
0x9676E0: fmul    dword ptr [ecx]
0x9676E2: fstp    dword ptr [esp+238h+var_210]
0x9676E6: jmp     short loc_9676EC
0x9676E8: fst     dword ptr [esp+238h+var_210]
0x9676EC: fld     [esp+238h+var_1C8]
0x9676F0: fcom    st(1)
0x9676F2: fnstsw  ax
0x9676F4: test    ah, 41h
0x9676F7: jnz     short loc_967709
0x9676F9: fstp    st
0x9676FB: neg     edi
0x9676FD: mov     dword ptr [esp+238h+var_220], edi
0x967701: fstp    st
0x967703: fild    dword ptr [esp+238h+var_220]
0x967707: jmp     short loc_967718
0x967709: fcomp   st(1)
0x96770B: fnstsw  ax
0x96770D: test    ah, 5
0x967710: jp      short loc_96771B
0x967712: fstp    st
0x967714: fild    [esp+238h+var_228]
0x967718: fmul    dword ptr [ecx+8]
0x96771B: lea     eax, [esp+238h+var_13C]
0x967722: fstp    [esp+238h+var_208]
0x967726: fld     dword ptr [esi]
0x967728: push    eax; int
0x967729: push    ecx
0x96772A: lea     ecx, [esp+240h+var_20]
0x967731: fstp    [esp+240h+var_240]; float
0x967734: push    ecx; int
0x967735: call    sub_47DA10
0x96773A: add     esp, 0Ch
0x96773D: push    eax
0x96773E: lea     ecx, [esp+23Ch+var_154]
0x967745: call    sub_4121D0
0x96774A: lea     edx, [esp+238h+var_178]
0x967751: push    edx
0x967752: lea     eax, [esp+23Ch+var_D8]
0x967759: push    eax
0x96775A: lea     ecx, [esp+240h+var_154]
0x967761: call    sub_498FE0
0x967766: mov     ecx, [eax]
0x967768: mov     edx, [eax+4]
0x96776B: mov     eax, [eax+8]
0x96776E: mov     [esp+238h+var_178], ecx
0x967775: lea     ecx, [esp+238h+var_160]
0x96777C: push    ecx
0x96777D: lea     ecx, [esp+23Ch+var_1FC]
0x967781: mov     [esp+23Ch+var_174], edx
0x967788: mov     [esp+23Ch+var_170], eax
0x96778F: call    sub_47D9E0
0x967794: fstp    [esp+238h+var_1C8]
0x967798: lea     edx, [esp+238h+var_1FC]
0x96779C: push    edx
0x96779D: mov     ecx, edx
0x96779F: call    sub_47D9E0
0x9677A4: fstp    [esp+238h+var_1BC]
0x9677A8: lea     eax, [esp+238h+var_1A8]
0x9677AF: push    eax
0x9677B0: lea     ecx, [esp+23Ch+var_1FC]
0x9677B4: call    sub_47D9E0
0x9677B9: fstp    [esp+238h+var_1B0]
0x9677C0: fld     dword ptr [esp+238h+var_210]
0x9677C4: lea     ecx, [esp+238h+var_178]
0x9677CB: fstp    [esp+238h+var_1F0]
0x9677CF: push    ecx
0x9677D0: fld     [esp+23Ch+var_208]
0x9677D4: lea     ecx, [esp+23Ch+var_1FC]
0x9677D8: fstp    [esp+23Ch+var_220]
0x9677DC: call    sub_47D9E0
0x9677E1: cmp     [esp+238h+var_218], 0
0x9677E6: fld     [esp+238h+var_1C8]
0x9677EA: fld     [esp+238h+var_1F0]
0x9677EE: fmul    st(1), st
0x9677F0: fxch    st(2)
0x9677F2: fsubrp  st(1), st
0x9677F4: fld     [esp+238h+var_1B0]
0x9677FB: fld     [esp+238h+var_220]
0x9677FF: fmul    st(1), st
0x967801: fxch    st(2)
0x967803: fsubrp  st(1), st
0x967805: fstp    [esp+238h+var_224]
0x967809: jnz     short loc_96781C
0x96780B: fld     [esp+238h+var_224]
0x96780F: fdiv    [esp+238h+var_1BC]
0x967813: fstp    dword ptr [esp+238h+var_210+4]
0x967817: jmp     loc_96763C
0x96781C: lea     edx, [esp+238h+var_F0]
0x967823: fstp    st(1)
0x967825: push    edx
0x967826: fstp    st
0x967828: lea     ecx, [esp+23Ch+var_1FC]
0x96782C: call    sub_47D9E0
0x967831: fadd    [esp+238h+var_224]
0x967835: fdiv    [esp+238h+var_1BC]
0x967839: jmp     loc_967630
0x96783E: fstp    st(1); jumptable 00966B67 case 10
0x967840: fstp    st
0x967842: fld     [esp+238h+var_148]
0x967849: fsub    [esp+238h+var_118]
0x967850: fstp    [esp+238h+var_1FC]
0x967854: mov     eax, [esp+238h+var_1FC]
0x967858: fld     [esp+238h+var_120]
0x96785F: mov     [esp+238h+var_16C], eax
0x967866: fsub    [esp+238h+var_60]
0x96786D: lea     eax, [esp+238h+var_16C]
0x967874: push    eax
0x967875: fstp    [esp+23Ch+var_1F8]
0x967879: mov     ecx, [esp+23Ch+var_1F8]
0x96787D: fld     [esp+23Ch+var_A0]
0x967884: mov     [esp+23Ch+var_168], ecx
0x96788B: fsub    [esp+23Ch+var_70]
0x967892: lea     ecx, [esp+23Ch+var_D8]
0x967899: push    ecx
0x96789A: mov     ecx, ebx
0x96789C: fstp    [esp+240h+var_1F4]
0x9678A0: mov     edx, [esp+240h+var_1F4]
0x9678A4: mov     [esp+240h+var_164], edx
0x9678AB: call    sub_498FE0
0x9678B0: mov     edx, [eax]
0x9678B2: mov     [esp+238h+var_1DC], edx
0x9678B6: mov     ecx, [eax+4]
0x9678B9: mov     [esp+238h+var_1D8], ecx
0x9678BD: mov     edx, [eax+8]
0x9678C0: lea     eax, [esp+238h+var_16C]
0x9678C7: push    eax
0x9678C8: lea     ecx, [esp+23Ch+var_130]
0x9678CF: push    ecx
0x9678D0: lea     ecx, [ebx+0Ch]
0x9678D3: mov     [esp+240h+var_1D4], edx
0x9678D7: call    sub_498FE0
0x9678DC: mov     edx, [eax]
0x9678DE: mov     dword ptr [esp+238h+var_198], edx
0x9678E5: mov     ecx, [eax+4]
0x9678E8: mov     dword ptr [esp+238h+var_198+4], ecx
0x9678EF: mov     edx, [eax+8]
0x9678F2: lea     eax, [esp+238h+var_16C]
0x9678F9: push    eax
0x9678FA: lea     ecx, [esp+23Ch+var_A0]
0x967901: push    ecx
0x967902: lea     ecx, [ebx+18h]
0x967905: mov     [esp+240h+var_190], edx
0x96790C: call    sub_498FE0
0x967911: fldz
0x967913: mov     edx, [eax]
0x967915: fld     [esp+238h+var_1AC]
0x96791C: mov     dword ptr [esp+238h+var_1A8], edx
0x967923: fcom    st(1)
0x967925: mov     ecx, [eax+4]
0x967928: mov     dword ptr [esp+238h+var_1A8+4], ecx
0x96792F: mov     edx, [eax+8]
0x967932: mov     [esp+238h+var_1A0], edx
0x967939: fnstsw  ax
0x96793B: test    ah, 41h
0x96793E: jnz     short loc_967952
0x967940: mov     eax, [esp+238h+var_224]
0x967944: fstp    st
0x967946: fild    [esp+238h+var_228]
0x96794A: fmul    dword ptr [eax]
0x96794C: fstp    dword ptr [esp+238h+var_210]
0x967950: jmp     short loc_967977
0x967952: fcomp   st(1)
0x967954: fnstsw  ax
0x967956: test    ah, 5
0x967959: jp      short loc_967973
0x96795B: mov     edx, [esp+238h+var_224]
0x96795F: mov     ecx, edi
0x967961: neg     ecx
0x967963: mov     dword ptr [esp+238h+var_220], ecx
0x967967: fild    dword ptr [esp+238h+var_220]
0x96796B: fmul    dword ptr [edx]
0x96796D: fstp    dword ptr [esp+238h+var_210]
0x967971: jmp     short loc_967977
0x967973: fst     dword ptr [esp+238h+var_210]
0x967977: fld     [esp+238h+var_1C4]
0x96797B: fcom    st(1)
0x96797D: fnstsw  ax
0x96797F: test    ah, 41h
0x967982: jnz     short loc_96799B
0x967984: mov     eax, [esp+238h+var_224]
0x967988: fstp    st(1)
0x96798A: neg     edi
0x96798C: fstp    st
0x96798E: mov     dword ptr [esp+238h+var_220], edi
0x967992: fild    dword ptr [esp+238h+var_220]
0x967996: fmul    dword ptr [eax+8]
0x967999: jmp     short loc_9679B1
0x96799B: fcomp   st(1)
0x96799D: fnstsw  ax
0x96799F: test    ah, 5
0x9679A2: jp      short loc_9679B1
0x9679A4: mov     ecx, [esp+238h+var_224]
0x9679A8: fstp    st
0x9679AA: fild    [esp+238h+var_228]
0x9679AE: fmul    dword ptr [ecx+8]
0x9679B1: lea     edx, [esp+238h+var_13C]
0x9679B8: fstp    [esp+238h+var_208]
0x9679BC: fld     dword ptr [esi]
0x9679BE: push    edx; int
0x9679BF: push    ecx
0x9679C0: lea     eax, [esp+240h+var_30]
0x9679C7: fstp    [esp+240h+var_240]; float
0x9679CA: push    eax; int
0x9679CB: call    sub_47DA10
0x9679D0: add     esp, 0Ch
0x9679D3: push    eax
0x9679D4: lea     ecx, [esp+23Ch+var_154]
0x9679DB: call    sub_4121D0
0x9679E0: lea     ecx, [esp+238h+var_16C]
0x9679E7: push    ecx
0x9679E8: lea     edx, [esp+23Ch+var_90]
0x9679EF: push    edx
0x9679F0: lea     ecx, [esp+240h+var_154]
0x9679F7: call    sub_498FE0
0x9679FC: mov     ecx, [eax]
0x9679FE: mov     edx, [eax+4]
0x967A01: mov     eax, [eax+8]
0x967A04: mov     [esp+238h+var_16C], ecx
0x967A0B: lea     ecx, [esp+238h+var_1DC]
0x967A0F: push    ecx
0x967A10: lea     ecx, [esp+23Ch+var_198]
0x967A17: mov     [esp+23Ch+var_168], edx
0x967A1E: mov     [esp+23Ch+var_164], eax
0x967A25: call    sub_47D9E0
0x967A2A: fstp    [esp+238h+var_1C4]
0x967A2E: lea     edx, [esp+238h+var_198]
0x967A35: push    edx
0x967A36: mov     ecx, edx
0x967A38: call    sub_47D9E0
0x967A3D: fstp    [esp+238h+var_1B8]
0x967A44: lea     eax, [esp+238h+var_1A8]
0x967A4B: push    eax
0x967A4C: lea     ecx, [esp+23Ch+var_198]
0x967A53: call    sub_47D9E0
0x967A58: fstp    [esp+238h+var_1AC]
0x967A5F: fld     dword ptr [esp+238h+var_210]
0x967A63: lea     ecx, [esp+238h+var_16C]
0x967A6A: fstp    [esp+238h+var_1F0]
0x967A6E: push    ecx
0x967A6F: fld     [esp+23Ch+var_208]
0x967A73: lea     ecx, [esp+23Ch+var_198]
0x967A7A: fstp    [esp+23Ch+var_220]
0x967A7E: call    sub_47D9E0
0x967A83: cmp     [esp+238h+var_218], 0
0x967A88: fld     [esp+238h+var_1C4]
0x967A8C: fld     [esp+238h+var_1F0]
0x967A90: fmul    st(1), st
0x967A92: fxch    st(2)
0x967A94: fsubrp  st(1), st
0x967A96: fld     [esp+238h+var_1AC]
0x967A9D: fld     [esp+238h+var_220]
0x967AA1: fmul    st(1), st
0x967AA3: fxch    st(2)
0x967AA5: fsubrp  st(1), st
0x967AA7: fstp    [esp+238h+var_224]
0x967AAB: jnz     short loc_967AC1
0x967AAD: fld     [esp+238h+var_224]
0x967AB1: fdiv    [esp+238h+var_1B8]
0x967AB8: fstp    dword ptr [esp+238h+var_210+4]
0x967ABC: jmp     loc_96763C
0x967AC1: lea     edx, [esp+238h+var_F0]
0x967AC8: fstp    st(1)
0x967ACA: push    edx
0x967ACB: fstp    st
0x967ACD: lea     ecx, [esp+23Ch+var_198]
0x967AD4: call    sub_47D9E0
0x967AD9: fadd    [esp+238h+var_224]
0x967ADD: fdiv    [esp+238h+var_1B8]
0x967AE4: jmp     loc_967630
0x967AE9: mov     ecx, [esp+238h+var_224]; jumptable 00966B67 case 11
0x967AED: fstp    st
0x967AEF: fld     [esp+238h+var_1C0]
0x967AF3: fcom    st(1)
0x967AF5: fnstsw  ax
0x967AF7: test    ah, 41h
0x967AFA: jnz     short loc_967B12
0x967AFC: mov     eax, edi
0x967AFE: fstp    st
0x967B00: neg     eax
0x967B02: mov     dword ptr [esp+238h+var_220], eax
0x967B06: fild    dword ptr [esp+238h+var_220]
0x967B0A: fmul    dword ptr [ecx]
0x967B0C: fstp    dword ptr [esp+238h+var_210]
0x967B10: jmp     short loc_967B2B
0x967B12: fcomp   st(1)
0x967B14: fnstsw  ax
0x967B16: test    ah, 5
0x967B19: jp      short loc_967B27
0x967B1B: fild    [esp+238h+var_228]
0x967B1F: fmul    dword ptr [ecx]
0x967B21: fstp    dword ptr [esp+238h+var_210]
0x967B25: jmp     short loc_967B2B
0x967B27: fst     dword ptr [esp+238h+var_210]
0x967B2B: fld     [esp+238h+var_1CC]
0x967B2F: fcom    st(1)
0x967B31: fnstsw  ax
0x967B33: test    ah, 41h
0x967B36: jnz     short loc_967B42
0x967B38: fstp    st
0x967B3A: fstp    st
0x967B3C: fild    [esp+238h+var_228]
0x967B40: jmp     short loc_967B57
0x967B42: fcomp   st(1)
0x967B44: fnstsw  ax
0x967B46: test    ah, 5
0x967B49: jp      short loc_967B5A
0x967B4B: neg     edi
0x967B4D: fstp    st
0x967B4F: mov     dword ptr [esp+238h+var_220], edi
0x967B53: fild    dword ptr [esp+238h+var_220]
0x967B57: fmul    dword ptr [ecx+4]
0x967B5A: lea     ecx, [esp+238h+var_13C]
0x967B61: fstp    dword ptr [esp+238h+var_210+4]
0x967B65: fld     dword ptr [esi]
0x967B67: push    ecx; int
0x967B68: push    ecx
0x967B69: lea     edx, [esp+240h+var_50]
0x967B70: fstp    [esp+240h+var_240]; float
0x967B73: push    edx; int
0x967B74: call    sub_47DA10
0x967B79: add     esp, 0Ch
0x967B7C: push    eax
0x967B7D: lea     ecx, [esp+23Ch+var_154]
0x967B84: call    sub_4121D0
0x967B89: lea     eax, [esp+238h+var_184]
0x967B90: push    eax
0x967B91: lea     ecx, [esp+23Ch+var_D8]
0x967B98: push    ecx
0x967B99: lea     ecx, [esp+240h+var_154]
0x967BA0: call    sub_498FE0
0x967BA5: mov     edx, [eax]
0x967BA7: mov     ecx, [eax+4]
0x967BAA: mov     [esp+238h+var_184], edx
0x967BB1: mov     edx, [eax+8]
0x967BB4: lea     eax, [esp+238h+var_C8]
0x967BBB: mov     [esp+238h+var_180], ecx
0x967BC2: push    eax
0x967BC3: lea     ecx, [esp+23Ch+var_100]
0x967BCA: mov     [esp+23Ch+var_17C], edx
0x967BD1: call    sub_47D9E0
0x967BD6: fstp    [esp+238h+var_1CC]
0x967BDA: lea     ecx, [esp+238h+var_E4]
0x967BE1: push    ecx
0x967BE2: lea     ecx, [esp+23Ch+var_100]
0x967BE9: call    sub_47D9E0
0x967BEE: fstp    [esp+238h+var_1C0]
0x967BF2: lea     edx, [esp+238h+var_100]
0x967BF9: push    edx
0x967BFA: mov     ecx, edx
0x967BFC: call    sub_47D9E0
0x967C01: fstp    [esp+238h+var_1B4]
0x967C08: fld     dword ptr [esp+238h+var_210]
0x967C0C: lea     eax, [esp+238h+var_184]
0x967C13: fstp    [esp+238h+var_1F0]
0x967C17: push    eax
0x967C18: fld     dword ptr [esp+23Ch+var_210+4]
0x967C1C: lea     ecx, [esp+23Ch+var_100]
0x967C23: fstp    [esp+23Ch+var_1E8]
0x967C27: call    sub_47D9E0
0x967C2C: cmp     [esp+238h+var_218], 0
0x967C31: fld     [esp+238h+var_1CC]
0x967C35: fld     [esp+238h+var_1F0]
0x967C39: fmul    st(1), st
0x967C3B: fxch    st(2)
0x967C3D: fsubrp  st(1), st
0x967C3F: fld     [esp+238h+var_1C0]
0x967C43: fld     [esp+238h+var_1E8]
0x967C47: fmul    st(1), st
0x967C49: fxch    st(2)
0x967C4B: fsubrp  st(1), st
0x967C4D: fstp    [esp+238h+var_224]
0x967C51: jnz     short loc_967C64
0x967C53: fld     [esp+238h+var_224]
0x967C57: fdiv    [esp+238h+var_1B4]
0x967C5E: fstp    [esp+238h+var_208]
0x967C62: jmp     short loc_967CA1
0x967C64: fstp    st(1)
0x967C66: lea     ecx, [esp+238h+var_F0]
0x967C6D: fstp    st
0x967C6F: push    ecx
0x967C70: fld     [esp+23Ch+var_224]
0x967C74: lea     ecx, [esp+23Ch+var_100]
0x967C7B: fstp    [esp+23Ch+var_198]
0x967C82: call    sub_47D9E0
0x967C87: fsubr   [esp+238h+var_198]
0x967C8E: fdiv    [esp+238h+var_1B4]
0x967C95: fstp    [esp+238h+var_208]
0x967C99: fld     [esp+238h+var_1F0]
0x967C9D: fld     [esp+238h+var_1E8]
0x967CA1: fld     [esp+238h+var_208]
0x967CA5: mov     ecx, [ebp+arg_8]
0x967CA8: fld     dword ptr [esi]
0x967CAA: mov     edx, [esp+238h+var_1D0]
0x967CAE: fmul    dword ptr [ecx]
0x967CB0: mov     eax, [ebp+arg_20]
0x967CB3: fadd    dword ptr [edx]
0x967CB5: fld     dword ptr [ebx]
0x967CB7: fmul    st, st(4)
0x967CB9: faddp   st(1), st
0x967CBB: fld     dword ptr [ebx+0Ch]
0x967CBE: fmul    st, st(3)
0x967CC0: faddp   st(1), st
0x967CC2: fld     dword ptr [ebx+18h]
0x967CC5: fmul    st, st(2)
0x967CC7: faddp   st(1), st
0x967CC9: fstp    dword ptr [eax]
0x967CCB: fld     dword ptr [esi]
0x967CCD: fmul    dword ptr [ecx+4]
0x967CD0: fadd    dword ptr [edx+4]
0x967CD3: fld     dword ptr [ebx+4]
0x967CD6: fmul    st, st(4)
0x967CD8: faddp   st(1), st
0x967CDA: fld     dword ptr [ebx+10h]
0x967CDD: fmul    st, st(3)
0x967CDF: faddp   st(1), st
0x967CE1: fld     dword ptr [ebx+1Ch]
0x967CE4: fmul    st, st(2)
0x967CE6: faddp   st(1), st
0x967CE8: fstp    dword ptr [eax+4]
0x967CEB: fld     dword ptr [esi]
0x967CED: fmul    dword ptr [ecx+8]
0x967CF0: fadd    dword ptr [edx+8]
0x967CF3: fld     dword ptr [ebx+8]
0x967CF6: fmulp   st(4), st
0x967CF8: faddp   st(3), st
0x967CFA: fld     dword ptr [ebx+14h]
0x967CFD: fmulp   st(2), st
0x967CFF: fxch    st(2)
0x967D01: faddp   st(1), st
0x967D03: fld     dword ptr [ebx+20h]
0x967D06: fmulp   st(2), st
0x967D08: faddp   st(1), st
0x967D0A: fstp    dword ptr [eax+8]
0x967D0D: jmp     loc_968164
0x967D12: mov     ecx, [esp+238h+var_224]; jumptable 00966B67 case 12
0x967D16: fstp    st
0x967D18: fld     [esp+238h+var_1BC]
0x967D1C: fcom    st(1)
0x967D1E: fnstsw  ax
0x967D20: test    ah, 41h
0x967D23: jnz     short loc_967D3B
0x967D25: mov     edx, edi
0x967D27: fstp    st
0x967D29: neg     edx
0x967D2B: mov     dword ptr [esp+238h+var_220], edx
0x967D2F: fild    dword ptr [esp+238h+var_220]
0x967D33: fmul    dword ptr [ecx]
0x967D35: fstp    dword ptr [esp+238h+var_210]
0x967D39: jmp     short loc_967D54
0x967D3B: fcomp   st(1)
0x967D3D: fnstsw  ax
0x967D3F: test    ah, 5
0x967D42: jp      short loc_967D50
0x967D44: fild    [esp+238h+var_228]
0x967D48: fmul    dword ptr [ecx]
0x967D4A: fstp    dword ptr [esp+238h+var_210]
0x967D4E: jmp     short loc_967D54
0x967D50: fst     dword ptr [esp+238h+var_210]
0x967D54: fld     [esp+238h+var_1C8]
0x967D58: fcom    st(1)
0x967D5A: fnstsw  ax
0x967D5C: test    ah, 41h
0x967D5F: jnz     short loc_967D6B
0x967D61: fstp    st
0x967D63: fstp    st
0x967D65: fild    [esp+238h+var_228]
0x967D69: jmp     short loc_967D80
0x967D6B: fcomp   st(1)
0x967D6D: fnstsw  ax
0x967D6F: test    ah, 5
0x967D72: jp      short loc_967D83
0x967D74: neg     edi
0x967D76: fstp    st
0x967D78: mov     dword ptr [esp+238h+var_220], edi
0x967D7C: fild    dword ptr [esp+238h+var_220]
0x967D80: fmul    dword ptr [ecx+4]
0x967D83: lea     eax, [esp+238h+var_13C]
0x967D8A: fstp    dword ptr [esp+238h+var_210+4]
0x967D8E: fld     dword ptr [esi]
0x967D90: push    eax; int
0x967D91: push    ecx
0x967D92: lea     ecx, [esp+240h+var_60]
0x967D99: fstp    [esp+240h+var_240]; float
0x967D9C: push    ecx; int
0x967D9D: call    sub_47DA10
0x967DA2: add     esp, 0Ch
0x967DA5: push    eax
0x967DA6: lea     ecx, [esp+23Ch+var_154]
0x967DAD: call    sub_4121D0
0x967DB2: lea     edx, [esp+238h+var_178]
0x967DB9: push    edx
0x967DBA: lea     eax, [esp+23Ch+var_D8]
0x967DC1: push    eax
0x967DC2: lea     ecx, [esp+240h+var_154]
0x967DC9: call    sub_498FE0
0x967DCE: mov     ecx, [eax]
0x967DD0: mov     edx, [eax+4]
0x967DD3: mov     eax, [eax+8]
0x967DD6: mov     [esp+238h+var_178], ecx
0x967DDD: lea     ecx, [esp+238h+var_160]
0x967DE4: push    ecx
0x967DE5: lea     ecx, [esp+23Ch+var_1A8]
0x967DEC: mov     [esp+23Ch+var_174], edx
0x967DF3: mov     [esp+23Ch+var_170], eax
0x967DFA: call    sub_47D9E0
0x967DFF: fstp    [esp+238h+var_1C8]
0x967E03: lea     edx, [esp+238h+var_1FC]
0x967E07: push    edx
0x967E08: lea     ecx, [esp+23Ch+var_1A8]
0x967E0F: call    sub_47D9E0
0x967E14: fstp    [esp+238h+var_1BC]
0x967E18: lea     eax, [esp+238h+var_1A8]
0x967E1F: push    eax
0x967E20: mov     ecx, eax
0x967E22: call    sub_47D9E0
0x967E27: fstp    [esp+238h+var_1B0]
0x967E2E: fld     dword ptr [esp+238h+var_210]
0x967E32: lea     ecx, [esp+238h+var_178]
0x967E39: fstp    [esp+238h+var_1F0]
0x967E3D: push    ecx
0x967E3E: fld     dword ptr [esp+23Ch+var_210+4]
0x967E42: lea     ecx, [esp+23Ch+var_1A8]
0x967E49: fstp    [esp+23Ch+var_1E8]
0x967E4D: call    sub_47D9E0
0x967E52: cmp     [esp+238h+var_218], 0
0x967E57: fld     [esp+238h+var_1C8]
0x967E5B: fld     [esp+238h+var_1F0]
0x967E5F: fmul    st(1), st
0x967E61: fxch    st(2)
0x967E63: fsubrp  st(1), st
0x967E65: fld     [esp+238h+var_1BC]
0x967E69: fld     [esp+238h+var_1E8]
0x967E6D: fmul    st(1), st
0x967E6F: fxch    st(2)
0x967E71: fsubrp  st(1), st
0x967E73: fstp    [esp+238h+var_224]
0x967E77: jnz     short loc_967E8D
0x967E79: fld     [esp+238h+var_224]
0x967E7D: fdiv    [esp+238h+var_1B0]
0x967E84: fstp    [esp+238h+var_208]
0x967E88: jmp     loc_967CA1
0x967E8D: lea     edx, [esp+238h+var_F0]
0x967E94: fstp    st(1)
0x967E96: push    edx
0x967E97: fstp    st
0x967E99: lea     ecx, [esp+23Ch+var_1A8]
0x967EA0: call    sub_47D9E0
0x967EA5: fadd    [esp+238h+var_224]
0x967EA9: fdiv    [esp+238h+var_1B0]
0x967EB0: jmp     loc_967C95
0x967EB5: fstp    st(1); jumptable 00966B67 case 13
0x967EB7: fstp    st
0x967EB9: fld     [esp+238h+var_148]
0x967EC0: fsub    [esp+238h+var_118]
0x967EC7: fstp    [esp+238h+var_1FC]
0x967ECB: mov     eax, [esp+238h+var_1FC]
0x967ECF: fld     [esp+238h+var_120]
0x967ED6: mov     [esp+238h+var_16C], eax
0x967EDD: fsub    [esp+238h+var_60]
0x967EE4: lea     eax, [esp+238h+var_16C]
0x967EEB: push    eax
0x967EEC: fstp    [esp+23Ch+var_1F8]
0x967EF0: mov     ecx, [esp+23Ch+var_1F8]
0x967EF4: fld     [esp+23Ch+var_A0]
0x967EFB: mov     [esp+23Ch+var_168], ecx
0x967F02: fsub    [esp+23Ch+var_70]
0x967F09: lea     ecx, [esp+23Ch+var_D8]
0x967F10: push    ecx
0x967F11: mov     ecx, ebx
0x967F13: fstp    [esp+240h+var_1F4]
0x967F17: mov     edx, [esp+240h+var_1F4]
0x967F1B: mov     [esp+240h+var_164], edx
0x967F22: call    sub_498FE0
0x967F27: mov     edx, [eax]
0x967F29: mov     [esp+238h+var_1DC], edx
0x967F2D: mov     ecx, [eax+4]
0x967F30: mov     [esp+238h+var_1D8], ecx
0x967F34: mov     edx, [eax+8]
0x967F37: lea     eax, [esp+238h+var_16C]
0x967F3E: push    eax
0x967F3F: lea     ecx, [esp+23Ch+var_130]
0x967F46: push    ecx
0x967F47: lea     ecx, [ebx+0Ch]
0x967F4A: mov     [esp+240h+var_1D4], edx
0x967F4E: call    sub_498FE0
0x967F53: mov     edx, [eax]
0x967F55: mov     dword ptr [esp+238h+var_198], edx
0x967F5C: mov     ecx, [eax+4]
0x967F5F: mov     dword ptr [esp+238h+var_198+4], ecx
0x967F66: mov     edx, [eax+8]
0x967F69: lea     eax, [esp+238h+var_16C]
0x967F70: push    eax
0x967F71: lea     ecx, [esp+23Ch+var_A0]
0x967F78: push    ecx
0x967F79: lea     ecx, [ebx+18h]
0x967F7C: mov     [esp+240h+var_190], edx
0x967F83: call    sub_498FE0
0x967F88: fldz
0x967F8A: mov     edx, [eax]
0x967F8C: fld     [esp+238h+var_1B8]
0x967F93: mov     dword ptr [esp+238h+var_1A8], edx
0x967F9A: fcom    st(1)
0x967F9C: mov     ecx, [eax+4]
0x967F9F: mov     dword ptr [esp+238h+var_1A8+4], ecx
0x967FA6: mov     edx, [eax+8]
0x967FA9: mov     [esp+238h+var_1A0], edx
0x967FB0: fnstsw  ax
0x967FB2: test    ah, 41h
0x967FB5: jnz     short loc_967FD1
0x967FB7: mov     ecx, [esp+238h+var_224]
0x967FBB: fstp    st
0x967FBD: mov     eax, edi
0x967FBF: neg     eax
0x967FC1: mov     dword ptr [esp+238h+var_220], eax
0x967FC5: fild    dword ptr [esp+238h+var_220]
0x967FC9: fmul    dword ptr [ecx]
0x967FCB: fstp    dword ptr [esp+238h+var_210]
0x967FCF: jmp     short loc_967FEE
0x967FD1: fcomp   st(1)
0x967FD3: fnstsw  ax
0x967FD5: test    ah, 5
0x967FD8: jp      short loc_967FEA
0x967FDA: fild    [esp+238h+var_228]
0x967FDE: mov     edx, [esp+238h+var_224]
0x967FE2: fmul    dword ptr [edx]
0x967FE4: fstp    dword ptr [esp+238h+var_210]
0x967FE8: jmp     short loc_967FEE
0x967FEA: fst     dword ptr [esp+238h+var_210]
0x967FEE: fld     [esp+238h+var_1C4]
0x967FF2: fcom    st(1)
0x967FF4: fnstsw  ax
0x967FF6: test    ah, 41h
0x967FF9: jnz     short loc_96800C
0x967FFB: mov     eax, [esp+238h+var_224]
0x967FFF: fstp    st(1)
0x968001: fstp    st
0x968003: fild    [esp+238h+var_228]
0x968007: fmul    dword ptr [eax+4]
0x96800A: jmp     short loc_968028
0x96800C: fcomp   st(1)
0x96800E: fnstsw  ax
0x968010: test    ah, 5
0x968013: jp      short loc_968028
0x968015: mov     ecx, [esp+238h+var_224]
0x968019: fstp    st
0x96801B: neg     edi
0x96801D: mov     dword ptr [esp+238h+var_220], edi
0x968021: fild    dword ptr [esp+238h+var_220]
0x968025: fmul    dword ptr [ecx+4]
0x968028: lea     edx, [esp+238h+var_13C]
0x96802F: fstp    dword ptr [esp+238h+var_210+4]
0x968033: fld     dword ptr [esi]
0x968035: push    edx; int
0x968036: push    ecx
0x968037: lea     eax, [esp+240h+var_70]
0x96803E: fstp    [esp+240h+var_240]; float
0x968041: push    eax; int
0x968042: call    sub_47DA10
0x968047: add     esp, 0Ch
0x96804A: push    eax
0x96804B: lea     ecx, [esp+23Ch+var_154]
0x968052: call    sub_4121D0
0x968057: lea     ecx, [esp+238h+var_16C]
0x96805E: push    ecx
0x96805F: lea     edx, [esp+23Ch+var_90]
0x968066: push    edx
0x968067: lea     ecx, [esp+240h+var_154]
0x96806E: call    sub_498FE0
0x968073: mov     ecx, [eax]
0x968075: mov     edx, [eax+4]
0x968078: mov     eax, [eax+8]
0x96807B: mov     [esp+238h+var_16C], ecx
0x968082: lea     ecx, [esp+238h+var_1DC]
0x968086: push    ecx
0x968087: lea     ecx, [esp+23Ch+var_1A8]
0x96808E: mov     [esp+23Ch+var_168], edx
0x968095: mov     [esp+23Ch+var_164], eax
0x96809C: call    sub_47D9E0
0x9680A1: fstp    [esp+238h+var_1C4]
0x9680A5: lea     edx, [esp+238h+var_198]
0x9680AC: push    edx
0x9680AD: lea     ecx, [esp+23Ch+var_1A8]
0x9680B4: call    sub_47D9E0
0x9680B9: fstp    [esp+238h+var_1B8]
0x9680C0: lea     eax, [esp+238h+var_1A8]
0x9680C7: push    eax
0x9680C8: mov     ecx, eax
0x9680CA: call    sub_47D9E0
0x9680CF: fstp    [esp+238h+var_1AC]
0x9680D6: fld     dword ptr [esp+238h+var_210]
0x9680DA: lea     ecx, [esp+238h+var_16C]
0x9680E1: fstp    [esp+238h+var_1F0]
0x9680E5: push    ecx
0x9680E6: fld     dword ptr [esp+23Ch+var_210+4]
0x9680EA: lea     ecx, [esp+23Ch+var_1A8]
0x9680F1: fstp    [esp+23Ch+var_1E8]
0x9680F5: call    sub_47D9E0
0x9680FA: cmp     [esp+238h+var_218], 0
0x9680FF: fld     [esp+238h+var_1C4]
0x968103: fld     [esp+238h+var_1F0]
0x968107: fmul    st(1), st
0x968109: fxch    st(2)
0x96810B: fsubrp  st(1), st
0x96810D: fld     [esp+238h+var_1B8]
0x968114: fld     [esp+238h+var_1E8]
0x968118: fmul    st(1), st
0x96811A: fxch    st(2)
0x96811C: fsubrp  st(1), st
0x96811E: fstp    [esp+238h+var_224]
0x968122: jnz     short loc_968138
0x968124: fld     [esp+238h+var_224]
0x968128: fdiv    [esp+238h+var_1AC]
0x96812F: fstp    [esp+238h+var_208]
0x968133: jmp     loc_967CA1
0x968138: lea     edx, [esp+238h+var_F0]
0x96813F: fstp    st(1)
0x968141: push    edx
0x968142: fstp    st
0x968144: lea     ecx, [esp+23Ch+var_1A8]
0x96814B: call    sub_47D9E0
0x968150: fadd    [esp+238h+var_224]
0x968154: fdiv    [esp+238h+var_1AC]
0x96815B: jmp     loc_967C95
