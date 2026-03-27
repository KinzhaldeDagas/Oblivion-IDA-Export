0x9726E0: sub     esp, 5Ch
0x9726E3: push    ebx
0x9726E4: push    ebp
0x9726E5: mov     ebp, [esp+64h+arg_0]
0x9726E9: push    esi
0x9726EA: mov     esi, [esp+68h+arg_4]
0x9726EE: fld     dword ptr [esi]
0x9726F0: push    edi
0x9726F1: fsub    dword ptr [ebp+0]
0x9726F4: lea     edi, [esi+0Ch]
0x9726F7: lea     ebx, [esi+18h]
0x9726FA: fstp    [esp+6Ch+var_24]
0x9726FE: fld     dword ptr [esi+4]
0x972701: fsub    dword ptr [ebp+4]
0x972704: fstp    [esp+6Ch+var_20]
0x972708: fld     dword ptr [esi+8]
0x97270B: fsub    dword ptr [ebp+8]
0x97270E: fstp    [esp+6Ch+var_1C]
0x972712: fld     dword ptr [ebp+10h]
0x972715: fmul    dword ptr [ebp+10h]
0x972718: fld     dword ptr [ebp+0Ch]
0x97271B: fmul    dword ptr [ebp+0Ch]
0x97271E: faddp   st(1), st
0x972720: fld     dword ptr [ebp+14h]
0x972723: fmul    dword ptr [ebp+14h]
0x972726: faddp   st(1), st
0x972728: fstp    [esp+6Ch+var_44]
0x97272C: fld     dword ptr [edi+4]
0x97272F: fmul    dword ptr [ebp+10h]
0x972732: fld     dword ptr [edi]
0x972734: fmul    dword ptr [ebp+0Ch]
0x972737: faddp   st(1), st
0x972739: fld     dword ptr [edi+8]
0x97273C: fmul    dword ptr [ebp+14h]
0x97273F: faddp   st(1), st
0x972741: fstp    [esp+6Ch+arg_4]
0x972745: fld     [esp+6Ch+arg_4]
0x972749: fchs
0x97274B: fstp    [esp+6Ch+var_48]
0x97274F: fld     dword ptr [ebx+4]
0x972752: fmul    dword ptr [ebp+10h]
0x972755: fld     dword ptr [ebx]
0x972757: fmul    dword ptr [ebp+0Ch]
0x97275A: faddp   st(1), st
0x97275C: fld     dword ptr [ebx+8]
0x97275F: fmul    dword ptr [ebp+14h]
0x972762: faddp   st(1), st
0x972764: fstp    [esp+6Ch+arg_4]
0x972768: fld     [esp+6Ch+arg_4]
0x97276C: fchs
0x97276E: fstp    [esp+6Ch+var_5C]
0x972772: fld     dword ptr [edi+4]
0x972775: fmul    dword ptr [edi+4]
0x972778: fld     dword ptr [edi]
0x97277A: fmul    dword ptr [edi]
0x97277C: faddp   st(1), st
0x97277E: fld     dword ptr [edi+8]
0x972781: fmul    dword ptr [edi+8]
0x972784: faddp   st(1), st
0x972786: fstp    [esp+6Ch+var_58]
0x97278A: fld     dword ptr [ebx+4]
0x97278D: fmul    dword ptr [edi+4]
0x972790: fld     dword ptr [edi]
0x972792: fmul    dword ptr [ebx]
0x972794: faddp   st(1), st
0x972796: fld     dword ptr [ebx+8]
0x972799: fmul    dword ptr [edi+8]
0x97279C: faddp   st(1), st
0x97279E: fstp    [esp+6Ch+var_50]
0x9727A2: fld     dword ptr [ebx+4]
0x9727A5: fmul    dword ptr [ebx+4]
0x9727A8: fld     dword ptr [ebx]
0x9727AA: fmul    dword ptr [ebx]
0x9727AC: faddp   st(1), st
0x9727AE: fld     dword ptr [ebx+8]
0x9727B1: fmul    dword ptr [ebx+8]
0x9727B4: faddp   st(1), st
0x9727B6: fstp    [esp+6Ch+var_54]
0x9727BA: fld     dword ptr [ebx+8]
0x9727BD: fmul    dword ptr [edi+4]
0x9727C0: fld     dword ptr [ebx+4]
0x9727C3: fmul    dword ptr [edi+8]
0x9727C6: fsubp   st(1), st
0x9727C8: fstp    [esp+6Ch+var_C]
0x9727CC: fld     dword ptr [ebx]
0x9727CE: fmul    dword ptr [edi+8]
0x9727D1: fld     dword ptr [ebx+8]
0x9727D4: fmul    dword ptr [edi]
0x9727D6: fsubp   st(1), st
0x9727D8: fstp    [esp+6Ch+var_8]
0x9727DC: fld     dword ptr [edi]
0x9727DE: fmul    dword ptr [ebx+4]
0x9727E1: fld     dword ptr [ebx]
0x9727E3: fmul    dword ptr [edi+4]
0x9727E6: fsubp   st(1), st
0x9727E8: fstp    [esp+6Ch+var_4]
0x9727EC: fld     dword ptr [ebp+10h]
0x9727EF: fstp    [esp+6Ch+var_38]
0x9727F3: fld     dword ptr [ebp+0Ch]
0x9727F6: fstp    [esp+6Ch+var_40]
0x9727FA: fld     dword ptr [ebp+14h]
0x9727FD: fstp    [esp+6Ch+var_30]
0x972801: fld     [esp+6Ch+var_8]
0x972805: fld     st
0x972807: fld     [esp+6Ch+var_C]
0x97280B: fld     st
0x97280D: fld     [esp+6Ch+var_4]
0x972811: fld     st
0x972813: fld     dword ptr [ebp+10h]
0x972816: fmulp   st(6), st
0x972818: fld     dword ptr [ebp+0Ch]
0x97281B: fmulp   st(4), st
0x97281D: fxch    st(5)
0x97281F: faddp   st(3), st
0x972821: fmul    dword ptr [ebp+14h]
0x972824: faddp   st(2), st
0x972826: fxch    st(1)
0x972828: fstp    [esp+6Ch+arg_4]
0x97282C: fld     [esp+6Ch+arg_4]
0x972830: fabs
0x972832: fstp    [esp+6Ch+arg_4]
0x972836: fld     [esp+6Ch+arg_4]
0x97283A: fstp    [esp+6Ch+var_4C]
0x97283E: fmul    st, st
0x972840: fld     st(1)
0x972842: fmulp   st(2), st
0x972844: faddp   st(1), st
0x972846: fld     st(1)
0x972848: fmulp   st(2), st
0x97284A: faddp   st(1), st
0x97284C: fstp    [esp+6Ch+arg_4]
0x972850: fld     [esp+6Ch+arg_4]
0x972854: call    __CIsqrt
0x972859: fstp    [esp+6Ch+arg_4]
0x97285D: fld     [esp+6Ch+arg_4]
0x972861: fstp    [esp+6Ch+arg_0]
0x972865: fld     [esp+6Ch+var_40]
0x972869: fmul    st, st
0x97286B: fld     [esp+6Ch+var_38]
0x97286F: fmul    st, st
0x972871: faddp   st(1), st
0x972873: fld     [esp+6Ch+var_30]
0x972877: fmul    st, st
0x972879: faddp   st(1), st
0x97287B: fstp    [esp+6Ch+arg_4]
0x97287F: fld     [esp+6Ch+arg_4]
0x972883: call    __CIsqrt
0x972888: fstp    [esp+6Ch+arg_4]
0x97288C: fld     [esp+6Ch+arg_4]
0x972890: fmul    [esp+6Ch+arg_0]
0x972894: fmul    qword ptr ds:0AA3AF8h
0x97289A: fstp    [esp+6Ch+arg_4]
0x97289E: fld     [esp+6Ch+arg_4]
0x9728A2: fld     [esp+6Ch+var_4C]
0x9728A6: fcompp
0x9728A8: fnstsw  ax
0x9728AA: test    ah, 41h
0x9728AD: jnz     loc_97396D
0x9728B3: fld     [esp+6Ch+var_50]
0x9728B7: fld     st
0x9728B9: fld     [esp+6Ch+var_54]
0x9728BD: fld     st
0x9728BF: fld     [esp+6Ch+var_58]
0x9728C3: fld     st
0x9728C5: fmulp   st(2), st
0x9728C7: fld     st(3)
0x9728C9: fmulp   st(4), st
0x9728CB: fxch    st(1)
0x9728CD: fsubrp  st(3), st
0x9728CF: fxch    st(2)
0x9728D1: fstp    [esp+6Ch+var_58]
0x9728D5: fld     st(2)
0x9728D7: fld     [esp+6Ch+var_5C]
0x9728DB: fld     st
0x9728DD: fmulp   st(2), st
0x9728DF: fld     st(2)
0x9728E1: fld     [esp+6Ch+var_48]
0x9728E5: fld     st
0x9728E7: fmulp   st(2), st
0x9728E9: fxch    st(3)
0x9728EB: fsubrp  st(1), st
0x9728ED: fstp    [esp+6Ch+arg_0]
0x9728F1: fld     st(4)
0x9728F3: fmul    st, st(2)
0x9728F5: fld     st(4)
0x9728F7: fmul    st, st(2)
0x9728F9: fsubp   st(1), st
0x9728FB: fstp    [esp+6Ch+var_54]
0x9728FF: fld     st
0x972901: fmul    st, st(2)
0x972903: fld     [esp+6Ch+var_44]
0x972907: fld     st
0x972909: fmulp   st(7), st
0x97290B: fxch    st(1)
0x97290D: fsubrp  st(6), st
0x97290F: fxch    st(5)
0x972911: fstp    [esp+6Ch+var_4C]
0x972915: fld     [esp+6Ch+arg_0]
0x972919: fmul    st, st(2)
0x97291B: fld     [esp+6Ch+var_58]
0x97291F: fmul    st, st(6)
0x972921: faddp   st(1), st
0x972923: fld     [esp+6Ch+var_54]
0x972927: fmul    st, st(2)
0x972929: faddp   st(1), st
0x97292B: fstp    [esp+6Ch+arg_4]
0x97292F: fld     [esp+6Ch+arg_4]
0x972933: fld1
0x972935: fdivrp  st(1), st
0x972937: fstp    [esp+6Ch+arg_4]
0x97293B: fld     dword ptr [ebp+10h]
0x97293E: fmul    [esp+6Ch+var_20]
0x972942: fld     dword ptr [ebp+0Ch]
0x972945: fmul    [esp+6Ch+var_24]
0x972949: faddp   st(1), st
0x97294B: fld     dword ptr [ebp+14h]
0x97294E: fmul    [esp+6Ch+var_1C]
0x972952: faddp   st(1), st
0x972954: fstp    [esp+6Ch+var_44]
0x972958: fld     [esp+6Ch+var_44]
0x97295C: fchs
0x97295E: fchs
0x972960: fmul    [esp+6Ch+arg_4]
0x972964: fstp    [esp+6Ch+var_50]
0x972968: fld     dword ptr [edi+4]
0x97296B: fmul    [esp+6Ch+var_20]
0x97296F: fld     dword ptr [edi]
0x972971: fmul    [esp+6Ch+var_24]
0x972975: faddp   st(1), st
0x972977: fld     dword ptr [edi+8]
0x97297A: fmul    [esp+6Ch+var_1C]
0x97297E: faddp   st(1), st
0x972980: fstp    [esp+6Ch+var_44]
0x972984: fld     [esp+6Ch+var_44]
0x972988: fchs
0x97298A: fmul    [esp+6Ch+arg_4]
0x97298E: fstp    [esp+6Ch+var_5C]
0x972992: fld     dword ptr [ebx+4]
0x972995: fmul    [esp+6Ch+var_20]
0x972999: fld     dword ptr [ebx]
0x97299B: mov     ecx, [esp+6Ch+arg_8]
0x97299F: fmul    [esp+6Ch+var_24]
0x9729A3: mov     eax, [esp+6Ch+arg_C]
0x9729A7: mov     edx, [esp+6Ch+arg_10]
0x9729AE: faddp   st(1), st
0x9729B0: fld     dword ptr [ebx+8]
0x9729B3: fmul    [esp+6Ch+var_1C]
0x9729B7: faddp   st(1), st
0x9729B9: fstp    [esp+6Ch+var_44]
0x9729BD: fld     [esp+6Ch+var_44]
0x9729C1: fchs
0x9729C3: fmul    [esp+6Ch+arg_4]
0x9729C7: fstp    [esp+6Ch+arg_4]
0x9729CB: fld     [esp+6Ch+var_5C]
0x9729CF: fmul    [esp+6Ch+arg_0]
0x9729D3: fld     [esp+6Ch+var_50]
0x9729D7: fmul    [esp+6Ch+var_58]
0x9729DB: faddp   st(1), st
0x9729DD: fld     [esp+6Ch+arg_4]
0x9729E1: fmul    [esp+6Ch+var_54]
0x9729E5: faddp   st(1), st
0x9729E7: fstp    dword ptr [ecx]
0x9729E9: fld     st(4)
0x9729EB: fmulp   st(3), st
0x9729ED: fmul    st, st
0x9729EF: fsubp   st(2), st
0x9729F1: fxch    st(1)
0x9729F3: fstp    [esp+6Ch+var_44]
0x9729F7: fld     [esp+6Ch+var_44]
0x9729FB: fld     [esp+6Ch+var_5C]
0x9729FF: fld     st
0x972A01: fmulp   st(2), st
0x972A03: fld     [esp+6Ch+var_50]
0x972A07: fld     st
0x972A09: fmul    [esp+6Ch+arg_0]
0x972A0D: faddp   st(3), st
0x972A0F: fld     [esp+6Ch+arg_4]
0x972A13: fmul    [esp+6Ch+var_4C]
0x972A17: faddp   st(3), st
0x972A19: fxch    st(2)
0x972A1B: fstp    dword ptr [eax]
0x972A1D: fxch    st(3)
0x972A1F: fmulp   st(4), st
0x972A21: fld     st(1)
0x972A23: fmulp   st(2), st
0x972A25: fxch    st(3)
0x972A27: fsubrp  st(1), st
0x972A29: fstp    [esp+6Ch+arg_0]
0x972A2D: fld     [esp+6Ch+arg_0]
0x972A31: fmul    [esp+6Ch+arg_4]
0x972A35: fld     [esp+6Ch+var_4C]
0x972A39: fmulp   st(2), st
0x972A3B: fld     [esp+6Ch+var_54]
0x972A3F: fmulp   st(3), st
0x972A41: fxch    st(1)
0x972A43: faddp   st(2), st
0x972A45: faddp   st(1), st
0x972A47: fstp    [esp+6Ch+arg_4]
0x972A4B: fld     [esp+6Ch+arg_4]
0x972A4F: fst     dword ptr [edx]
0x972A51: fldz
0x972A53: fcom    dword ptr [ecx]
0x972A55: fnstsw  ax
0x972A57: test    ah, 41h
0x972A5A: jnz     loc_973016
0x972A60: mov     eax, [esp+6Ch+arg_C]
0x972A64: fld     dword ptr [eax]
0x972A66: fadd    st, st(2)
0x972A68: fcomp   qword ptr ds:0A2F928h
0x972A6E: fnstsw  ax
0x972A70: test    ah, 41h
0x972A73: mov     eax, [esp+6Ch+arg_C]
0x972A77: fcom    dword ptr [eax]
0x972A79: fnstsw  ax
0x972A7B: jp      loc_972D0F
0x972A81: fcompp
0x972A83: test    ah, 41h
0x972A86: fnstsw  ax
0x972A88: jnz     loc_972C32
0x972A8E: test    ah, 41h
0x972A91: mov     eax, [esi]
0x972A93: mov     [esp+6Ch+var_24], eax
0x972A97: mov     eax, [esi+4]
0x972A9A: mov     [esp+6Ch+var_20], eax
0x972A9E: mov     eax, [esi+8]
0x972AA1: mov     [esp+6Ch+var_1C], eax
0x972AA5: mov     eax, [ebx]
0x972AA7: push    edx
0x972AA8: push    ecx
0x972AA9: mov     [esp+74h+var_18], eax
0x972AAD: mov     eax, [ebx+4]
0x972AB0: lea     ecx, [esp+74h+var_24]
0x972AB4: mov     [esp+74h+var_14], eax
0x972AB8: mov     eax, [ebx+8]
0x972ABB: push    ecx
0x972ABC: push    ebp
0x972ABD: mov     [esp+7Ch+var_10], eax
0x972AC1: jnz     loc_972BBD
0x972AC7: call    sub_96FCD0
0x972ACC: fstp    [esp+7Ch+arg_4]
0x972AD3: fldz
0x972AD5: mov     ebx, [esp+7Ch+arg_C]
0x972ADC: fstp    dword ptr [ebx]
0x972ADE: mov     edx, [esi]
0x972AE0: mov     eax, [esi+4]
0x972AE3: mov     ecx, [esi+8]
0x972AE6: mov     [esp+7Ch+var_24], edx
0x972AEA: mov     edx, [edi]
0x972AEC: mov     [esp+7Ch+var_20], eax
0x972AF0: mov     eax, [edi+4]
0x972AF3: mov     [esp+7Ch+var_1C], ecx
0x972AF7: mov     ecx, [edi+8]
0x972AFA: mov     [esp+7Ch+var_18], edx
0x972AFE: lea     edx, [esp+7Ch+var_5C]
0x972B02: push    edx
0x972B03: mov     [esp+80h+var_14], eax
0x972B07: lea     eax, [esp+80h+var_54]
0x972B0B: mov     [esp+80h+var_10], ecx
0x972B0F: push    eax
0x972B10: lea     ecx, [esp+84h+var_24]
0x972B14: push    ecx
0x972B15: push    ebp
0x972B16: call    sub_96FCD0
0x972B1B: fstp    [esp+8Ch+arg_0]
0x972B22: fldz
0x972B24: add     esp, 20h
0x972B27: fst     [esp+6Ch+var_58]
0x972B2B: fld     [esp+6Ch+arg_0]
0x972B2F: fld     [esp+6Ch+arg_4]
0x972B33: fcomp   st(1)
0x972B35: fnstsw  ax
0x972B37: test    ah, 41h
0x972B3A: jnz     short loc_972B5B
0x972B3C: mov     edx, [esp+6Ch+arg_8]
0x972B40: fstp    [esp+6Ch+arg_4]
0x972B44: fld     [esp+6Ch+var_54]
0x972B48: mov     eax, [esp+6Ch+arg_10]
0x972B4F: fstp    dword ptr [edx]
0x972B51: fld     [esp+6Ch+var_5C]
0x972B55: fstp    dword ptr [ebx]
0x972B57: fstp    dword ptr [eax]
0x972B59: jmp     short loc_972B5F
0x972B5B: fstp    st
0x972B5D: fstp    st
0x972B5F: lea     ecx, [esp+6Ch+var_58]
0x972B63: push    ecx
0x972B64: lea     edx, [esp+70h+var_5C]
0x972B68: push    edx
0x972B69: push    esi
0x972B6A: push    ebp
0x972B6B: call    sub_975DF0
0x972B70: fstp    [esp+7Ch+arg_0]
0x972B77: fld     [esp+7Ch+arg_0]
0x972B7E: add     esp, 10h
0x972B81: fld     [esp+6Ch+arg_4]
0x972B85: fcomp   st(1)
0x972B87: fnstsw  ax
0x972B89: test    ah, 41h
0x972B8C: jnz     loc_97395F
0x972B92: fstp    [esp+6Ch+arg_4]
0x972B96: fldz
0x972B98: mov     eax, [esp+6Ch+arg_8]
0x972B9C: mov     ecx, [esp+6Ch+arg_10]
0x972BA3: fstp    dword ptr [eax]
0x972BA5: fld     [esp+6Ch+var_5C]
0x972BA9: pop     edi
0x972BAA: fstp    dword ptr [ebx]
0x972BAC: pop     esi
0x972BAD: fld     [esp+64h+var_58]
0x972BB1: pop     ebp
0x972BB2: fstp    dword ptr [ecx]
0x972BB4: pop     ebx
0x972BB5: fld     [esp+5Ch+arg_4]
0x972BB9: add     esp, 5Ch
0x972BBC: retn
0x972BBD: call    sub_96FCD0
0x972BC2: fstp    [esp+7Ch+arg_4]
0x972BC9: fldz
0x972BCB: mov     edi, [esp+7Ch+arg_C]
0x972BD2: lea     edx, [esp+7Ch+var_58]
0x972BD6: fstp    dword ptr [edi]
0x972BD8: push    edx
0x972BD9: lea     eax, [esp+80h+var_5C]
0x972BDD: push    eax
0x972BDE: push    esi
0x972BDF: push    ebp
0x972BE0: call    sub_975DF0
0x972BE5: fstp    [esp+8Ch+arg_0]
0x972BEC: fld     [esp+8Ch+arg_0]
0x972BF3: add     esp, 20h
0x972BF6: fld     [esp+6Ch+arg_4]
0x972BFA: fcomp   st(1)
0x972BFC: fnstsw  ax
0x972BFE: test    ah, 41h
0x972C01: jnz     loc_97395F
0x972C07: fstp    [esp+6Ch+arg_4]
0x972C0B: fldz
0x972C0D: mov     ecx, [esp+6Ch+arg_8]
0x972C11: mov     edx, [esp+6Ch+arg_10]
0x972C18: fstp    dword ptr [ecx]
0x972C1A: fld     [esp+6Ch+var_5C]
0x972C1E: fstp    dword ptr [edi]
0x972C20: pop     edi
0x972C21: fld     [esp+68h+var_58]
0x972C25: pop     esi
0x972C26: pop     ebp
0x972C27: fstp    dword ptr [edx]
0x972C29: fld     [esp+60h+arg_4]
0x972C2D: pop     ebx
0x972C2E: add     esp, 5Ch
0x972C31: retn
0x972C32: test    ah, 41h
0x972C35: jnz     loc_972CE1
0x972C3B: mov     eax, [esi]
0x972C3D: mov     edx, [esi+4]
0x972C40: mov     [esp+6Ch+var_24], eax
0x972C44: mov     eax, [esi+8]
0x972C47: mov     [esp+6Ch+var_1C], eax
0x972C4B: mov     eax, [edi+4]
0x972C4E: mov     [esp+6Ch+var_14], eax
0x972C52: mov     eax, [esp+6Ch+arg_C]
0x972C56: push    eax
0x972C57: push    ecx
0x972C58: mov     [esp+74h+var_20], edx
0x972C5C: mov     edx, [edi]
0x972C5E: lea     ecx, [esp+74h+var_24]
0x972C62: mov     [esp+74h+var_18], edx
0x972C66: mov     edx, [edi+8]
0x972C69: push    ecx
0x972C6A: push    ebp
0x972C6B: mov     [esp+7Ch+var_10], edx
0x972C6F: call    sub_96FCD0
0x972C74: fstp    [esp+7Ch+arg_4]
0x972C7B: fldz
0x972C7D: mov     edi, [esp+7Ch+arg_10]
0x972C84: lea     edx, [esp+7Ch+var_58]
0x972C88: fstp    dword ptr [edi]
0x972C8A: push    edx
0x972C8B: lea     eax, [esp+80h+var_5C]
0x972C8F: push    eax
0x972C90: push    esi
0x972C91: push    ebp
0x972C92: call    sub_975DF0
0x972C97: fstp    [esp+8Ch+arg_0]
0x972C9E: fld     [esp+8Ch+arg_0]
0x972CA5: add     esp, 20h
0x972CA8: fld     [esp+6Ch+arg_4]
0x972CAC: fcomp   st(1)
0x972CAE: fnstsw  ax
0x972CB0: test    ah, 41h
0x972CB3: jnz     loc_97395F
0x972CB9: fstp    [esp+6Ch+arg_4]
0x972CBD: fldz
0x972CBF: mov     ecx, [esp+6Ch+arg_8]
0x972CC3: mov     edx, [esp+6Ch+arg_C]
0x972CC7: fstp    dword ptr [ecx]
0x972CC9: fld     [esp+6Ch+var_5C]
0x972CCD: fstp    dword ptr [edx]
0x972CCF: fld     [esp+6Ch+var_58]
0x972CD3: fstp    dword ptr [edi]
0x972CD5: pop     edi
0x972CD6: fld     [esp+68h+arg_4]
0x972CDA: pop     esi
0x972CDB: pop     ebp
0x972CDC: pop     ebx
0x972CDD: add     esp, 5Ch
0x972CE0: retn
0x972CE1: mov     eax, [esp+6Ch+arg_C]
0x972CE5: push    edx
0x972CE6: push    eax
0x972CE7: push    esi
0x972CE8: push    ebp
0x972CE9: call    sub_975DF0
0x972CEE: fstp    [esp+7Ch+arg_4]
0x972CF5: fldz
0x972CF7: mov     ecx, [esp+7Ch+arg_8]
0x972CFE: add     esp, 10h
0x972D01: fstp    dword ptr [ecx]
0x972D03: fld     [esp+6Ch+arg_4]
0x972D07: pop     edi
0x972D08: pop     esi
0x972D09: pop     ebp
0x972D0A: pop     ebx
0x972D0B: add     esp, 5Ch
0x972D0E: retn
0x972D0F: test    ah, 41h
0x972D12: jnz     loc_972DEE
0x972D18: mov     eax, [esi]
0x972D1A: fstp    st
0x972D1C: mov     [esp+6Ch+var_24], eax
0x972D20: fstp    st
0x972D22: mov     eax, [esi+4]
0x972D25: mov     [esp+6Ch+var_20], eax
0x972D29: mov     eax, [esi+8]
0x972D2C: mov     [esp+6Ch+var_1C], eax
0x972D30: mov     eax, [ebx]
0x972D32: push    edx
0x972D33: push    ecx
0x972D34: mov     [esp+74h+var_18], eax
0x972D38: mov     eax, [ebx+4]
0x972D3B: lea     ecx, [esp+74h+var_24]
0x972D3F: mov     [esp+74h+var_14], eax
0x972D43: mov     eax, [ebx+8]
0x972D46: push    ecx
0x972D47: push    ebp
0x972D48: mov     [esp+7Ch+var_10], eax
0x972D4C: call    sub_96FCD0
0x972D51: fstp    [esp+7Ch+arg_4]
0x972D58: fldz
0x972D5A: mov     edx, [esp+7Ch+arg_C]
0x972D61: fstp    dword ptr [edx]
0x972D63: fld     dword ptr [esi]
0x972D65: fadd    dword ptr [edi]
0x972D67: fstp    [esp+7Ch+var_C]
0x972D6B: mov     eax, [esp+7Ch+var_C]
0x972D6F: fld     dword ptr [edi+4]
0x972D72: mov     [esp+7Ch+var_24], eax
0x972D76: fadd    dword ptr [esi+4]
0x972D79: fstp    [esp+7Ch+var_8]
0x972D7D: mov     ecx, [esp+7Ch+var_8]
0x972D81: fld     dword ptr [edi+8]
0x972D84: mov     [esp+7Ch+var_20], ecx
0x972D88: fadd    dword ptr [esi+8]
0x972D8B: fstp    [esp+7Ch+var_4]
0x972D8F: mov     edx, [esp+7Ch+var_4]
0x972D93: fld     dword ptr [ebx]
0x972D95: mov     [esp+7Ch+var_1C], edx
0x972D99: fsub    dword ptr [edi]
0x972D9B: fstp    [esp+7Ch+var_C]
0x972D9F: mov     eax, [esp+7Ch+var_C]
0x972DA3: fld     dword ptr [ebx+4]
0x972DA6: mov     [esp+7Ch+var_18], eax
0x972DAA: fsub    dword ptr [edi+4]
0x972DAD: lea     eax, [esp+7Ch+var_58]
0x972DB1: push    eax
0x972DB2: fstp    [esp+80h+var_8]
0x972DB6: mov     ecx, [esp+80h+var_8]
0x972DBA: fld     dword ptr [ebx+8]
0x972DBD: mov     [esp+80h+var_14], ecx
0x972DC1: fsub    dword ptr [edi+8]
0x972DC4: lea     ecx, [esp+80h+var_54]
0x972DC8: push    ecx
0x972DC9: fstp    [esp+84h+var_4]
0x972DD0: mov     edx, [esp+84h+var_4]
0x972DD7: mov     [esp+84h+var_10], edx
0x972DDB: lea     edx, [esp+84h+var_24]
0x972DDF: push    edx
0x972DE0: push    ebp
0x972DE1: call    sub_96FCD0
0x972DE6: add     esp, 20h
0x972DE9: jmp     loc_972EA3
0x972DEE: fcompp
0x972DF0: fnstsw  ax
0x972DF2: test    ah, 41h
0x972DF5: jnz     loc_972F4F
0x972DFB: mov     edx, [esi]
0x972DFD: mov     eax, [esi+4]
0x972E00: mov     [esp+6Ch+var_24], edx
0x972E04: mov     edx, [esi+8]
0x972E07: mov     [esp+6Ch+var_20], eax
0x972E0B: mov     eax, [edi]
0x972E0D: mov     [esp+6Ch+var_1C], edx
0x972E11: mov     edx, [edi+4]
0x972E14: mov     [esp+6Ch+var_18], eax
0x972E18: mov     eax, [edi+8]
0x972E1B: mov     [esp+6Ch+var_14], edx
0x972E1F: mov     edx, [esp+6Ch+arg_C]
0x972E23: push    edx
0x972E24: mov     [esp+70h+var_10], eax
0x972E28: push    ecx
0x972E29: lea     eax, [esp+74h+var_24]
0x972E2D: push    eax
0x972E2E: push    ebp
0x972E2F: call    sub_96FCD0
0x972E34: fstp    [esp+7Ch+arg_4]
0x972E3B: fldz
0x972E3D: mov     ecx, [esp+7Ch+arg_10]
0x972E44: add     esp, 10h
0x972E47: fstp    dword ptr [ecx]
0x972E49: push    edi
0x972E4A: lea     edx, [esp+70h+var_C]
0x972E4E: push    edx
0x972E4F: mov     ecx, esi
0x972E51: call    sub_47D9B0
0x972E56: mov     ecx, [eax]
0x972E58: mov     [esp+6Ch+var_24], ecx
0x972E5C: mov     edx, [eax+4]
0x972E5F: push    edi
0x972E60: lea     ecx, [esp+70h+var_C]
0x972E64: mov     [esp+70h+var_20], edx
0x972E68: mov     eax, [eax+8]
0x972E6B: push    ecx
0x972E6C: mov     ecx, ebx
0x972E6E: mov     [esp+74h+var_1C], eax
0x972E72: call    sub_4121A0
0x972E77: mov     edx, [eax]
0x972E79: mov     [esp+6Ch+var_18], edx
0x972E7D: mov     ecx, [eax+4]
0x972E80: mov     [esp+6Ch+var_14], ecx
0x972E84: mov     edx, [eax+8]
0x972E87: lea     eax, [esp+6Ch+var_58]
0x972E8B: push    eax
0x972E8C: lea     ecx, [esp+70h+var_54]
0x972E90: mov     [esp+70h+var_10], edx
0x972E94: push    ecx
0x972E95: lea     edx, [esp+74h+var_24]
0x972E99: push    edx
0x972E9A: push    ebp
0x972E9B: call    sub_96FCD0
0x972EA0: add     esp, 10h
0x972EA3: fstp    [esp+6Ch+arg_0]
0x972EA7: fld     [esp+6Ch+var_58]
0x972EAB: fld     st
0x972EAD: fld1
0x972EAF: fsubrp  st(1), st
0x972EB1: fstp    [esp+6Ch+var_5C]
0x972EB5: fld     [esp+6Ch+arg_0]
0x972EB9: fld     [esp+6Ch+arg_4]
0x972EBD: fcomp   st(1)
0x972EBF: fnstsw  ax
0x972EC1: test    ah, 41h
0x972EC4: jnz     short loc_972EE9
0x972EC6: mov     eax, [esp+6Ch+arg_8]
0x972ECA: fstp    [esp+6Ch+arg_4]
0x972ECE: fld     [esp+6Ch+var_54]
0x972ED2: mov     ecx, [esp+6Ch+arg_C]
0x972ED6: mov     edx, [esp+6Ch+arg_10]
0x972EDD: fstp    dword ptr [eax]
0x972EDF: fld     [esp+6Ch+var_5C]
0x972EE3: fstp    dword ptr [ecx]
0x972EE5: fstp    dword ptr [edx]
0x972EE7: jmp     short loc_972EED
0x972EE9: fstp    st(1)
0x972EEB: fstp    st
0x972EED: lea     eax, [esp+6Ch+var_58]
0x972EF1: push    eax
0x972EF2: lea     ecx, [esp+70h+var_5C]
0x972EF6: push    ecx
0x972EF7: push    esi
0x972EF8: push    ebp
0x972EF9: call    sub_975DF0
0x972EFE: fstp    [esp+7Ch+arg_0]
0x972F05: fld     [esp+7Ch+arg_0]
0x972F0C: add     esp, 10h
0x972F0F: fld     [esp+6Ch+arg_4]
0x972F13: fcomp   st(1)
0x972F15: fnstsw  ax
0x972F17: test    ah, 41h
0x972F1A: jnz     loc_97395F
0x972F20: mov     edx, [esp+6Ch+arg_8]
0x972F24: fstp    [esp+6Ch+arg_4]
0x972F28: fldz
0x972F2A: mov     eax, [esp+6Ch+arg_C]
0x972F2E: mov     ecx, [esp+6Ch+arg_10]
0x972F35: fstp    dword ptr [edx]
0x972F37: fld     [esp+6Ch+var_5C]
0x972F3B: pop     edi
0x972F3C: fstp    dword ptr [eax]
0x972F3E: pop     esi
0x972F3F: fld     [esp+64h+var_58]
0x972F43: pop     ebp
0x972F44: fstp    dword ptr [ecx]
0x972F46: pop     ebx
0x972F47: fld     [esp+5Ch+arg_4]
0x972F4B: add     esp, 5Ch
0x972F4E: retn
0x972F4F: push    edi
0x972F50: lea     edx, [esp+70h+var_C]
0x972F54: push    edx
0x972F55: mov     ecx, esi
0x972F57: call    sub_47D9B0
0x972F5C: mov     ecx, [eax]
0x972F5E: mov     [esp+6Ch+var_24], ecx
0x972F62: mov     edx, [eax+4]
0x972F65: push    edi
0x972F66: lea     ecx, [esp+70h+var_C]
0x972F6A: mov     [esp+70h+var_20], edx
0x972F6E: mov     eax, [eax+8]
0x972F71: push    ecx
0x972F72: mov     ecx, ebx
0x972F74: mov     [esp+74h+var_1C], eax
0x972F78: call    sub_4121A0
0x972F7D: mov     edx, [eax]
0x972F7F: mov     edi, [esp+6Ch+arg_10]
0x972F86: mov     ebx, [esp+6Ch+arg_8]
0x972F8A: mov     [esp+6Ch+var_18], edx
0x972F8E: mov     ecx, [eax+4]
0x972F91: push    edi
0x972F92: mov     [esp+70h+var_14], ecx
0x972F96: mov     edx, [eax+8]
0x972F99: push    ebx
0x972F9A: lea     eax, [esp+74h+var_24]
0x972F9E: push    eax
0x972F9F: push    ebp
0x972FA0: mov     [esp+7Ch+var_10], edx
0x972FA4: call    sub_96FCD0
0x972FA9: fstp    [esp+7Ch+arg_4]
0x972FB0: fld     dword ptr [edi]
0x972FB2: mov     ecx, [esp+7Ch+arg_C]
0x972FB9: fld1
0x972FBB: lea     edx, [esp+7Ch+var_58]
0x972FBF: push    edx
0x972FC0: fsubrp  st(1), st
0x972FC2: lea     eax, [esp+80h+var_5C]
0x972FC6: push    eax
0x972FC7: push    esi
0x972FC8: push    ebp
0x972FC9: fstp    dword ptr [ecx]
0x972FCB: call    sub_975DF0
0x972FD0: fstp    [esp+8Ch+arg_0]
0x972FD7: fld     [esp+8Ch+arg_0]
0x972FDE: add     esp, 20h
0x972FE1: fld     [esp+6Ch+arg_4]
0x972FE5: fcomp   st(1)
0x972FE7: fnstsw  ax
0x972FE9: test    ah, 41h
0x972FEC: jnz     loc_97395F
0x972FF2: mov     ecx, [esp+6Ch+arg_C]
0x972FF6: fstp    [esp+6Ch+arg_4]
0x972FFA: fldz
0x972FFC: fstp    dword ptr [ebx]
0x972FFE: fld     [esp+6Ch+var_5C]
0x973002: fstp    dword ptr [ecx]
0x973004: fld     [esp+6Ch+var_58]
0x973008: fstp    dword ptr [edi]
0x97300A: fld     [esp+6Ch+arg_4]
0x97300E: pop     edi
0x97300F: pop     esi
0x973010: pop     ebp
0x973011: pop     ebx
0x973012: add     esp, 5Ch
0x973015: retn
0x973016: fld1
0x973018: fcomp   dword ptr [ecx]
0x97301A: fnstsw  ax
0x97301C: test    ah, 1
0x97301F: mov     eax, [esp+6Ch+arg_C]
0x973023: fld     dword ptr [eax]
0x973025: fadd    st, st(2)
0x973027: fcomp   qword ptr ds:0A2F928h
0x97302D: fnstsw  ax
0x97302F: jnz     loc_973399
0x973035: test    ah, 41h
0x973038: mov     eax, [esp+6Ch+arg_C]
0x97303C: fcom    dword ptr [eax]
0x97303E: fnstsw  ax
0x973040: jp      loc_9731CA
0x973046: test    ah, 41h
0x973049: jnz     loc_973153
0x97304F: fcompp
0x973051: push    edx
0x973052: push    ecx
0x973053: lea     ecx, [esp+74h+var_24]
0x973057: push    ecx
0x973058: fnstsw  ax
0x97305A: push    ebp
0x97305B: test    ah, 41h
0x97305E: mov     eax, [esi]
0x973060: mov     [esp+7Ch+var_24], eax
0x973064: mov     eax, [esi+4]
0x973067: mov     [esp+7Ch+var_20], eax
0x97306B: mov     eax, [esi+8]
0x97306E: mov     [esp+7Ch+var_1C], eax
0x973072: mov     eax, [ebx]
0x973074: mov     [esp+7Ch+var_18], eax
0x973078: mov     eax, [ebx+4]
0x97307B: mov     [esp+7Ch+var_14], eax
0x97307F: mov     eax, [ebx+8]
0x973082: mov     [esp+7Ch+var_10], eax
0x973086: jnz     loc_97312D
0x97308C: call    sub_96FCD0
0x973091: fstp    [esp+7Ch+arg_4]
0x973098: fldz
0x97309A: mov     ebx, [esp+7Ch+arg_C]
0x9730A1: fstp    dword ptr [ebx]
0x9730A3: mov     edx, [esi]
0x9730A5: mov     eax, [esi+4]
0x9730A8: mov     ecx, [esi+8]
0x9730AB: mov     [esp+7Ch+var_24], edx
0x9730AF: mov     edx, [edi]
0x9730B1: mov     [esp+7Ch+var_20], eax
0x9730B5: mov     eax, [edi+4]
0x9730B8: mov     [esp+7Ch+var_1C], ecx
0x9730BC: mov     ecx, [edi+8]
0x9730BF: mov     [esp+7Ch+var_18], edx
0x9730C3: lea     edx, [esp+7Ch+var_5C]
0x9730C7: push    edx
0x9730C8: mov     [esp+80h+var_14], eax
0x9730CC: lea     eax, [esp+80h+var_54]
0x9730D0: mov     [esp+80h+var_10], ecx
0x9730D4: push    eax
0x9730D5: lea     ecx, [esp+84h+var_24]
0x9730D9: push    ecx
0x9730DA: push    ebp
0x9730DB: call    sub_96FCD0
0x9730E0: fstp    [esp+8Ch+arg_0]
0x9730E7: fld     [esp+8Ch+arg_0]
0x9730EE: add     esp, 20h
0x9730F1: fld     [esp+6Ch+arg_4]
0x9730F5: fcomp   st(1)
0x9730F7: fnstsw  ax
0x9730F9: test    ah, 41h
0x9730FC: jnz     loc_97395F
0x973102: mov     edx, [esp+6Ch+arg_8]
0x973106: fstp    [esp+6Ch+arg_4]
0x97310A: fld     [esp+6Ch+var_54]
0x97310E: mov     eax, [esp+6Ch+arg_10]
0x973115: fstp    dword ptr [edx]
0x973117: pop     edi
0x973118: fld     [esp+68h+var_5C]
0x97311C: pop     esi
0x97311D: fstp    dword ptr [ebx]
0x97311F: pop     ebp
0x973120: fldz
0x973122: pop     ebx
0x973123: fstp    dword ptr [eax]
0x973125: fld     [esp+5Ch+arg_4]
0x973129: add     esp, 5Ch
0x97312C: retn
0x97312D: call    sub_96FCD0
0x973132: fstp    [esp+7Ch+arg_4]
0x973139: fldz
0x97313B: mov     edx, [esp+7Ch+arg_C]
0x973142: add     esp, 10h
0x973145: fstp    dword ptr [edx]
0x973147: fld     [esp+6Ch+arg_4]
0x97314B: pop     edi
0x97314C: pop     esi
0x97314D: pop     ebp
0x97314E: pop     ebx
0x97314F: add     esp, 5Ch
0x973152: retn
0x973153: fcom    st(1)
0x973155: fnstsw  ax
0x973157: fstp    st(1)
0x973159: test    ah, 41h
0x97315C: jnz     short loc_9731BA
0x97315E: mov     eax, [esi]
0x973160: fstp    st
0x973162: mov     edx, [esi+4]
0x973165: mov     [esp+6Ch+var_24], eax
0x973169: mov     eax, [esi+8]
0x97316C: mov     [esp+6Ch+var_1C], eax
0x973170: mov     eax, [edi+4]
0x973173: mov     [esp+6Ch+var_14], eax
0x973177: mov     eax, [esp+6Ch+arg_C]
0x97317B: push    eax
0x97317C: push    ecx
0x97317D: mov     [esp+74h+var_20], edx
0x973181: mov     edx, [edi]
0x973183: lea     ecx, [esp+74h+var_24]
0x973187: mov     [esp+74h+var_18], edx
0x97318B: mov     edx, [edi+8]
0x97318E: push    ecx
0x97318F: push    ebp
0x973190: mov     [esp+7Ch+var_10], edx
0x973194: call    sub_96FCD0
0x973199: fstp    [esp+7Ch+arg_4]
0x9731A0: fldz
0x9731A2: mov     edx, [esp+7Ch+arg_10]
0x9731A9: add     esp, 10h
0x9731AC: fstp    dword ptr [edx]
0x9731AE: fld     [esp+6Ch+arg_4]
0x9731B2: pop     edi
0x9731B3: pop     esi
0x9731B4: pop     ebp
0x9731B5: pop     ebx
0x9731B6: add     esp, 5Ch
0x9731B9: retn
0x9731BA: pop     edi
0x9731BB: fstp    [esp+68h+arg_4]
0x9731BF: fld     [esp+68h+arg_4]
0x9731C3: pop     esi
0x9731C4: pop     ebp
0x9731C5: pop     ebx
0x9731C6: add     esp, 5Ch
0x9731C9: retn
0x9731CA: test    ah, 41h
0x9731CD: jnz     short loc_973211
0x9731CF: mov     eax, [esi]
0x9731D1: fstp    st
0x9731D3: mov     [esp+6Ch+var_24], eax
0x9731D7: fstp    st
0x9731D9: mov     eax, [esi+4]
0x9731DC: mov     [esp+6Ch+var_20], eax
0x9731E0: mov     eax, [esi+8]
0x9731E3: mov     [esp+6Ch+var_1C], eax
0x9731E7: mov     eax, [ebx]
0x9731E9: push    edx
0x9731EA: push    ecx
0x9731EB: mov     [esp+74h+var_18], eax
0x9731EF: mov     eax, [ebx+4]
0x9731F2: lea     ecx, [esp+74h+var_24]
0x9731F6: mov     [esp+74h+var_14], eax
0x9731FA: mov     eax, [ebx+8]
0x9731FD: push    ecx
0x9731FE: push    ebp
0x9731FF: mov     [esp+7Ch+var_10], eax
0x973203: call    sub_96FCD0
0x973208: mov     edx, [esp+7Ch+arg_C]
0x97320F: jmp     short loc_97325E
0x973211: fcompp
0x973213: fnstsw  ax
0x973215: test    ah, 41h
0x973218: jnz     loc_97331A
0x97321E: mov     eax, [esi]
0x973220: mov     edx, [esi+4]
0x973223: mov     [esp+6Ch+var_24], eax
0x973227: mov     eax, [esi+8]
0x97322A: mov     [esp+6Ch+var_1C], eax
0x97322E: mov     eax, [edi+4]
0x973231: mov     [esp+6Ch+var_14], eax
0x973235: mov     eax, [esp+6Ch+arg_C]
0x973239: push    eax
0x97323A: push    ecx
0x97323B: mov     [esp+74h+var_20], edx
0x97323F: mov     edx, [edi]
0x973241: lea     ecx, [esp+74h+var_24]
0x973245: mov     [esp+74h+var_18], edx
0x973249: mov     edx, [edi+8]
0x97324C: push    ecx
0x97324D: push    ebp
0x97324E: mov     [esp+7Ch+var_10], edx
0x973252: call    sub_96FCD0
0x973257: mov     edx, [esp+7Ch+arg_10]
0x97325E: add     esp, 10h
0x973261: fstp    [esp+6Ch+arg_4]
0x973265: fldz
0x973267: push    edi
0x973268: lea     eax, [esp+70h+var_C]
0x97326C: fstp    dword ptr [edx]
0x97326E: push    eax
0x97326F: mov     ecx, esi
0x973271: call    sub_47D9B0
0x973276: mov     ecx, [eax]
0x973278: mov     [esp+6Ch+var_24], ecx
0x97327C: mov     edx, [eax+4]
0x97327F: push    edi
0x973280: lea     ecx, [esp+70h+var_C]
0x973284: mov     [esp+70h+var_20], edx
0x973288: mov     eax, [eax+8]
0x97328B: push    ecx
0x97328C: mov     ecx, ebx
0x97328E: mov     [esp+74h+var_1C], eax
0x973292: call    sub_4121A0
0x973297: mov     edx, [eax]
0x973299: mov     [esp+6Ch+var_18], edx
0x97329D: mov     ecx, [eax+4]
0x9732A0: mov     [esp+6Ch+var_14], ecx
0x9732A4: mov     edx, [eax+8]
0x9732A7: lea     eax, [esp+6Ch+var_58]
0x9732AB: push    eax
0x9732AC: lea     ecx, [esp+70h+var_54]
0x9732B0: mov     [esp+70h+var_10], edx
0x9732B4: push    ecx
0x9732B5: lea     edx, [esp+74h+var_24]
0x9732B9: push    edx
0x9732BA: push    ebp
0x9732BB: call    sub_96FCD0
0x9732C0: fstp    [esp+7Ch+arg_0]
0x9732C7: fld     [esp+7Ch+var_58]
0x9732CB: add     esp, 10h
0x9732CE: fld     st
0x9732D0: fld1
0x9732D2: fsubrp  st(1), st
0x9732D4: fstp    [esp+6Ch+var_5C]
0x9732D8: fld     [esp+6Ch+arg_0]
0x9732DC: fld     [esp+6Ch+arg_4]
0x9732E0: fcomp   st(1)
0x9732E2: fnstsw  ax
0x9732E4: test    ah, 41h
0x9732E7: jnz     loc_97395D
0x9732ED: mov     eax, [esp+6Ch+arg_8]
0x9732F1: fstp    [esp+6Ch+arg_4]
0x9732F5: fld     [esp+6Ch+var_54]
0x9732F9: mov     ecx, [esp+6Ch+arg_C]
0x9732FD: mov     edx, [esp+6Ch+arg_10]
0x973304: fstp    dword ptr [eax]
0x973306: fld     [esp+6Ch+var_5C]
0x97330A: pop     edi
0x97330B: fstp    dword ptr [ecx]
0x97330D: pop     esi
0x97330E: pop     ebp
0x97330F: fstp    dword ptr [edx]
0x973311: pop     ebx
0x973312: fld     [esp+5Ch+arg_4]
0x973316: add     esp, 5Ch
0x973319: retn
0x97331A: push    edi
0x97331B: lea     eax, [esp+70h+var_C]
0x97331F: push    eax
0x973320: mov     ecx, esi
0x973322: call    sub_47D9B0
0x973327: mov     ecx, [eax]
0x973329: mov     [esp+6Ch+var_24], ecx
0x97332D: mov     edx, [eax+4]
0x973330: push    edi
0x973331: lea     ecx, [esp+70h+var_C]
0x973335: mov     [esp+70h+var_20], edx
0x973339: mov     eax, [eax+8]
0x97333C: push    ecx
0x97333D: mov     ecx, ebx
0x97333F: mov     [esp+74h+var_1C], eax
0x973343: call    sub_4121A0
0x973348: mov     edx, [eax]
0x97334A: mov     esi, [esp+6Ch+arg_10]
0x973351: mov     [esp+6Ch+var_18], edx
0x973355: mov     ecx, [eax+4]
0x973358: mov     [esp+6Ch+var_14], ecx
0x97335C: mov     edx, [eax+8]
0x97335F: mov     eax, [esp+6Ch+arg_8]
0x973363: push    esi
0x973364: push    eax
0x973365: lea     ecx, [esp+74h+var_24]
0x973369: push    ecx
0x97336A: push    ebp
0x97336B: mov     [esp+7Ch+var_10], edx
0x97336F: call    sub_96FCD0
0x973374: fstp    [esp+7Ch+arg_4]
0x97337B: fld     dword ptr [esi]
0x97337D: mov     edx, [esp+7Ch+arg_C]
0x973384: fld1
0x973386: add     esp, 10h
0x973389: pop     edi
0x97338A: fsubrp  st(1), st
0x97338C: pop     esi
0x97338D: pop     ebp
0x97338E: pop     ebx
0x97338F: fstp    dword ptr [edx]
0x973391: fld     [esp+5Ch+arg_4]
0x973395: add     esp, 5Ch
0x973398: retn
0x973399: test    ah, 41h
0x97339C: mov     eax, [esp+6Ch+arg_C]
0x9733A0: fcom    dword ptr [eax]
0x9733A2: fnstsw  ax
0x9733A4: jp      loc_973688
0x9733AA: fcompp
0x9733AC: test    ah, 41h
0x9733AF: fnstsw  ax
0x9733B1: jnz     loc_97356E
0x9733B7: test    ah, 41h
0x9733BA: mov     eax, [esi]
0x9733BC: mov     [esp+6Ch+var_24], eax
0x9733C0: mov     eax, [esi+4]
0x9733C3: mov     [esp+6Ch+var_20], eax
0x9733C7: mov     eax, [esi+8]
0x9733CA: mov     [esp+6Ch+var_1C], eax
0x9733CE: mov     eax, [ebx]
0x9733D0: push    edx
0x9733D1: push    ecx
0x9733D2: mov     [esp+74h+var_18], eax
0x9733D6: mov     eax, [ebx+4]
0x9733D9: lea     ecx, [esp+74h+var_24]
0x9733DD: mov     [esp+74h+var_14], eax
0x9733E1: mov     eax, [ebx+8]
0x9733E4: push    ecx
0x9733E5: push    ebp
0x9733E6: mov     [esp+7Ch+var_10], eax
0x9733EA: jnz     loc_9734EE
0x9733F0: call    sub_96FCD0
0x9733F5: fstp    [esp+7Ch+arg_4]
0x9733FC: fldz
0x9733FE: mov     ebx, [esp+7Ch+arg_C]
0x973405: fstp    dword ptr [ebx]
0x973407: mov     edx, [esi]
0x973409: mov     eax, [esi+4]
0x97340C: mov     ecx, [esi+8]
0x97340F: mov     [esp+7Ch+var_24], edx
0x973413: mov     edx, [edi]
0x973415: mov     [esp+7Ch+var_20], eax
0x973419: mov     eax, [edi+4]
0x97341C: mov     [esp+7Ch+var_1C], ecx
0x973420: mov     ecx, [edi+8]
0x973423: mov     [esp+7Ch+var_18], edx
0x973427: lea     edx, [esp+7Ch+var_5C]
0x97342B: push    edx
0x97342C: mov     [esp+80h+var_14], eax
0x973430: lea     eax, [esp+80h+var_54]
0x973434: mov     [esp+80h+var_10], ecx
0x973438: push    eax
0x973439: lea     ecx, [esp+84h+var_24]
0x97343D: push    ecx
0x97343E: push    ebp
0x97343F: call    sub_96FCD0
0x973444: fstp    [esp+8Ch+arg_0]
0x97344B: fldz
0x97344D: add     esp, 20h
0x973450: fst     [esp+6Ch+var_58]
0x973454: fld     [esp+6Ch+arg_0]
0x973458: fld     [esp+6Ch+arg_4]
0x97345C: fcomp   st(1)
0x97345E: fnstsw  ax
0x973460: test    ah, 41h
0x973463: jnz     short loc_973484
0x973465: mov     edx, [esp+6Ch+arg_8]
0x973469: fstp    [esp+6Ch+arg_4]
0x97346D: fld     [esp+6Ch+var_54]
0x973471: mov     eax, [esp+6Ch+arg_10]
0x973478: fstp    dword ptr [edx]
0x97347A: fld     [esp+6Ch+var_5C]
0x97347E: fstp    dword ptr [ebx]
0x973480: fstp    dword ptr [eax]
0x973482: jmp     short loc_973488
0x973484: fstp    st
0x973486: fstp    st
0x973488: lea     eax, [ebp+0Ch]
0x97348B: push    eax
0x97348C: lea     ecx, [esp+70h+var_C]
0x973490: push    ecx
0x973491: mov     ecx, ebp
0x973493: call    sub_47D9B0
0x973498: mov     edx, [eax]
0x97349A: mov     dword ptr [esp+6Ch+var_30], edx
0x97349E: mov     ecx, [eax+4]
0x9734A1: mov     dword ptr [esp+6Ch+var_30+4], ecx
0x9734A5: mov     edx, [eax+8]
0x9734A8: lea     eax, [esp+6Ch+var_58]
0x9734AC: push    eax
0x9734AD: lea     ecx, [esp+70h+var_5C]
0x9734B1: push    ecx
0x9734B2: mov     [esp+74h+var_28], edx
0x9734B6: lea     edx, [esp+74h+var_30]
0x9734BA: push    esi
0x9734BB: push    edx
0x9734BC: call    sub_975DF0
0x9734C1: fstp    [esp+7Ch+arg_0]
0x9734C8: fld     [esp+7Ch+arg_0]
0x9734CF: add     esp, 10h
0x9734D2: fld     [esp+6Ch+arg_4]
0x9734D6: fcomp   st(1)
0x9734D8: fnstsw  ax
0x9734DA: test    ah, 41h
0x9734DD: jnz     loc_97395F
0x9734E3: fstp    [esp+6Ch+arg_4]
0x9734E7: fld1
0x9734E9: jmp     loc_972B98
0x9734EE: call    sub_96FCD0
0x9734F3: fstp    [esp+7Ch+arg_4]
0x9734FA: fldz
0x9734FC: mov     edi, [esp+7Ch+arg_C]
0x973503: add     esp, 10h
0x973506: fstp    dword ptr [edi]
0x973508: lea     eax, [ebp+0Ch]
0x97350B: push    eax
0x97350C: lea     edx, [esp+70h+var_C]
0x973510: push    edx
0x973511: mov     ecx, ebp
0x973513: call    sub_47D9B0
0x973518: mov     ecx, [eax]
0x97351A: mov     dword ptr [esp+6Ch+var_30], ecx
0x97351E: mov     edx, [eax+4]
0x973521: mov     dword ptr [esp+6Ch+var_30+4], edx
0x973525: mov     eax, [eax+8]
0x973528: lea     ecx, [esp+6Ch+var_58]
0x97352C: push    ecx
0x97352D: lea     edx, [esp+70h+var_5C]
0x973531: push    edx
0x973532: mov     [esp+74h+var_28], eax
0x973536: lea     eax, [esp+74h+var_30]
0x97353A: push    esi
0x97353B: push    eax
0x97353C: call    sub_975DF0
0x973541: fstp    [esp+7Ch+arg_0]
0x973548: fld     [esp+7Ch+arg_0]
0x97354F: add     esp, 10h
0x973552: fld     [esp+6Ch+arg_4]
0x973556: fcomp   st(1)
0x973558: fnstsw  ax
0x97355A: test    ah, 41h
0x97355D: jnz     loc_97395F
0x973563: fstp    [esp+6Ch+arg_4]
0x973567: fld1
0x973569: jmp     loc_972C0D
0x97356E: test    ah, 41h
0x973571: jnz     loc_97362B
0x973577: mov     eax, [esi]
0x973579: mov     edx, [esi+4]
0x97357C: mov     [esp+6Ch+var_24], eax
0x973580: mov     eax, [esi+8]
0x973583: mov     [esp+6Ch+var_1C], eax
0x973587: mov     eax, [edi+4]
0x97358A: mov     [esp+6Ch+var_14], eax
0x97358E: mov     eax, [esp+6Ch+arg_C]
0x973592: push    eax
0x973593: push    ecx
0x973594: mov     [esp+74h+var_20], edx
0x973598: mov     edx, [edi]
0x97359A: lea     ecx, [esp+74h+var_24]
0x97359E: mov     [esp+74h+var_18], edx
0x9735A2: mov     edx, [edi+8]
0x9735A5: push    ecx
0x9735A6: push    ebp
0x9735A7: mov     [esp+7Ch+var_10], edx
0x9735AB: call    sub_96FCD0
0x9735B0: fstp    [esp+7Ch+arg_4]
0x9735B7: fldz
0x9735B9: mov     edi, [esp+7Ch+arg_10]
0x9735C0: add     esp, 10h
0x9735C3: fstp    dword ptr [edi]
0x9735C5: lea     eax, [ebp+0Ch]
0x9735C8: push    eax
0x9735C9: lea     edx, [esp+70h+var_C]
0x9735CD: push    edx
0x9735CE: mov     ecx, ebp
0x9735D0: call    sub_47D9B0
0x9735D5: mov     ecx, [eax]
0x9735D7: mov     dword ptr [esp+6Ch+var_30], ecx
0x9735DB: mov     edx, [eax+4]
0x9735DE: mov     dword ptr [esp+6Ch+var_30+4], edx
0x9735E2: mov     eax, [eax+8]
0x9735E5: lea     ecx, [esp+6Ch+var_58]
0x9735E9: push    ecx
0x9735EA: lea     edx, [esp+70h+var_5C]
0x9735EE: push    edx
0x9735EF: mov     [esp+74h+var_28], eax
0x9735F3: lea     eax, [esp+74h+var_30]
0x9735F7: push    esi
0x9735F8: push    eax
0x9735F9: call    sub_975DF0
0x9735FE: fstp    [esp+7Ch+arg_0]
0x973605: fld     [esp+7Ch+arg_0]
0x97360C: add     esp, 10h
0x97360F: fld     [esp+6Ch+arg_4]
0x973613: fcomp   st(1)
0x973615: fnstsw  ax
0x973617: test    ah, 41h
0x97361A: jnz     loc_97395F
0x973620: fstp    [esp+6Ch+arg_4]
0x973624: fld1
0x973626: jmp     loc_972CBF
0x97362B: lea     eax, [ebp+0Ch]
0x97362E: push    eax
0x97362F: lea     eax, [esp+70h+var_C]
0x973633: push    eax
0x973634: mov     ecx, ebp
0x973636: call    sub_47D9B0
0x97363B: mov     ecx, [eax]
0x97363D: mov     dword ptr [esp+6Ch+var_30], ecx
0x973641: mov     edx, [eax+4]
0x973644: mov     ecx, [esp+6Ch+arg_10]
0x97364B: mov     dword ptr [esp+6Ch+var_30+4], edx
0x97364F: mov     eax, [eax+8]
0x973652: mov     edx, [esp+6Ch+arg_C]
0x973656: push    ecx
0x973657: push    edx
0x973658: mov     [esp+74h+var_28], eax
0x97365C: lea     eax, [esp+74h+var_30]
0x973660: push    esi
0x973661: push    eax
0x973662: call    sub_975DF0
0x973667: fstp    [esp+7Ch+arg_4]
0x97366E: fld1
0x973670: mov     ecx, [esp+7Ch+arg_8]
0x973677: add     esp, 10h
0x97367A: fstp    dword ptr [ecx]
0x97367C: fld     [esp+6Ch+arg_4]
0x973680: pop     edi
0x973681: pop     esi
0x973682: pop     ebp
0x973683: pop     ebx
0x973684: add     esp, 5Ch
0x973687: retn
0x973688: test    ah, 41h
0x97368B: jnz     short loc_9736E3
0x97368D: mov     eax, [esi]
0x97368F: fstp    st
0x973691: mov     [esp+6Ch+var_24], eax
0x973695: fstp    st
0x973697: mov     eax, [esi+4]
0x97369A: mov     [esp+6Ch+var_20], eax
0x97369E: mov     eax, [esi+8]
0x9736A1: mov     [esp+6Ch+var_1C], eax
0x9736A5: mov     eax, [ebx]
0x9736A7: push    edx
0x9736A8: push    ecx
0x9736A9: mov     [esp+74h+var_18], eax
0x9736AD: mov     eax, [ebx+4]
0x9736B0: lea     ecx, [esp+74h+var_24]
0x9736B4: mov     [esp+74h+var_14], eax
0x9736B8: mov     eax, [ebx+8]
0x9736BB: push    ecx
0x9736BC: push    ebp
0x9736BD: mov     [esp+7Ch+var_10], eax
0x9736C1: call    sub_96FCD0
0x9736C6: fstp    [esp+7Ch+arg_4]
0x9736CD: fldz
0x9736CF: mov     edx, [esp+7Ch+arg_C]
0x9736D6: add     esp, 10h
0x9736D9: fstp    dword ptr [edx]
0x9736DB: push    edi
0x9736DC: lea     eax, [esp+70h+var_C]
0x9736E0: push    eax
0x9736E1: jmp     short loc_973744
0x9736E3: fcompp
0x9736E5: fnstsw  ax
0x9736E7: test    ah, 41h
0x9736EA: jnz     loc_97386F
0x9736F0: mov     edx, [esi]
0x9736F2: mov     eax, [esi+4]
0x9736F5: mov     [esp+6Ch+var_24], edx
0x9736F9: mov     edx, [esi+8]
0x9736FC: mov     [esp+6Ch+var_20], eax
0x973700: mov     eax, [edi]
0x973702: mov     [esp+6Ch+var_1C], edx
0x973706: mov     edx, [edi+4]
0x973709: mov     [esp+6Ch+var_18], eax
0x97370D: mov     eax, [edi+8]
0x973710: mov     [esp+6Ch+var_14], edx
0x973714: mov     edx, [esp+6Ch+arg_C]
0x973718: push    edx
0x973719: mov     [esp+70h+var_10], eax
0x97371D: push    ecx
0x97371E: lea     eax, [esp+74h+var_24]
0x973722: push    eax
0x973723: push    ebp
0x973724: call    sub_96FCD0
0x973729: fstp    [esp+7Ch+arg_4]
0x973730: fldz
0x973732: mov     ecx, [esp+7Ch+arg_10]
0x973739: add     esp, 10h
0x97373C: fstp    dword ptr [ecx]
0x97373E: push    edi
0x97373F: lea     edx, [esp+70h+var_C]
0x973743: push    edx
0x973744: mov     ecx, esi
0x973746: call    sub_47D9B0
0x97374B: mov     ecx, [eax]
0x97374D: mov     [esp+6Ch+var_24], ecx
0x973751: mov     edx, [eax+4]
0x973754: push    edi
0x973755: lea     ecx, [esp+70h+var_C]
0x973759: mov     [esp+70h+var_20], edx
0x97375D: mov     eax, [eax+8]
0x973760: push    ecx
0x973761: mov     ecx, ebx
0x973763: mov     [esp+74h+var_1C], eax
0x973767: call    sub_4121A0
0x97376C: mov     edx, [eax]
0x97376E: mov     [esp+6Ch+var_18], edx
0x973772: mov     ecx, [eax+4]
0x973775: mov     [esp+6Ch+var_14], ecx
0x973779: mov     edx, [eax+8]
0x97377C: lea     eax, [esp+6Ch+var_58]
0x973780: push    eax
0x973781: lea     ecx, [esp+70h+var_54]
0x973785: mov     [esp+70h+var_10], edx
0x973789: push    ecx
0x97378A: lea     edx, [esp+74h+var_24]
0x97378E: push    edx
0x97378F: push    ebp
0x973790: call    sub_96FCD0
0x973795: fstp    [esp+7Ch+arg_0]
0x97379C: fld     [esp+7Ch+var_58]
0x9737A0: add     esp, 10h
0x9737A3: fld     st
0x9737A5: fld1
0x9737A7: fsubrp  st(1), st
0x9737A9: fstp    [esp+6Ch+var_5C]
0x9737AD: fld     [esp+6Ch+arg_0]
0x9737B1: fld     [esp+6Ch+arg_4]
0x9737B5: fcomp   st(1)
0x9737B7: fnstsw  ax
0x9737B9: test    ah, 41h
0x9737BC: jnz     short loc_9737E1
0x9737BE: mov     eax, [esp+6Ch+arg_8]
0x9737C2: fstp    [esp+6Ch+arg_4]
0x9737C6: fld     [esp+6Ch+var_54]
0x9737CA: mov     ecx, [esp+6Ch+arg_C]
0x9737CE: mov     edx, [esp+6Ch+arg_10]
0x9737D5: fstp    dword ptr [eax]
0x9737D7: fld     [esp+6Ch+var_5C]
0x9737DB: fstp    dword ptr [ecx]
0x9737DD: fstp    dword ptr [edx]
0x9737DF: jmp     short loc_9737E5
0x9737E1: fstp    st(1)
0x9737E3: fstp    st
0x9737E5: lea     eax, [ebp+0Ch]
0x9737E8: push    eax
0x9737E9: lea     eax, [esp+70h+var_C]
0x9737ED: push    eax
0x9737EE: mov     ecx, ebp
0x9737F0: call    sub_47D9B0
0x9737F5: mov     ecx, [eax]
0x9737F7: mov     dword ptr [esp+6Ch+var_30], ecx
0x9737FB: mov     edx, [eax+4]
0x9737FE: mov     dword ptr [esp+6Ch+var_30+4], edx
0x973802: mov     eax, [eax+8]
0x973805: lea     ecx, [esp+6Ch+var_58]
0x973809: push    ecx
0x97380A: lea     edx, [esp+70h+var_5C]
0x97380E: push    edx
0x97380F: mov     [esp+74h+var_28], eax
0x973813: lea     eax, [esp+74h+var_30]
0x973817: push    esi
0x973818: push    eax
0x973819: call    sub_975DF0
0x97381E: fstp    [esp+7Ch+arg_0]
0x973825: fld     [esp+7Ch+arg_0]
0x97382C: add     esp, 10h
0x97382F: fld     [esp+6Ch+arg_4]
0x973833: fcomp   st(1)
0x973835: fnstsw  ax
0x973837: test    ah, 41h
0x97383A: jnz     loc_97395F
0x973840: mov     ecx, [esp+6Ch+arg_8]
0x973844: fstp    [esp+6Ch+arg_4]
0x973848: fld1
0x97384A: mov     edx, [esp+6Ch+arg_C]
0x97384E: mov     eax, [esp+6Ch+arg_10]
0x973855: fstp    dword ptr [ecx]
0x973857: fld     [esp+6Ch+var_5C]
0x97385B: pop     edi
0x97385C: fstp    dword ptr [edx]
0x97385E: pop     esi
0x97385F: fld     [esp+64h+var_58]
0x973863: pop     ebp
0x973864: fstp    dword ptr [eax]
0x973866: pop     ebx
0x973867: fld     [esp+5Ch+arg_4]
0x97386B: add     esp, 5Ch
0x97386E: retn
0x97386F: push    edi
0x973870: lea     ecx, [esp+70h+var_C]
0x973874: push    ecx
0x973875: mov     ecx, esi
0x973877: call    sub_47D9B0
0x97387C: mov     edx, [eax]
0x97387E: mov     [esp+6Ch+var_24], edx
0x973882: mov     ecx, [eax+4]
0x973885: mov     [esp+6Ch+var_20], ecx
0x973889: mov     edx, [eax+8]
0x97388C: push    edi
0x97388D: lea     eax, [esp+70h+var_C]
0x973891: push    eax
0x973892: mov     ecx, ebx
0x973894: mov     [esp+74h+var_1C], edx
0x973898: call    sub_4121A0
0x97389D: mov     ecx, [eax]
0x97389F: mov     edi, [esp+6Ch+arg_10]
0x9738A6: mov     ebx, [esp+6Ch+arg_8]
0x9738AA: mov     [esp+6Ch+var_18], ecx
0x9738AE: mov     edx, [eax+4]
0x9738B1: push    edi
0x9738B2: push    ebx
0x9738B3: lea     ecx, [esp+74h+var_24]
0x9738B7: mov     [esp+74h+var_14], edx
0x9738BB: mov     eax, [eax+8]
0x9738BE: push    ecx
0x9738BF: push    ebp
0x9738C0: mov     [esp+7Ch+var_10], eax
0x9738C4: call    sub_96FCD0
0x9738C9: fstp    [esp+7Ch+arg_4]
0x9738D0: fld     dword ptr [edi]
0x9738D2: mov     edx, [esp+7Ch+arg_C]
0x9738D9: fld1
0x9738DB: add     esp, 10h
0x9738DE: lea     eax, [ebp+0Ch]
0x9738E1: fsubrp  st(1), st
0x9738E3: push    eax
0x9738E4: lea     eax, [esp+70h+var_C]
0x9738E8: push    eax
0x9738E9: mov     ecx, ebp
0x9738EB: fstp    dword ptr [edx]
0x9738ED: call    sub_47D9B0
0x9738F2: mov     ecx, [eax]
0x9738F4: mov     dword ptr [esp+6Ch+var_30], ecx
0x9738F8: mov     edx, [eax+4]
0x9738FB: mov     dword ptr [esp+6Ch+var_30+4], edx
0x9738FF: mov     eax, [eax+8]
0x973902: lea     ecx, [esp+6Ch+var_58]
0x973906: push    ecx
0x973907: lea     edx, [esp+70h+var_5C]
0x97390B: push    edx
0x97390C: mov     [esp+74h+var_28], eax
0x973910: lea     eax, [esp+74h+var_30]
0x973914: push    esi
0x973915: push    eax
0x973916: call    sub_975DF0
0x97391B: fstp    [esp+7Ch+arg_0]
0x973922: fld     [esp+7Ch+arg_0]
0x973929: add     esp, 10h
0x97392C: fld     [esp+6Ch+arg_4]
0x973930: fcomp   st(1)
0x973932: fnstsw  ax
0x973934: test    ah, 41h
0x973937: jnz     short loc_97395F
0x973939: mov     ecx, [esp+6Ch+arg_C]
0x97393D: fstp    [esp+6Ch+arg_4]
0x973941: fld1
0x973943: fstp    dword ptr [ebx]
0x973945: fld     [esp+6Ch+var_5C]
0x973949: fstp    dword ptr [ecx]
0x97394B: fld     [esp+6Ch+var_58]
0x97394F: fstp    dword ptr [edi]
0x973951: fld     [esp+6Ch+arg_4]
0x973955: pop     edi
0x973956: pop     esi
0x973957: pop     ebp
0x973958: pop     ebx
0x973959: add     esp, 5Ch
0x97395C: retn
0x97395D: fstp    st(1)
0x97395F: pop     edi
0x973960: fstp    st
0x973962: fld     [esp+68h+arg_4]
0x973966: pop     esi
0x973967: pop     ebp
0x973968: pop     ebx
0x973969: add     esp, 5Ch
0x97396C: retn
0x97396D: mov     edx, [esi]
0x97396F: mov     eax, [esi+4]
0x973972: mov     ecx, [esi+8]
0x973975: mov     [esp+6Ch+var_24], edx
0x973979: mov     edx, [edi]
0x97397B: mov     [esp+6Ch+var_20], eax
0x97397F: mov     eax, [edi+4]
0x973982: mov     [esp+6Ch+var_1C], ecx
0x973986: mov     ecx, [edi+8]
0x973989: mov     [esp+6Ch+var_18], edx
0x97398D: mov     edx, [esp+6Ch+arg_C]
0x973991: push    edx
0x973992: mov     [esp+70h+var_14], eax
0x973996: mov     eax, [esp+70h+arg_8]
0x97399A: mov     [esp+70h+var_10], ecx
0x97399E: push    eax
0x97399F: lea     ecx, [esp+74h+var_24]
0x9739A3: push    ecx
0x9739A4: push    ebp
0x9739A5: call    sub_96FCD0
0x9739AA: fstp    [esp+7Ch+arg_4]
0x9739B1: fldz
0x9739B3: mov     edx, [esp+7Ch+arg_10]
0x9739BA: fstp    dword ptr [edx]
0x9739BC: mov     eax, [ebx]
0x9739BE: mov     ecx, [ebx+4]
0x9739C1: mov     edx, [ebx+8]
0x9739C4: mov     [esp+7Ch+var_18], eax
0x9739C8: lea     eax, [esp+7Ch+var_58]
0x9739CC: push    eax
0x9739CD: mov     [esp+80h+var_14], ecx
0x9739D1: lea     ecx, [esp+80h+var_54]
0x9739D5: mov     [esp+80h+var_10], edx
0x9739D9: push    ecx
0x9739DA: lea     edx, [esp+84h+var_24]
0x9739DE: push    edx
0x9739DF: push    ebp
0x9739E0: call    sub_96FCD0
0x9739E5: fstp    [esp+8Ch+arg_0]
0x9739EC: fldz
0x9739EE: mov     ebx, [esp+8Ch+arg_C]
0x9739F5: fst     [esp+8Ch+var_5C]
0x9739F9: add     esp, 20h
0x9739FC: fld     [esp+6Ch+arg_0]
0x973A00: fld     [esp+6Ch+arg_4]
0x973A04: fcomp   st(1)
0x973A06: fnstsw  ax
0x973A08: test    ah, 41h
0x973A0B: jnz     short loc_973A2C
0x973A0D: mov     eax, [esp+6Ch+arg_8]
0x973A11: fstp    [esp+6Ch+arg_4]
0x973A15: fld     [esp+6Ch+var_54]
0x973A19: mov     ecx, [esp+6Ch+arg_10]
0x973A20: fstp    dword ptr [eax]
0x973A22: fstp    dword ptr [ebx]
0x973A24: fld     [esp+6Ch+var_58]
0x973A28: fstp    dword ptr [ecx]
0x973A2A: jmp     short loc_973A30
0x973A2C: fstp    st(1)
0x973A2E: fstp    st
0x973A30: fld     [esp+6Ch+var_24]
0x973A34: fadd    dword ptr [edi]
0x973A36: fstp    [esp+6Ch+var_C]
0x973A3A: mov     edx, [esp+6Ch+var_C]
0x973A3E: fld     dword ptr [edi+4]
0x973A41: mov     [esp+6Ch+var_24], edx
0x973A45: fadd    [esp+6Ch+var_20]
0x973A49: fstp    [esp+6Ch+var_8]
0x973A4D: mov     eax, [esp+6Ch+var_8]
0x973A51: fld     dword ptr [edi+8]
0x973A54: mov     [esp+6Ch+var_20], eax
0x973A58: fadd    [esp+6Ch+var_1C]
0x973A5C: fstp    [esp+6Ch+var_4]
0x973A60: mov     ecx, [esp+6Ch+var_4]
0x973A64: fld     [esp+6Ch+var_18]
0x973A68: mov     [esp+6Ch+var_1C], ecx
0x973A6C: fsub    dword ptr [edi]
0x973A6E: fstp    [esp+6Ch+var_C]
0x973A72: mov     edx, [esp+6Ch+var_C]
0x973A76: fld     [esp+6Ch+var_14]
0x973A7A: mov     [esp+6Ch+var_18], edx
0x973A7E: fsub    dword ptr [edi+4]
0x973A81: lea     edx, [esp+6Ch+var_58]
0x973A85: push    edx
0x973A86: fstp    [esp+70h+var_8]
0x973A8A: mov     eax, [esp+70h+var_8]
0x973A8E: fld     [esp+70h+var_10]
0x973A92: mov     [esp+70h+var_14], eax
0x973A96: fsub    dword ptr [edi+8]
0x973A99: lea     eax, [esp+70h+var_54]
0x973A9D: push    eax
0x973A9E: fstp    [esp+74h+var_4]
0x973AA2: mov     ecx, [esp+74h+var_4]
0x973AA6: mov     [esp+74h+var_10], ecx
0x973AAA: lea     ecx, [esp+74h+var_24]
0x973AAE: push    ecx
0x973AAF: push    ebp
0x973AB0: call    sub_96FCD0
0x973AB5: fstp    [esp+7Ch+arg_0]
0x973ABC: fld     [esp+7Ch+var_58]
0x973AC0: mov     edi, [esp+7Ch+arg_8]
0x973AC7: fld     st
0x973AC9: add     esp, 10h
0x973ACC: fld1
0x973ACE: fsubrp  st(1), st
0x973AD0: fstp    [esp+6Ch+var_5C]
0x973AD4: fld     [esp+6Ch+arg_0]
0x973AD8: fld     [esp+6Ch+arg_4]
0x973ADC: fcomp   st(1)
0x973ADE: fnstsw  ax
0x973AE0: test    ah, 41h
0x973AE3: jnz     short loc_973B00
0x973AE5: mov     edx, [esp+6Ch+arg_10]
0x973AEC: fstp    [esp+6Ch+arg_4]
0x973AF0: fld     [esp+6Ch+var_54]
0x973AF4: fstp    dword ptr [edi]
0x973AF6: fld     [esp+6Ch+var_5C]
0x973AFA: fstp    dword ptr [ebx]
0x973AFC: fstp    dword ptr [edx]
0x973AFE: jmp     short loc_973B04
0x973B00: fstp    st(1)
0x973B02: fstp    st
0x973B04: lea     eax, [esp+6Ch+var_58]
0x973B08: push    eax
0x973B09: lea     ecx, [esp+70h+var_5C]
0x973B0D: push    ecx
0x973B0E: push    esi
0x973B0F: push    ebp
0x973B10: call    sub_975DF0
0x973B15: fstp    [esp+7Ch+arg_0]
0x973B1C: fldz
0x973B1E: add     esp, 10h
0x973B21: fst     [esp+6Ch+var_54]
0x973B25: fld     [esp+6Ch+arg_0]
0x973B29: fld     [esp+6Ch+arg_4]
0x973B2D: fcomp   st(1)
0x973B2F: fnstsw  ax
0x973B31: test    ah, 41h
0x973B34: jnz     short loc_973B51
0x973B36: mov     edx, [esp+6Ch+arg_10]
0x973B3D: fstp    [esp+6Ch+arg_4]
0x973B41: fstp    dword ptr [edi]
0x973B43: fld     [esp+6Ch+var_5C]
0x973B47: fstp    dword ptr [ebx]
0x973B49: fld     [esp+6Ch+var_58]
0x973B4D: fstp    dword ptr [edx]
0x973B4F: jmp     short loc_973B55
0x973B51: fstp    st
0x973B53: fstp    st
0x973B55: fld     dword ptr [ebp+0]
0x973B58: fadd    dword ptr [ebp+0Ch]
0x973B5B: fstp    [esp+6Ch+var_C]
0x973B5F: mov     eax, [esp+6Ch+var_C]
0x973B63: fld     dword ptr [ebp+10h]
0x973B66: mov     dword ptr [esp+6Ch+var_30], eax
0x973B6A: fadd    dword ptr [ebp+4]
0x973B6D: lea     eax, [esp+6Ch+var_58]
0x973B71: push    eax
0x973B72: fstp    [esp+70h+var_8]
0x973B76: mov     ecx, [esp+70h+var_8]
0x973B7A: fld     dword ptr [ebp+14h]
0x973B7D: mov     dword ptr [esp+70h+var_30+4], ecx
0x973B81: fadd    dword ptr [ebp+8]
0x973B84: lea     ecx, [esp+70h+var_5C]
0x973B88: push    ecx
0x973B89: push    esi
0x973B8A: fstp    [esp+78h+var_4]
0x973B8E: mov     edx, [esp+78h+var_4]
0x973B92: mov     [esp+78h+var_28], edx
0x973B96: lea     edx, [esp+78h+var_30]
0x973B9A: push    edx
0x973B9B: call    sub_975DF0
0x973BA0: fstp    [esp+7Ch+arg_0]
0x973BA7: fld     [esp+7Ch+arg_0]
0x973BAE: add     esp, 10h
0x973BB1: fld     [esp+6Ch+arg_4]
0x973BB5: fcomp   st(1)
0x973BB7: fnstsw  ax
0x973BB9: test    ah, 41h
0x973BBC: jnz     loc_97395F
0x973BC2: mov     eax, [esp+6Ch+arg_10]
0x973BC9: fstp    [esp+6Ch+arg_4]
0x973BCD: fld1
0x973BCF: fstp    dword ptr [edi]
0x973BD1: fld     [esp+6Ch+var_5C]
0x973BD5: pop     edi
0x973BD6: fstp    dword ptr [ebx]
0x973BD8: pop     esi
0x973BD9: fld     [esp+64h+var_58]
0x973BDD: pop     ebp
0x973BDE: fstp    dword ptr [eax]
0x973BE0: pop     ebx
0x973BE1: fld     [esp+5Ch+arg_4]
0x973BE5: add     esp, 5Ch
0x973BE8: retn
