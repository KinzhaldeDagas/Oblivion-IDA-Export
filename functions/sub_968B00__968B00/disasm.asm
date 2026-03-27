0x968B00: push    ebp
0x968B01: mov     ebp, esp
0x968B03: and     esp, 0FFFFFFF8h
0x968B06: sub     esp, 25Ch
0x968B0C: mov     eax, [ebp+arg_10]
0x968B0F: fld     dword ptr [eax]
0x968B11: push    ebx
0x968B12: mov     ebx, [ebp+arg_C]
0x968B15: push    esi
0x968B16: mov     esi, [ebp+arg_4]
0x968B19: push    edi
0x968B1A: mov     edi, [ebp+arg_8]
0x968B1D: fsub    dword ptr [edi]
0x968B1F: lea     edx, [esi+10h]
0x968B22: lea     ecx, [ebx+10h]
0x968B25: mov     [esp+268h+var_204], edx
0x968B29: fstp    [esp+268h+var_1D8]
0x968B30: mov     [esp+268h+var_1CC], ecx
0x968B37: fld     dword ptr [eax+4]
0x968B3A: fsub    dword ptr [edi+4]
0x968B3D: fstp    [esp+268h+var_1D4]
0x968B44: fld     dword ptr [eax+8]
0x968B47: mov     eax, [esp+268h+var_1D8]
0x968B4E: fsub    dword ptr [edi+8]
0x968B51: mov     [esp+268h+var_23C], eax
0x968B55: mov     eax, [esp+268h+var_1D4]
0x968B5C: mov     [esp+268h+var_238], eax
0x968B60: fstp    [esp+268h+var_1D0]
0x968B67: mov     eax, [esp+268h+var_1D0]
0x968B6E: fld     dword ptr [ebx+4]
0x968B71: lea     edi, [ebx+4]
0x968B74: fsub    dword ptr [esi+4]
0x968B77: mov     [esp+268h+var_234], eax
0x968B7B: lea     eax, [esi+4]
0x968B7E: mov     [esp+268h+var_25C], edi
0x968B82: fstp    dword ptr [esp+268h+var_200]
0x968B86: mov     [esp+268h+var_1C8], eax
0x968B8D: fld     dword ptr [edi+4]
0x968B90: fsub    dword ptr [eax+4]
0x968B93: fstp    dword ptr [esp+268h+var_200+4]
0x968B97: fld     dword ptr [edi+8]
0x968B9A: mov     edi, [ebp+arg_14]
0x968B9D: fsub    dword ptr [eax+8]
0x968BA0: xor     eax, eax
0x968BA2: mov     [esp+268h+var_220], eax
0x968BA6: mov     [esp+268h+var_258], eax
0x968BAA: fstp    [esp+268h+var_1F8]
0x968BAE: fld     [ebp+arg_0]
0x968BB1: fst     [esp+268h+var_188]
0x968BB8: fld     [esp+268h+var_1D8]
0x968BBF: fmul    st, st(1)
0x968BC1: fstp    dword ptr [esp+268h+var_230]
0x968BC5: fld     [esp+268h+var_1D4]
0x968BCC: fmul    st, st(1)
0x968BCE: fstp    dword ptr [esp+268h+var_230+4]
0x968BD2: fmul    [esp+268h+var_1D0]
0x968BD9: fstp    [esp+268h+var_228]
0x968BDD: fld     dword ptr [esp+268h+var_200]
0x968BE1: fst     [esp+268h+var_138]
0x968BE8: fld     dword ptr [esp+268h+var_230]
0x968BEC: fadd    st, st(1)
0x968BEE: fstp    [esp+268h+var_1D8]
0x968BF5: fld     dword ptr [esp+268h+var_200+4]
0x968BF9: fst     [esp+268h+var_128]
0x968C00: fld     dword ptr [esp+268h+var_230+4]
0x968C04: fadd    st, st(1)
0x968C06: fstp    [esp+268h+var_1D4]
0x968C0D: fld     [esp+268h+var_1F8]
0x968C11: fst     [esp+268h+var_108]
0x968C18: fld     [esp+268h+var_228]
0x968C1C: fadd    st, st(1)
0x968C1E: fstp    [esp+268h+var_1D0]
0x968C25: fldz
0x968C27: fstp    dword ptr [edi]
0x968C29: fld     dword ptr [edx+4]
0x968C2C: fld     dword ptr [edx]
0x968C2E: fld     dword ptr [edx+8]
0x968C31: fld     dword ptr [ecx+4]
0x968C34: fmul    st, st(3)
0x968C36: fld     dword ptr [ecx]
0x968C38: fmul    st, st(3)
0x968C3A: faddp   st(1), st
0x968C3C: fld     dword ptr [ecx+8]
0x968C3F: fmul    st, st(2)
0x968C41: faddp   st(1), st
0x968C43: fstp    [esp+268h+var_1BC]
0x968C4A: lea     edx, [ecx+0Ch]
0x968C4D: fld     dword ptr [edx+4]
0x968C50: lea     eax, [ecx+18h]
0x968C53: fmul    st, st(3)
0x968C55: mov     [esp+268h+var_1C4], edx
0x968C5C: fld     dword ptr [edx]
0x968C5E: mov     [esp+268h+var_1C0], eax
0x968C65: fmul    st, st(3)
0x968C67: faddp   st(1), st
0x968C69: fld     dword ptr [edx+8]
0x968C6C: fmul    st, st(2)
0x968C6E: faddp   st(1), st
0x968C70: fstp    [esp+268h+var_1B8]
0x968C77: fld     dword ptr [eax+4]
0x968C7A: fmul    st, st(3)
0x968C7C: fld     dword ptr [eax]
0x968C7E: fmul    st, st(3)
0x968C80: faddp   st(1), st
0x968C82: fld     dword ptr [eax+8]
0x968C85: fmul    st, st(2)
0x968C87: faddp   st(1), st
0x968C89: fstp    [esp+268h+var_1B4]
0x968C90: fld     st(2)
0x968C92: fmul    st, st(5)
0x968C94: fld     st(2)
0x968C96: fmul    st, st(7)
0x968C98: faddp   st(1), st
0x968C9A: fld     st(1)
0x968C9C: fmul    st, st(5)
0x968C9E: faddp   st(1), st
0x968CA0: fstp    dword ptr [esp+268h+var_200]
0x968CA4: fld     [esp+268h+var_1D4]
0x968CAB: fld     [esp+268h+var_1D8]
0x968CB2: fstp    [esp+268h+var_168]
0x968CB9: fld     [esp+268h+var_1D0]
0x968CC0: fstp    [esp+268h+var_178]
0x968CC7: fxch    st(2)
0x968CC9: fmul    [esp+268h+var_168]
0x968CD0: fxch    st(3)
0x968CD2: fmul    st, st(2)
0x968CD4: faddp   st(3), st
0x968CD6: fmul    [esp+268h+var_178]
0x968CDD: faddp   st(2), st
0x968CDF: fxch    st(1)
0x968CE1: fstp    [esp+268h+var_1D8]
0x968CE8: fld     [esp+268h+var_1BC]
0x968CEF: fabs
0x968CF1: fstp    [esp+268h+var_21C]
0x968CF5: fld     [esp+268h+var_21C]
0x968CF9: fstp    [esp+268h+var_84]
0x968D00: fld     [esp+268h+var_1B8]
0x968D07: fabs
0x968D09: fstp    [esp+268h+var_21C]
0x968D0D: fld     [esp+268h+var_21C]
0x968D11: fstp    [esp+268h+var_80]
0x968D18: fld     [esp+268h+var_1B4]
0x968D1F: fabs
0x968D21: fstp    [esp+268h+var_21C]
0x968D25: fld     [esp+268h+var_21C]
0x968D29: fstp    [esp+268h+var_7C]
0x968D30: fld     [esp+268h+var_84]
0x968D37: fst     [esp+268h+var_40]
0x968D3E: fld     [esp+268h+var_7C]
0x968D45: fst     [esp+268h+var_230]
0x968D49: fld     dword ptr [ebx+38h]
0x968D4C: fmul    [esp+268h+var_80]
0x968D53: fld     dword ptr [ebx+34h]
0x968D56: fmulp   st(3), st
0x968D58: faddp   st(2), st
0x968D5A: fmul    dword ptr [ebx+3Ch]
0x968D5D: faddp   st(1), st
0x968D5F: fstp    dword ptr [esp+268h+var_218]
0x968D63: fld     dword ptr [esp+268h+var_218]
0x968D67: fadd    dword ptr [esi+34h]
0x968D6A: fstp    [esp+268h+var_254]
0x968D6E: fld     dword ptr [esp+268h+var_200]
0x968D72: fst     [esp+268h+var_B8]
0x968D79: fld     [esp+268h+var_254]
0x968D7D: fld     st
0x968D7F: fcom    st(2)
0x968D81: fnstsw  ax
0x968D83: test    ah, 5
0x968D86: jp      short loc_968DE8
0x968D88: fstp    st(1)
0x968D8A: fld     [esp+268h+var_1D8]
0x968D91: fcom    st(1)
0x968D93: fnstsw  ax
0x968D95: test    ah, 41h
0x968D98: jnz     short loc_968DB1
0x968D9A: fstp    st(1)
0x968D9C: xor     al, al
0x968D9E: fstp    st(1)
0x968DA0: fstp    st
0x968DA2: fstp    st(3)
0x968DA4: fstp    st(1)
0x968DA6: fstp    st
0x968DA8: fstp    st
0x968DAA: pop     edi
0x968DAB: pop     esi
0x968DAC: pop     ebx
0x968DAD: mov     esp, ebp
0x968DAF: pop     ebp
0x968DB0: retn
0x968DB1: fxch    st(1)
0x968DB3: fsub    st, st(2)
0x968DB5: fmul    [esp+268h+var_188]
0x968DBC: fxch    st(1)
0x968DBE: fsubrp  st(2), st
0x968DC0: fdivrp  st(1), st
0x968DC2: fstp    [esp+268h+var_21C]
0x968DC6: fldz
0x968DC8: fld     [esp+268h+var_21C]
0x968DCC: fcom    st(1)
0x968DCE: fnstsw  ax
0x968DD0: fstp    st(1)
0x968DD2: test    ah, 41h
0x968DD5: jnz     short loc_968E45
0x968DD7: mov     eax, 1
0x968DDC: fstp    dword ptr [edi]
0x968DDE: mov     [esp+268h+var_220], eax
0x968DE2: mov     [esp+268h+var_258], eax
0x968DE6: jmp     short loc_968E47
0x968DE8: fxch    st(1)
0x968DEA: fchs
0x968DEC: fcom    st(2)
0x968DEE: fnstsw  ax
0x968DF0: test    ah, 41h
0x968DF3: jnz     short loc_968E41
0x968DF5: fld     [esp+268h+var_1D8]
0x968DFC: fcom    st(1)
0x968DFE: fnstsw  ax
0x968E00: fstp    st(1)
0x968E02: test    ah, 5
0x968E05: jnp     short loc_968D9A
0x968E07: fxch    st(1)
0x968E09: fadd    st, st(2)
0x968E0B: fld     [ebp+arg_0]
0x968E0E: fchs
0x968E10: fmulp   st(1), st
0x968E12: fxch    st(1)
0x968E14: fsubrp  st(2), st
0x968E16: fdivrp  st(1), st
0x968E18: fstp    [esp+268h+var_21C]
0x968E1C: fldz
0x968E1E: fld     [esp+268h+var_21C]
0x968E22: fcom    st(1)
0x968E24: fnstsw  ax
0x968E26: fstp    st(1)
0x968E28: test    ah, 41h
0x968E2B: jnz     short loc_968E45
0x968E2D: fstp    dword ptr [edi]
0x968E2F: mov     [esp+268h+var_220], 1
0x968E37: mov     [esp+268h+var_258], 0FFFFFFFFh
0x968E3F: jmp     short loc_968E47
0x968E41: fstp    st(1)
0x968E43: fstp    st(1)
0x968E45: fstp    st
0x968E47: mov     eax, [esp+268h+var_204]
0x968E4B: fld     dword ptr [eax+10h]
0x968E4E: add     eax, 0Ch
0x968E51: fmul    dword ptr [ecx+4]
0x968E54: mov     [esp+268h+var_1DC], eax
0x968E5B: fld     dword ptr [ecx]
0x968E5D: fmul    dword ptr [eax]
0x968E5F: faddp   st(1), st
0x968E61: fld     dword ptr [eax+8]
0x968E64: fmul    dword ptr [ecx+8]
0x968E67: faddp   st(1), st
0x968E69: fstp    [esp+268h+var_1B0]
0x968E70: fld     dword ptr [edx+4]
0x968E73: fmul    dword ptr [eax+4]
0x968E76: fld     dword ptr [edx]
0x968E78: fmul    dword ptr [eax]
0x968E7A: faddp   st(1), st
0x968E7C: fld     dword ptr [edx+8]
0x968E7F: mov     edx, [esp+268h+var_1C0]
0x968E86: fmul    dword ptr [eax+8]
0x968E89: faddp   st(1), st
0x968E8B: fstp    [esp+268h+var_1AC]
0x968E92: fld     dword ptr [edx+4]
0x968E95: fmul    dword ptr [eax+4]
0x968E98: fld     dword ptr [edx]
0x968E9A: fmul    dword ptr [eax]
0x968E9C: faddp   st(1), st
0x968E9E: fld     dword ptr [edx+8]
0x968EA1: fmul    dword ptr [eax+8]
0x968EA4: faddp   st(1), st
0x968EA6: fstp    [esp+268h+var_1A8]
0x968EAD: fld     dword ptr [eax+4]
0x968EB0: fmul    st, st(3)
0x968EB2: fld     dword ptr [eax]
0x968EB4: fmul    st, st(5)
0x968EB6: faddp   st(1), st
0x968EB8: fld     dword ptr [eax+8]
0x968EBB: fmul    st, st(3)
0x968EBD: faddp   st(1), st
0x968EBF: fstp    dword ptr [esp+268h+var_200+4]
0x968EC3: fld     dword ptr [eax+4]
0x968EC6: fmul    st, st(1)
0x968EC8: fld     dword ptr [eax]
0x968ECA: fmul    [esp+268h+var_168]
0x968ED1: faddp   st(1), st
0x968ED3: fld     dword ptr [eax+8]
0x968ED6: fmul    [esp+268h+var_178]
0x968EDD: faddp   st(1), st
0x968EDF: fstp    [esp+268h+var_1D4]
0x968EE6: fld     [esp+268h+var_1B0]
0x968EED: fabs
0x968EEF: fstp    [esp+268h+var_21C]
0x968EF3: fld     [esp+268h+var_21C]
0x968EF7: fstp    [esp+268h+var_78]
0x968EFE: fld     [esp+268h+var_1AC]
0x968F05: fabs
0x968F07: fstp    [esp+268h+var_21C]
0x968F0B: fld     [esp+268h+var_21C]
0x968F0F: fstp    [esp+268h+var_74]
0x968F16: fld     [esp+268h+var_1A8]
0x968F1D: fabs
0x968F1F: fstp    [esp+268h+var_21C]
0x968F23: fld     [esp+268h+var_21C]
0x968F27: fstp    [esp+268h+var_70]
0x968F2E: fld     [esp+268h+var_78]
0x968F35: fst     [esp+268h+var_98]
0x968F3C: fld     [esp+268h+var_70]
0x968F43: fst     [esp+268h+var_50]
0x968F4A: fld     dword ptr [ebx+38h]
0x968F4D: fmul    [esp+268h+var_74]
0x968F54: fld     dword ptr [ebx+34h]
0x968F57: fmulp   st(3), st
0x968F59: faddp   st(2), st
0x968F5B: fmul    dword ptr [ebx+3Ch]
0x968F5E: faddp   st(1), st
0x968F60: fstp    [esp+268h+var_21C]
0x968F64: fld     [esp+268h+var_21C]
0x968F68: fadd    dword ptr [esi+38h]
0x968F6B: fstp    [esp+268h+var_254]
0x968F6F: fld     dword ptr [esp+268h+var_200+4]
0x968F73: fst     [esp+268h+var_C8]
0x968F7A: fld     [esp+268h+var_254]
0x968F7E: fld     st
0x968F80: fcom    st(2)
0x968F82: fnstsw  ax
0x968F84: test    ah, 5
0x968F87: jp      short loc_968FEA
0x968F89: fstp    st(1)
0x968F8B: fld     [esp+268h+var_1D4]
0x968F92: fcom    st(1)
0x968F94: fnstsw  ax
0x968F96: test    ah, 41h
0x968F99: jnz     short loc_968FB2
0x968F9B: fstp    st(2)
0x968F9D: xor     al, al
0x968F9F: fstp    st
0x968FA1: fstp    st
0x968FA3: fstp    st(3)
0x968FA5: fstp    st(1)
0x968FA7: fstp    st
0x968FA9: fstp    st
0x968FAB: pop     edi
0x968FAC: pop     esi
0x968FAD: pop     ebx
0x968FAE: mov     esp, ebp
0x968FB0: pop     ebp
0x968FB1: retn
0x968FB2: fxch    st(1)
0x968FB4: fsub    st, st(2)
0x968FB6: fmul    [esp+268h+var_188]
0x968FBD: fxch    st(1)
0x968FBF: fsubrp  st(2), st
0x968FC1: fdivrp  st(1), st
0x968FC3: fstp    [esp+268h+var_21C]
0x968FC7: fld     [esp+268h+var_21C]
0x968FCB: fld     dword ptr [edi]
0x968FCD: fcomp   st(1)
0x968FCF: fnstsw  ax
0x968FD1: test    ah, 5
0x968FD4: jp      short loc_969043
0x968FD6: fstp    dword ptr [edi]
0x968FD8: mov     [esp+268h+var_220], 2
0x968FE0: mov     [esp+268h+var_258], 1
0x968FE8: jmp     short loc_969045
0x968FEA: fxch    st(1)
0x968FEC: fchs
0x968FEE: fcom    st(2)
0x968FF0: fnstsw  ax
0x968FF2: test    ah, 41h
0x968FF5: jnz     short loc_96903F
0x968FF7: fld     [esp+268h+var_1D4]
0x968FFE: fcom    st(1)
0x969000: fnstsw  ax
0x969002: fstp    st(1)
0x969004: test    ah, 5
0x969007: jnp     short loc_968F9B
0x969009: fld     st(2)
0x96900B: faddp   st(2), st
0x96900D: fld     [ebp+arg_0]
0x969010: fchs
0x969012: fmulp   st(2), st
0x969014: fsubrp  st(2), st
0x969016: fdivrp  st(1), st
0x969018: fstp    [esp+268h+var_21C]
0x96901C: fld     [esp+268h+var_21C]
0x969020: fld     dword ptr [edi]
0x969022: fcomp   st(1)
0x969024: fnstsw  ax
0x969026: test    ah, 5
0x969029: jp      short loc_969043
0x96902B: fstp    dword ptr [edi]
0x96902D: mov     [esp+268h+var_220], 2
0x969035: mov     [esp+268h+var_258], 0FFFFFFFFh
0x96903D: jmp     short loc_969045
0x96903F: fstp    st(2)
0x969041: fstp    st
0x969043: fstp    st
0x969045: mov     eax, [esp+268h+var_204]
0x969049: fld     dword ptr [eax+1Ch]
0x96904C: add     eax, 18h
0x96904F: fmul    dword ptr [ecx+4]
0x969052: mov     edx, [esp+268h+var_1C4]
0x969059: fld     dword ptr [eax]
0x96905B: mov     [esp+268h+var_21C], eax
0x96905F: fmul    dword ptr [ecx]
0x969061: faddp   st(1), st
0x969063: fld     dword ptr [eax+8]
0x969066: fmul    dword ptr [ecx+8]
0x969069: faddp   st(1), st
0x96906B: fstp    [esp+268h+var_1A4]
0x969072: fld     dword ptr [edx+4]
0x969075: fmul    dword ptr [eax+4]
0x969078: fld     dword ptr [edx]
0x96907A: fmul    dword ptr [eax]
0x96907C: faddp   st(1), st
0x96907E: fld     dword ptr [edx+8]
0x969081: mov     edx, [esp+268h+var_1C0]
0x969088: fmul    dword ptr [eax+8]
0x96908B: faddp   st(1), st
0x96908D: fstp    [esp+268h+var_1A0]
0x969094: fld     dword ptr [edx+4]
0x969097: fmul    dword ptr [eax+4]
0x96909A: fld     dword ptr [edx]
0x96909C: fmul    dword ptr [eax]
0x96909E: faddp   st(1), st
0x9690A0: fld     dword ptr [edx+8]
0x9690A3: fmul    dword ptr [eax+8]
0x9690A6: faddp   st(1), st
0x9690A8: fstp    [esp+268h+var_19C]
0x9690AF: fld     dword ptr [eax+4]
0x9690B2: fmul    st, st(3)
0x9690B4: fld     dword ptr [eax]
0x9690B6: fmul    st, st(5)
0x9690B8: faddp   st(1), st
0x9690BA: fld     dword ptr [eax+8]
0x9690BD: fmul    st, st(3)
0x9690BF: faddp   st(1), st
0x9690C1: fstp    [esp+268h+var_1F8]
0x9690C5: fld     dword ptr [eax+4]
0x9690C8: fmul    st, st(1)
0x9690CA: fld     dword ptr [eax]
0x9690CC: fmul    [esp+268h+var_168]
0x9690D3: faddp   st(1), st
0x9690D5: fld     dword ptr [eax+8]
0x9690D8: fmul    [esp+268h+var_178]
0x9690DF: faddp   st(1), st
0x9690E1: fstp    [esp+268h+var_1D0]
0x9690E8: fld     [esp+268h+var_1A4]
0x9690EF: fabs
0x9690F1: fstp    [esp+268h+var_250]
0x9690F5: fld     [esp+268h+var_250]
0x9690F9: fstp    [esp+268h+var_6C]
0x969100: fld     [esp+268h+var_1A0]
0x969107: fabs
0x969109: fstp    [esp+268h+var_250]
0x96910D: fld     [esp+268h+var_250]
0x969111: fstp    [esp+268h+var_68]
0x969118: fld     [esp+268h+var_19C]
0x96911F: fabs
0x969121: fstp    [esp+268h+var_250]
0x969125: fld     [esp+268h+var_250]
0x969129: fstp    [esp+268h+var_64]
0x969130: fld     [esp+268h+var_6C]
0x969137: fst     [esp+268h+var_A8]
0x96913E: fld     [esp+268h+var_64]
0x969145: fst     [esp+268h+var_60]
0x96914C: fld     dword ptr [ebx+38h]
0x96914F: fmul    [esp+268h+var_68]
0x969156: fld     dword ptr [ebx+34h]
0x969159: fmulp   st(3), st
0x96915B: faddp   st(2), st
0x96915D: fmul    dword ptr [ebx+3Ch]
0x969160: faddp   st(1), st
0x969162: fstp    [esp+268h+var_250]
0x969166: fld     [esp+268h+var_250]
0x96916A: fadd    dword ptr [esi+3Ch]
0x96916D: fstp    [esp+268h+var_254]
0x969171: fld     [esp+268h+var_1F8]
0x969175: fst     [esp+268h+var_D8]
0x96917C: fld     [esp+268h+var_254]
0x969180: fld     st
0x969182: fcom    st(2)
0x969184: fnstsw  ax
0x969186: test    ah, 5
0x969189: jp      short loc_9691D9
0x96918B: fstp    st(1)
0x96918D: fld     [esp+268h+var_1D0]
0x969194: fcom    st(1)
0x969196: fnstsw  ax
0x969198: test    ah, 41h
0x96919B: jz      loc_968F9B
0x9691A1: fxch    st(1)
0x9691A3: fsub    st, st(2)
0x9691A5: fmul    [esp+268h+var_188]
0x9691AC: fxch    st(1)
0x9691AE: fsubrp  st(2), st
0x9691B0: fdivrp  st(1), st
0x9691B2: fstp    [esp+268h+var_250]
0x9691B6: fld     [esp+268h+var_250]
0x9691BA: fld     dword ptr [edi]
0x9691BC: fcomp   st(1)
0x9691BE: fnstsw  ax
0x9691C0: test    ah, 5
0x9691C3: jp      short loc_969238
0x9691C5: fstp    dword ptr [edi]
0x9691C7: mov     [esp+268h+var_220], 3
0x9691CF: mov     [esp+268h+var_258], 1
0x9691D7: jmp     short loc_96923A
0x9691D9: fxch    st(1)
0x9691DB: fchs
0x9691DD: fcom    st(2)
0x9691DF: fnstsw  ax
0x9691E1: test    ah, 41h
0x9691E4: jnz     short loc_969234
0x9691E6: fld     [esp+268h+var_1D0]
0x9691ED: fcom    st(1)
0x9691EF: fnstsw  ax
0x9691F1: fstp    st(1)
0x9691F3: test    ah, 5
0x9691F6: jnp     loc_968F9B
0x9691FC: fxch    st(1)
0x9691FE: fadd    st, st(2)
0x969200: fld     [ebp+arg_0]
0x969203: fchs
0x969205: fmulp   st(1), st
0x969207: fxch    st(1)
0x969209: fsubrp  st(2), st
0x96920B: fdivrp  st(1), st
0x96920D: fstp    [esp+268h+var_250]
0x969211: fld     [esp+268h+var_250]
0x969215: fld     dword ptr [edi]
0x969217: fcomp   st(1)
0x969219: fnstsw  ax
0x96921B: test    ah, 5
0x96921E: jp      short loc_969238
0x969220: fstp    dword ptr [edi]
0x969222: mov     [esp+268h+var_220], 3
0x96922A: mov     [esp+268h+var_258], 0FFFFFFFFh
0x969232: jmp     short loc_96923A
0x969234: fstp    st(2)
0x969236: fstp    st
0x969238: fstp    st
0x96923A: fld     dword ptr [ecx+4]
0x96923D: fld     dword ptr [ecx]
0x96923F: fst     [esp+268h+var_200]
0x969243: fld     dword ptr [ecx+8]
0x969246: fxch    st(1)
0x969248: fmul    st, st(6)
0x96924A: fld     st(5)
0x96924C: fmul    st, st(3)
0x96924E: faddp   st(1), st
0x969250: fld     st(4)
0x969252: fmul    st, st(2)
0x969254: faddp   st(1), st
0x969256: fstp    dword ptr [esp+268h+var_158]
0x96925D: fld     st(2)
0x96925F: fmulp   st(2), st
0x969261: fld     [esp+268h+var_200]
0x969265: fmul    [esp+268h+var_168]
0x96926C: faddp   st(2), st
0x96926E: fmul    [esp+268h+var_178]
0x969275: faddp   st(1), st
0x969277: fstp    dword ptr [esp+268h+var_198]
0x96927E: fld     dword ptr [esi+34h]
0x969281: fmul    [esp+268h+var_40]
0x969288: fld     dword ptr [esi+38h]
0x96928B: fmul    [esp+268h+var_98]
0x969292: faddp   st(1), st
0x969294: fld     dword ptr [esi+3Ch]
0x969297: fmul    [esp+268h+var_A8]
0x96929E: faddp   st(1), st
0x9692A0: fstp    dword ptr [esp+268h+var_200]
0x9692A4: fld     dword ptr [esp+268h+var_200]
0x9692A8: fadd    dword ptr [ebx+34h]
0x9692AB: fstp    [esp+268h+var_254]
0x9692AF: fld     dword ptr [esp+268h+var_158]
0x9692B6: fld     [esp+268h+var_254]
0x9692BA: fld     st
0x9692BC: fcom    st(2)
0x9692BE: fnstsw  ax
0x9692C0: test    ah, 5
0x9692C3: jp      short loc_969313
0x9692C5: fstp    st(1)
0x9692C7: fld     dword ptr [esp+268h+var_198]
0x9692CE: fcom    st(1)
0x9692D0: fnstsw  ax
0x9692D2: test    ah, 41h
0x9692D5: jz      loc_968F9B
0x9692DB: fxch    st(1)
0x9692DD: fsub    st, st(2)
0x9692DF: fmul    [esp+268h+var_188]
0x9692E6: fxch    st(1)
0x9692E8: fsubrp  st(2), st
0x9692EA: fdivrp  st(1), st
0x9692EC: fstp    [esp+268h+var_250]
0x9692F0: fld     [esp+268h+var_250]
0x9692F4: fld     dword ptr [edi]
0x9692F6: fcomp   st(1)
0x9692F8: fnstsw  ax
0x9692FA: test    ah, 5
0x9692FD: jp      short loc_969372
0x9692FF: fstp    dword ptr [edi]
0x969301: mov     [esp+268h+var_220], 4
0x969309: mov     [esp+268h+var_258], 1
0x969311: jmp     short loc_969374
0x969313: fxch    st(1)
0x969315: fchs
0x969317: fcom    st(2)
0x969319: fnstsw  ax
0x96931B: test    ah, 41h
0x96931E: jnz     short loc_96936E
0x969320: fld     dword ptr [esp+268h+var_198]
0x969327: fcom    st(1)
0x969329: fnstsw  ax
0x96932B: fstp    st(1)
0x96932D: test    ah, 5
0x969330: jnp     loc_968F9B
0x969336: fxch    st(1)
0x969338: fadd    st, st(2)
0x96933A: fld     [ebp+arg_0]
0x96933D: fchs
0x96933F: fmulp   st(1), st
0x969341: fxch    st(1)
0x969343: fsubrp  st(2), st
0x969345: fdivrp  st(1), st
0x969347: fstp    [esp+268h+var_250]
0x96934B: fld     [esp+268h+var_250]
0x96934F: fld     dword ptr [edi]
0x969351: fcomp   st(1)
0x969353: fnstsw  ax
0x969355: test    ah, 5
0x969358: jp      short loc_969372
0x96935A: fstp    dword ptr [edi]
0x96935C: mov     [esp+268h+var_220], 4
0x969364: mov     [esp+268h+var_258], 0FFFFFFFFh
0x96936C: jmp     short loc_969374
0x96936E: fstp    st(2)
0x969370: fstp    st
0x969372: fstp    st
0x969374: mov     eax, [esp+268h+var_1C4]
0x96937B: fld     dword ptr [eax+4]
0x96937E: fmul    st, st(3)
0x969380: fld     dword ptr [eax]
0x969382: fmul    st, st(5)
0x969384: faddp   st(1), st
0x969386: fld     dword ptr [eax+8]
0x969389: fmul    st, st(3)
0x96938B: faddp   st(1), st
0x96938D: fstp    dword ptr [esp+268h+var_158+4]
0x969394: fld     dword ptr [eax+4]
0x969397: fmul    st, st(1)
0x969399: fld     dword ptr [eax]
0x96939B: fmul    [esp+268h+var_168]
0x9693A2: faddp   st(1), st
0x9693A4: fld     dword ptr [eax+8]
0x9693A7: fmul    [esp+268h+var_178]
0x9693AE: faddp   st(1), st
0x9693B0: fstp    dword ptr [esp+268h+var_198+4]
0x9693B7: fld     [esp+268h+var_74]
0x9693BE: fst     [esp+268h+var_218]
0x9693C2: fld     [esp+268h+var_80]
0x9693C9: fst     [esp+268h+var_1F0]
0x9693CD: fld     [esp+268h+var_68]
0x9693D4: fst     [esp+268h+var_200]
0x9693D8: fld     dword ptr [esi+34h]
0x9693DB: fmulp   st(2), st
0x9693DD: fld     dword ptr [esi+38h]
0x9693E0: fmulp   st(3), st
0x9693E2: fxch    st(1)
0x9693E4: faddp   st(2), st
0x9693E6: fmul    dword ptr [esi+3Ch]
0x9693E9: faddp   st(1), st
0x9693EB: fstp    [esp+268h+var_250]
0x9693EF: fld     [esp+268h+var_250]
0x9693F3: fadd    dword ptr [ebx+38h]
0x9693F6: fstp    [esp+268h+var_254]
0x9693FA: fld     dword ptr [esp+268h+var_158+4]
0x969401: fld     [esp+268h+var_254]
0x969405: fld     st
0x969407: fcom    st(2)
0x969409: fnstsw  ax
0x96940B: test    ah, 5
0x96940E: jp      short loc_969461
0x969410: fstp    st(1)
0x969412: fld     dword ptr [esp+268h+var_198+4]
0x969419: fcom    st(1)
0x96941B: fnstsw  ax
0x96941D: test    ah, 41h
0x969420: jz      loc_968F9B
0x969426: fxch    st(1)
0x969428: or      ecx, 0FFFFFFFFh
0x96942B: fsub    st, st(2)
0x96942D: fmul    [esp+268h+var_188]
0x969434: fxch    st(1)
0x969436: fsubrp  st(2), st
0x969438: fdivrp  st(1), st
0x96943A: fstp    [esp+268h+var_250]
0x96943E: fld     [esp+268h+var_250]
0x969442: fld     dword ptr [edi]
0x969444: fcomp   st(1)
0x969446: fnstsw  ax
0x969448: test    ah, 5
0x96944B: jp      short loc_9694C2
0x96944D: fstp    dword ptr [edi]
0x96944F: mov     [esp+268h+var_220], 5
0x969457: mov     [esp+268h+var_258], 1
0x96945F: jmp     short loc_9694C4
0x969461: fxch    st(1)
0x969463: fchs
0x969465: fcom    st(2)
0x969467: fnstsw  ax
0x969469: test    ah, 41h
0x96946C: jnz     short loc_9694BB
0x96946E: fld     dword ptr [esp+268h+var_198+4]
0x969475: fcom    st(1)
0x969477: fnstsw  ax
0x969479: fstp    st(1)
0x96947B: test    ah, 5
0x96947E: jnp     loc_968F9B
0x969484: fxch    st(1)
0x969486: or      ecx, 0FFFFFFFFh
0x969489: fadd    st, st(2)
0x96948B: fld     [ebp+arg_0]
0x96948E: fchs
0x969490: fmulp   st(1), st
0x969492: fxch    st(1)
0x969494: fsubrp  st(2), st
0x969496: fdivrp  st(1), st
0x969498: fstp    [esp+268h+var_250]
0x96949C: fld     [esp+268h+var_250]
0x9694A0: fld     dword ptr [edi]
0x9694A2: fcomp   st(1)
0x9694A4: fnstsw  ax
0x9694A6: test    ah, 5
0x9694A9: jp      short loc_9694C2
0x9694AB: fstp    dword ptr [edi]
0x9694AD: mov     [esp+268h+var_220], 5
0x9694B5: mov     [esp+268h+var_258], ecx
0x9694B9: jmp     short loc_9694C4
0x9694BB: fstp    st(2)
0x9694BD: or      ecx, 0FFFFFFFFh
0x9694C0: fstp    st
0x9694C2: fstp    st
0x9694C4: fld     dword ptr [edx+4]
0x9694C7: fmulp   st(3), st
0x9694C9: fld     dword ptr [edx]
0x9694CB: fmulp   st(4), st
0x9694CD: fxch    st(2)
0x9694CF: faddp   st(3), st
0x9694D1: fmul    dword ptr [edx+8]
0x9694D4: faddp   st(2), st
0x9694D6: fxch    st(1)
0x9694D8: fstp    [esp+268h+var_150]
0x9694DF: fmul    dword ptr [edx+4]
0x9694E2: fld     dword ptr [edx]
0x9694E4: fmul    [esp+268h+var_168]
0x9694EB: faddp   st(1), st
0x9694ED: fld     dword ptr [edx+8]
0x9694F0: fmul    [esp+268h+var_178]
0x9694F7: faddp   st(1), st
0x9694F9: fstp    [esp+268h+var_190]
0x969500: fld     dword ptr [esi+38h]
0x969503: fmul    [esp+268h+var_50]
0x96950A: fld     dword ptr [esi+34h]
0x96950D: fld     [esp+268h+var_230]
0x969511: fmul    st(1), st
0x969513: fxch    st(2)
0x969515: faddp   st(1), st
0x969517: fld     dword ptr [esi+3Ch]
0x96951A: fmul    [esp+268h+var_60]
0x969521: faddp   st(1), st
0x969523: fstp    [esp+268h+var_250]
0x969527: fld     [esp+268h+var_250]
0x96952B: fadd    dword ptr [ebx+3Ch]
0x96952E: fstp    [esp+268h+var_254]
0x969532: fld     [esp+268h+var_150]
0x969539: fld     [esp+268h+var_254]
0x96953D: fld     st
0x96953F: fcom    st(2)
0x969541: fnstsw  ax
0x969543: test    ah, 5
0x969546: jp      short loc_9695A4
0x969548: fstp    st(1)
0x96954A: fld     [esp+268h+var_190]
0x969551: fcom    st(1)
0x969553: fnstsw  ax
0x969555: test    ah, 41h
0x969558: jnz     short loc_96956B
0x96955A: fstp    st(2)
0x96955C: xor     al, al
0x96955E: fstp    st
0x969560: fstp    st
0x969562: fstp    st
0x969564: pop     edi
0x969565: pop     esi
0x969566: pop     ebx
0x969567: mov     esp, ebp
0x969569: pop     ebp
0x96956A: retn
0x96956B: fxch    st(1)
0x96956D: fsub    st, st(2)
0x96956F: fmul    [esp+268h+var_188]
0x969576: fxch    st(1)
0x969578: fsubrp  st(2), st
0x96957A: fdivrp  st(1), st
0x96957C: fstp    [esp+268h+var_250]
0x969580: fld     [esp+268h+var_250]
0x969584: fld     dword ptr [edi]
0x969586: fcomp   st(1)
0x969588: fnstsw  ax
0x96958A: test    ah, 5
0x96958D: jp      short loc_9695FB
0x96958F: mov     edx, 1
0x969594: fstp    dword ptr [edi]
0x969596: mov     [esp+268h+var_220], 6
0x96959E: mov     [esp+268h+var_258], edx
0x9695A2: jmp     short loc_969602
0x9695A4: fxch    st(1)
0x9695A6: fchs
0x9695A8: fcom    st(2)
0x9695AA: fnstsw  ax
0x9695AC: test    ah, 41h
0x9695AF: jnz     short loc_9695F7
0x9695B1: fld     [esp+268h+var_190]
0x9695B8: fcom    st(1)
0x9695BA: fnstsw  ax
0x9695BC: fstp    st(1)
0x9695BE: test    ah, 5
0x9695C1: jnp     short loc_96955A
0x9695C3: fxch    st(1)
0x9695C5: fadd    st, st(2)
0x9695C7: fld     [ebp+arg_0]
0x9695CA: fchs
0x9695CC: fmulp   st(1), st
0x9695CE: fxch    st(1)
0x9695D0: fsubrp  st(2), st
0x9695D2: fdivrp  st(1), st
0x9695D4: fstp    [esp+268h+var_250]
0x9695D8: fld     [esp+268h+var_250]
0x9695DC: fld     dword ptr [edi]
0x9695DE: fcomp   st(1)
0x9695E0: fnstsw  ax
0x9695E2: test    ah, 5
0x9695E5: jp      short loc_9695FB
0x9695E7: fstp    dword ptr [edi]
0x9695E9: mov     [esp+268h+var_220], 6
0x9695F1: mov     [esp+268h+var_258], ecx
0x9695F5: jmp     short loc_9695FD
0x9695F7: fstp    st(2)
0x9695F9: fstp    st
0x9695FB: fstp    st
0x9695FD: mov     edx, 1
0x969602: fld     [esp+268h+var_1B0]
0x969609: fst     [esp+268h+var_148]
0x969610: fld     [esp+268h+var_1A4]
0x969617: fst     [esp+268h+var_E8]
0x96961E: fld     [esp+268h+var_D8]
0x969625: fmul    st(2), st
0x969627: fld     [esp+268h+var_C8]
0x96962E: fmulp   st(2), st
0x969630: fxch    st(2)
0x969632: fsubrp  st(1), st
0x969634: fstp    [esp+268h+var_250]
0x969638: fld     dword ptr [ebx+3Ch]
0x96963B: fmul    [esp+268h+var_1F0]
0x96963F: fld     dword ptr [ebx+38h]
0x969642: fmulp   st(3), st
0x969644: faddp   st(2), st
0x969646: fxch    st(1)
0x969648: fstp    [esp+268h+var_254]
0x96964C: fld     [esp+268h+var_254]
0x969650: fld     dword ptr [esi+3Ch]
0x969653: fmul    [esp+268h+var_98]
0x96965A: fld     dword ptr [esi+38h]
0x96965D: fmul    [esp+268h+var_A8]
0x969664: faddp   st(1), st
0x969666: fstp    [esp+268h+var_254]
0x96966A: fadd    [esp+268h+var_254]
0x96966E: fstp    [esp+268h+var_254]
0x969672: fld     [esp+268h+var_250]
0x969676: fld     [esp+268h+var_254]
0x96967A: fld     st
0x96967C: fcom    st(2)
0x96967E: fnstsw  ax
0x969680: test    ah, 5
0x969683: jp      loc_96970E
0x969689: fstp    st(1)
0x96968B: fld     [esp+268h+var_1D0]
0x969692: fld     [esp+268h+var_148]
0x969699: fmul    st, st(1)
0x96969B: fld     [esp+268h+var_1D4]
0x9696A2: fmul    [esp+268h+var_E8]
0x9696A9: fsubp   st(1), st
0x9696AB: fstp    [esp+268h+var_250]
0x9696AF: fld     [esp+268h+var_250]
0x9696B3: fcom    st(2)
0x9696B5: fnstsw  ax
0x9696B7: test    ah, 41h
0x9696BA: jnz     short loc_9696CF
0x9696BC: fstp    st(3)
0x9696BE: xor     al, al
0x9696C0: fstp    st(1)
0x9696C2: fstp    st(1)
0x9696C4: fstp    st(1)
0x9696C6: fstp    st
0x9696C8: pop     edi
0x9696C9: pop     esi
0x9696CA: pop     ebx
0x9696CB: mov     esp, ebp
0x9696CD: pop     ebp
0x9696CE: retn
0x9696CF: fxch    st(2)
0x9696D1: fsub    st, st(3)
0x9696D3: fmul    [esp+268h+var_188]
0x9696DA: fxch    st(2)
0x9696DC: fsubrp  st(3), st
0x9696DE: fxch    st(1)
0x9696E0: fdivrp  st(2), st
0x9696E2: fxch    st(1)
0x9696E4: fstp    [esp+268h+var_250]
0x9696E8: fld     [esp+268h+var_250]
0x9696EC: fld     dword ptr [edi]
0x9696EE: fcomp   st(1)
0x9696F0: fnstsw  ax
0x9696F2: test    ah, 5
0x9696F5: jp      loc_9697A6
0x9696FB: fstp    dword ptr [edi]
0x9696FD: mov     [esp+268h+var_220], 7
0x969705: mov     [esp+268h+var_258], edx
0x969709: jmp     loc_9697A8
0x96970E: fxch    st(1)
0x969710: fchs
0x969712: fcom    st(2)
0x969714: fnstsw  ax
0x969716: test    ah, 41h
0x969719: jnz     short loc_969797
0x96971B: fld     [esp+268h+var_1D0]
0x969722: fld     [esp+268h+var_148]
0x969729: fmul    st, st(1)
0x96972B: fld     [esp+268h+var_1D4]
0x969732: fmul    [esp+268h+var_E8]
0x969739: fsubp   st(1), st
0x96973B: fstp    [esp+268h+var_250]
0x96973F: fld     [esp+268h+var_250]
0x969743: fcom    st(2)
0x969745: fnstsw  ax
0x969747: fstp    st(2)
0x969749: test    ah, 5
0x96974C: jp      short loc_969761
0x96974E: fstp    st(3)
0x969750: xor     al, al
0x969752: fstp    st(1)
0x969754: fstp    st
0x969756: fstp    st(1)
0x969758: fstp    st
0x96975A: pop     edi
0x96975B: pop     esi
0x96975C: pop     ebx
0x96975D: mov     esp, ebp
0x96975F: pop     ebp
0x969760: retn
0x969761: fxch    st(2)
0x969763: fadd    st, st(3)
0x969765: fld     [ebp+arg_0]
0x969768: fchs
0x96976A: fmulp   st(1), st
0x96976C: fxch    st(1)
0x96976E: fsubrp  st(3), st
0x969770: fdivrp  st(2), st
0x969772: fxch    st(1)
0x969774: fstp    [esp+268h+var_250]
0x969778: fld     [esp+268h+var_250]
0x96977C: fld     dword ptr [edi]
0x96977E: fcomp   st(1)
0x969780: fnstsw  ax
0x969782: test    ah, 5
0x969785: jp      short loc_9697A6
0x969787: fstp    dword ptr [edi]
0x969789: mov     [esp+268h+var_220], 7
0x969791: mov     [esp+268h+var_258], ecx
0x969795: jmp     short loc_9697A8
0x969797: fstp    st(2)
0x969799: fstp    st
0x96979B: fstp    st
0x96979D: fld     [esp+268h+var_1D0]
0x9697A4: jmp     short loc_9697A8
0x9697A6: fstp    st
0x9697A8: fld     [esp+268h+var_1AC]
0x9697AF: fst     [esp+268h+var_118]
0x9697B6: fld     [esp+268h+var_1A0]
0x9697BD: fst     [esp+268h+var_F8]
0x9697C4: fld     st(1)
0x9697C6: fmul    st, st(4)
0x9697C8: fld     [esp+268h+var_C8]
0x9697CF: fmul    st, st(2)
0x9697D1: fsubp   st(1), st
0x9697D3: fstp    [esp+268h+var_250]
0x9697D7: fld     dword ptr [ebx+34h]
0x9697DA: fmul    [esp+268h+var_230]
0x9697DE: fld     dword ptr [ebx+3Ch]
0x9697E1: fmul    [esp+268h+var_40]
0x9697E8: faddp   st(1), st
0x9697EA: fstp    [esp+268h+var_254]
0x9697EE: fld     [esp+268h+var_254]
0x9697F2: fld     dword ptr [esi+3Ch]
0x9697F5: fmul    [esp+268h+var_218]
0x9697F9: fld     dword ptr [esi+38h]
0x9697FC: fmul    [esp+268h+var_200]
0x969800: faddp   st(1), st
0x969802: fstp    [esp+268h+var_254]
0x969806: fadd    [esp+268h+var_254]
0x96980A: fstp    [esp+268h+var_254]
0x96980E: fld     [esp+268h+var_250]
0x969812: fld     [esp+268h+var_254]
0x969816: fld     st
0x969818: fcom    st(2)
0x96981A: fnstsw  ax
0x96981C: test    ah, 5
0x96981F: jp      short loc_969895
0x969821: fstp    st(1)
0x969823: fld     st(4)
0x969825: fmulp   st(4), st
0x969827: fld     [esp+268h+var_1D4]
0x96982E: fmulp   st(3), st
0x969830: fxch    st(3)
0x969832: fsubrp  st(2), st
0x969834: fxch    st(1)
0x969836: fstp    [esp+268h+var_250]
0x96983A: fld     [esp+268h+var_250]
0x96983E: fcom    st(2)
0x969840: fnstsw  ax
0x969842: test    ah, 41h
0x969845: jnz     short loc_96985A
0x969847: fstp    st(1)
0x969849: xor     al, al
0x96984B: fstp    st(1)
0x96984D: fstp    st
0x96984F: fstp    st(1)
0x969851: fstp    st
0x969853: pop     edi
0x969854: pop     esi
0x969855: pop     ebx
0x969856: mov     esp, ebp
0x969858: pop     ebp
0x969859: retn
0x96985A: fxch    st(2)
0x96985C: fsub    st, st(1)
0x96985E: fmul    [esp+268h+var_188]
0x969865: fxch    st(2)
0x969867: fsubrp  st(1), st
0x969869: fdivp   st(1), st
0x96986B: fstp    [esp+268h+var_250]
0x96986F: fld     [esp+268h+var_250]
0x969873: fld     dword ptr [edi]
0x969875: fcomp   st(1)
0x969877: fnstsw  ax
0x969879: test    ah, 5
0x96987C: jp      loc_969913
0x969882: fstp    dword ptr [edi]
0x969884: mov     [esp+268h+var_220], 8
0x96988C: mov     [esp+268h+var_258], edx
0x969890: jmp     loc_969915
0x969895: fxch    st(1)
0x969897: fchs
0x969899: fcom    st(2)
0x96989B: fnstsw  ax
0x96989D: test    ah, 41h
0x9698A0: jnz     short loc_96990B
0x9698A2: fld     st(5)
0x9698A4: fmulp   st(5), st
0x9698A6: fld     [esp+268h+var_1D4]
0x9698AD: fmulp   st(4), st
0x9698AF: fxch    st(4)
0x9698B1: fsubrp  st(3), st
0x9698B3: fxch    st(2)
0x9698B5: fstp    [esp+268h+var_250]
0x9698B9: fld     [esp+268h+var_250]
0x9698BD: fcom    st(3)
0x9698BF: fnstsw  ax
0x9698C1: fstp    st(3)
0x9698C3: test    ah, 5
0x9698C6: jp      short loc_9698DB
0x9698C8: fstp    st
0x9698CA: xor     al, al
0x9698CC: fstp    st
0x9698CE: fstp    st
0x9698D0: fstp    st(1)
0x9698D2: fstp    st
0x9698D4: pop     edi
0x9698D5: pop     esi
0x9698D6: pop     ebx
0x9698D7: mov     esp, ebp
0x9698D9: pop     ebp
0x9698DA: retn
0x9698DB: fadd    st(1), st
0x9698DD: fld     [ebp+arg_0]
0x9698E0: fchs
0x9698E2: fmulp   st(2), st
0x9698E4: fsubp   st(2), st
0x9698E6: fdivrp  st(1), st
0x9698E8: fstp    [esp+268h+var_250]
0x9698EC: fld     [esp+268h+var_250]
0x9698F0: fld     dword ptr [edi]
0x9698F2: fcomp   st(1)
0x9698F4: fnstsw  ax
0x9698F6: test    ah, 5
0x9698F9: jp      short loc_969913
0x9698FB: fstp    dword ptr [edi]
0x9698FD: mov     [esp+268h+var_220], 8
0x969905: mov     [esp+268h+var_258], ecx
0x969909: jmp     short loc_969915
0x96990B: fstp    st(2)
0x96990D: fstp    st
0x96990F: fstp    st
0x969911: fstp    st(1)
0x969913: fstp    st
0x969915: fld     [esp+268h+var_1A8]
0x96991C: fst     [esp+268h+var_178]
0x969923: fld     [esp+268h+var_19C]
0x96992A: fst     [esp+268h+var_168]
0x969931: fld     st(1)
0x969933: fmul    st, st(4)
0x969935: fld     [esp+268h+var_C8]
0x96993C: fmul    st, st(2)
0x96993E: fsubp   st(1), st
0x969940: fstp    [esp+268h+var_250]
0x969944: fld     dword ptr [ebx+34h]
0x969947: fmul    [esp+268h+var_1F0]
0x96994B: fld     dword ptr [ebx+38h]
0x96994E: fmul    [esp+268h+var_40]
0x969955: faddp   st(1), st
0x969957: fstp    [esp+268h+var_254]
0x96995B: fld     [esp+268h+var_254]
0x96995F: fld     dword ptr [esi+3Ch]
0x969962: fmul    [esp+268h+var_50]
0x969969: fld     dword ptr [esi+38h]
0x96996C: fmul    [esp+268h+var_60]
0x969973: faddp   st(1), st
0x969975: fstp    [esp+268h+var_254]
0x969979: fadd    [esp+268h+var_254]
0x96997D: fstp    [esp+268h+var_254]
0x969981: fld     [esp+268h+var_250]
0x969985: fld     [esp+268h+var_254]
0x969989: fld     st
0x96998B: fcom    st(2)
0x96998D: fnstsw  ax
0x96998F: test    ah, 5
0x969992: jp      short loc_9699F2
0x969994: fstp    st(1)
0x969996: fld     st(4)
0x969998: fmulp   st(4), st
0x96999A: fld     [esp+268h+var_1D4]
0x9699A1: fmulp   st(3), st
0x9699A3: fxch    st(3)
0x9699A5: fsubrp  st(2), st
0x9699A7: fxch    st(1)
0x9699A9: fstp    [esp+268h+var_250]
0x9699AD: fld     [esp+268h+var_250]
0x9699B1: fcom    st(2)
0x9699B3: fnstsw  ax
0x9699B5: test    ah, 41h
0x9699B8: jz      loc_969847
0x9699BE: fxch    st(2)
0x9699C0: fsub    st, st(1)
0x9699C2: fmul    [esp+268h+var_188]
0x9699C9: fxch    st(2)
0x9699CB: fsubrp  st(1), st
0x9699CD: fdivp   st(1), st
0x9699CF: fstp    [esp+268h+var_250]
0x9699D3: fld     [esp+268h+var_250]
0x9699D7: fld     dword ptr [edi]
0x9699D9: fcomp   st(1)
0x9699DB: fnstsw  ax
0x9699DD: test    ah, 5
0x9699E0: jp      short loc_969A61
0x9699E2: fstp    dword ptr [edi]
0x9699E4: mov     [esp+268h+var_220], 9
0x9699EC: mov     [esp+268h+var_258], edx
0x9699F0: jmp     short loc_969A63
0x9699F2: fxch    st(1)
0x9699F4: fchs
0x9699F6: fcom    st(2)
0x9699F8: fnstsw  ax
0x9699FA: test    ah, 41h
0x9699FD: jnz     short loc_969A59
0x9699FF: fld     st(5)
0x969A01: fmulp   st(5), st
0x969A03: fld     [esp+268h+var_1D4]
0x969A0A: fmulp   st(4), st
0x969A0C: fxch    st(4)
0x969A0E: fsubrp  st(3), st
0x969A10: fxch    st(2)
0x969A12: fstp    [esp+268h+var_250]
0x969A16: fld     [esp+268h+var_250]
0x969A1A: fcom    st(3)
0x969A1C: fnstsw  ax
0x969A1E: fstp    st(3)
0x969A20: test    ah, 5
0x969A23: jnp     loc_9698C8
0x969A29: fadd    st(1), st
0x969A2B: fld     [ebp+arg_0]
0x969A2E: fchs
0x969A30: fmulp   st(2), st
0x969A32: fsubp   st(2), st
0x969A34: fdivrp  st(1), st
0x969A36: fstp    [esp+268h+var_250]
0x969A3A: fld     [esp+268h+var_250]
0x969A3E: fld     dword ptr [edi]
0x969A40: fcomp   st(1)
0x969A42: fnstsw  ax
0x969A44: test    ah, 5
0x969A47: jp      short loc_969A61
0x969A49: fstp    dword ptr [edi]
0x969A4B: mov     [esp+268h+var_220], 9
0x969A53: mov     [esp+268h+var_258], ecx
0x969A57: jmp     short loc_969A63
0x969A59: fstp    st(2)
0x969A5B: fstp    st
0x969A5D: fstp    st
0x969A5F: fstp    st(1)
0x969A61: fstp    st
0x969A63: fld     [esp+268h+var_1BC]
0x969A6A: fst     [esp+268h+var_158]
0x969A71: fld     [esp+268h+var_B8]
0x969A78: fld     [esp+268h+var_E8]
0x969A7F: fmul    st(1), st
0x969A81: fld     st(2)
0x969A83: fmul    st, st(5)
0x969A85: fsubp   st(2), st
0x969A87: fxch    st(1)
0x969A89: fstp    [esp+268h+var_250]
0x969A8D: fld     dword ptr [esi+3Ch]
0x969A90: fmul    [esp+268h+var_40]
0x969A97: fld     dword ptr [esi+34h]
0x969A9A: fmul    [esp+268h+var_A8]
0x969AA1: faddp   st(1), st
0x969AA3: fstp    [esp+268h+var_254]
0x969AA7: fld     [esp+268h+var_254]
0x969AAB: fld     dword ptr [ebx+3Ch]
0x969AAE: fmul    [esp+268h+var_218]
0x969AB2: fld     dword ptr [ebx+38h]
0x969AB5: fmul    [esp+268h+var_50]
0x969ABC: faddp   st(1), st
0x969ABE: fstp    [esp+268h+var_254]
0x969AC2: fadd    [esp+268h+var_254]
0x969AC6: fstp    [esp+268h+var_254]
0x969ACA: fld     [esp+268h+var_250]
0x969ACE: fld     [esp+268h+var_254]
0x969AD2: fld     st
0x969AD4: fcom    st(2)
0x969AD6: fnstsw  ax
0x969AD8: test    ah, 5
0x969ADB: jp      short loc_969B57
0x969ADD: fstp    st(1)
0x969ADF: fld     [esp+268h+var_1D8]
0x969AE6: fld     st
0x969AE8: fmulp   st(4), st
0x969AEA: fld     st(5)
0x969AEC: fmulp   st(5), st
0x969AEE: fxch    st(3)
0x969AF0: fsubrp  st(4), st
0x969AF2: fxch    st(3)
0x969AF4: fstp    [esp+268h+var_250]
0x969AF8: fld     [esp+268h+var_250]
0x969AFC: fcom    st(3)
0x969AFE: fnstsw  ax
0x969B00: test    ah, 41h
0x969B03: jnz     short loc_969B1A
0x969B05: fstp    st(1)
0x969B07: xor     al, al
0x969B09: fstp    st(2)
0x969B0B: fstp    st(1)
0x969B0D: fstp    st(2)
0x969B0F: fstp    st(1)
0x969B11: fstp    st
0x969B13: pop     edi
0x969B14: pop     esi
0x969B15: pop     ebx
0x969B16: mov     esp, ebp
0x969B18: pop     ebp
0x969B19: retn
0x969B1A: fxch    st(3)
0x969B1C: fsub    st, st(1)
0x969B1E: fmul    [esp+268h+var_188]
0x969B25: fxch    st(3)
0x969B27: fsubrp  st(1), st
0x969B29: fdivp   st(2), st
0x969B2B: fxch    st(1)
0x969B2D: fstp    [esp+268h+var_250]
0x969B31: fld     [esp+268h+var_250]
0x969B35: fld     dword ptr [edi]
0x969B37: fcomp   st(1)
0x969B39: fnstsw  ax
0x969B3B: test    ah, 5
0x969B3E: jp      loc_969CAC
0x969B44: fstp    dword ptr [edi]
0x969B46: mov     [esp+268h+var_220], 0Ah
0x969B4E: mov     [esp+268h+var_258], edx
0x969B52: jmp     loc_969BE1
0x969B57: fstp    st(4)
0x969B59: fchs
0x969B5B: fcom    st(1)
0x969B5D: fnstsw  ax
0x969B5F: test    ah, 41h
0x969B62: jnz     loc_969C91
0x969B68: fld     [esp+268h+var_1D8]
0x969B6F: fld     st
0x969B71: fmulp   st(4), st
0x969B73: fxch    st(5)
0x969B75: fmul    [esp+268h+var_158]
0x969B7C: fsubp   st(3), st
0x969B7E: fxch    st(2)
0x969B80: fstp    [esp+268h+var_250]
0x969B84: fld     [esp+268h+var_250]
0x969B88: fcom    st(2)
0x969B8A: fnstsw  ax
0x969B8C: fstp    st(2)
0x969B8E: test    ah, 5
0x969B91: jp      short loc_969BA6
0x969B93: fstp    st
0x969B95: xor     al, al
0x969B97: fstp    st(1)
0x969B99: fstp    st
0x969B9B: fstp    st(1)
0x969B9D: fstp    st
0x969B9F: pop     edi
0x969BA0: pop     esi
0x969BA1: pop     ebx
0x969BA2: mov     esp, ebp
0x969BA4: pop     ebp
0x969BA5: retn
0x969BA6: fadd    st(2), st
0x969BA8: fld     [ebp+arg_0]
0x969BAB: fchs
0x969BAD: fmulp   st(3), st
0x969BAF: fsubp   st(1), st
0x969BB1: fdivp   st(1), st
0x969BB3: fstp    [esp+268h+var_250]
0x969BB7: fld     [esp+268h+var_250]
0x969BBB: fld     dword ptr [edi]
0x969BBD: fcomp   st(1)
0x969BBF: fnstsw  ax
0x969BC1: test    ah, 5
0x969BC4: jp      loc_969CA5
0x969BCA: fstp    dword ptr [edi]
0x969BCC: mov     [esp+268h+var_220], 0Ah
0x969BD4: mov     [esp+268h+var_258], ecx
0x969BD8: fld     [esp+268h+var_1D0]
0x969BDF: fxch    st(1)
0x969BE1: fld     [esp+268h+var_1B8]
0x969BE8: fst     [esp+268h+var_198]
0x969BEF: fld     [esp+268h+var_B8]
0x969BF6: fmul    [esp+268h+var_F8]
0x969BFD: fld     st(1)
0x969BFF: fmul    st, st(5)
0x969C01: fsubp   st(1), st
0x969C03: fstp    [esp+268h+var_250]
0x969C07: fld     dword ptr [esi+3Ch]
0x969C0A: fmul    [esp+268h+var_1F0]
0x969C0E: fld     dword ptr [esi+34h]
0x969C11: fmul    [esp+268h+var_200]
0x969C15: faddp   st(1), st
0x969C17: fstp    [esp+268h+var_254]
0x969C1B: fld     [esp+268h+var_254]
0x969C1F: fld     dword ptr [ebx+34h]
0x969C22: fmul    [esp+268h+var_50]
0x969C29: fld     dword ptr [ebx+3Ch]
0x969C2C: fmul    [esp+268h+var_98]
0x969C33: faddp   st(1), st
0x969C35: fstp    [esp+268h+var_254]
0x969C39: fadd    [esp+268h+var_254]
0x969C3D: fstp    [esp+268h+var_254]
0x969C41: fld     [esp+268h+var_250]
0x969C45: fld     [esp+268h+var_254]
0x969C49: fld     st
0x969C4B: fcom    st(2)
0x969C4D: fnstsw  ax
0x969C4F: test    ah, 5
0x969C52: jp      loc_969CEE
0x969C58: fstp    st(1)
0x969C5A: fld     st(3)
0x969C5C: fmul    [esp+268h+var_F8]
0x969C63: fld     st(5)
0x969C65: fmulp   st(4), st
0x969C67: fsubrp  st(3), st
0x969C69: fxch    st(2)
0x969C6B: fstp    [esp+268h+var_250]
0x969C6F: fld     [esp+268h+var_250]
0x969C73: fcom    st(2)
0x969C75: fnstsw  ax
0x969C77: test    ah, 41h
0x969C7A: jnz     short loc_969CB3
0x969C7C: fstp    st(1)
0x969C7E: xor     al, al
0x969C80: fstp    st(1)
0x969C82: fstp    st
0x969C84: fstp    st(2)
0x969C86: fstp    st(1)
0x969C88: fstp    st
0x969C8A: pop     edi
0x969C8B: pop     esi
0x969C8C: pop     ebx
0x969C8D: mov     esp, ebp
0x969C8F: pop     ebp
0x969C90: retn
0x969C91: fstp    st(1)
0x969C93: fstp    st(2)
0x969C95: fstp    st(1)
0x969C97: fstp    st
0x969C99: fld     [esp+268h+var_1D8]
0x969CA0: jmp     loc_969BE1
0x969CA5: fstp    st
0x969CA7: jmp     loc_969BD8
0x969CAC: fstp    st
0x969CAE: jmp     loc_969BE1
0x969CB3: fxch    st(2)
0x969CB5: fsub    st, st(1)
0x969CB7: fmul    [esp+268h+var_188]
0x969CBE: fxch    st(2)
0x969CC0: fsubrp  st(1), st
0x969CC2: fdivp   st(1), st
0x969CC4: fstp    [esp+268h+var_250]
0x969CC8: fld     [esp+268h+var_250]
0x969CCC: fld     dword ptr [edi]
0x969CCE: fcomp   st(1)
0x969CD0: fnstsw  ax
0x969CD2: test    ah, 5
0x969CD5: jp      loc_969E32
0x969CDB: fstp    dword ptr [edi]
0x969CDD: mov     [esp+268h+var_220], 0Bh
0x969CE5: mov     [esp+268h+var_258], edx
0x969CE9: jmp     loc_969D78
0x969CEE: fstp    st(3)
0x969CF0: fchs
0x969CF2: fcom    st(1)
0x969CF4: fnstsw  ax
0x969CF6: test    ah, 41h
0x969CF9: jnz     loc_969E2E
0x969CFF: fld     st(3)
0x969D01: fmul    [esp+268h+var_F8]
0x969D08: fxch    st(5)
0x969D0A: fmul    [esp+268h+var_198]
0x969D11: fsubp   st(5), st
0x969D13: fxch    st(4)
0x969D15: fstp    [esp+268h+var_250]
0x969D19: fld     [esp+268h+var_250]
0x969D1D: fcom    st(4)
0x969D1F: fnstsw  ax
0x969D21: fstp    st(4)
0x969D23: test    ah, 5
0x969D26: jp      short loc_969D3B
0x969D28: fstp    st
0x969D2A: xor     al, al
0x969D2C: fstp    st
0x969D2E: fstp    st(1)
0x969D30: fstp    st(1)
0x969D32: fstp    st
0x969D34: pop     edi
0x969D35: pop     esi
0x969D36: pop     ebx
0x969D37: mov     esp, ebp
0x969D39: pop     ebp
0x969D3A: retn
0x969D3B: fadd    st(1), st
0x969D3D: fld     [ebp+arg_0]
0x969D40: fchs
0x969D42: fmulp   st(2), st
0x969D44: fsubp   st(3), st
0x969D46: fdivrp  st(2), st
0x969D48: fxch    st(1)
0x969D4A: fstp    [esp+268h+var_250]
0x969D4E: fld     [esp+268h+var_250]
0x969D52: fld     dword ptr [edi]
0x969D54: fcomp   st(1)
0x969D56: fnstsw  ax
0x969D58: test    ah, 5
0x969D5B: jp      loc_969E27
0x969D61: fstp    dword ptr [edi]
0x969D63: mov     [esp+268h+var_220], 0Bh
0x969D6B: mov     [esp+268h+var_258], ecx
0x969D6F: fld     [esp+268h+var_1D0]
0x969D76: fxch    st(1)
0x969D78: fld     [esp+268h+var_1B4]
0x969D7F: fst     [esp+268h+var_D8]
0x969D86: fld     [esp+268h+var_B8]
0x969D8D: fld     [esp+268h+var_168]
0x969D94: fmul    st(1), st
0x969D96: fld     st(2)
0x969D98: fmulp   st(6), st
0x969D9A: fxch    st(1)
0x969D9C: fsubrp  st(5), st
0x969D9E: fxch    st(4)
0x969DA0: fstp    [esp+268h+var_250]
0x969DA4: fld     dword ptr [esi+3Ch]
0x969DA7: fmul    [esp+268h+var_230]
0x969DAB: fld     dword ptr [esi+34h]
0x969DAE: fmul    [esp+268h+var_60]
0x969DB5: faddp   st(1), st
0x969DB7: fstp    [esp+268h+var_254]
0x969DBB: fld     [esp+268h+var_254]
0x969DBF: fld     dword ptr [ebx+34h]
0x969DC2: fmul    [esp+268h+var_218]
0x969DC6: fld     dword ptr [ebx+38h]
0x969DC9: fmul    [esp+268h+var_98]
0x969DD0: faddp   st(1), st
0x969DD2: fstp    [esp+268h+var_254]
0x969DD6: fadd    [esp+268h+var_254]
0x969DDA: fstp    [esp+268h+var_254]
0x969DDE: fld     [esp+268h+var_250]
0x969DE2: fld     [esp+268h+var_254]
0x969DE6: fld     st
0x969DE8: fcom    st(2)
0x969DEA: fnstsw  ax
0x969DEC: test    ah, 5
0x969DEF: jp      loc_969E78
0x969DF5: fstp    st(1)
0x969DF7: fld     st(3)
0x969DF9: fmulp   st(6), st
0x969DFB: fxch    st(4)
0x969DFD: fmul    st, st(2)
0x969DFF: fsubp   st(5), st
0x969E01: fxch    st(4)
0x969E03: fstp    [esp+268h+var_250]
0x969E07: fld     [esp+268h+var_250]
0x969E0B: fcom    st(3)
0x969E0D: fnstsw  ax
0x969E0F: test    ah, 41h
0x969E12: jnz     short loc_969E39
0x969E14: fstp    st(4)
0x969E16: xor     al, al
0x969E18: fstp    st(2)
0x969E1A: fstp    st(2)
0x969E1C: fstp    st
0x969E1E: fstp    st
0x969E20: pop     edi
0x969E21: pop     esi
0x969E22: pop     ebx
0x969E23: mov     esp, ebp
0x969E25: pop     ebp
0x969E26: retn
0x969E27: fstp    st
0x969E29: jmp     loc_969D6F
0x969E2E: fstp    st(1)
0x969E30: fstp    st(1)
0x969E32: fstp    st
0x969E34: jmp     loc_969D78
0x969E39: fxch    st(3)
0x969E3B: fsub    st, st(4)
0x969E3D: fmul    [esp+268h+var_188]
0x969E44: fxch    st(3)
0x969E46: fsubrp  st(4), st
0x969E48: fxch    st(2)
0x969E4A: fdivrp  st(3), st
0x969E4C: fxch    st(2)
0x969E4E: fstp    [esp+268h+var_250]
0x969E52: fld     [esp+268h+var_250]
0x969E56: fld     dword ptr [edi]
0x969E58: fcomp   st(1)
0x969E5A: fnstsw  ax
0x969E5C: test    ah, 5
0x969E5F: jp      loc_969EF0
0x969E65: fstp    dword ptr [edi]
0x969E67: mov     [esp+268h+var_220], 0Ch
0x969E6F: mov     [esp+268h+var_258], edx
0x969E73: jmp     loc_969F02
0x969E78: fstp    st(6)
0x969E7A: fchs
0x969E7C: fcom    st(1)
0x969E7E: fnstsw  ax
0x969E80: test    ah, 41h
0x969E83: jnz     short loc_969EF4
0x969E85: fld     st(3)
0x969E87: fmul    [esp+268h+var_168]
0x969E8E: fxch    st(5)
0x969E90: fmul    st, st(3)
0x969E92: fsubp   st(5), st
0x969E94: fxch    st(4)
0x969E96: fstp    [esp+268h+var_250]
0x969E9A: fld     [esp+268h+var_250]
0x969E9E: fcom    st(4)
0x969EA0: fnstsw  ax
0x969EA2: fstp    st(4)
0x969EA4: test    ah, 5
0x969EA7: jp      short loc_969EBC
0x969EA9: fstp    st
0x969EAB: xor     al, al
0x969EAD: fstp    st(3)
0x969EAF: fstp    st(1)
0x969EB1: fstp    st(1)
0x969EB3: fstp    st
0x969EB5: pop     edi
0x969EB6: pop     esi
0x969EB7: pop     ebx
0x969EB8: mov     esp, ebp
0x969EBA: pop     ebp
0x969EBB: retn
0x969EBC: fadd    st(4), st
0x969EBE: fld     [ebp+arg_0]
0x969EC1: fchs
0x969EC3: fmulp   st(5), st
0x969EC5: fsubp   st(3), st
0x969EC7: fxch    st(3)
0x969EC9: fdivrp  st(2), st
0x969ECB: fxch    st(1)
0x969ECD: fstp    [esp+268h+var_250]
0x969ED1: fld     [esp+268h+var_250]
0x969ED5: fld     dword ptr [edi]
0x969ED7: fcomp   st(1)
0x969ED9: fnstsw  ax
0x969EDB: test    ah, 5
0x969EDE: jp      short loc_969EFE
0x969EE0: fstp    dword ptr [edi]
0x969EE2: mov     [esp+268h+var_220], 0Ch
0x969EEA: mov     [esp+268h+var_258], ecx
0x969EEE: jmp     short loc_969F00
0x969EF0: fstp    st
0x969EF2: jmp     short loc_969F02
0x969EF4: fstp    st(1)
0x969EF6: fstp    st(4)
0x969EF8: fstp    st(3)
0x969EFA: fstp    st(1)
0x969EFC: jmp     short loc_969F00
0x969EFE: fstp    st
0x969F00: fxch    st(1)
0x969F02: fld     [esp+268h+var_C8]
0x969F09: fld     [esp+268h+var_158]
0x969F10: fmul    st(1), st
0x969F12: fld     [esp+268h+var_B8]
0x969F19: fld     [esp+268h+var_148]
0x969F20: fmul    st(1), st
0x969F22: fxch    st(3)
0x969F24: fsubrp  st(1), st
0x969F26: fstp    [esp+268h+var_250]
0x969F2A: fld     dword ptr [esi+34h]
0x969F2D: fmul    [esp+268h+var_98]
0x969F34: fld     dword ptr [esi+38h]
0x969F37: fmul    [esp+268h+var_40]
0x969F3E: faddp   st(1), st
0x969F40: fstp    [esp+268h+var_254]
0x969F44: fld     [esp+268h+var_254]
0x969F48: fld     dword ptr [ebx+38h]
0x969F4B: fmul    [esp+268h+var_60]
0x969F52: fld     dword ptr [ebx+3Ch]
0x969F55: fmul    [esp+268h+var_200]
0x969F59: faddp   st(1), st
0x969F5B: fstp    [esp+268h+var_254]
0x969F5F: fadd    [esp+268h+var_254]
0x969F63: fstp    [esp+268h+var_254]
0x969F67: fld     [esp+268h+var_250]
0x969F6B: fld     [esp+268h+var_254]
0x969F6F: fld     st
0x969F71: fcom    st(2)
0x969F73: fnstsw  ax
0x969F75: test    ah, 5
0x969F78: jp      short loc_969FEE
0x969F7A: fstp    st(1)
0x969F7C: fld     [esp+268h+var_1D4]
0x969F83: fmulp   st(3), st
0x969F85: fld     st(5)
0x969F87: fmulp   st(4), st
0x969F89: fxch    st(2)
0x969F8B: fsubrp  st(3), st
0x969F8D: fxch    st(2)
0x969F8F: fstp    [esp+268h+var_250]
0x969F93: fld     [esp+268h+var_250]
0x969F97: fcom    st(1)
0x969F99: fnstsw  ax
0x969F9B: test    ah, 41h
0x969F9E: jnz     short loc_969FB3
0x969FA0: fstp    st(2)
0x969FA2: xor     al, al
0x969FA4: fstp    st
0x969FA6: fstp    st
0x969FA8: fstp    st
0x969FAA: fstp    st
0x969FAC: pop     edi
0x969FAD: pop     esi
0x969FAE: pop     ebx
0x969FAF: mov     esp, ebp
0x969FB1: pop     ebp
0x969FB2: retn
0x969FB3: fxch    st(1)
0x969FB5: fsub    st, st(2)
0x969FB7: fmul    [esp+268h+var_188]
0x969FBE: fxch    st(1)
0x969FC0: fsubrp  st(2), st
0x969FC2: fdivrp  st(1), st
0x969FC4: fstp    [esp+268h+var_250]
0x969FC8: fld     [esp+268h+var_250]
0x969FCC: fld     dword ptr [edi]
0x969FCE: fcomp   st(1)
0x969FD0: fnstsw  ax
0x969FD2: test    ah, 5
0x969FD5: jp      loc_96A06C
0x969FDB: fstp    dword ptr [edi]
0x969FDD: mov     [esp+268h+var_220], 0Dh
0x969FE5: mov     [esp+268h+var_258], edx
0x969FE9: jmp     loc_96A06E
0x969FEE: fxch    st(1)
0x969FF0: fchs
0x969FF2: fcom    st(2)
0x969FF4: fnstsw  ax
0x969FF6: test    ah, 41h
0x969FF9: jnz     short loc_96A064
0x969FFB: fld     [esp+268h+var_1D4]
0x96A002: fmulp   st(4), st
0x96A004: fld     st(6)
0x96A006: fmulp   st(5), st
0x96A008: fxch    st(3)
0x96A00A: fsubrp  st(4), st
0x96A00C: fxch    st(3)
0x96A00E: fstp    [esp+268h+var_250]
0x96A012: fld     [esp+268h+var_250]
0x96A016: fcom    st(2)
0x96A018: fnstsw  ax
0x96A01A: fstp    st(2)
0x96A01C: test    ah, 5
0x96A01F: jp      short loc_96A034
0x96A021: fstp    st
0x96A023: xor     al, al
0x96A025: fstp    st(1)
0x96A027: fstp    st
0x96A029: fstp    st
0x96A02B: fstp    st
0x96A02D: pop     edi
0x96A02E: pop     esi
0x96A02F: pop     ebx
0x96A030: mov     esp, ebp
0x96A032: pop     ebp
0x96A033: retn
0x96A034: fadd    st(2), st
0x96A036: fld     [ebp+arg_0]
0x96A039: fchs
0x96A03B: fmulp   st(3), st
0x96A03D: fsubp   st(1), st
0x96A03F: fdivp   st(1), st
0x96A041: fstp    [esp+268h+var_250]
0x96A045: fld     [esp+268h+var_250]
0x96A049: fld     dword ptr [edi]
0x96A04B: fcomp   st(1)
0x96A04D: fnstsw  ax
0x96A04F: test    ah, 5
0x96A052: jp      short loc_96A06C
0x96A054: fstp    dword ptr [edi]
0x96A056: mov     [esp+268h+var_220], 0Dh
0x96A05E: mov     [esp+268h+var_258], ecx
0x96A062: jmp     short loc_96A06E
0x96A064: fstp    st(2)
0x96A066: fstp    st
0x96A068: fstp    st
0x96A06A: fstp    st
0x96A06C: fstp    st
0x96A06E: fld     [esp+268h+var_19C]
0x96A075: fld     [esp+268h+var_C8]
0x96A07C: fld     [esp+268h+var_198]
0x96A083: fmul    st(1), st
0x96A085: fld     [esp+268h+var_B8]
0x96A08C: fmul    [esp+268h+var_118]
0x96A093: fsubp   st(2), st
0x96A095: fxch    st(1)
0x96A097: fstp    [esp+268h+var_250]
0x96A09B: fld     dword ptr [esi+38h]
0x96A09E: fmul    [esp+268h+var_1F0]
0x96A0A2: fld     dword ptr [esi+34h]
0x96A0A5: fmul    [esp+268h+var_218]
0x96A0A9: faddp   st(1), st
0x96A0AB: fstp    [esp+268h+var_254]
0x96A0AF: fld     [esp+268h+var_254]
0x96A0B3: fld     dword ptr [ebx+34h]
0x96A0B6: fmul    [esp+268h+var_60]
0x96A0BD: fld     dword ptr [ebx+3Ch]
0x96A0C0: fmul    [esp+268h+var_A8]
0x96A0C7: faddp   st(1), st
0x96A0C9: fstp    [esp+268h+var_254]
0x96A0CD: fadd    [esp+268h+var_254]
0x96A0D1: fstp    [esp+268h+var_254]
0x96A0D5: fld     [esp+268h+var_250]
0x96A0D9: fld     [esp+268h+var_254]
0x96A0DD: fld     st
0x96A0DF: fcom    st(2)
0x96A0E1: fnstsw  ax
0x96A0E3: test    ah, 5
0x96A0E6: jp      short loc_96A161
0x96A0E8: fstp    st(1)
0x96A0EA: fld     [esp+268h+var_1D4]
0x96A0F1: fmulp   st(3), st
0x96A0F3: fld     st(5)
0x96A0F5: fmul    [esp+268h+var_118]
0x96A0FC: fsubp   st(3), st
0x96A0FE: fxch    st(2)
0x96A100: fstp    [esp+268h+var_250]
0x96A104: fld     [esp+268h+var_250]
0x96A108: fcom    st(2)
0x96A10A: fnstsw  ax
0x96A10C: test    ah, 41h
0x96A10F: jnz     short loc_96A126
0x96A111: fstp    st(1)
0x96A113: xor     al, al
0x96A115: fstp    st(1)
0x96A117: fstp    st
0x96A119: fstp    st(1)
0x96A11B: fstp    st
0x96A11D: fstp    st
0x96A11F: pop     edi
0x96A120: pop     esi
0x96A121: pop     ebx
0x96A122: mov     esp, ebp
0x96A124: pop     ebp
0x96A125: retn
0x96A126: fxch    st(2)
0x96A128: fsub    st, st(1)
0x96A12A: fmul    [esp+268h+var_188]
0x96A131: fxch    st(2)
0x96A133: fsubrp  st(1), st
0x96A135: fdivp   st(1), st
0x96A137: fstp    [esp+268h+var_250]
0x96A13B: fld     [esp+268h+var_250]
0x96A13F: fld     dword ptr [edi]
0x96A141: fcomp   st(1)
0x96A143: fnstsw  ax
0x96A145: test    ah, 5
0x96A148: jp      loc_96A1F8
0x96A14E: fstp    dword ptr [edi]
0x96A150: mov     [esp+268h+var_220], 0Eh
0x96A158: mov     [esp+268h+var_258], edx
0x96A15C: jmp     loc_96A1FA
0x96A161: fxch    st(1)
0x96A163: fchs
0x96A165: fcom    st(2)
0x96A167: fnstsw  ax
0x96A169: test    ah, 41h
0x96A16C: jnz     loc_96A1F2
0x96A172: fstp    st(4)
0x96A174: fld     [esp+268h+var_1D4]
0x96A17B: fmulp   st(3), st
0x96A17D: fld     st(5)
0x96A17F: fmul    [esp+268h+var_118]
0x96A186: fsubp   st(3), st
0x96A188: fxch    st(2)
0x96A18A: fstp    [esp+268h+var_250]
0x96A18E: fld     [esp+268h+var_250]
0x96A192: fcom    st(3)
0x96A194: fnstsw  ax
0x96A196: fstp    st(3)
0x96A198: test    ah, 5
0x96A19B: jp      short loc_96A1B0
0x96A19D: fstp    st
0x96A19F: xor     al, al
0x96A1A1: fstp    st
0x96A1A3: fstp    st
0x96A1A5: fstp    st
0x96A1A7: fstp    st
0x96A1A9: pop     edi
0x96A1AA: pop     esi
0x96A1AB: pop     ebx
0x96A1AC: mov     esp, ebp
0x96A1AE: pop     ebp
0x96A1AF: retn
0x96A1B0: fadd    st(1), st
0x96A1B2: fld     [ebp+arg_0]
0x96A1B5: fchs
0x96A1B7: fmulp   st(2), st
0x96A1B9: fsubp   st(2), st
0x96A1BB: fdivrp  st(1), st
0x96A1BD: fstp    [esp+268h+var_250]
0x96A1C1: fld     [esp+268h+var_250]
0x96A1C5: fld     dword ptr [edi]
0x96A1C7: fcomp   st(1)
0x96A1C9: fnstsw  ax
0x96A1CB: test    ah, 5
0x96A1CE: jp      short loc_96A1E7
0x96A1D0: fstp    dword ptr [edi]
0x96A1D2: mov     [esp+268h+var_220], 0Eh
0x96A1DA: fld     [esp+268h+var_19C]
0x96A1E1: mov     [esp+268h+var_258], ecx
0x96A1E5: jmp     short loc_96A1FA
0x96A1E7: fstp    st
0x96A1E9: fld     [esp+268h+var_19C]
0x96A1F0: jmp     short loc_96A1FA
0x96A1F2: fstp    st(2)
0x96A1F4: fstp    st
0x96A1F6: fstp    st
0x96A1F8: fstp    st
0x96A1FA: fld     [esp+268h+var_C8]
0x96A201: fmul    st, st(2)
0x96A203: fld     [esp+268h+var_B8]
0x96A20A: fld     [esp+268h+var_178]
0x96A211: fmul    st(1), st
0x96A213: fxch    st(2)
0x96A215: fsubrp  st(1), st
0x96A217: fstp    [esp+268h+var_250]
0x96A21B: fld     dword ptr [esi+34h]
0x96A21E: fmul    [esp+268h+var_50]
0x96A225: fld     dword ptr [esi+38h]
0x96A228: fmul    [esp+268h+var_230]
0x96A22C: faddp   st(1), st
0x96A22E: fstp    [esp+268h+var_254]
0x96A232: fld     [esp+268h+var_254]
0x96A236: fld     dword ptr [ebx+38h]
0x96A239: fmul    [esp+268h+var_A8]
0x96A240: fld     dword ptr [ebx+34h]
0x96A243: fmul    [esp+268h+var_200]
0x96A247: faddp   st(1), st
0x96A249: fstp    [esp+268h+var_254]
0x96A24D: fadd    [esp+268h+var_254]
0x96A251: fstp    [esp+268h+var_254]
0x96A255: fld     [esp+268h+var_250]
0x96A259: fld     [esp+268h+var_254]
0x96A25D: fld     st
0x96A25F: fcom    st(2)
0x96A261: fnstsw  ax
0x96A263: fld1
0x96A265: test    ah, 5
0x96A268: jp      short loc_96A2E2
0x96A26A: fstp    st(2)
0x96A26C: fld     [esp+268h+var_1D4]
0x96A273: fmul    st, st(6)
0x96A275: fxch    st(7)
0x96A277: fmulp   st(4), st
0x96A279: fxch    st(6)
0x96A27B: fsubrp  st(3), st
0x96A27D: fxch    st(2)
0x96A27F: fstp    [esp+268h+var_250]
0x96A283: fld     [esp+268h+var_250]
0x96A287: fcom    st(5)
0x96A289: fnstsw  ax
0x96A28B: test    ah, 41h
0x96A28E: jnz     short loc_96A2A5
0x96A290: fstp    st(1)
0x96A292: xor     al, al
0x96A294: fstp    st(4)
0x96A296: fstp    st(3)
0x96A298: fstp    st(1)
0x96A29A: fstp    st
0x96A29C: fstp    st
0x96A29E: pop     edi
0x96A29F: pop     esi
0x96A2A0: pop     ebx
0x96A2A1: mov     esp, ebp
0x96A2A3: pop     ebp
0x96A2A4: retn
0x96A2A5: fxch    st(5)
0x96A2A7: fsub    st, st(1)
0x96A2A9: fmul    [esp+268h+var_188]
0x96A2B0: fxch    st(5)
0x96A2B2: fsubrp  st(1), st
0x96A2B4: fdivp   st(4), st
0x96A2B6: fxch    st(3)
0x96A2B8: fstp    [esp+268h+var_250]
0x96A2BC: fld     [esp+268h+var_250]
0x96A2C0: fld     dword ptr [edi]
0x96A2C2: fcomp   st(1)
0x96A2C4: fnstsw  ax
0x96A2C6: test    ah, 5
0x96A2C9: jp      loc_96A3E9
0x96A2CF: fstp    dword ptr [edi]
0x96A2D1: mov     [esp+268h+var_220], 0Fh
0x96A2D9: mov     [esp+268h+var_258], edx
0x96A2DD: jmp     loc_96A367
0x96A2E2: fstp    st(4)
0x96A2E4: fxch    st(1)
0x96A2E6: fchs
0x96A2E8: fcom    st(2)
0x96A2EA: fnstsw  ax
0x96A2EC: test    ah, 41h
0x96A2EF: jnz     loc_96A3ED
0x96A2F5: fstp    st(3)
0x96A2F7: fld     [esp+268h+var_1D4]
0x96A2FE: fmul    st, st(5)
0x96A300: fxch    st(6)
0x96A302: fmul    [esp+268h+var_178]
0x96A309: fsubp   st(6), st
0x96A30B: fxch    st(5)
0x96A30D: fstp    [esp+268h+var_250]
0x96A311: fld     [esp+268h+var_250]
0x96A315: fcom    st(2)
0x96A317: fnstsw  ax
0x96A319: fstp    st(2)
0x96A31B: test    ah, 5
0x96A31E: jp      short loc_96A333
0x96A320: fstp    st
0x96A322: xor     al, al
0x96A324: fstp    st(3)
0x96A326: fstp    st(2)
0x96A328: fstp    st
0x96A32A: fstp    st
0x96A32C: pop     edi
0x96A32D: pop     esi
0x96A32E: pop     ebx
0x96A32F: mov     esp, ebp
0x96A331: pop     ebp
0x96A332: retn
0x96A333: fadd    st(4), st
0x96A335: fld     [ebp+arg_0]
0x96A338: fchs
0x96A33A: fmulp   st(5), st
0x96A33C: fsubp   st(1), st
0x96A33E: fdivp   st(3), st
0x96A340: fxch    st(2)
0x96A342: fstp    [esp+268h+var_250]
0x96A346: fld     [esp+268h+var_250]
0x96A34A: fld     dword ptr [edi]
0x96A34C: fcomp   st(1)
0x96A34E: fnstsw  ax
0x96A350: test    ah, 5
0x96A353: jp      short loc_96A372
0x96A355: fstp    dword ptr [edi]
0x96A357: mov     [esp+268h+var_220], 0Fh
0x96A35F: fld1
0x96A361: mov     [esp+268h+var_258], ecx
0x96A365: fxch    st(2)
0x96A367: mov     ecx, [esp+268h+var_220]
0x96A36B: jmp     ds:jpt_96A36B[ecx*4]; switch 16 cases
0x96A372: fstp    st
0x96A374: fld1
0x96A376: fxch    st(2)
0x96A378: cmp     [esp+268h+var_220], 0Fh
0x96A37D: jbe     short loc_96A367
