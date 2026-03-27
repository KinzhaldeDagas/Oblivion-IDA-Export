0x977DF0: sub     esp, 40h
0x977DF3: fld     [esp+40h+arg_0]
0x977DF7: mov     ecx, [esp+40h+arg_C]
0x977DFB: fld     st
0x977DFD: mov     eax, [esp+40h+arg_4]
0x977E01: fldz
0x977E03: push    ebx
0x977E04: fsub    st(1), st
0x977E06: push    ebp
0x977E07: fxch    st(1)
0x977E09: push    esi
0x977E0A: mov     esi, [esp+4Ch+arg_10]
0x977E0E: push    edi
0x977E0F: fstp    [esp+50h+var_40]
0x977E13: mov     edi, [esp+50h+arg_14]
0x977E17: fld     dword ptr [ecx]
0x977E19: fmul    st, st(1)
0x977E1B: fstp    [esp+50h+arg_0]
0x977E1F: fld     [esp+50h+arg_0]
0x977E23: fst     [esp+50h+var_3C]
0x977E27: fld     dword ptr [ecx+4]
0x977E2A: fmul    st, st(2)
0x977E2C: fstp    [esp+50h+arg_0]
0x977E30: fld     [esp+50h+arg_0]
0x977E34: fst     [esp+50h+var_38]
0x977E38: fld     dword ptr [ecx+8]
0x977E3B: fmul    st, st(3)
0x977E3D: fstp    [esp+50h+arg_0]
0x977E41: fld     [esp+50h+arg_0]
0x977E45: fst     [esp+50h+var_34]
0x977E49: fld     dword ptr [esi]
0x977E4B: fadd    [esp+50h+var_3C]
0x977E4F: fstp    [esp+50h+var_30]
0x977E53: fld     dword ptr [esi+4]
0x977E56: fadd    [esp+50h+var_38]
0x977E5A: fstp    [esp+50h+var_2C]
0x977E5E: fld     dword ptr [esi+8]
0x977E61: fadd    [esp+50h+var_34]
0x977E65: fstp    [esp+50h+var_28]
0x977E69: fld     [esp+50h+var_2C]
0x977E6D: fmul    dword ptr [eax+4]
0x977E70: fld     [esp+50h+var_30]
0x977E74: fmul    dword ptr [eax]
0x977E76: faddp   st(1), st
0x977E78: fld     [esp+50h+var_28]
0x977E7C: fmul    dword ptr [eax+8]
0x977E7F: faddp   st(1), st
0x977E81: fstp    [esp+50h+arg_0]
0x977E85: fld     [esp+50h+arg_0]
0x977E89: fld     [esp+50h+arg_8]
0x977E8D: fld     st
0x977E8F: fsubp   st(2), st
0x977E91: fxch    st(1)
0x977E93: fstp    [esp+50h+arg_4]
0x977E97: fxch    st(3)
0x977E99: fstp    [esp+50h+var_30]
0x977E9D: fxch    st(1)
0x977E9F: fstp    [esp+50h+var_2C]
0x977EA3: fstp    [esp+50h+var_28]
0x977EA7: fld     dword ptr [edi]
0x977EA9: fadd    [esp+50h+var_30]
0x977EAD: fstp    [esp+50h+var_3C]
0x977EB1: fld     dword ptr [edi+4]
0x977EB4: fadd    [esp+50h+var_2C]
0x977EB8: fstp    [esp+50h+var_38]
0x977EBC: fld     [esp+50h+var_28]
0x977EC0: fadd    dword ptr [edi+8]
0x977EC3: fstp    [esp+50h+var_34]
0x977EC7: fld     [esp+50h+var_3C]
0x977ECB: fmul    dword ptr [eax]
0x977ECD: fld     [esp+50h+var_38]
0x977ED1: fmul    dword ptr [eax+4]
0x977ED4: faddp   st(1), st
0x977ED6: fld     [esp+50h+var_34]
0x977EDA: fmul    dword ptr [eax+8]
0x977EDD: faddp   st(1), st
0x977EDF: fstp    [esp+50h+arg_0]
0x977EE3: fld     [esp+50h+arg_0]
0x977EE7: fsub    st, st(1)
0x977EE9: fstp    [esp+50h+arg_10]
0x977EED: fld     dword ptr [ecx]
0x977EEF: fmul    st, st(3)
0x977EF1: fstp    [esp+50h+arg_0]
0x977EF5: mov     edx, [esp+50h+arg_1C]
0x977EF9: fld     [esp+50h+arg_0]
0x977EFD: mov     ebx, [esp+50h+arg_18]
0x977F01: fst     [esp+50h+var_30]
0x977F05: xor     ebp, ebp
0x977F07: fld     dword ptr [ecx+4]
0x977F0A: fmul    st, st(4)
0x977F0C: fstp    [esp+50h+arg_0]
0x977F10: fld     [esp+50h+arg_0]
0x977F14: fst     [esp+50h+var_2C]
0x977F18: fld     dword ptr [ecx+8]
0x977F1B: fmul    st, st(5)
0x977F1D: fstp    [esp+50h+arg_0]
0x977F21: fld     [esp+50h+arg_0]
0x977F25: fstp    [esp+50h+var_28]
0x977F29: fld     dword ptr [esi]
0x977F2B: fadd    [esp+50h+var_30]
0x977F2F: fstp    [esp+50h+var_3C]
0x977F33: fld     dword ptr [esi+4]
0x977F36: fadd    [esp+50h+var_2C]
0x977F3A: fstp    [esp+50h+var_38]
0x977F3E: fld     [esp+50h+var_28]
0x977F42: fadd    dword ptr [esi+8]
0x977F45: fstp    [esp+50h+var_34]
0x977F49: fld     [esp+50h+var_3C]
0x977F4D: fmul    dword ptr [eax]
0x977F4F: fld     [esp+50h+var_38]
0x977F53: fmul    dword ptr [eax+4]
0x977F56: faddp   st(1), st
0x977F58: fld     [esp+50h+var_34]
0x977F5C: fmul    dword ptr [eax+8]
0x977F5F: faddp   st(1), st
0x977F61: fstp    [esp+50h+arg_C]
0x977F65: fld     [esp+50h+arg_C]
0x977F69: fsub    st, st(3)
0x977F6B: fstp    [esp+50h+arg_C]
0x977F6F: fxch    st(1)
0x977F71: fstp    [esp+50h+var_30]
0x977F75: fstp    [esp+50h+var_2C]
0x977F79: fld     [esp+50h+arg_0]
0x977F7D: fstp    [esp+50h+var_28]
0x977F81: fld     dword ptr [edi]
0x977F83: fadd    [esp+50h+var_30]
0x977F87: fstp    [esp+50h+var_3C]
0x977F8B: fld     dword ptr [edi+4]
0x977F8E: fadd    [esp+50h+var_2C]
0x977F92: fstp    [esp+50h+var_38]
0x977F96: fld     [esp+50h+var_28]
0x977F9A: fadd    dword ptr [edi+8]
0x977F9D: fstp    [esp+50h+var_34]
0x977FA1: fld     [esp+50h+var_3C]
0x977FA5: fmul    dword ptr [eax]
0x977FA7: fld     [esp+50h+var_38]
0x977FAB: fmul    dword ptr [eax+4]
0x977FAE: faddp   st(1), st
0x977FB0: fld     [esp+50h+var_34]
0x977FB4: fmul    dword ptr [eax+8]
0x977FB7: faddp   st(1), st
0x977FB9: fstp    [esp+50h+arg_0]
0x977FBD: fsubr   [esp+50h+arg_0]
0x977FC1: fstp    [esp+50h+arg_8]
0x977FC5: fld     [esp+50h+arg_10]
0x977FC9: fld     st
0x977FCB: fld     [esp+50h+arg_4]
0x977FCF: fld     st
0x977FD1: fmulp   st(2), st
0x977FD3: fxch    st(1)
0x977FD5: fcomp   st(3)
0x977FD7: fnstsw  ax
0x977FD9: fldz
0x977FDB: test    ah, 41h
0x977FDE: jp      loc_9781B0
0x977FE4: fld     st
0x977FE6: fucomp  st(2)
0x977FE8: fnstsw  ax
0x977FEA: test    ah, 44h
0x977FED: jp      loc_9780DD
0x977FF3: fld     st
0x977FF5: fucomp  st(3)
0x977FF7: fnstsw  ax
0x977FF9: test    ah, 44h
0x977FFC: jp      loc_9780DD
0x978002: fstp    st(3)
0x978004: mov     edx, [esp+50h+arg_20]
0x978008: fstp    st(3)
0x97800A: mov     eax, ebx
0x97800C: fstp    st(2)
0x97800E: fstp    st(1)
0x978010: fst     dword ptr [eax]
0x978012: fstp    dword ptr [edx]
0x978014: fld     dword ptr [eax]
0x978016: mov     eax, [esp+50h+arg_1C]
0x97801A: fstp    [esp+50h+arg_0]
0x97801E: fld     dword ptr [ecx]
0x978020: fld     [esp+50h+arg_0]
0x978024: fld     st
0x978026: fmulp   st(2), st
0x978028: fxch    st(1)
0x97802A: fstp    [esp+50h+var_30]
0x97802E: fld     dword ptr [ecx+4]
0x978031: fmul    st, st(1)
0x978033: fstp    [esp+50h+var_2C]
0x978037: fmul    dword ptr [ecx+8]
0x97803A: fstp    [esp+50h+var_28]
0x97803E: fld     dword ptr [esi]
0x978040: fadd    [esp+50h+var_30]
0x978044: fstp    [esp+50h+var_3C]
0x978048: fld     dword ptr [esi+4]
0x97804B: fadd    [esp+50h+var_2C]
0x97804F: fstp    [esp+50h+var_38]
0x978053: fld     [esp+50h+var_28]
0x978057: fadd    dword ptr [esi+8]
0x97805A: mov     esi, [esp+50h+var_3C]
0x97805E: mov     [eax], esi
0x978060: mov     esi, [esp+50h+var_38]
0x978064: fstp    [esp+50h+var_34]
0x978068: mov     [eax+4], esi
0x97806B: mov     esi, [esp+50h+var_34]
0x97806F: mov     [eax+8], esi
0x978072: fld     dword ptr [edx]
0x978074: fstp    [esp+50h+arg_0]
0x978078: mov     eax, [esp+50h+arg_24]
0x97807C: fld     dword ptr [ecx]
0x97807E: fld     [esp+50h+arg_0]
0x978082: fld     st
0x978084: fmulp   st(2), st
0x978086: fxch    st(1)
0x978088: fstp    [esp+50h+var_30]
0x97808C: fld     dword ptr [ecx+4]
0x97808F: fmul    st, st(1)
0x978091: fstp    [esp+50h+var_2C]
0x978095: fmul    dword ptr [ecx+8]
0x978098: fstp    [esp+50h+var_28]
0x97809C: fld     dword ptr [edi]
0x97809E: fadd    [esp+50h+var_30]
0x9780A2: fstp    [esp+50h+var_3C]
0x9780A6: mov     ecx, [esp+50h+var_3C]
0x9780AA: fld     dword ptr [edi+4]
0x9780AD: fadd    [esp+50h+var_2C]
0x9780B1: fstp    [esp+50h+var_38]
0x9780B5: mov     edx, [esp+50h+var_38]
0x9780B9: fld     [esp+50h+var_28]
0x9780BD: fadd    dword ptr [edi+8]
0x9780C0: pop     edi
0x9780C1: mov     [eax], ecx
0x9780C3: pop     esi
0x9780C4: fstp    [esp+48h+var_34]
0x9780C8: mov     ecx, [esp+48h+var_34]
0x9780CC: mov     [eax+4], edx
0x9780CF: pop     ebp
0x9780D0: mov     [eax+8], ecx
0x9780D3: mov     eax, 1
0x9780D8: pop     ebx
0x9780D9: add     esp, 40h
0x9780DC: retn
0x9780DD: fst     dword ptr [ebx]
0x9780DF: mov     ebp, 1
0x9780E4: fld     st(1)
0x9780E6: fld     st(3)
0x9780E8: fsubr   st, st(1)
0x9780EA: fdivp   st(1), st
0x9780EC: fstp    [esp+50h+arg_0]
0x9780F0: fld     dword ptr [ecx]
0x9780F2: fmul    st, st(4)
0x9780F4: fstp    [esp+50h+var_18]
0x9780F8: fld     dword ptr [ecx+4]
0x9780FB: fmul    st, st(4)
0x9780FD: fstp    [esp+50h+var_14]
0x978101: fld     dword ptr [ecx+8]
0x978104: fmul    st, st(4)
0x978106: fstp    [esp+50h+var_10]
0x97810A: fld     dword ptr [edi]
0x97810C: fld     [esp+50h+arg_0]
0x978110: fld     st
0x978112: fmulp   st(2), st
0x978114: fxch    st(1)
0x978116: fstp    [esp+50h+var_3C]
0x97811A: fld     dword ptr [edi+4]
0x97811D: fmul    st, st(1)
0x97811F: fstp    [esp+50h+var_38]
0x978123: fld     dword ptr [edi+8]
0x978126: fmul    st, st(1)
0x978128: fstp    [esp+50h+var_34]
0x97812C: fld1
0x97812E: fsubrp  st(1), st
0x978130: fstp    [esp+50h+arg_0]
0x978134: fld     dword ptr [esi]
0x978136: fld     [esp+50h+arg_0]
0x97813A: fld     st
0x97813C: fmulp   st(2), st
0x97813E: fxch    st(1)
0x978140: fstp    [esp+50h+var_30]
0x978144: fld     dword ptr [esi+4]
0x978147: fmul    st, st(1)
0x978149: fstp    [esp+50h+var_2C]
0x97814D: fmul    dword ptr [esi+8]
0x978150: fstp    [esp+50h+var_28]
0x978154: fld     [esp+50h+var_30]
0x978158: fadd    [esp+50h+var_3C]
0x97815C: fstp    [esp+50h+var_24]
0x978160: fld     [esp+50h+var_2C]
0x978164: fadd    [esp+50h+var_38]
0x978168: fstp    [esp+50h+var_20]
0x97816C: fld     [esp+50h+var_28]
0x978170: fadd    [esp+50h+var_34]
0x978174: fstp    [esp+50h+var_1C]
0x978178: fld     [esp+50h+var_24]
0x97817C: fadd    [esp+50h+var_18]
0x978180: fstp    [esp+50h+var_30]
0x978184: mov     eax, [esp+50h+var_30]
0x978188: fld     [esp+50h+var_20]
0x97818C: mov     [edx], eax
0x97818E: fadd    [esp+50h+var_14]
0x978192: fstp    [esp+50h+var_2C]
0x978196: mov     eax, [esp+50h+var_2C]
0x97819A: fld     [esp+50h+var_1C]
0x97819E: mov     [edx+4], eax
0x9781A1: fadd    [esp+50h+var_10]
0x9781A5: fstp    [esp+50h+var_28]
0x9781A9: mov     eax, [esp+50h+var_28]
0x9781AD: mov     [edx+8], eax
0x9781B0: fld     [esp+50h+arg_C]
0x9781B4: fld     st
0x9781B6: fmul    st, st(3)
0x9781B8: fcomp   st(5)
0x9781BA: fnstsw  ax
0x9781BC: test    ah, 41h
0x9781BF: jp      loc_97839D
0x9781C5: fld     st(1)
0x9781C7: fucomp  st(3)
0x9781C9: fnstsw  ax
0x9781CB: test    ah, 44h
0x9781CE: jp      loc_9782B8
0x9781D4: fld     st(1)
0x9781D6: fucomp  st(1)
0x9781D8: fnstsw  ax
0x9781DA: test    ah, 44h
0x9781DD: jp      loc_9782B8
0x9781E3: fstp    st(4)
0x9781E5: mov     eax, [esp+50h+arg_20]
0x9781E9: fstp    st(1)
0x9781EB: fstp    st(1)
0x9781ED: fstp    st(1)
0x9781EF: fstp    dword ptr [ebx]
0x9781F1: fstp    dword ptr [eax]
0x9781F3: fld     dword ptr [ebx]
0x9781F5: fstp    [esp+50h+arg_0]
0x9781F9: fld     dword ptr [ecx]
0x9781FB: fld     [esp+50h+arg_0]
0x9781FF: fld     st
0x978201: fmulp   st(2), st
0x978203: fxch    st(1)
0x978205: fstp    [esp+50h+var_18]
0x978209: fld     dword ptr [ecx+4]
0x97820C: fmul    st, st(1)
0x97820E: fstp    [esp+50h+var_14]
0x978212: fmul    dword ptr [ecx+8]
0x978215: fstp    [esp+50h+var_10]
0x978219: fld     dword ptr [esi]
0x97821B: fadd    [esp+50h+var_18]
0x97821F: fstp    [esp+50h+var_24]
0x978223: mov     edi, [esp+50h+var_24]
0x978227: fld     dword ptr [esi+4]
0x97822A: fadd    [esp+50h+var_14]
0x97822E: fstp    [esp+50h+var_20]
0x978232: fld     [esp+50h+var_10]
0x978236: fadd    dword ptr [esi+8]
0x978239: mov     [edx], edi
0x97823B: mov     edi, [esp+50h+var_20]
0x97823F: mov     [edx+4], edi
0x978242: fstp    [esp+50h+var_1C]
0x978246: mov     edi, [esp+50h+var_1C]
0x97824A: mov     [edx+8], edi
0x97824D: fld     dword ptr [eax]
0x97824F: fstp    [esp+50h+arg_0]
0x978253: fld     dword ptr [ecx]
0x978255: fld     [esp+50h+arg_0]
0x978259: fld     st
0x97825B: fmulp   st(2), st
0x97825D: fxch    st(1)
0x97825F: fstp    [esp+50h+var_18]
0x978263: fld     st
0x978265: fmul    dword ptr [ecx+4]
0x978268: fstp    [esp+50h+var_14]
0x97826C: fmul    dword ptr [ecx+8]
0x97826F: fstp    [esp+50h+var_10]
0x978273: fld     dword ptr [esi]
0x978275: fadd    [esp+50h+var_18]
0x978279: fstp    [esp+50h+var_24]
0x97827D: fld     dword ptr [esi+4]
0x978280: fadd    [esp+50h+var_14]
0x978284: fstp    [esp+50h+var_20]
0x978288: fld     [esp+50h+var_10]
0x97828C: fadd    dword ptr [esi+8]
0x97828F: mov     eax, [esp+50h+arg_24]
0x978293: fstp    [esp+50h+var_1C]
0x978297: mov     ecx, [esp+50h+var_24]
0x97829B: mov     edx, [esp+50h+var_20]
0x97829F: mov     [eax], ecx
0x9782A1: mov     ecx, [esp+50h+var_1C]
0x9782A5: mov     [eax+4], edx
0x9782A8: mov     [eax+8], ecx
0x9782AB: pop     edi
0x9782AC: pop     esi
0x9782AD: pop     ebp
0x9782AE: mov     eax, 1
0x9782B3: pop     ebx
0x9782B4: add     esp, 40h
0x9782B7: retn
0x9782B8: test    ebp, ebp
0x9782BA: fld     st(2)
0x9782BC: fmul    [esp+50h+var_40]
0x9782C0: fld     st(1)
0x9782C2: fsubp   st(4), st
0x9782C4: fdivrp  st(3), st
0x9782C6: fxch    st(2)
0x9782C8: fadd    st, st(4)
0x9782CA: fstp    [esp+50h+arg_0]
0x9782CE: fld     dword ptr [ecx]
0x9782D0: fld     [esp+50h+arg_0]
0x9782D4: fld     st
0x9782D6: fmulp   st(2), st
0x9782D8: fxch    st(1)
0x9782DA: fstp    [esp+50h+var_18]
0x9782DE: fld     dword ptr [ecx+4]
0x9782E1: fmul    st, st(1)
0x9782E3: fstp    [esp+50h+var_14]
0x9782E7: fld     dword ptr [ecx+8]
0x9782EA: fmul    st, st(1)
0x9782EC: fstp    [esp+50h+var_10]
0x9782F0: fld     dword ptr [esi]
0x9782F2: fadd    [esp+50h+var_18]
0x9782F6: fstp    [esp+50h+var_3C]
0x9782FA: mov     eax, [esp+50h+var_3C]
0x9782FE: fld     dword ptr [esi+4]
0x978301: fadd    [esp+50h+var_14]
0x978305: fstp    [esp+50h+var_38]
0x978309: fld     [esp+50h+var_10]
0x97830D: fadd    dword ptr [esi+8]
0x978310: fstp    [esp+50h+var_34]
0x978314: jz      short loc_978384
0x978316: mov     esi, [esp+50h+arg_20]
0x97831A: fstp    st(4)
0x97831C: mov     ecx, [esp+50h+arg_24]
0x978320: fstp    st(4)
0x978322: fstp    st(1)
0x978324: fstp    st(2)
0x978326: fstp    st(1)
0x978328: fstp    dword ptr [esi]
0x97832A: mov     [ecx], eax
0x97832C: mov     eax, [esp+50h+var_38]
0x978330: mov     [ecx+4], eax
0x978333: mov     eax, [esp+50h+var_34]
0x978337: mov     [ecx+8], eax
0x97833A: fld     dword ptr [ebx]
0x97833C: fld     dword ptr [esi]
0x97833E: fcompp
0x978340: fnstsw  ax
0x978342: test    ah, 5
0x978345: jp      short loc_978377
0x978347: fld     dword ptr [ebx]
0x978349: fstp    [esp+50h+arg_0]
0x97834D: fld     dword ptr [esi]
0x97834F: fstp    dword ptr [ebx]
0x978351: fld     [esp+50h+arg_0]
0x978355: fstp    dword ptr [esi]
0x978357: mov     ebx, [ecx]
0x978359: mov     eax, [edx]
0x97835B: mov     esi, [edx+4]
0x97835E: mov     edi, [edx+8]
0x978361: mov     [edx], ebx
0x978363: mov     ebx, [ecx+4]
0x978366: mov     [edx+4], ebx
0x978369: mov     ebx, [ecx+8]
0x97836C: mov     [edx+8], ebx
0x97836F: mov     [ecx], eax
0x978371: mov     [ecx+4], esi
0x978374: mov     [ecx+8], edi
0x978377: pop     edi
0x978378: pop     esi
0x978379: pop     ebp
0x97837A: mov     eax, 1
0x97837F: pop     ebx
0x978380: add     esp, 40h
0x978383: retn
0x978384: fstp    dword ptr [ebx]
0x978386: mov     [edx], eax
0x978388: mov     eax, [esp+50h+var_38]
0x97838C: mov     [edx+4], eax
0x97838F: mov     eax, [esp+50h+var_34]
0x978393: mov     [edx+8], eax
0x978396: mov     ebp, 1
0x97839B: jmp     short loc_97839F
0x97839D: fstp    st(2)
0x97839F: fld     [esp+50h+arg_8]
0x9783A3: fld     st
0x9783A5: fmul    st, st(4)
0x9783A7: fcomp   st(5)
0x9783A9: fnstsw  ax
0x9783AB: test    ah, 41h
0x9783AE: jp      loc_97856C
0x9783B4: fld     st(1)
0x9783B6: fucomp  st(4)
0x9783B8: fnstsw  ax
0x9783BA: test    ah, 44h
0x9783BD: jp      loc_978483
0x9783C3: fld     st(1)
0x9783C5: fucomp  st(1)
0x9783C7: fnstsw  ax
0x9783C9: test    ah, 44h
0x9783CC: jp      loc_978483
0x9783D2: fstp    st(4)
0x9783D4: mov     eax, [esp+50h+arg_20]
0x9783D8: fstp    st(3)
0x9783DA: fstp    st(1)
0x9783DC: fstp    st
0x9783DE: fstp    dword ptr [ebx]
0x9783E0: fstp    dword ptr [eax]
0x9783E2: fld     dword ptr [ebx]
0x9783E4: fstp    [esp+50h+arg_0]
0x9783E8: fld     dword ptr [ecx]
0x9783EA: fld     [esp+50h+arg_0]
0x9783EE: fld     st
0x9783F0: fmulp   st(2), st
0x9783F2: fxch    st(1)
0x9783F4: fstp    [esp+50h+var_18]
0x9783F8: fld     st
0x9783FA: fmul    dword ptr [ecx+4]
0x9783FD: fstp    [esp+50h+var_14]
0x978401: fmul    dword ptr [ecx+8]
0x978404: fstp    [esp+50h+var_10]
0x978408: fld     dword ptr [edi]
0x97840A: fadd    [esp+50h+var_18]
0x97840E: fstp    [esp+50h+var_24]
0x978412: mov     esi, [esp+50h+var_24]
0x978416: fld     dword ptr [edi+4]
0x978419: fadd    [esp+50h+var_14]
0x97841D: fstp    [esp+50h+var_20]
0x978421: fld     [esp+50h+var_10]
0x978425: fadd    dword ptr [edi+8]
0x978428: mov     [edx], esi
0x97842A: mov     esi, [esp+50h+var_20]
0x97842E: mov     [edx+4], esi
0x978431: fstp    [esp+50h+var_1C]
0x978435: mov     esi, [esp+50h+var_1C]
0x978439: mov     [edx+8], esi
0x97843C: fld     dword ptr [eax]
0x97843E: fstp    [esp+50h+arg_0]
0x978442: fld     dword ptr [ecx]
0x978444: fld     [esp+50h+arg_0]
0x978448: fld     st
0x97844A: fmulp   st(2), st
0x97844C: fxch    st(1)
0x97844E: fstp    [esp+50h+var_18]
0x978452: fld     st
0x978454: fmul    dword ptr [ecx+4]
0x978457: fstp    [esp+50h+var_14]
0x97845B: fmul    dword ptr [ecx+8]
0x97845E: fstp    [esp+50h+var_10]
0x978462: fld     dword ptr [edi]
0x978464: fadd    [esp+50h+var_18]
0x978468: fstp    [esp+50h+var_24]
0x97846C: fld     dword ptr [edi+4]
0x97846F: fadd    [esp+50h+var_14]
0x978473: fstp    [esp+50h+var_20]
0x978477: fld     [esp+50h+var_10]
0x97847B: fadd    dword ptr [edi+8]
0x97847E: jmp     loc_97828F
0x978483: test    ebp, ebp
0x978485: fld     st(3)
0x978487: fmul    [esp+50h+var_40]
0x97848B: fld     st(1)
0x97848D: fsubp   st(5), st
0x97848F: fdivrp  st(4), st
0x978491: fxch    st(3)
0x978493: fadd    st, st(4)
0x978495: fstp    [esp+50h+arg_0]
0x978499: fld     dword ptr [ecx]
0x97849B: fld     [esp+50h+arg_0]
0x97849F: fld     st
0x9784A1: fmulp   st(2), st
0x9784A3: fxch    st(1)
0x9784A5: fstp    [esp+50h+var_18]
0x9784A9: fld     dword ptr [ecx+4]
0x9784AC: fmul    st, st(1)
0x9784AE: fstp    [esp+50h+var_14]
0x9784B2: fld     dword ptr [ecx+8]
0x9784B5: fmul    st, st(1)
0x9784B7: fstp    [esp+50h+var_10]
0x9784BB: fld     dword ptr [edi]
0x9784BD: fadd    [esp+50h+var_18]
0x9784C1: fstp    [esp+50h+var_3C]
0x9784C5: mov     eax, [esp+50h+var_3C]
0x9784C9: fld     dword ptr [edi+4]
0x9784CC: fadd    [esp+50h+var_14]
0x9784D0: fstp    [esp+50h+var_38]
0x9784D4: fld     [esp+50h+var_10]
0x9784D8: fadd    dword ptr [edi+8]
0x9784DB: fstp    [esp+50h+var_34]
0x9784DF: jz      short loc_978553
0x9784E1: fstp    st(4)
0x9784E3: fstp    st(4)
0x9784E5: fstp    st(1)
0x9784E7: fstp    st(2)
0x9784E9: fstp    st(1)
0x9784EB: mov     esi, [esp+50h+arg_20]
0x9784EF: mov     ecx, [esp+50h+arg_24]
0x9784F3: fstp    dword ptr [esi]
0x9784F5: mov     [ecx], eax
0x9784F7: mov     eax, [esp+50h+var_38]
0x9784FB: mov     [ecx+4], eax
0x9784FE: mov     eax, [esp+50h+var_34]
0x978502: mov     [ecx+8], eax
0x978505: fld     dword ptr [ebx]
0x978507: fld     dword ptr [esi]
0x978509: fcompp
0x97850B: fnstsw  ax
0x97850D: test    ah, 5
0x978510: jp      loc_9782AB
0x978516: fld     dword ptr [ebx]
0x978518: fstp    [esp+50h+arg_0]
0x97851C: fld     dword ptr [esi]
0x97851E: fstp    dword ptr [ebx]
0x978520: fld     [esp+50h+arg_0]
0x978524: fstp    dword ptr [esi]
0x978526: mov     ebx, [ecx]
0x978528: mov     eax, [edx]
0x97852A: mov     esi, [edx+4]
0x97852D: mov     edi, [edx+8]
0x978530: mov     [edx], ebx
0x978532: mov     ebx, [ecx+4]
0x978535: mov     [edx+4], ebx
0x978538: mov     ebx, [ecx+8]
0x97853B: mov     [edx+8], ebx
0x97853E: mov     [ecx], eax
0x978540: mov     [ecx+4], esi
0x978543: mov     [ecx+8], edi
0x978546: pop     edi
0x978547: pop     esi
0x978548: pop     ebp
0x978549: mov     eax, 1
0x97854E: pop     ebx
0x97854F: add     esp, 40h
0x978552: retn
0x978553: fstp    dword ptr [ebx]
0x978555: mov     [edx], eax
0x978557: mov     eax, [esp+50h+var_38]
0x97855B: mov     [edx+4], eax
0x97855E: mov     eax, [esp+50h+var_34]
0x978562: mov     [edx+8], eax
0x978565: mov     ebp, 1
0x97856A: jmp     short loc_97856E
0x97856C: fstp    st(3)
0x97856E: fld     st(2)
0x978570: fmul    st, st(2)
0x978572: fcomp   st(4)
0x978574: fnstsw  ax
0x978576: fstp    st(3)
0x978578: test    ah, 41h
0x97857B: jp      loc_978727
0x978581: fld     st(2)
0x978583: fucomp  st(1)
0x978585: fnstsw  ax
0x978587: test    ah, 44h
0x97858A: jp      loc_97864C
0x978590: fxch    st(2)
0x978592: fucomp  st(1)
0x978594: fnstsw  ax
0x978596: test    ah, 44h
0x978599: jp      loc_97864E
0x97859F: fstp    st
0x9785A1: mov     eax, [esp+50h+arg_20]
0x9785A5: fstp    st
0x9785A7: fst     dword ptr [ebx]
0x9785A9: fstp    dword ptr [eax]
0x9785AB: fld     dword ptr [ebx]
0x9785AD: fstp    [esp+50h+arg_0]
0x9785B1: fld     dword ptr [ecx]
0x9785B3: fld     [esp+50h+arg_0]
0x9785B7: fld     st
0x9785B9: fmulp   st(2), st
0x9785BB: fxch    st(1)
0x9785BD: fstp    [esp+50h+var_18]
0x9785C1: fld     st
0x9785C3: fmul    dword ptr [ecx+4]
0x9785C6: fstp    [esp+50h+var_14]
0x9785CA: fmul    dword ptr [ecx+8]
0x9785CD: fstp    [esp+50h+var_10]
0x9785D1: fld     dword ptr [esi]
0x9785D3: fadd    [esp+50h+var_18]
0x9785D7: fstp    [esp+50h+var_24]
0x9785DB: fld     dword ptr [esi+4]
0x9785DE: fadd    [esp+50h+var_14]
0x9785E2: fstp    [esp+50h+var_20]
0x9785E6: fld     [esp+50h+var_10]
0x9785EA: fadd    dword ptr [esi+8]
0x9785ED: mov     esi, [esp+50h+var_24]
0x9785F1: mov     [edx], esi
0x9785F3: mov     esi, [esp+50h+var_20]
0x9785F7: fstp    [esp+50h+var_1C]
0x9785FB: mov     [edx+4], esi
0x9785FE: mov     esi, [esp+50h+var_1C]
0x978602: mov     [edx+8], esi
0x978605: fld     dword ptr [eax]
0x978607: fstp    [esp+50h+arg_0]
0x97860B: fld     dword ptr [ecx]
0x97860D: fld     [esp+50h+arg_0]
0x978611: fld     st
0x978613: fmulp   st(2), st
0x978615: fxch    st(1)
0x978617: fstp    [esp+50h+var_18]
0x97861B: fld     st
0x97861D: fmul    dword ptr [ecx+4]
0x978620: fstp    [esp+50h+var_14]
0x978624: fmul    dword ptr [ecx+8]
0x978627: fstp    [esp+50h+var_10]
0x97862B: fld     dword ptr [edi]
0x97862D: fadd    [esp+50h+var_18]
0x978631: fstp    [esp+50h+var_24]
0x978635: fld     dword ptr [edi+4]
0x978638: fadd    [esp+50h+var_14]
0x97863C: fstp    [esp+50h+var_20]
0x978640: fld     [esp+50h+var_10]
0x978644: fadd    dword ptr [edi+8]
0x978647: jmp     loc_97828F
0x97864C: fstp    st(2)
0x97864E: test    ebp, ebp
0x978650: fsubr   st, st(1)
0x978652: fdivp   st(1), st
0x978654: fstp    [esp+50h+arg_0]
0x978658: fld     dword ptr [ecx]
0x97865A: fmul    st, st(1)
0x97865C: fstp    [esp+50h+var_C]
0x978660: fld     dword ptr [ecx+4]
0x978663: fmul    st, st(1)
0x978665: fstp    [esp+50h+var_8]
0x978669: fld     dword ptr [ecx+8]
0x97866C: fmul    st, st(1)
0x97866E: fstp    [esp+50h+var_4]
0x978672: fld     dword ptr [edi]
0x978674: fld     [esp+50h+arg_0]
0x978678: fld     st
0x97867A: fmulp   st(2), st
0x97867C: fxch    st(1)
0x97867E: fstp    [esp+50h+var_24]
0x978682: fld     dword ptr [edi+4]
0x978685: fmul    st, st(1)
0x978687: fstp    [esp+50h+var_20]
0x97868B: fld     dword ptr [edi+8]
0x97868E: fmul    st, st(1)
0x978690: fstp    [esp+50h+var_1C]
0x978694: fld1
0x978696: fsubrp  st(1), st
0x978698: fstp    [esp+50h+arg_0]
0x97869C: fld     dword ptr [esi]
0x97869E: fld     [esp+50h+arg_0]
0x9786A2: fld     st
0x9786A4: fmulp   st(2), st
0x9786A6: fxch    st(1)
0x9786A8: fstp    [esp+50h+var_18]
0x9786AC: fld     dword ptr [esi+4]
0x9786AF: fmul    st, st(1)
0x9786B1: fstp    [esp+50h+var_14]
0x9786B5: fmul    dword ptr [esi+8]
0x9786B8: fstp    [esp+50h+var_10]
0x9786BC: fld     [esp+50h+var_18]
0x9786C0: fadd    [esp+50h+var_24]
0x9786C4: fstp    [esp+50h+var_30]
0x9786C8: fld     [esp+50h+var_14]
0x9786CC: fadd    [esp+50h+var_20]
0x9786D0: fstp    [esp+50h+var_2C]
0x9786D4: fld     [esp+50h+var_10]
0x9786D8: fadd    [esp+50h+var_1C]
0x9786DC: fstp    [esp+50h+var_28]
0x9786E0: fld     [esp+50h+var_30]
0x9786E4: fadd    [esp+50h+var_C]
0x9786E8: fstp    [esp+50h+var_3C]
0x9786EC: fld     [esp+50h+var_2C]
0x9786F0: fadd    [esp+50h+var_8]
0x9786F4: fstp    [esp+50h+var_38]
0x9786F8: fld     [esp+50h+var_28]
0x9786FC: fadd    [esp+50h+var_4]
0x978700: fstp    [esp+50h+var_34]
0x978704: jz      short loc_97870F
0x978706: mov     eax, [esp+50h+var_3C]
0x97870A: jmp     loc_9784EB
0x97870F: mov     ecx, [esp+50h+var_3C]
0x978713: fstp    dword ptr [ebx]
0x978715: mov     eax, [esp+50h+var_38]
0x978719: mov     [edx], ecx
0x97871B: mov     ecx, [esp+50h+var_34]
0x97871F: mov     [edx+4], eax
0x978722: mov     [edx+8], ecx
0x978725: jmp     short loc_978733
0x978727: test    ebp, ebp
0x978729: fstp    st(3)
0x97872B: fstp    st
0x97872D: fstp    st
0x97872F: fstp    st
0x978731: jz      short loc_97875C
0x978733: fld     dword ptr [ebx]
0x978735: mov     eax, [esp+50h+arg_20]
0x978739: fstp    dword ptr [eax]
0x97873B: mov     ecx, [edx]
0x97873D: mov     eax, [esp+50h+arg_24]
0x978741: mov     [eax], ecx
0x978743: mov     ecx, [edx+4]
0x978746: pop     edi
0x978747: mov     [eax+4], ecx
0x97874A: mov     edx, [edx+8]
0x97874D: pop     esi
0x97874E: pop     ebp
0x97874F: mov     [eax+8], edx
0x978752: mov     eax, 1
0x978757: pop     ebx
0x978758: add     esp, 40h
0x97875B: retn
0x97875C: pop     edi
0x97875D: pop     esi
0x97875E: pop     ebp
0x97875F: xor     eax, eax
0x978761: pop     ebx
0x978762: add     esp, 40h
0x978765: retn
