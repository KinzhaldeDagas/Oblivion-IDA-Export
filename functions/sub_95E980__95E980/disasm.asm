0x95E980: sub     esp, 48h
0x95E983: push    ebx
0x95E984: push    ebp
0x95E985: mov     ebp, [esp+50h+arg_C]
0x95E989: fld     dword ptr [ebp+24h]
0x95E98C: push    esi
0x95E98D: lea     esi, [ebp+20h]
0x95E990: push    edi
0x95E991: mov     edi, [esp+58h+arg_4]
0x95E995: fmul    dword ptr [edi+8]
0x95E998: add     edi, 4
0x95E99B: fld     dword ptr [esi]
0x95E99D: lea     ebx, [esi+0Ch]
0x95E9A0: fmul    dword ptr [edi]
0x95E9A2: faddp   st(1), st
0x95E9A4: fld     dword ptr [esi+8]
0x95E9A7: fmul    dword ptr [edi+8]
0x95E9AA: faddp   st(1), st
0x95E9AC: fstp    [esp+58h+arg_C]
0x95E9B0: fld     [esp+58h+arg_C]
0x95E9B4: fsub    dword ptr [edi+0Ch]
0x95E9B7: fstp    [esp+58h+var_48]
0x95E9BB: fld     dword ptr [esi]
0x95E9BD: fadd    dword ptr [ebx]
0x95E9BF: fstp    [esp+58h+var_44]
0x95E9C3: fld     dword ptr [ebx+4]
0x95E9C6: fadd    dword ptr [esi+4]
0x95E9C9: fstp    [esp+58h+var_40]
0x95E9CD: fld     dword ptr [ebx+8]
0x95E9D0: fadd    dword ptr [esi+8]
0x95E9D3: fstp    [esp+58h+var_3C]
0x95E9D7: fld     dword ptr [edi]
0x95E9D9: fmul    [esp+58h+var_44]
0x95E9DD: fld     dword ptr [edi+4]
0x95E9E0: fmul    [esp+58h+var_40]
0x95E9E4: faddp   st(1), st
0x95E9E6: fld     dword ptr [edi+8]
0x95E9E9: fmul    [esp+58h+var_3C]
0x95E9ED: faddp   st(1), st
0x95E9EF: fstp    [esp+58h+arg_C]
0x95E9F3: fld     [esp+58h+arg_C]
0x95E9F7: fsub    dword ptr [edi+0Ch]
0x95E9FA: fstp    [esp+58h+arg_C]
0x95E9FE: fldz
0x95EA00: fld     [esp+58h+var_48]
0x95EA04: fcom    st(1)
0x95EA06: fnstsw  ax
0x95EA08: fld     [esp+58h+arg_C]
0x95EA0C: test    ah, 5
0x95EA0F: jp      short loc_95EA1A
0x95EA11: fcom    st(2)
0x95EA13: fnstsw  ax
0x95EA15: test    ah, 41h
0x95EA18: jz      short loc_95EA30
0x95EA1A: fxch    st(1)
0x95EA1C: fcom    st(2)
0x95EA1E: fnstsw  ax
0x95EA20: test    ah, 41h
0x95EA23: jnz     short loc_95EA9B
0x95EA25: fxch    st(1)
0x95EA27: fcom    st(2)
0x95EA29: fnstsw  ax
0x95EA2B: test    ah, 5
0x95EA2E: jp      short loc_95EA99
0x95EA30: mov     eax, [esp+58h+arg_14]
0x95EA34: fxch    st(2)
0x95EA36: fstp    dword ptr [eax]
0x95EA38: mov     eax, [esp+58h+arg_18]
0x95EA3C: fld     st
0x95EA3E: fsubrp  st(2), st
0x95EA40: fdivrp  st(1), st
0x95EA42: fstp    [esp+58h+arg_4]
0x95EA46: fld     dword ptr [ebx]
0x95EA48: fld     [esp+58h+arg_4]
0x95EA4C: fld     st
0x95EA4E: fmulp   st(2), st
0x95EA50: fxch    st(1)
0x95EA52: fstp    [esp+58h+var_44]
0x95EA56: fld     dword ptr [ebx+4]
0x95EA59: fmul    st, st(1)
0x95EA5B: fstp    [esp+58h+var_40]
0x95EA5F: fmul    dword ptr [ebx+8]
0x95EA62: fstp    [esp+58h+var_3C]
0x95EA66: fld     dword ptr [esi]
0x95EA68: fadd    [esp+58h+var_44]
0x95EA6C: fstp    [esp+58h+var_38]
0x95EA70: mov     ecx, [esp+58h+var_38]
0x95EA74: fld     dword ptr [esi+4]
0x95EA77: fadd    [esp+58h+var_40]
0x95EA7B: fstp    [esp+58h+var_34]
0x95EA7F: mov     edx, [esp+58h+var_34]
0x95EA83: fld     dword ptr [esi+8]
0x95EA86: mov     [eax], ecx
0x95EA88: fadd    [esp+58h+var_3C]
0x95EA8C: fstp    [esp+58h+var_30]
0x95EA90: mov     ecx, [esp+58h+var_30]
0x95EA94: jmp     loc_95EE8F
0x95EA99: fxch    st(1)
0x95EA9B: fld     dword ptr [esi+18h]
0x95EA9E: fchs
0x95EAA0: fstp    [esp+58h+var_48]
0x95EAA4: fld     [esp+58h+var_48]
0x95EAA8: fcom    st(1)
0x95EAAA: fnstsw  ax
0x95EAAC: test    ah, 41h
0x95EAAF: jp      loc_95EBA7
0x95EAB5: mov     edi, [esp+58h+arg_14]
0x95EAB9: fstp    st(2)
0x95EABB: fstp    st
0x95EABD: push    offset Vector3_InitValue?; int
0x95EAC2: fstp    st
0x95EAC4: push    ecx
0x95EAC5: fstp    dword ptr [edi]
0x95EAC7: lea     ecx, [esp+60h+var_14]
0x95EACB: fld1
0x95EACD: fstp    [esp+60h+var_60]; float
0x95EAD0: call    sub_96C420
0x95EAD5: fld     dword ptr [ebp+38h]
0x95EAD8: fstp    [esp+58h+var_4]
0x95EADC: fld     [esp+58h+arg_C]
0x95EAE0: fld     dword ptr [esi+18h]
0x95EAE3: fchs
0x95EAE5: fcompp
0x95EAE7: fnstsw  ax
0x95EAE9: fld     [esp+58h+arg_0]
0x95EAED: test    ah, 41h
0x95EAF0: jp      short loc_95EB4D
0x95EAF2: mov     edx, [ebp+4]
0x95EAF5: mov     eax, [ebp+8]
0x95EAF8: mov     ecx, [ebp+0Ch]
0x95EAFB: mov     [esp+58h+var_10], edx
0x95EAFF: mov     edx, [esp+58h+arg_24]
0x95EB06: push    edx; int
0x95EB07: mov     edx, [esp+5Ch+arg_18]
0x95EB0B: mov     [esp+5Ch+var_C], eax
0x95EB0F: mov     eax, [esp+5Ch+arg_20]
0x95EB16: push    eax; int
0x95EB17: mov     eax, [esp+60h+arg_10]
0x95EB1B: mov     [esp+60h+var_8], ecx
0x95EB1F: mov     ecx, dword ptr [esp+60h+arg_1C]
0x95EB26: push    ecx; char
0x95EB27: push    edx; int
0x95EB28: mov     edx, [esp+68h+arg_8]
0x95EB2C: push    edi; int
0x95EB2D: push    eax; int
0x95EB2E: mov     eax, [esp+70h+arg_4]
0x95EB32: lea     ecx, [esp+70h+var_14]
0x95EB36: push    ecx; int
0x95EB37: push    edx; int
0x95EB38: push    eax; int
0x95EB39: push    ecx
0x95EB3A: fstp    [esp+80h+var_80]; float
0x95EB3D: call    sub_95E250
0x95EB42: add     esp, 28h
0x95EB45: pop     edi
0x95EB46: pop     esi
0x95EB47: pop     ebp
0x95EB48: pop     ebx
0x95EB49: add     esp, 48h
0x95EB4C: retn
0x95EB4D: mov     ecx, [esi]
0x95EB4F: mov     edx, [esi+4]
0x95EB52: mov     eax, [esi+8]
0x95EB55: mov     [esp+58h+var_10], ecx
0x95EB59: mov     ecx, [esp+58h+arg_24]
0x95EB60: push    ecx; int
0x95EB61: mov     ecx, [esp+5Ch+arg_18]
0x95EB65: mov     [esp+5Ch+var_C], edx
0x95EB69: mov     edx, [esp+5Ch+arg_20]
0x95EB70: push    edx; int
0x95EB71: mov     edx, [esp+60h+arg_10]
0x95EB75: mov     [esp+60h+var_8], eax
0x95EB79: mov     eax, dword ptr [esp+60h+arg_1C]
0x95EB80: push    eax; char
0x95EB81: push    ecx; int
0x95EB82: mov     ecx, [esp+68h+arg_8]
0x95EB86: push    edi; int
0x95EB87: push    edx; int
0x95EB88: mov     edx, [esp+70h+arg_4]
0x95EB8C: lea     eax, [esp+70h+var_14]
0x95EB90: push    eax; int
0x95EB91: push    ecx; int
0x95EB92: push    edx; int
0x95EB93: push    ecx
0x95EB94: fstp    [esp+80h+var_80]; float
0x95EB97: call    sub_95E250
0x95EB9C: add     esp, 28h
0x95EB9F: pop     edi
0x95EBA0: pop     esi
0x95EBA1: pop     ebp
0x95EBA2: pop     ebx
0x95EBA3: add     esp, 48h
0x95EBA6: retn
0x95EBA7: fcomp   st(2)
0x95EBA9: fnstsw  ax
0x95EBAB: test    ah, 41h
0x95EBAE: jp      loc_95EC58
0x95EBB4: mov     edi, [esp+58h+arg_14]
0x95EBB8: fstp    st(1)
0x95EBBA: fstp    st
0x95EBBC: push    offset Vector3_InitValue?; int
0x95EBC1: fstp    dword ptr [edi]
0x95EBC3: push    ecx
0x95EBC4: fld1
0x95EBC6: lea     ecx, [esp+60h+var_14]
0x95EBCA: fstp    [esp+60h+var_60]; float
0x95EBCD: call    sub_96C420
0x95EBD2: fld     dword ptr [ebp+38h]
0x95EBD5: fstp    [esp+58h+var_4]
0x95EBD9: fld     dword ptr [esi]
0x95EBDB: fadd    dword ptr [ebp+2Ch]
0x95EBDE: fstp    [esp+58h+var_38]
0x95EBE2: mov     eax, [esp+58h+var_38]
0x95EBE6: fld     dword ptr [esi+4]
0x95EBE9: mov     [esp+58h+var_10], eax
0x95EBED: fadd    dword ptr [ebp+30h]
0x95EBF0: mov     eax, [esp+58h+arg_24]
0x95EBF7: push    eax; int
0x95EBF8: mov     eax, [esp+5Ch+arg_18]
0x95EBFC: fstp    [esp+5Ch+var_34]
0x95EC00: mov     ecx, [esp+5Ch+var_34]
0x95EC04: fld     dword ptr [esi+8]
0x95EC07: mov     [esp+5Ch+var_C], ecx
0x95EC0B: fadd    dword ptr [ebp+34h]
0x95EC0E: mov     ecx, [esp+5Ch+arg_20]
0x95EC15: push    ecx; int
0x95EC16: mov     ecx, [esp+60h+arg_10]
0x95EC1A: fstp    [esp+60h+var_30]
0x95EC1E: mov     edx, [esp+60h+var_30]
0x95EC22: fld     [esp+60h+arg_0]
0x95EC26: mov     [esp+60h+var_8], edx
0x95EC2A: mov     edx, dword ptr [esp+60h+arg_1C]
0x95EC31: push    edx; char
0x95EC32: push    eax; int
0x95EC33: mov     eax, [esp+68h+arg_8]
0x95EC37: push    edi; int
0x95EC38: push    ecx; int
0x95EC39: mov     ecx, [esp+70h+arg_4]
0x95EC3D: lea     edx, [esp+70h+var_14]
0x95EC41: push    edx; int
0x95EC42: push    eax; int
0x95EC43: push    ecx; int
0x95EC44: push    ecx
0x95EC45: fstp    [esp+80h+var_80]; float
0x95EC48: call    sub_95E250
0x95EC4D: add     esp, 28h
0x95EC50: pop     edi
0x95EC51: pop     esi
0x95EC52: pop     ebp
0x95EC53: pop     ebx
0x95EC54: add     esp, 48h
0x95EC57: retn
0x95EC58: mov     ebp, [esp+58h+arg_10]
0x95EC5C: mov     eax, [esp+58h+arg_8]
0x95EC60: fld     dword ptr [ebp+0]
0x95EC63: fsub    dword ptr [eax]
0x95EC65: fstp    [esp+58h+var_38]
0x95EC69: fld     dword ptr [ebp+4]
0x95EC6C: fsub    dword ptr [eax+4]
0x95EC6F: fstp    [esp+58h+var_34]
0x95EC73: fld     dword ptr [ebp+8]
0x95EC76: fsub    dword ptr [eax+8]
0x95EC79: fstp    [esp+58h+var_30]
0x95EC7D: fld     dword ptr [edi+4]
0x95EC80: fmul    [esp+58h+var_34]
0x95EC84: fld     dword ptr [edi]
0x95EC86: fmul    [esp+58h+var_38]
0x95EC8A: faddp   st(1), st
0x95EC8C: fld     dword ptr [edi+8]
0x95EC8F: fmul    [esp+58h+var_30]
0x95EC93: faddp   st(1), st
0x95EC95: fstp    [esp+58h+arg_4]
0x95EC99: fld     [esp+58h+arg_4]
0x95EC9D: fcom    st(3)
0x95EC9F: fnstsw  ax
0x95ECA1: fstp    st(3)
0x95ECA3: test    ah, 41h
0x95ECA6: jnp     short loc_95ECCD
0x95ECA8: fld     st(2)
0x95ECAA: fmul    [esp+58h+arg_0]
0x95ECAE: fadd    dword ptr [esi+18h]
0x95ECB1: fchs
0x95ECB3: fstp    [esp+58h+arg_4]
0x95ECB7: fld     [esp+58h+arg_4]
0x95ECBB: fcom    st(1)
0x95ECBD: fnstsw  ax
0x95ECBF: test    ah, 41h
0x95ECC2: jnp     short loc_95ECDD
0x95ECC4: fcomp   st(2)
0x95ECC6: fnstsw  ax
0x95ECC8: test    ah, 41h
0x95ECCB: jnp     short loc_95ECDF
0x95ECCD: pop     edi
0x95ECCE: fstp    st(1)
0x95ECD0: pop     esi
0x95ECD1: fstp    st
0x95ECD3: pop     ebp
0x95ECD4: fstp    st
0x95ECD6: xor     al, al
0x95ECD8: pop     ebx
0x95ECD9: add     esp, 48h
0x95ECDC: retn
0x95ECDD: fstp    st
0x95ECDF: fld     st(1)
0x95ECE1: fld     qword ptr ds:0AA3A18h
0x95ECE7: fadd    st(1), st
0x95ECE9: fxch    st(1)
0x95ECEB: fcomp   st(2)
0x95ECED: fnstsw  ax
0x95ECEF: test    ah, 5
0x95ECF2: jp      short loc_95ED46
0x95ECF4: fstp    st(2)
0x95ECF6: mov     edx, [esp+58h+arg_14]
0x95ECFA: fstp    st(1)
0x95ECFC: push    ecx
0x95ECFD: fadd    dword ptr [esi+18h]
0x95ED00: lea     eax, [esp+5Ch+var_38]
0x95ED04: mov     ecx, edi
0x95ED06: fdivrp  st(1), st
0x95ED08: fchs
0x95ED0A: fstp    [esp+5Ch+arg_4]
0x95ED0E: fld     [esp+5Ch+arg_4]
0x95ED12: fstp    dword ptr [edx]
0x95ED14: fld     dword ptr [esi+18h]
0x95ED17: fstp    [esp+5Ch+var_5C]; float
0x95ED1A: push    eax; int
0x95ED1B: call    sub_4707B0
0x95ED20: fld     [esp+58h+arg_4]
0x95ED24: push    eax
0x95ED25: lea     ecx, [esp+5Ch+var_44]
0x95ED29: push    ecx
0x95ED2A: push    ebp; int
0x95ED2B: push    ecx
0x95ED2C: lea     edx, [esp+68h+var_2C]
0x95ED30: fstp    [esp+68h+var_68]; float
0x95ED33: push    edx; int
0x95ED34: call    sub_47DA10
0x95ED39: add     esp, 0Ch
0x95ED3C: push    eax
0x95ED3D: lea     eax, [esp+64h+var_20]
0x95ED41: push    eax
0x95ED42: mov     ecx, esi
0x95ED44: jmp     short loc_95EDAA
0x95ED46: faddp   st(1), st
0x95ED48: mov     ecx, [esp+58h+arg_14]
0x95ED4C: fcomp   st(1)
0x95ED4E: fnstsw  ax
0x95ED50: fadd    dword ptr [esi+18h]
0x95ED53: test    ah, 5
0x95ED56: fdivrp  st(1), st
0x95ED58: fchs
0x95ED5A: jp      short loc_95EDCF
0x95ED5C: fstp    [esp+58h+arg_4]
0x95ED60: push    ecx
0x95ED61: fld     [esp+5Ch+arg_4]
0x95ED65: lea     edx, [esp+5Ch+var_20]
0x95ED69: fstp    dword ptr [ecx]
0x95ED6B: mov     ecx, edi
0x95ED6D: fld     dword ptr [esi+18h]
0x95ED70: fstp    [esp+5Ch+var_5C]; float
0x95ED73: push    edx; int
0x95ED74: call    sub_4707B0
0x95ED79: fld     [esp+58h+arg_4]
0x95ED7D: push    eax
0x95ED7E: lea     eax, [esp+5Ch+var_2C]
0x95ED82: push    eax
0x95ED83: push    ebp; int
0x95ED84: push    ecx
0x95ED85: lea     ecx, [esp+68h+var_38]
0x95ED89: fstp    [esp+68h+var_68]; float
0x95ED8C: push    ecx; int
0x95ED8D: call    sub_47DA10
0x95ED92: add     esp, 0Ch
0x95ED95: push    eax
0x95ED96: lea     edx, [esp+64h+var_44]
0x95ED9A: push    edx
0x95ED9B: push    ebx
0x95ED9C: lea     eax, [esp+6Ch+var_14]
0x95EDA0: push    eax
0x95EDA1: mov     ecx, esi
0x95EDA3: call    sub_47D9B0
0x95EDA8: mov     ecx, eax
0x95EDAA: call    sub_47D9B0
0x95EDAF: mov     ecx, eax
0x95EDB1: call    sub_47D9B0
0x95EDB6: mov     edx, [eax]
0x95EDB8: mov     ecx, [esp+58h+arg_18]
0x95EDBC: mov     [ecx], edx
0x95EDBE: mov     edx, [eax+4]
0x95EDC1: mov     [ecx+4], edx
0x95EDC4: mov     eax, [eax+8]
0x95EDC7: mov     [ecx+8], eax
0x95EDCA: jmp     loc_95EE95
0x95EDCF: fstp    [esp+58h+arg_4]
0x95EDD3: push    ebp; int
0x95EDD4: fld     [esp+5Ch+arg_4]
0x95EDD8: push    ecx
0x95EDD9: fst     dword ptr [ecx]
0x95EDDB: lea     edx, [esp+60h+var_14]
0x95EDDF: fld     dword ptr [ebx]
0x95EDE1: fld     qword ptr ds:0A2FAA0h
0x95EDE7: fmul    st(1), st
0x95EDE9: fxch    st(1)
0x95EDEB: fstp    [esp+60h+var_38]
0x95EDEF: fld     dword ptr [ebx+4]
0x95EDF2: fmul    st, st(1)
0x95EDF4: fstp    [esp+60h+var_34]
0x95EDF8: fmul    dword ptr [ebx+8]
0x95EDFB: fstp    [esp+60h+var_30]
0x95EDFF: fld     dword ptr [esi]
0x95EE01: fadd    [esp+60h+var_38]
0x95EE05: fstp    [esp+60h+var_44]
0x95EE09: fld     dword ptr [esi+4]
0x95EE0C: fadd    [esp+60h+var_34]
0x95EE10: fstp    [esp+60h+var_40]
0x95EE14: fld     dword ptr [esi+8]
0x95EE17: fadd    [esp+60h+var_30]
0x95EE1B: fstp    [esp+60h+var_3C]
0x95EE1F: fstp    [esp+60h+var_60]; float
0x95EE22: push    edx; int
0x95EE23: call    sub_47DA10
0x95EE28: fld     dword ptr [eax]
0x95EE2A: fadd    [esp+64h+var_44]
0x95EE2E: add     esp, 8
0x95EE31: mov     ecx, edi
0x95EE33: fstp    [esp+5Ch+var_38]
0x95EE37: fld     dword ptr [eax+4]
0x95EE3A: fadd    [esp+5Ch+var_40]
0x95EE3E: fstp    [esp+5Ch+var_34]
0x95EE42: fld     dword ptr [eax+8]
0x95EE45: lea     eax, [esp+5Ch+var_20]
0x95EE49: fadd    [esp+5Ch+var_3C]
0x95EE4D: fstp    [esp+5Ch+var_30]
0x95EE51: fld     dword ptr [esi+18h]
0x95EE54: fstp    [esp+5Ch+var_5C]; float
0x95EE57: push    eax; int
0x95EE58: call    sub_4707B0
0x95EE5D: fld     dword ptr [eax]
0x95EE5F: fadd    [esp+58h+var_38]
0x95EE63: fstp    [esp+58h+var_44]
0x95EE67: mov     ecx, [esp+58h+var_44]
0x95EE6B: fld     dword ptr [eax+4]
0x95EE6E: fadd    [esp+58h+var_34]
0x95EE72: fstp    [esp+58h+var_40]
0x95EE76: mov     edx, [esp+58h+var_40]
0x95EE7A: fld     dword ptr [eax+8]
0x95EE7D: mov     eax, [esp+58h+arg_18]
0x95EE81: fadd    [esp+58h+var_30]
0x95EE85: mov     [eax], ecx
0x95EE87: fstp    [esp+58h+var_3C]
0x95EE8B: mov     ecx, [esp+58h+var_3C]
0x95EE8F: mov     [eax+4], edx
0x95EE92: mov     [eax+8], ecx
0x95EE95: cmp     [esp+58h+arg_1C], 0
0x95EE9A: jz      short loc_95EEE5
0x95EE9C: mov     eax, [esp+58h+arg_24]
0x95EEA3: mov     edx, [edi]
0x95EEA5: mov     [eax], edx
0x95EEA7: mov     ecx, [edi+4]
0x95EEAA: mov     [eax+4], ecx
0x95EEAD: mov     edx, [edi+8]
0x95EEB0: mov     [eax+8], edx
0x95EEB3: fld     dword ptr [eax]
0x95EEB5: fchs
0x95EEB7: fstp    [esp+58h+var_38]
0x95EEBB: mov     ecx, [esp+58h+var_38]
0x95EEBF: fld     dword ptr [eax+4]
0x95EEC2: fchs
0x95EEC4: fstp    [esp+58h+var_34]
0x95EEC8: mov     edx, [esp+58h+var_34]
0x95EECC: fld     dword ptr [eax+8]
0x95EECF: mov     eax, [esp+58h+arg_20]
0x95EED3: fchs
0x95EED5: mov     [eax], ecx
0x95EED7: fstp    [esp+58h+var_30]
0x95EEDB: mov     ecx, [esp+58h+var_30]
0x95EEDF: mov     [eax+4], edx
0x95EEE2: mov     [eax+8], ecx
0x95EEE5: pop     edi
0x95EEE6: pop     esi
0x95EEE7: pop     ebp
0x95EEE8: mov     al, 1
0x95EEEA: pop     ebx
0x95EEEB: add     esp, 48h
0x95EEEE: retn
