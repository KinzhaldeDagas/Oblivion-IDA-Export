0x550A30: sub     esp, 34h
0x550A33: push    ebx
0x550A34: mov     ebx, [esp+38h+arg_8]
0x550A38: test    ebx, ebx
0x550A3A: jg      short loc_550A64
0x550A3C: mov     ecx, ds:0B3F9A8h
0x550A42: fldz
0x550A44: mov     eax, [esp+38h+arg_0]
0x550A48: mov     [eax], ecx
0x550A4A: mov     edx, ds:0B3F9ACh
0x550A50: mov     [eax+4], edx
0x550A53: mov     ecx, ds:0B3F9B0h
0x550A59: fstp    dword ptr [eax+0Ch]
0x550A5C: mov     [eax+8], ecx
0x550A5F: pop     ebx
0x550A60: add     esp, 34h
0x550A63: retn
0x550A64: mov     edx, [esp+38h+arg_4]
0x550A68: mov     eax, [edx]
0x550A6A: mov     ecx, [eax]
0x550A6C: mov     [esp+38h+var_18], ecx
0x550A70: mov     ecx, [eax+4]
0x550A73: mov     [esp+38h+var_14], ecx
0x550A77: mov     ecx, [eax+8]
0x550A7A: mov     [esp+38h+var_10], ecx
0x550A7E: mov     ecx, [eax]
0x550A80: mov     [esp+38h+var_24], ecx
0x550A84: mov     ecx, [eax+4]
0x550A87: mov     eax, [eax+8]
0x550A8A: mov     [esp+38h+var_1C], eax
0x550A8E: mov     eax, [edx+8]
0x550A91: push    ebp
0x550A92: mov     [esp+3Ch+var_4], eax
0x550A96: push    esi
0x550A97: mov     esi, [edx+4]
0x550A9A: lea     eax, [ebx-1]
0x550A9D: cmp     eax, 4
0x550AA0: mov     [esp+40h+var_20], ecx
0x550AA4: mov     ecx, [edx]
0x550AA6: push    edi
0x550AA7: mov     ebp, 1
0x550AAC: jl      loc_550D75
0x550AB2: lea     edi, [ebx-5]
0x550AB5: shr     edi, 2
0x550AB8: add     edi, ebp
0x550ABA: lea     ebp, ds:1[edi*4]
0x550AC1: mov     eax, [ecx]
0x550AC3: mov     [esp+44h+var_30], eax
0x550AC7: fld     [esp+44h+var_30]
0x550ACB: mov     eax, [ecx+4]
0x550ACE: fld     st
0x550AD0: fld     [esp+44h+var_18]
0x550AD4: mov     [esp+44h+var_2C], eax
0x550AD8: mov     eax, [ecx+8]
0x550ADB: fcomp   st(1)
0x550ADD: mov     [esp+44h+var_28], eax
0x550AE1: fnstsw  ax
0x550AE3: test    ah, 41h
0x550AE6: jnz     short loc_550AF0
0x550AE8: fxch    st(1)
0x550AEA: fst     [esp+44h+var_18]
0x550AEE: fxch    st(1)
0x550AF0: fld     [esp+44h+var_2C]
0x550AF4: fld     st
0x550AF6: fld     [esp+44h+var_14]
0x550AFA: fcomp   st(1)
0x550AFC: fnstsw  ax
0x550AFE: test    ah, 41h
0x550B01: jnz     short loc_550B0B
0x550B03: fxch    st(1)
0x550B05: fst     [esp+44h+var_14]
0x550B09: fxch    st(1)
0x550B0B: fld     [esp+44h+var_28]
0x550B0F: fld     st
0x550B11: fld     [esp+44h+var_10]
0x550B15: fcomp   st(1)
0x550B17: fnstsw  ax
0x550B19: test    ah, 41h
0x550B1C: jnz     short loc_550B26
0x550B1E: fxch    st(1)
0x550B20: fst     [esp+44h+var_10]
0x550B24: fxch    st(1)
0x550B26: fld     [esp+44h+var_24]
0x550B2A: fcomp   st(5)
0x550B2C: fnstsw  ax
0x550B2E: fstp    st(4)
0x550B30: test    ah, 5
0x550B33: jp      short loc_550B3D
0x550B35: fxch    st(4)
0x550B37: fstp    [esp+44h+var_24]
0x550B3B: jmp     short loc_550B3F
0x550B3D: fstp    st(4)
0x550B3F: fld     [esp+44h+var_20]
0x550B43: fcompp
0x550B45: fnstsw  ax
0x550B47: test    ah, 5
0x550B4A: jp      short loc_550B52
0x550B4C: fstp    [esp+44h+var_20]
0x550B50: jmp     short loc_550B54
0x550B52: fstp    st
0x550B54: fld     [esp+44h+var_1C]
0x550B58: fcompp
0x550B5A: fnstsw  ax
0x550B5C: test    ah, 5
0x550B5F: jp      short loc_550B67
0x550B61: fstp    [esp+44h+var_1C]
0x550B65: jmp     short loc_550B69
0x550B67: fstp    st
0x550B69: mov     eax, [ecx+esi]
0x550B6C: add     ecx, esi
0x550B6E: mov     [esp+44h+var_30], eax
0x550B72: fld     [esp+44h+var_30]
0x550B76: mov     eax, [ecx+4]
0x550B79: fld     st
0x550B7B: fld     [esp+44h+var_18]
0x550B7F: mov     [esp+44h+var_2C], eax
0x550B83: mov     eax, [ecx+8]
0x550B86: fcomp   st(1)
0x550B88: mov     [esp+44h+var_28], eax
0x550B8C: fnstsw  ax
0x550B8E: test    ah, 41h
0x550B91: jnz     short loc_550B9B
0x550B93: fxch    st(1)
0x550B95: fst     [esp+44h+var_18]
0x550B99: fxch    st(1)
0x550B9B: fld     [esp+44h+var_2C]
0x550B9F: fld     st
0x550BA1: fld     [esp+44h+var_14]
0x550BA5: fcomp   st(1)
0x550BA7: fnstsw  ax
0x550BA9: test    ah, 41h
0x550BAC: jnz     short loc_550BB6
0x550BAE: fxch    st(1)
0x550BB0: fst     [esp+44h+var_14]
0x550BB4: fxch    st(1)
0x550BB6: fld     [esp+44h+var_28]
0x550BBA: fld     st
0x550BBC: fld     [esp+44h+var_10]
0x550BC0: fcomp   st(1)
0x550BC2: fnstsw  ax
0x550BC4: test    ah, 41h
0x550BC7: jnz     short loc_550BD1
0x550BC9: fxch    st(1)
0x550BCB: fst     [esp+44h+var_10]
0x550BCF: fxch    st(1)
0x550BD1: fld     [esp+44h+var_24]
0x550BD5: fcomp   st(5)
0x550BD7: fnstsw  ax
0x550BD9: fstp    st(4)
0x550BDB: test    ah, 5
0x550BDE: jp      short loc_550BE8
0x550BE0: fxch    st(4)
0x550BE2: fstp    [esp+44h+var_24]
0x550BE6: jmp     short loc_550BEA
0x550BE8: fstp    st(4)
0x550BEA: fld     [esp+44h+var_20]
0x550BEE: fcompp
0x550BF0: fnstsw  ax
0x550BF2: test    ah, 5
0x550BF5: jp      short loc_550BFD
0x550BF7: fstp    [esp+44h+var_20]
0x550BFB: jmp     short loc_550BFF
0x550BFD: fstp    st
0x550BFF: fld     [esp+44h+var_1C]
0x550C03: fcompp
0x550C05: fnstsw  ax
0x550C07: test    ah, 5
0x550C0A: jp      short loc_550C12
0x550C0C: fstp    [esp+44h+var_1C]
0x550C10: jmp     short loc_550C14
0x550C12: fstp    st
0x550C14: mov     eax, [ecx+esi]
0x550C17: add     ecx, esi
0x550C19: mov     [esp+44h+var_30], eax
0x550C1D: fld     [esp+44h+var_30]
0x550C21: mov     eax, [ecx+4]
0x550C24: fld     st
0x550C26: fld     [esp+44h+var_18]
0x550C2A: mov     [esp+44h+var_2C], eax
0x550C2E: mov     eax, [ecx+8]
0x550C31: fcomp   st(1)
0x550C33: mov     [esp+44h+var_28], eax
0x550C37: fnstsw  ax
0x550C39: test    ah, 41h
0x550C3C: jnz     short loc_550C46
0x550C3E: fxch    st(1)
0x550C40: fst     [esp+44h+var_18]
0x550C44: fxch    st(1)
0x550C46: fld     [esp+44h+var_2C]
0x550C4A: fld     st
0x550C4C: fld     [esp+44h+var_14]
0x550C50: fcomp   st(1)
0x550C52: fnstsw  ax
0x550C54: test    ah, 41h
0x550C57: jnz     short loc_550C61
0x550C59: fxch    st(1)
0x550C5B: fst     [esp+44h+var_14]
0x550C5F: fxch    st(1)
0x550C61: fld     [esp+44h+var_28]
0x550C65: fld     st
0x550C67: fld     [esp+44h+var_10]
0x550C6B: fcomp   st(1)
0x550C6D: fnstsw  ax
0x550C6F: test    ah, 41h
0x550C72: jnz     short loc_550C7C
0x550C74: fxch    st(1)
0x550C76: fst     [esp+44h+var_10]
0x550C7A: fxch    st(1)
0x550C7C: fld     [esp+44h+var_24]
0x550C80: fcomp   st(5)
0x550C82: fnstsw  ax
0x550C84: fstp    st(4)
0x550C86: test    ah, 5
0x550C89: jp      short loc_550C93
0x550C8B: fxch    st(4)
0x550C8D: fstp    [esp+44h+var_24]
0x550C91: jmp     short loc_550C95
0x550C93: fstp    st(4)
0x550C95: fld     [esp+44h+var_20]
0x550C99: fcompp
0x550C9B: fnstsw  ax
0x550C9D: test    ah, 5
0x550CA0: jp      short loc_550CA8
0x550CA2: fstp    [esp+44h+var_20]
0x550CA6: jmp     short loc_550CAA
0x550CA8: fstp    st
0x550CAA: fld     [esp+44h+var_1C]
0x550CAE: fcompp
0x550CB0: fnstsw  ax
0x550CB2: test    ah, 5
0x550CB5: jp      short loc_550CBD
0x550CB7: fstp    [esp+44h+var_1C]
0x550CBB: jmp     short loc_550CBF
0x550CBD: fstp    st
0x550CBF: mov     eax, [ecx+esi]
0x550CC2: add     ecx, esi
0x550CC4: mov     [esp+44h+var_30], eax
0x550CC8: fld     [esp+44h+var_30]
0x550CCC: mov     eax, [ecx+4]
0x550CCF: fld     st
0x550CD1: fld     [esp+44h+var_18]
0x550CD5: mov     [esp+44h+var_2C], eax
0x550CD9: mov     eax, [ecx+8]
0x550CDC: fcomp   st(1)
0x550CDE: mov     [esp+44h+var_28], eax
0x550CE2: fnstsw  ax
0x550CE4: test    ah, 41h
0x550CE7: jnz     short loc_550CF1
0x550CE9: fxch    st(1)
0x550CEB: fst     [esp+44h+var_18]
0x550CEF: fxch    st(1)
0x550CF1: fld     [esp+44h+var_2C]
0x550CF5: fld     st
0x550CF7: fld     [esp+44h+var_14]
0x550CFB: fcomp   st(1)
0x550CFD: fnstsw  ax
0x550CFF: test    ah, 41h
0x550D02: jnz     short loc_550D0C
0x550D04: fxch    st(1)
0x550D06: fst     [esp+44h+var_14]
0x550D0A: fxch    st(1)
0x550D0C: fld     [esp+44h+var_28]
0x550D10: fld     st
0x550D12: fld     [esp+44h+var_10]
0x550D16: fcomp   st(1)
0x550D18: fnstsw  ax
0x550D1A: test    ah, 41h
0x550D1D: jnz     short loc_550D27
0x550D1F: fxch    st(1)
0x550D21: fst     [esp+44h+var_10]
0x550D25: fxch    st(1)
0x550D27: fld     [esp+44h+var_24]
0x550D2B: fcomp   st(5)
0x550D2D: fnstsw  ax
0x550D2F: fstp    st(4)
0x550D31: test    ah, 5
0x550D34: jp      short loc_550D3E
0x550D36: fxch    st(4)
0x550D38: fstp    [esp+44h+var_24]
0x550D3C: jmp     short loc_550D40
0x550D3E: fstp    st(4)
0x550D40: fld     [esp+44h+var_20]
0x550D44: fcompp
0x550D46: fnstsw  ax
0x550D48: test    ah, 5
0x550D4B: jp      short loc_550D53
0x550D4D: fstp    [esp+44h+var_20]
0x550D51: jmp     short loc_550D55
0x550D53: fstp    st
0x550D55: fld     [esp+44h+var_1C]
0x550D59: fcompp
0x550D5B: fnstsw  ax
0x550D5D: test    ah, 5
0x550D60: jp      short loc_550D68
0x550D62: fstp    [esp+44h+var_1C]
0x550D66: jmp     short loc_550D6A
0x550D68: fstp    st
0x550D6A: add     ecx, esi
0x550D6C: sub     edi, 1
0x550D6F: jnz     loc_550AC1
0x550D75: cmp     ebp, ebx
0x550D77: jge     loc_550E34
0x550D7D: mov     edi, ebx
0x550D7F: sub     edi, ebp
0x550D81: mov     eax, [ecx]
0x550D83: mov     [esp+44h+var_30], eax
0x550D87: fld     [esp+44h+var_30]
0x550D8B: mov     eax, [ecx+4]
0x550D8E: fld     st
0x550D90: fld     [esp+44h+var_18]
0x550D94: mov     [esp+44h+var_2C], eax
0x550D98: mov     eax, [ecx+8]
0x550D9B: fcomp   st(1)
0x550D9D: mov     [esp+44h+var_28], eax
0x550DA1: fnstsw  ax
0x550DA3: test    ah, 41h
0x550DA6: jnz     short loc_550DB0
0x550DA8: fxch    st(1)
0x550DAA: fst     [esp+44h+var_18]
0x550DAE: fxch    st(1)
0x550DB0: fld     [esp+44h+var_2C]
0x550DB4: fld     st
0x550DB6: fld     [esp+44h+var_14]
0x550DBA: fcomp   st(1)
0x550DBC: fnstsw  ax
0x550DBE: test    ah, 41h
0x550DC1: jnz     short loc_550DCB
0x550DC3: fxch    st(1)
0x550DC5: fst     [esp+44h+var_14]
0x550DC9: fxch    st(1)
0x550DCB: fld     [esp+44h+var_28]
0x550DCF: fld     st
0x550DD1: fld     [esp+44h+var_10]
0x550DD5: fcomp   st(1)
0x550DD7: fnstsw  ax
0x550DD9: test    ah, 41h
0x550DDC: jnz     short loc_550DE6
0x550DDE: fxch    st(1)
0x550DE0: fst     [esp+44h+var_10]
0x550DE4: fxch    st(1)
0x550DE6: fld     [esp+44h+var_24]
0x550DEA: fcomp   st(5)
0x550DEC: fnstsw  ax
0x550DEE: fstp    st(4)
0x550DF0: test    ah, 5
0x550DF3: jp      short loc_550DFD
0x550DF5: fxch    st(4)
0x550DF7: fstp    [esp+44h+var_24]
0x550DFB: jmp     short loc_550DFF
0x550DFD: fstp    st(4)
0x550DFF: fld     [esp+44h+var_20]
0x550E03: fcompp
0x550E05: fnstsw  ax
0x550E07: test    ah, 5
0x550E0A: jp      short loc_550E12
0x550E0C: fstp    [esp+44h+var_20]
0x550E10: jmp     short loc_550E14
0x550E12: fstp    st
0x550E14: fld     [esp+44h+var_1C]
0x550E18: fcompp
0x550E1A: fnstsw  ax
0x550E1C: test    ah, 5
0x550E1F: jp      short loc_550E27
0x550E21: fstp    [esp+44h+var_1C]
0x550E25: jmp     short loc_550E29
0x550E27: fstp    st
0x550E29: add     ecx, esi
0x550E2B: sub     edi, 1
0x550E2E: jnz     loc_550D81
0x550E34: fld     [esp+44h+var_24]
0x550E38: mov     ecx, [edx]
0x550E3A: fadd    [esp+44h+var_18]
0x550E3E: mov     edx, [edx+8]
0x550E41: xor     edi, edi
0x550E43: cmp     ebx, 4
0x550E46: fstp    [esp+44h+var_C]
0x550E4A: fld     [esp+44h+var_20]
0x550E4E: fadd    [esp+44h+var_14]
0x550E52: fstp    [esp+44h+var_8]
0x550E56: fld     [esp+44h+var_1C]
0x550E5A: fadd    [esp+44h+var_10]
0x550E5E: fstp    [esp+44h+var_4]
0x550E62: fld     [esp+44h+var_C]
0x550E66: fld     qword ptr ds:0A2FAA0h
0x550E6C: fmul    st(1), st
0x550E6E: fxch    st(1)
0x550E70: fstp    [esp+44h+var_24]
0x550E74: fld     [esp+44h+var_8]
0x550E78: fmul    st, st(1)
0x550E7A: fstp    [esp+44h+var_20]
0x550E7E: fmul    [esp+44h+var_4]
0x550E82: mov     [esp+44h+var_4], edx
0x550E86: fstp    [esp+44h+var_1C]
0x550E8A: fldz
0x550E8C: fstp    [esp+44h+arg_8]
0x550E90: fld     [esp+44h+var_1C]
0x550E94: jl      loc_55107A
0x550E9A: fld     [esp+44h+var_24]
0x550E9E: lea     edx, [ebx-4]
0x550EA1: fld     [esp+44h+var_20]
0x550EA5: shr     edx, 2
0x550EA8: add     edx, 1
0x550EAB: fld     st(2)
0x550EAD: lea     edi, ds:0[edx*4]
0x550EB4: mov     eax, [ecx]
0x550EB6: mov     [esp+44h+var_30], eax
0x550EBA: fld     [esp+44h+var_30]
0x550EBE: mov     eax, [ecx+4]
0x550EC1: fsub    st, st(3)
0x550EC3: mov     [esp+44h+var_2C], eax
0x550EC7: mov     eax, [ecx+8]
0x550ECA: fstp    [esp+44h+var_18]
0x550ECE: mov     [esp+44h+var_28], eax
0x550ED2: fld     [esp+44h+var_2C]
0x550ED6: fsub    st, st(2)
0x550ED8: fstp    [esp+44h+var_14]
0x550EDC: fld     [esp+44h+var_28]
0x550EE0: fsub    st, st(1)
0x550EE2: fstp    [esp+44h+var_10]
0x550EE6: fld     [esp+44h+var_14]
0x550EEA: fld     [esp+44h+var_18]
0x550EEE: fld     [esp+44h+var_10]
0x550EF2: fld     st(1)
0x550EF4: fmulp   st(2), st
0x550EF6: fld     st(2)
0x550EF8: fmulp   st(3), st
0x550EFA: fxch    st(1)
0x550EFC: faddp   st(2), st
0x550EFE: fmul    st, st
0x550F00: faddp   st(1), st
0x550F02: fstp    [esp+44h+var_34]
0x550F06: fld     [esp+44h+var_34]
0x550F0A: fld     [esp+44h+arg_8]
0x550F0E: fcomp   st(1)
0x550F10: fnstsw  ax
0x550F12: test    ah, 5
0x550F15: jp      short loc_550F1D
0x550F17: fstp    [esp+44h+arg_8]
0x550F1B: jmp     short loc_550F1F
0x550F1D: fstp    st
0x550F1F: mov     eax, [ecx+esi]
0x550F22: add     ecx, esi
0x550F24: mov     [esp+44h+var_30], eax
0x550F28: fld     [esp+44h+var_30]
0x550F2C: mov     eax, [ecx+4]
0x550F2F: fsub    st, st(3)
0x550F31: mov     [esp+44h+var_2C], eax
0x550F35: mov     eax, [ecx+8]
0x550F38: fstp    [esp+44h+var_18]
0x550F3C: mov     [esp+44h+var_28], eax
0x550F40: fld     [esp+44h+var_2C]
0x550F44: fsub    st, st(2)
0x550F46: fstp    [esp+44h+var_14]
0x550F4A: fld     [esp+44h+var_28]
0x550F4E: fsub    st, st(1)
0x550F50: fstp    [esp+44h+var_10]
0x550F54: fld     [esp+44h+var_14]
0x550F58: fld     [esp+44h+var_18]
0x550F5C: fld     [esp+44h+var_10]
0x550F60: fld     st(1)
0x550F62: fmulp   st(2), st
0x550F64: fld     st(2)
0x550F66: fmulp   st(3), st
0x550F68: fxch    st(1)
0x550F6A: faddp   st(2), st
0x550F6C: fmul    st, st
0x550F6E: faddp   st(1), st
0x550F70: fstp    [esp+44h+var_34]
0x550F74: fld     [esp+44h+var_34]
0x550F78: fld     [esp+44h+arg_8]
0x550F7C: fcomp   st(1)
0x550F7E: fnstsw  ax
0x550F80: test    ah, 5
0x550F83: jp      short loc_550F8B
0x550F85: fstp    [esp+44h+arg_8]
0x550F89: jmp     short loc_550F8D
0x550F8B: fstp    st
0x550F8D: mov     eax, [ecx+esi]
0x550F90: add     ecx, esi
0x550F92: mov     [esp+44h+var_30], eax
0x550F96: fld     [esp+44h+var_30]
0x550F9A: mov     eax, [ecx+4]
0x550F9D: fsub    st, st(3)
0x550F9F: mov     [esp+44h+var_2C], eax
0x550FA3: mov     eax, [ecx+8]
0x550FA6: fstp    [esp+44h+var_18]
0x550FAA: mov     [esp+44h+var_28], eax
0x550FAE: fld     [esp+44h+var_2C]
0x550FB2: fsub    st, st(2)
0x550FB4: fstp    [esp+44h+var_14]
0x550FB8: fld     [esp+44h+var_28]
0x550FBC: fsub    st, st(1)
0x550FBE: fstp    [esp+44h+var_10]
0x550FC2: fld     [esp+44h+var_14]
0x550FC6: fld     [esp+44h+var_18]
0x550FCA: fld     [esp+44h+var_10]
0x550FCE: fld     st(1)
0x550FD0: fmulp   st(2), st
0x550FD2: fld     st(2)
0x550FD4: fmulp   st(3), st
0x550FD6: fxch    st(1)
0x550FD8: faddp   st(2), st
0x550FDA: fmul    st, st
0x550FDC: faddp   st(1), st
0x550FDE: fstp    [esp+44h+var_34]
0x550FE2: fld     [esp+44h+var_34]
0x550FE6: fld     [esp+44h+arg_8]
0x550FEA: fcomp   st(1)
0x550FEC: fnstsw  ax
0x550FEE: test    ah, 5
0x550FF1: jp      short loc_550FF9
0x550FF3: fstp    [esp+44h+arg_8]
0x550FF7: jmp     short loc_550FFB
0x550FF9: fstp    st
0x550FFB: mov     eax, [ecx+esi]
0x550FFE: add     ecx, esi
0x551000: mov     [esp+44h+var_30], eax
0x551004: fld     [esp+44h+var_30]
0x551008: mov     eax, [ecx+4]
0x55100B: fsub    st, st(3)
0x55100D: mov     [esp+44h+var_2C], eax
0x551011: mov     eax, [ecx+8]
0x551014: fstp    [esp+44h+var_18]
0x551018: mov     [esp+44h+var_28], eax
0x55101C: fld     [esp+44h+var_2C]
0x551020: fsub    st, st(2)
0x551022: fstp    [esp+44h+var_14]
0x551026: fld     [esp+44h+var_28]
0x55102A: fsub    st, st(1)
0x55102C: fstp    [esp+44h+var_10]
0x551030: fld     [esp+44h+var_14]
0x551034: fld     [esp+44h+var_18]
0x551038: fld     [esp+44h+var_10]
0x55103C: fld     st(1)
0x55103E: fmulp   st(2), st
0x551040: fld     st(2)
0x551042: fmulp   st(3), st
0x551044: fxch    st(1)
0x551046: faddp   st(2), st
0x551048: fmul    st, st
0x55104A: faddp   st(1), st
0x55104C: fstp    [esp+44h+var_34]
0x551050: fld     [esp+44h+var_34]
0x551054: fld     [esp+44h+arg_8]
0x551058: fcomp   st(1)
0x55105A: fnstsw  ax
0x55105C: test    ah, 5
0x55105F: jp      short loc_551067
0x551061: fstp    [esp+44h+arg_8]
0x551065: jmp     short loc_551069
0x551067: fstp    st
0x551069: add     ecx, esi
0x55106B: sub     edx, 1
0x55106E: jnz     loc_550EB4
0x551074: fstp    st(2)
0x551076: fstp    st
0x551078: fstp    st
0x55107A: cmp     edi, ebx
0x55107C: jge     loc_551102
0x551082: fld     [esp+44h+var_24]
0x551086: sub     ebx, edi
0x551088: fld     [esp+44h+var_20]
0x55108C: mov     edx, [ecx]
0x55108E: mov     eax, [ecx+4]
0x551091: mov     [esp+44h+var_30], edx
0x551095: fld     [esp+44h+var_30]
0x551099: mov     edx, [ecx+8]
0x55109C: fsub    st, st(2)
0x55109E: mov     [esp+44h+var_2C], eax
0x5510A2: mov     [esp+44h+var_28], edx
0x5510A6: fstp    [esp+44h+var_18]
0x5510AA: fld     [esp+44h+var_2C]
0x5510AE: fsub    st, st(1)
0x5510B0: fstp    [esp+44h+var_14]
0x5510B4: fld     [esp+44h+var_28]
0x5510B8: fsub    st, st(3)
0x5510BA: fstp    [esp+44h+var_10]
0x5510BE: fld     [esp+44h+var_14]
0x5510C2: fld     [esp+44h+var_18]
0x5510C6: fld     [esp+44h+var_10]
0x5510CA: fld     st(1)
0x5510CC: fmulp   st(2), st
0x5510CE: fld     st(2)
0x5510D0: fmulp   st(3), st
0x5510D2: fxch    st(1)
0x5510D4: faddp   st(2), st
0x5510D6: fmul    st, st
0x5510D8: faddp   st(1), st
0x5510DA: fstp    [esp+44h+var_34]
0x5510DE: fld     [esp+44h+var_34]
0x5510E2: fld     [esp+44h+arg_8]
0x5510E6: fcomp   st(1)
0x5510E8: fnstsw  ax
0x5510EA: test    ah, 5
0x5510ED: jp      short loc_5510F5
0x5510EF: fstp    [esp+44h+arg_8]
0x5510F3: jmp     short loc_5510F7
0x5510F5: fstp    st
0x5510F7: add     ecx, esi
0x5510F9: sub     ebx, 1
0x5510FC: jnz     short loc_55108C
0x5510FE: fstp    st(1)
0x551100: fstp    st
0x551102: mov     esi, [esp+44h+arg_0]
0x551106: fstp    st
0x551108: mov     eax, [esp+44h+var_24]
0x55110C: fld     [esp+44h+arg_8]
0x551110: mov     ecx, [esp+44h+var_20]
0x551114: mov     edx, [esp+44h+var_1C]
0x551118: mov     [esi], eax
0x55111A: mov     [esi+4], ecx
0x55111D: mov     [esi+8], edx
0x551120: call    __CIsqrt
0x551125: fstp    [esp+44h+arg_8]
0x551129: fld     [esp+44h+arg_8]
0x55112D: pop     edi
0x55112E: fstp    dword ptr [esi+0Ch]
0x551131: pop     esi
0x551132: pop     ebp
0x551133: pop     ebx
0x551134: add     esp, 34h
0x551137: retn
