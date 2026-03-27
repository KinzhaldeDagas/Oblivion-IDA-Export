0x96E980: sub     esp, 60h
0x96E983: push    ebx
0x96E984: push    ebp
0x96E985: mov     ebp, [esp+68h+arg_4]
0x96E989: fld     dword ptr [ebp+0]
0x96E98C: mov     eax, [ebp+0]
0x96E98F: fstp    [esp+68h+var_5C]
0x96E993: mov     ebx, ecx
0x96E995: fld     [esp+68h+var_5C]
0x96E999: push    esi
0x96E99A: mov     esi, [esp+6Ch+arg_0]
0x96E99E: fst     [esp+6Ch+var_58]
0x96E9A2: cmp     si, 1
0x96E9A6: fld     dword ptr [ebp+4]
0x96E9A9: fstp    [esp+6Ch+var_5C]
0x96E9AD: fld     [esp+6Ch+var_5C]
0x96E9B1: fst     [esp+6Ch+arg_4]
0x96E9B5: fld     dword ptr [ebp+8]
0x96E9B8: mov     [ebx], eax
0x96E9BA: mov     ecx, [ebp+4]
0x96E9BD: fstp    [esp+6Ch+var_5C]
0x96E9C1: fld     [esp+6Ch+var_5C]
0x96E9C5: mov     [ebx+4], ecx
0x96E9C8: mov     edx, [ebp+8]
0x96E9CB: fst     [esp+6Ch+var_60]
0x96E9CF: mov     [ebx+8], edx
0x96E9D2: jbe     loc_96EA9B
0x96E9D8: lea     eax, [esi-1]
0x96E9DB: lea     ecx, [ebp+14h]
0x96E9DE: movzx   edx, ax
0x96E9E1: fld     dword ptr [ecx-8]
0x96E9E4: fadd    dword ptr [ebx]
0x96E9E6: fstp    dword ptr [ebx]
0x96E9E8: fld     dword ptr [ebx+4]
0x96E9EB: fadd    dword ptr [ecx-4]
0x96E9EE: fstp    dword ptr [ebx+4]
0x96E9F1: fld     dword ptr [ecx]
0x96E9F3: fadd    dword ptr [ebx+8]
0x96E9F6: fstp    dword ptr [ebx+8]
0x96E9F9: fld     dword ptr [ecx-8]
0x96E9FC: fld     [esp+6Ch+var_58]
0x96EA00: fcompp
0x96EA02: fnstsw  ax
0x96EA04: test    ah, 41h
0x96EA07: jnz     short loc_96EA12
0x96EA09: fld     dword ptr [ecx-8]
0x96EA0C: fstp    [esp+6Ch+var_58]
0x96EA10: jmp     short loc_96EA2D
0x96EA12: fld     dword ptr [ecx-8]
0x96EA15: fcomp   st(3)
0x96EA17: fnstsw  ax
0x96EA19: test    ah, 41h
0x96EA1C: jnz     short loc_96EA2D
0x96EA1E: fstp    st(2)
0x96EA20: fld     dword ptr [ecx-8]
0x96EA23: fstp    [esp+6Ch+var_5C]
0x96EA27: fld     [esp+6Ch+var_5C]
0x96EA2B: fxch    st(2)
0x96EA2D: fld     dword ptr [ecx-4]
0x96EA30: fld     [esp+6Ch+arg_4]
0x96EA34: fcompp
0x96EA36: fnstsw  ax
0x96EA38: test    ah, 41h
0x96EA3B: jnz     short loc_96EA46
0x96EA3D: fld     dword ptr [ecx-4]
0x96EA40: fstp    [esp+6Ch+arg_4]
0x96EA44: jmp     short loc_96EA61
0x96EA46: fld     dword ptr [ecx-4]
0x96EA49: fcomp   st(2)
0x96EA4B: fnstsw  ax
0x96EA4D: test    ah, 41h
0x96EA50: jnz     short loc_96EA61
0x96EA52: fstp    st(1)
0x96EA54: fld     dword ptr [ecx-4]
0x96EA57: fstp    [esp+6Ch+var_5C]
0x96EA5B: fld     [esp+6Ch+var_5C]
0x96EA5F: fxch    st(1)
0x96EA61: fld     dword ptr [ecx]
0x96EA63: fld     [esp+6Ch+var_60]
0x96EA67: fcompp
0x96EA69: fnstsw  ax
0x96EA6B: test    ah, 41h
0x96EA6E: jnz     short loc_96EA78
0x96EA70: fld     dword ptr [ecx]
0x96EA72: fstp    [esp+6Ch+var_60]
0x96EA76: jmp     short loc_96EA8F
0x96EA78: fld     dword ptr [ecx]
0x96EA7A: fcomp   st(1)
0x96EA7C: fnstsw  ax
0x96EA7E: test    ah, 41h
0x96EA81: jnz     short loc_96EA8F
0x96EA83: fstp    st
0x96EA85: fld     dword ptr [ecx]
0x96EA87: fstp    [esp+6Ch+var_5C]
0x96EA8B: fld     [esp+6Ch+var_5C]
0x96EA8F: add     ecx, 0Ch
0x96EA92: sub     edx, 1
0x96EA95: jnz     loc_96E9E1
0x96EA9B: movzx   edx, si
0x96EA9E: mov     [esp+6Ch+var_5C], edx
0x96EAA2: fild    [esp+6Ch+var_5C]
0x96EAA6: fld1
0x96EAA8: fdivrp  st(1), st
0x96EAAA: fstp    [esp+6Ch+var_5C]
0x96EAAE: fld     [esp+6Ch+var_5C]
0x96EAB2: fld     st
0x96EAB4: fmul    dword ptr [ebx]
0x96EAB6: fstp    [esp+6Ch+var_48]
0x96EABA: mov     ecx, [esp+6Ch+var_48]
0x96EABE: fld     dword ptr [ebx+4]
0x96EAC1: fmul    st, st(1)
0x96EAC3: fstp    [esp+6Ch+var_44]
0x96EAC7: mov     eax, [esp+6Ch+var_44]
0x96EACB: fmul    dword ptr [ebx+8]
0x96EACE: mov     [ebx], ecx
0x96EAD0: mov     [ebx+4], eax
0x96EAD3: fstp    [esp+6Ch+var_40]
0x96EAD7: mov     ecx, [esp+6Ch+var_40]
0x96EADB: fld     [esp+6Ch+var_58]
0x96EADF: mov     [ebx+8], ecx
0x96EAE2: fld     st
0x96EAE4: fld     st(4)
0x96EAE6: fucompp
0x96EAE8: fnstsw  ax
0x96EAEA: test    ah, 44h
0x96EAED: jnp     loc_96EE75
0x96EAF3: fld     [esp+6Ch+arg_4]
0x96EAF7: fld     st(3)
0x96EAF9: fucompp
0x96EAFB: fnstsw  ax
0x96EAFD: test    ah, 44h
0x96EB00: jnp     loc_96EE75
0x96EB06: fld     [esp+6Ch+var_60]
0x96EB0A: fld     st(2)
0x96EB0C: fucompp
0x96EB0E: fnstsw  ax
0x96EB10: test    ah, 44h
0x96EB13: jnp     loc_96EE75
0x96EB19: cmp     word ptr [esp+6Ch+arg_0], 0
0x96EB1F: fstp    st(3)
0x96EB21: push    edi
0x96EB22: fstp    st
0x96EB24: mov     ecx, 9
0x96EB29: fstp    st
0x96EB2B: mov     esi, offset unk_B3FADC
0x96EB30: fstp    st
0x96EB32: lea     edi, [esp+70h+var_24]
0x96EB36: rep movsd
0x96EB38: pop     edi
0x96EB39: jbe     short loc_96EBAA
0x96EB3B: fld     dword ptr [ebx]
0x96EB3D: mov     eax, edx
0x96EB3F: fld     st
0x96EB41: fmul    st, st(1)
0x96EB43: fld     dword ptr [ebx+4]
0x96EB46: fld     st
0x96EB48: fmul    st, st(3)
0x96EB4A: fld     dword ptr [ebx+8]
0x96EB4D: fld     st
0x96EB4F: fmulp   st(5), st
0x96EB51: fld     st(2)
0x96EB53: fmul    st, st(3)
0x96EB55: fld     st(1)
0x96EB57: fmulp   st(4), st
0x96EB59: fld     st(1)
0x96EB5B: fmulp   st(2), st
0x96EB5D: sub     eax, 1
0x96EB60: fld     [esp+6Ch+var_24]
0x96EB64: fadd    st, st(5)
0x96EB66: fstp    [esp+6Ch+var_24]
0x96EB6A: fld     [esp+6Ch+var_20]
0x96EB6E: fadd    st, st(3)
0x96EB70: fstp    [esp+6Ch+var_20]
0x96EB74: fld     [esp+6Ch+var_1C]
0x96EB78: fadd    st, st(6)
0x96EB7A: fstp    [esp+6Ch+var_1C]
0x96EB7E: fld     [esp+6Ch+var_14]
0x96EB82: fadd    st, st(1)
0x96EB84: fstp    [esp+6Ch+var_14]
0x96EB88: fld     [esp+6Ch+var_10]
0x96EB8C: fadd    st, st(4)
0x96EB8E: fstp    [esp+6Ch+var_10]
0x96EB92: fld     [esp+6Ch+var_4]
0x96EB96: fadd    st, st(2)
0x96EB98: fstp    [esp+6Ch+var_4]
0x96EB9C: jnz     short loc_96EB5D
0x96EB9E: fstp    st(5)
0x96EBA0: fstp    st(2)
0x96EBA2: fstp    st(1)
0x96EBA4: fstp    st(1)
0x96EBA6: fstp    st
0x96EBA8: fstp    st
0x96EBAA: fld     [esp+6Ch+var_20]
0x96EBAE: lea     esi, [ebx+0Ch]
0x96EBB1: fstp    [esp+6Ch+var_18]
0x96EBB5: push    esi
0x96EBB6: fld     [esp+70h+var_1C]
0x96EBBA: lea     edx, [esp+70h+var_30]
0x96EBBE: fstp    [esp+70h+var_C]
0x96EBC2: push    edx
0x96EBC3: fld     [esp+74h+var_10]
0x96EBC7: lea     ecx, [esp+74h+var_24]
0x96EBCB: fstp    [esp+74h+var_8]
0x96EBCF: call    sub_711AE0
0x96EBD4: fld     dword ptr [ebp+0]
0x96EBD7: fsub    dword ptr [ebx]
0x96EBD9: fstp    [esp+6Ch+var_54]
0x96EBDD: mov     eax, [esp+6Ch+var_54]
0x96EBE1: fld     dword ptr [ebp+4]
0x96EBE4: mov     [esp+6Ch+var_48], eax
0x96EBE8: fsub    dword ptr [ebx+4]
0x96EBEB: mov     eax, [esp+6Ch+arg_0]
0x96EBEF: cmp     ax, 1
0x96EBF3: fstp    [esp+6Ch+var_50]
0x96EBF7: mov     ecx, [esp+6Ch+var_50]
0x96EBFB: fld     dword ptr [ebp+8]
0x96EBFE: mov     [esp+6Ch+var_44], ecx
0x96EC02: fsub    dword ptr [ebx+8]
0x96EC05: fstp    [esp+6Ch+var_4C]
0x96EC09: mov     edx, [esp+6Ch+var_4C]
0x96EC0D: mov     [esp+6Ch+var_40], edx
0x96EC11: jbe     loc_96ED27
0x96EC17: add     ebp, 14h
0x96EC1A: add     eax, 0FFFFFFFFh
0x96EC1D: movzx   ecx, ax
0x96EC20: fld     dword ptr [ebp-8]
0x96EC23: fsub    dword ptr [ebx]
0x96EC25: fstp    [esp+6Ch+var_3C]
0x96EC29: fld     dword ptr [ebp-4]
0x96EC2C: fsub    dword ptr [ebx+4]
0x96EC2F: fstp    [esp+6Ch+var_38]
0x96EC33: fld     dword ptr [ebp+0]
0x96EC36: fsub    dword ptr [ebx+8]
0x96EC39: fstp    [esp+6Ch+var_34]
0x96EC3D: fld     [esp+6Ch+var_3C]
0x96EC41: fld     st
0x96EC43: fmul    dword ptr [esi]
0x96EC45: fld     dword ptr [esi+4]
0x96EC48: fld     [esp+6Ch+var_38]
0x96EC4C: fld     st
0x96EC4E: fmulp   st(2), st
0x96EC50: fxch    st(2)
0x96EC52: faddp   st(1), st
0x96EC54: fld     dword ptr [esi+8]
0x96EC57: fld     [esp+6Ch+var_34]
0x96EC5B: fld     st
0x96EC5D: fmulp   st(2), st
0x96EC5F: fxch    st(2)
0x96EC61: faddp   st(1), st
0x96EC63: fstp    [esp+6Ch+arg_0]
0x96EC67: fld     [esp+6Ch+arg_0]
0x96EC6B: fld     [esp+6Ch+var_54]
0x96EC6F: fcomp   st(1)
0x96EC71: fnstsw  ax
0x96EC73: test    ah, 41h
0x96EC76: jnz     short loc_96EC7E
0x96EC78: fstp    [esp+6Ch+var_54]
0x96EC7C: jmp     short loc_96EC93
0x96EC7E: fld     [esp+6Ch+var_48]
0x96EC82: fcomp   st(1)
0x96EC84: fnstsw  ax
0x96EC86: test    ah, 5
0x96EC89: jp      short loc_96EC91
0x96EC8B: fstp    [esp+6Ch+var_48]
0x96EC8F: jmp     short loc_96EC93
0x96EC91: fstp    st
0x96EC93: fld     dword ptr [ebx+18h]
0x96EC96: fmul    st, st(3)
0x96EC98: fld     st(2)
0x96EC9A: fmul    dword ptr [ebx+1Ch]
0x96EC9D: faddp   st(1), st
0x96EC9F: fld     dword ptr [ebx+20h]
0x96ECA2: fmul    st, st(2)
0x96ECA4: faddp   st(1), st
0x96ECA6: fstp    [esp+6Ch+arg_0]
0x96ECAA: fld     [esp+6Ch+arg_0]
0x96ECAE: fld     [esp+6Ch+var_50]
0x96ECB2: fcomp   st(1)
0x96ECB4: fnstsw  ax
0x96ECB6: test    ah, 41h
0x96ECB9: jnz     short loc_96ECC1
0x96ECBB: fstp    [esp+6Ch+var_50]
0x96ECBF: jmp     short loc_96ECD6
0x96ECC1: fld     [esp+6Ch+var_44]
0x96ECC5: fcomp   st(1)
0x96ECC7: fnstsw  ax
0x96ECC9: test    ah, 5
0x96ECCC: jp      short loc_96ECD4
0x96ECCE: fstp    [esp+6Ch+var_44]
0x96ECD2: jmp     short loc_96ECD6
0x96ECD4: fstp    st
0x96ECD6: fld     dword ptr [ebx+24h]
0x96ECD9: fmulp   st(3), st
0x96ECDB: fld     dword ptr [ebx+28h]
0x96ECDE: fmulp   st(2), st
0x96ECE0: fxch    st(2)
0x96ECE2: faddp   st(1), st
0x96ECE4: fld     dword ptr [ebx+2Ch]
0x96ECE7: fmulp   st(2), st
0x96ECE9: faddp   st(1), st
0x96ECEB: fstp    [esp+6Ch+arg_0]
0x96ECEF: fld     [esp+6Ch+arg_0]
0x96ECF3: fld     [esp+6Ch+var_4C]
0x96ECF7: fcomp   st(1)
0x96ECF9: fnstsw  ax
0x96ECFB: test    ah, 41h
0x96ECFE: jnz     short loc_96ED06
0x96ED00: fstp    [esp+6Ch+var_4C]
0x96ED04: jmp     short loc_96ED1B
0x96ED06: fld     [esp+6Ch+var_40]
0x96ED0A: fcomp   st(1)
0x96ED0C: fnstsw  ax
0x96ED0E: test    ah, 5
0x96ED11: jp      short loc_96ED19
0x96ED13: fstp    [esp+6Ch+var_40]
0x96ED17: jmp     short loc_96ED1B
0x96ED19: fstp    st
0x96ED1B: add     ebp, 0Ch
0x96ED1E: sub     ecx, 1
0x96ED21: jnz     loc_96EC20
0x96ED27: fld     [esp+6Ch+var_48]
0x96ED2B: fadd    [esp+6Ch+var_54]
0x96ED2F: fld     qword ptr ds:0A2FAA0h
0x96ED35: fmul    st(1), st
0x96ED37: fxch    st(1)
0x96ED39: fstp    [esp+6Ch+arg_0]
0x96ED3D: fld     dword ptr [esi]
0x96ED3F: fld     [esp+6Ch+arg_0]
0x96ED43: fld     st
0x96ED45: fmulp   st(2), st
0x96ED47: fxch    st(1)
0x96ED49: fstp    [esp+6Ch+var_3C]
0x96ED4D: fld     dword ptr [esi+4]
0x96ED50: fmul    st, st(1)
0x96ED52: fstp    [esp+6Ch+var_38]
0x96ED56: fmul    dword ptr [esi+8]
0x96ED59: fstp    [esp+6Ch+var_34]
0x96ED5D: fld     [esp+6Ch+var_3C]
0x96ED61: fadd    dword ptr [ebx]
0x96ED63: fstp    [esp+6Ch+arg_0]
0x96ED67: fld     [esp+6Ch+arg_0]
0x96ED6B: fst     dword ptr [ebx]
0x96ED6D: fld     dword ptr [ebx+4]
0x96ED70: fadd    [esp+6Ch+var_38]
0x96ED74: fstp    [esp+6Ch+arg_0]
0x96ED78: fld     [esp+6Ch+arg_0]
0x96ED7C: fst     dword ptr [ebx+4]
0x96ED7F: fld     [esp+6Ch+var_34]
0x96ED83: fadd    dword ptr [ebx+8]
0x96ED86: fstp    [esp+6Ch+arg_0]
0x96ED8A: fld     [esp+6Ch+arg_0]
0x96ED8E: fst     dword ptr [ebx+8]
0x96ED91: fld     [esp+6Ch+var_44]
0x96ED95: fadd    [esp+6Ch+var_50]
0x96ED99: fmul    st, st(4)
0x96ED9B: fstp    [esp+6Ch+arg_0]
0x96ED9F: fld     dword ptr [ebx+18h]
0x96EDA2: fld     [esp+6Ch+arg_0]
0x96EDA6: fld     st
0x96EDA8: fmulp   st(2), st
0x96EDAA: fxch    st(1)
0x96EDAC: fstp    [esp+6Ch+var_3C]
0x96EDB0: fld     dword ptr [ebx+1Ch]
0x96EDB3: fmul    st, st(1)
0x96EDB5: fstp    [esp+6Ch+var_38]
0x96EDB9: fmul    dword ptr [ebx+20h]
0x96EDBC: fstp    [esp+6Ch+var_34]
0x96EDC0: fld     [esp+6Ch+var_3C]
0x96EDC4: faddp   st(3), st
0x96EDC6: fxch    st(2)
0x96EDC8: fstp    [esp+6Ch+arg_0]
0x96EDCC: fld     [esp+6Ch+arg_0]
0x96EDD0: fst     dword ptr [ebx]
0x96EDD2: fld     [esp+6Ch+var_38]
0x96EDD6: faddp   st(2), st
0x96EDD8: fxch    st(1)
0x96EDDA: fstp    [esp+6Ch+arg_0]
0x96EDDE: fld     [esp+6Ch+arg_0]
0x96EDE2: fst     dword ptr [ebx+4]
0x96EDE5: fld     [esp+6Ch+var_34]
0x96EDE9: faddp   st(3), st
0x96EDEB: fxch    st(2)
0x96EDED: fstp    [esp+6Ch+arg_0]
0x96EDF1: fld     [esp+6Ch+arg_0]
0x96EDF5: fst     dword ptr [ebx+8]
0x96EDF8: fld     [esp+6Ch+var_40]
0x96EDFC: fld     [esp+6Ch+var_4C]
0x96EE00: fld     st
0x96EE02: faddp   st(2), st
0x96EE04: fxch    st(1)
0x96EE06: fmul    st, st(5)
0x96EE08: fstp    [esp+6Ch+arg_0]
0x96EE0C: fld     [esp+6Ch+arg_0]
0x96EE10: fld     st
0x96EE12: fmul    dword ptr [ebx+24h]
0x96EE15: fstp    [esp+6Ch+var_3C]
0x96EE19: fld     dword ptr [ebx+28h]
0x96EE1C: fmul    st, st(1)
0x96EE1E: fstp    [esp+6Ch+var_38]
0x96EE22: fmul    dword ptr [ebx+2Ch]
0x96EE25: fstp    [esp+6Ch+var_34]
0x96EE29: fld     [esp+6Ch+var_3C]
0x96EE2D: pop     esi
0x96EE2E: faddp   st(3), st
0x96EE30: pop     ebp
0x96EE31: fxch    st(2)
0x96EE33: fstp    dword ptr [ebx]
0x96EE35: fld     [esp+64h+var_38]
0x96EE39: faddp   st(3), st
0x96EE3B: fxch    st(2)
0x96EE3D: fstp    dword ptr [ebx+4]
0x96EE40: fld     [esp+64h+var_34]
0x96EE44: faddp   st(2), st
0x96EE46: fxch    st(1)
0x96EE48: fstp    dword ptr [ebx+8]
0x96EE4B: fld     [esp+64h+var_48]
0x96EE4F: fsub    [esp+64h+var_54]
0x96EE53: fmul    st, st(2)
0x96EE55: fstp    dword ptr [ebx+30h]
0x96EE58: fld     [esp+64h+var_44]
0x96EE5C: fsub    [esp+64h+var_50]
0x96EE60: fmul    st, st(2)
0x96EE62: fstp    dword ptr [ebx+34h]
0x96EE65: fsubr   [esp+64h+var_40]
0x96EE69: fmulp   st(1), st
0x96EE6B: fstp    dword ptr [ebx+38h]
0x96EE6E: pop     ebx
0x96EE6F: add     esp, 60h
0x96EE72: retn    8
0x96EE75: fld1
0x96EE77: fst     [esp+6Ch+var_3C]
0x96EE7B: fldz
0x96EE7D: mov     eax, [esp+6Ch+var_3C]
0x96EE81: fst     [esp+6Ch+var_38]
0x96EE85: mov     [ebx+0Ch], eax
0x96EE88: fst     [esp+6Ch+var_34]
0x96EE8C: mov     ecx, [esp+6Ch+var_38]
0x96EE90: fst     [esp+6Ch+var_3C]
0x96EE94: mov     edx, [esp+6Ch+var_34]
0x96EE98: fst     [esp+6Ch+var_34]
0x96EE9C: mov     eax, [esp+6Ch+var_3C]
0x96EEA0: fxch    st(1)
0x96EEA2: fst     [esp+6Ch+var_38]
0x96EEA6: mov     [ebx+10h], ecx
0x96EEA9: fxch    st(1)
0x96EEAB: mov     [ebx+14h], edx
0x96EEAE: mov     ecx, [esp+6Ch+var_38]
0x96EEB2: fst     [esp+6Ch+var_3C]
0x96EEB6: mov     edx, [esp+6Ch+var_34]
0x96EEBA: fst     [esp+6Ch+var_38]
0x96EEBE: fxch    st(1)
0x96EEC0: mov     [ebx+18h], eax
0x96EEC3: fstp    [esp+6Ch+var_34]
0x96EEC7: mov     eax, [esp+6Ch+var_3C]
0x96EECB: fxch    st(4)
0x96EECD: mov     [ebx+24h], eax
0x96EED0: fsubrp  st(1), st
0x96EED2: mov     [ebx+1Ch], ecx
0x96EED5: fld     qword ptr ds:0A2FAA0h
0x96EEDB: mov     ecx, [esp+6Ch+var_38]
0x96EEDF: mov     [ebx+20h], edx
0x96EEE2: mov     edx, [esp+6Ch+var_34]
0x96EEE6: mov     [ebx+28h], ecx
0x96EEE9: fmul    st(1), st
0x96EEEB: mov     [ebx+2Ch], edx
0x96EEEE: fxch    st(1)
0x96EEF0: fstp    [esp+6Ch+arg_0]
0x96EEF4: fld     [esp+6Ch+arg_4]
0x96EEF8: fsubp   st(3), st
0x96EEFA: fmul    st(2), st
0x96EEFC: fxch    st(2)
0x96EEFE: fstp    [esp+6Ch+arg_4]
0x96EF02: fsub    [esp+6Ch+var_60]
0x96EF06: fmulp   st(1), st
0x96EF08: fstp    [esp+6Ch+var_58]
0x96EF0C: fcom    [esp+6Ch+arg_0]
0x96EF10: fnstsw  ax
0x96EF12: fld     dword ptr ds:0A2FAACh
0x96EF18: test    ah, 1
0x96EF1B: jnz     short loc_96EF21
0x96EF1D: fst     [esp+6Ch+arg_0]
0x96EF21: fxch    st(1)
0x96EF23: fcom    [esp+6Ch+arg_4]
0x96EF27: fnstsw  ax
0x96EF29: test    ah, 1
0x96EF2C: jnz     short loc_96EF36
0x96EF2E: fxch    st(1)
0x96EF30: fst     [esp+6Ch+arg_4]
0x96EF34: fxch    st(1)
0x96EF36: fcomp   [esp+6Ch+var_58]
0x96EF3A: fnstsw  ax
0x96EF3C: test    ah, 1
0x96EF3F: jnz     short loc_96EF47
0x96EF41: fstp    [esp+6Ch+var_58]
0x96EF45: jmp     short loc_96EF49
0x96EF47: fstp    st
0x96EF49: fld     [esp+6Ch+arg_0]
0x96EF4D: pop     esi
0x96EF4E: fstp    dword ptr [ebx+30h]
0x96EF51: pop     ebp
0x96EF52: fld     [esp+64h+arg_4]
0x96EF56: fstp    dword ptr [ebx+34h]
0x96EF59: fld     [esp+64h+var_58]
0x96EF5D: fstp    dword ptr [ebx+38h]
0x96EF60: pop     ebx
0x96EF61: add     esp, 60h
0x96EF64: retn    8
