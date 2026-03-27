0x750BC0: push    ebp
0x750BC1: mov     ebp, esp
0x750BC3: and     esp, 0FFFFFFF8h
0x750BC6: mov     eax, [ebp+arg_4]
0x750BC9: sub     esp, 1A4h
0x750BCF: cmp     word ptr [eax+48h], 0
0x750BD4: push    ebx
0x750BD5: push    esi
0x750BD6: push    edi
0x750BD7: mov     ebx, ecx
0x750BD9: jz      loc_7512BB
0x750BDF: mov     eax, [ebx+18h]
0x750BE2: test    eax, eax
0x750BE4: jz      loc_7512BB
0x750BEA: lea     esi, [eax+64h]
0x750BED: mov     ecx, 0Dh
0x750BF2: lea     edi, [esp+1B0h+var_9C]
0x750BF9: rep movsd
0x750BFB: mov     esi, [ebx+10h]
0x750BFE: add     esi, 64h ; 'd'
0x750C01: mov     ecx, 0Dh
0x750C06: lea     edi, [esp+1B0h+var_68]
0x750C0D: rep movsd
0x750C0F: lea     ecx, [esp+1B0h+var_34]
0x750C16: push    ecx
0x750C17: lea     ecx, [esp+1B4h+var_68]
0x750C1E: call    sub_718A80
0x750C23: lea     edx, [esp+1B0h+var_9C]
0x750C2A: push    edx
0x750C2B: lea     eax, [esp+1B4h+var_D0]
0x750C32: push    eax
0x750C33: lea     ecx, [esp+1B8h+var_34]
0x750C3A: call    sub_53D7A0
0x750C3F: mov     ecx, dword ptr [esp+1B0h+var_AC]
0x750C46: mov     edx, dword ptr [esp+1B0h+var_AC+4]
0x750C4D: mov     eax, [esp+1B0h+var_A4]
0x750C54: mov     dword ptr [esp+1B0h+var_198], ecx
0x750C58: lea     ecx, [ebx+1Ch]
0x750C5B: mov     dword ptr [esp+1B0h+var_198+4], edx
0x750C5F: push    ecx
0x750C60: lea     edx, [esp+1B4h+var_100]
0x750C67: push    edx
0x750C68: lea     ecx, [esp+1B8h+var_D0]
0x750C6F: mov     [esp+1B8h+var_190], eax
0x750C73: call    sub_7101F0
0x750C78: mov     ecx, [eax]
0x750C7A: mov     edx, [eax+4]
0x750C7D: mov     eax, [eax+8]
0x750C80: mov     dword ptr [esp+1B0h+var_178], ecx
0x750C84: lea     ecx, [esp+1B0h+var_178]
0x750C88: mov     dword ptr [esp+1B0h+var_178+4], edx
0x750C8C: mov     [esp+1B0h+var_170], eax
0x750C90: call    sub_43F350
0x750C95: fstp    st
0x750C97: fld     dword ptr [ebx+2Ch]
0x750C9A: mov     eax, [ebx+30h]
0x750C9D: sub     eax, 0
0x750CA0: fmul    qword ptr ds:0A863D8h
0x750CA6: mov     ecx, [ebp+arg_4]
0x750CA9: movzx   edx, word ptr [ecx+48h]
0x750CAD: fstp    [esp+1B0h+var_19C]
0x750CB1: jz      loc_75122C
0x750CB7: sub     eax, 1
0x750CBA: jnz     loc_7512BB
0x750CC0: fldz
0x750CC2: fcom    dword ptr [ebx+28h]
0x750CC5: fnstsw  ax
0x750CC7: test    ah, 44h
0x750CCA: jp      loc_750DA9
0x750CD0: fcom    dword ptr [ebx+34h]
0x750CD3: fnstsw  ax
0x750CD5: test    ah, 44h
0x750CD8: jp      loc_750DA9
0x750CDE: test    dx, dx
0x750CE1: fstp    st
0x750CE3: mov     esi, [ecx+5Ch]
0x750CE6: mov     edi, [ecx+1Ch]
0x750CE9: jbe     loc_7512BB
0x750CEF: fld     dword ptr [esp+1B0h+var_198]
0x750CF3: movzx   ebx, dx
0x750CF6: fstp    [esp+1B0h+var_148]
0x750CFA: fld     dword ptr [esp+1B0h+var_198+4]
0x750CFE: fstp    [esp+1B0h+var_150]
0x750D02: fld     [esp+1B0h+var_190]
0x750D06: fstp    [esp+1B0h+var_158]
0x750D0A: fld     [ebp+arg_0]
0x750D0D: fstp    [esp+1B0h+var_160]
0x750D11: fld     [esp+1B0h+var_19C]
0x750D15: fstp    [esp+1B0h+var_140]
0x750D19: fld     dword ptr [edi]
0x750D1B: lea     ecx, [esp+1B0h+var_198]
0x750D1F: fsubr   [esp+1B0h+var_148]
0x750D23: fstp    dword ptr [esp+1B0h+var_198]
0x750D27: fld     dword ptr [edi+4]
0x750D2A: fsubr   [esp+1B0h+var_150]
0x750D2E: fstp    dword ptr [esp+1B0h+var_198+4]
0x750D32: fld     dword ptr [edi+8]
0x750D35: fsubr   [esp+1B0h+var_158]
0x750D39: fstp    [esp+1B0h+var_190]
0x750D3D: call    sub_43F350
0x750D42: fstp    st
0x750D44: add     esi, 1Ch
0x750D47: fld     dword ptr [esi-8]
0x750D4A: add     edi, 0Ch
0x750D4D: sub     ebx, 1
0x750D50: fsubr   [esp+1B0h+var_160]
0x750D54: fmul    [esp+1B0h+var_140]
0x750D58: fstp    [esp+1B0h+var_1A0]
0x750D5C: fld     [esp+1B0h+var_1A0]
0x750D60: fld     dword ptr [esp+1B0h+var_198]
0x750D64: fmul    st, st(1)
0x750D66: fstp    dword ptr [esp+1B0h+var_178]
0x750D6A: fld     dword ptr [esp+1B0h+var_198+4]
0x750D6E: fmul    st, st(1)
0x750D70: fstp    dword ptr [esp+1B0h+var_178+4]
0x750D74: fmul    [esp+1B0h+var_190]
0x750D78: fstp    [esp+1B0h+var_170]
0x750D7C: fld     dword ptr [esp+1B0h+var_178]
0x750D80: fadd    dword ptr [esi-1Ch]
0x750D83: fstp    dword ptr [esi-1Ch]
0x750D86: fld     dword ptr [esp+1B0h+var_178+4]
0x750D8A: fadd    dword ptr [esi-18h]
0x750D8D: fstp    dword ptr [esi-18h]
0x750D90: fld     dword ptr [esi-14h]
0x750D93: fadd    [esp+1B0h+var_170]
0x750D97: fstp    dword ptr [esi-14h]
0x750D9A: jnz     loc_750D19
0x750DA0: pop     edi
0x750DA1: pop     esi
0x750DA2: pop     ebx
0x750DA3: mov     esp, ebp
0x750DA5: pop     ebp
0x750DA6: retn    8
0x750DA9: fcom    dword ptr [ebx+28h]
0x750DAC: fnstsw  ax
0x750DAE: test    ah, 44h
0x750DB1: jp      loc_750F47
0x750DB7: fcom    dword ptr [ebx+34h]
0x750DBA: fnstsw  ax
0x750DBC: test    ah, 44h
0x750DBF: jnp     loc_750F47
0x750DC5: test    dx, dx
0x750DC8: fstp    st
0x750DCA: fld     dword ptr [ebx+38h]
0x750DCD: mov     esi, [ecx+5Ch]
0x750DD0: fmul    dword ptr [ebx+34h]
0x750DD3: mov     edi, [ecx+1Ch]
0x750DD6: fmul    qword ptr ds:0A3F470h
0x750DDC: fstp    [esp+1B0h+var_1A0]
0x750DE0: jbe     loc_7512BB
0x750DE6: fld     dword ptr [esp+1B0h+var_198]
0x750DEA: movzx   ebx, dx
0x750DED: fstp    [esp+1B0h+var_148]
0x750DF1: fld     dword ptr [esp+1B0h+var_198+4]
0x750DF5: fstp    [esp+1B0h+var_150]
0x750DF9: fld     [esp+1B0h+var_190]
0x750DFD: fstp    [esp+1B0h+var_158]
0x750E01: fld     [esp+1B0h+var_1A0]
0x750E05: fstp    [esp+1B0h+var_168]
0x750E09: fld     [esp+1B0h+var_19C]
0x750E0D: fstp    [esp+1B0h+var_140]
0x750E11: fld     [ebp+arg_0]
0x750E14: fstp    [esp+1B0h+var_160]
0x750E18: fld     dword ptr [edi]
0x750E1A: lea     ecx, [esp+1B0h+var_178]
0x750E1E: fsubr   [esp+1B0h+var_148]
0x750E22: fstp    dword ptr [esp+1B0h+var_198]
0x750E26: fld     dword ptr [edi+4]
0x750E29: fsubr   [esp+1B0h+var_150]
0x750E2D: fstp    dword ptr [esp+1B0h+var_198+4]
0x750E31: fld     dword ptr [edi+8]
0x750E34: fsubr   [esp+1B0h+var_158]
0x750E38: fstp    [esp+1B0h+var_190]
0x750E3C: call    sub_43F350
0x750E41: fstp    st
0x750E43: call    sub_53D480
0x750E48: fmul    [esp+1B0h+var_168]
0x750E4C: fstp    dword ptr [esp+1B0h+var_120]
0x750E53: call    sub_53D480
0x750E58: fmul    [esp+1B0h+var_168]
0x750E5C: fstp    dword ptr [esp+1B0h+var_120+4]
0x750E63: call    sub_53D480
0x750E68: fmul    [esp+1B0h+var_168]
0x750E6C: add     esi, 1Ch
0x750E6F: add     edi, 0Ch
0x750E72: sub     ebx, 1
0x750E75: fstp    [esp+1B0h+var_118]
0x750E7C: fld     dword ptr [esp+1B0h+var_198]
0x750E80: fld     [esp+1B0h+var_140]
0x750E84: fmul    st(1), st
0x750E86: fxch    st(1)
0x750E88: fstp    dword ptr [esp+1B0h+var_130]
0x750E8F: fld     dword ptr [esp+1B0h+var_198+4]
0x750E93: fmul    st, st(1)
0x750E95: fstp    dword ptr [esp+1B0h+var_130+4]
0x750E9C: fmul    [esp+1B0h+var_190]
0x750EA0: fstp    [esp+1B0h+var_128]
0x750EA7: fld     dword ptr [esp+1B0h+var_130]
0x750EAE: fadd    dword ptr [esp+1B0h+var_120]
0x750EB5: fstp    dword ptr [esp+1B0h+var_110]
0x750EBC: fld     dword ptr [esp+1B0h+var_130+4]
0x750EC3: fadd    dword ptr [esp+1B0h+var_120+4]
0x750ECA: fstp    dword ptr [esp+1B0h+var_110+4]
0x750ED1: fld     [esp+1B0h+var_128]
0x750ED8: fadd    [esp+1B0h+var_118]
0x750EDF: fstp    [esp+1B0h+var_108]
0x750EE6: fld     dword ptr [esi-8]
0x750EE9: fsubr   [esp+1B0h+var_160]
0x750EED: fstp    [esp+1B0h+var_1A0]
0x750EF1: fld     [esp+1B0h+var_1A0]
0x750EF5: fld     dword ptr [esp+1B0h+var_110]
0x750EFC: fmul    st, st(1)
0x750EFE: fstp    [esp+1B0h+var_184]
0x750F02: fld     dword ptr [esp+1B0h+var_110+4]
0x750F09: fmul    st, st(1)
0x750F0B: fstp    [esp+1B0h+var_180]
0x750F0F: fmul    [esp+1B0h+var_108]
0x750F16: fstp    [esp+1B0h+var_17C]
0x750F1A: fld     dword ptr [esi-1Ch]
0x750F1D: fadd    [esp+1B0h+var_184]
0x750F21: fstp    dword ptr [esi-1Ch]
0x750F24: fld     [esp+1B0h+var_180]
0x750F28: fadd    dword ptr [esi-18h]
0x750F2B: fstp    dword ptr [esi-18h]
0x750F2E: fld     [esp+1B0h+var_17C]
0x750F32: fadd    dword ptr [esi-14h]
0x750F35: fstp    dword ptr [esi-14h]
0x750F38: jnz     loc_750E18
0x750F3E: pop     edi
0x750F3F: pop     esi
0x750F40: pop     ebx
0x750F41: mov     esp, ebp
0x750F43: pop     ebp
0x750F44: retn    8
0x750F47: fcom    dword ptr [ebx+28h]
0x750F4A: fnstsw  ax
0x750F4C: test    ah, 44h
0x750F4F: jnp     loc_751050
0x750F55: fcom    dword ptr [ebx+34h]
0x750F58: fnstsw  ax
0x750F5A: test    ah, 44h
0x750F5D: jp      loc_751050
0x750F63: test    dx, dx
0x750F66: fstp    st
0x750F68: mov     esi, [ecx+5Ch]
0x750F6B: mov     edi, [ecx+1Ch]
0x750F6E: jbe     loc_7512BB
0x750F74: fld     dword ptr [esp+1B0h+var_198]
0x750F78: movzx   ecx, dx
0x750F7B: fstp    [esp+1B0h+var_148]
0x750F7F: fld     dword ptr [esp+1B0h+var_198+4]
0x750F83: fstp    [esp+1B0h+var_150]
0x750F87: fld     [esp+1B0h+var_190]
0x750F8B: fstp    [esp+1B0h+var_158]
0x750F8F: fld     [esp+1B0h+var_19C]
0x750F93: mov     [esp+1B0h+var_19C], ecx
0x750F97: fstp    [esp+1B0h+var_140]
0x750F9B: fld     [ebp+arg_0]
0x750F9E: fstp    [esp+1B0h+var_160]
0x750FA2: fld     dword ptr [edi]
0x750FA4: lea     ecx, [esp+1B0h+var_198]
0x750FA8: fsubr   [esp+1B0h+var_148]
0x750FAC: fstp    dword ptr [esp+1B0h+var_198]
0x750FB0: fld     dword ptr [edi+4]
0x750FB3: fsubr   [esp+1B0h+var_150]
0x750FB7: fstp    dword ptr [esp+1B0h+var_198+4]
0x750FBB: fld     dword ptr [edi+8]
0x750FBE: fsubr   [esp+1B0h+var_158]
0x750FC2: fstp    [esp+1B0h+var_190]
0x750FC6: call    sub_43F350
0x750FCB: fld     dword ptr [ebx+28h]
0x750FCE: fchs
0x750FD0: fmulp   st(1), st
0x750FD2: fstp    [esp+1B0h+var_1A0]
0x750FD6: fld     [esp+1B0h+var_1A0]
0x750FDA: call    __CIexp
0x750FDF: fstp    [esp+1B0h+var_1A0]
0x750FE3: fld     [esp+1B0h+var_1A0]
0x750FE7: add     esi, 1Ch
0x750FEA: fmul    [esp+1B0h+var_140]
0x750FEE: add     edi, 0Ch
0x750FF1: sub     [esp+1B0h+var_19C], 1
0x750FF6: fld     dword ptr [esi-8]
0x750FF9: fsubr   [esp+1B0h+var_160]
0x750FFD: fmulp   st(1), st
0x750FFF: fstp    [esp+1B0h+var_1A0]
0x751003: fld     [esp+1B0h+var_1A0]
0x751007: fld     dword ptr [esp+1B0h+var_198]
0x75100B: fmul    st, st(1)
0x75100D: fstp    [esp+1B0h+var_184]
0x751011: fld     dword ptr [esp+1B0h+var_198+4]
0x751015: fmul    st, st(1)
0x751017: fstp    [esp+1B0h+var_180]
0x75101B: fmul    [esp+1B0h+var_190]
0x75101F: fstp    [esp+1B0h+var_17C]
0x751023: fld     [esp+1B0h+var_184]
0x751027: fadd    dword ptr [esi-1Ch]
0x75102A: fstp    dword ptr [esi-1Ch]
0x75102D: fld     [esp+1B0h+var_180]
0x751031: fadd    dword ptr [esi-18h]
0x751034: fstp    dword ptr [esi-18h]
0x751037: fld     dword ptr [esi-14h]
0x75103A: fadd    [esp+1B0h+var_17C]
0x75103E: fstp    dword ptr [esi-14h]
0x751041: jnz     loc_750FA2
0x751047: pop     edi
0x751048: pop     esi
0x751049: pop     ebx
0x75104A: mov     esp, ebp
0x75104C: pop     ebp
0x75104D: retn    8
0x751050: fcom    dword ptr [ebx+28h]
0x751053: fnstsw  ax
0x751055: test    ah, 44h
0x751058: jnp     loc_7512B9
0x75105E: fcomp   dword ptr [ebx+34h]
0x751061: fnstsw  ax
0x751063: test    ah, 44h
0x751066: jnp     loc_7512BB
0x75106C: test    dx, dx
0x75106F: fld     dword ptr [ebx+38h]
0x751072: fmul    dword ptr [ebx+34h]
0x751075: mov     esi, [ecx+5Ch]
0x751078: mov     edi, [ecx+1Ch]
0x75107B: fmul    qword ptr ds:0A3F470h
0x751081: fstp    [esp+1B0h+var_1A0]
0x751085: jbe     loc_7512BB
0x75108B: fld     [esp+1B0h+var_1A0]
0x75108F: movzx   edx, dx
0x751092: fstp    [esp+1B0h+var_168]
0x751096: fld     dword ptr [esp+1B0h+var_198]
0x75109A: fstp    [esp+1B0h+var_148]
0x75109E: fld     dword ptr [esp+1B0h+var_198+4]
0x7510A2: fstp    [esp+1B0h+var_150]
0x7510A6: fld     [esp+1B0h+var_190]
0x7510AA: fstp    [esp+1B0h+var_158]
0x7510AE: fld     [esp+1B0h+var_19C]
0x7510B2: mov     [esp+1B0h+var_19C], edx
0x7510B6: fld     dword ptr [esp+1B0h+var_178]
0x7510BA: fmul    st, st(1)
0x7510BC: fstp    [esp+1B0h+var_184]
0x7510C0: fld     dword ptr [esp+1B0h+var_178+4]
0x7510C4: fmul    st, st(1)
0x7510C6: fstp    [esp+1B0h+var_180]
0x7510CA: fmul    [esp+1B0h+var_170]
0x7510CE: fstp    [esp+1B0h+var_17C]
0x7510D2: fld     [esp+1B0h+var_184]
0x7510D6: fstp    [esp+1B0h+var_130]
0x7510DD: fld     [esp+1B0h+var_180]
0x7510E1: fstp    [esp+1B0h+var_120]
0x7510E8: fld     [esp+1B0h+var_17C]
0x7510EC: fstp    [esp+1B0h+var_110]
0x7510F3: fld     [ebp+arg_0]
0x7510F6: fstp    [esp+1B0h+var_160]
0x7510FA: lea     ebx, [ebx+0]
0x751100: call    sub_53D480
0x751105: fmul    [esp+1B0h+var_168]
0x751109: fstp    dword ptr [esp+1B0h+var_198]
0x75110D: call    sub_53D480
0x751112: fmul    [esp+1B0h+var_168]
0x751116: fstp    dword ptr [esp+1B0h+var_198+4]
0x75111A: call    sub_53D480
0x75111F: fmul    [esp+1B0h+var_168]
0x751123: lea     ecx, [esp+1B0h+var_100]
0x75112A: fstp    [esp+1B0h+var_190]
0x75112E: fld     dword ptr [edi]
0x751130: fsubr   [esp+1B0h+var_148]
0x751134: fstp    [esp+1B0h+var_100]
0x75113B: fld     dword ptr [edi+4]
0x75113E: fsubr   [esp+1B0h+var_150]
0x751142: fstp    [esp+1B0h+var_FC]
0x751149: fld     dword ptr [edi+8]
0x75114C: fsubr   [esp+1B0h+var_158]
0x751150: fstp    [esp+1B0h+var_F8]
0x751157: call    sub_43F350
0x75115C: fld     dword ptr [ebx+28h]
0x75115F: fchs
0x751161: fmulp   st(1), st
0x751163: fstp    [esp+1B0h+var_1A0]
0x751167: fld     [esp+1B0h+var_1A0]
0x75116B: call    __CIexp
0x751170: fstp    [esp+1B0h+var_1A0]
0x751174: fld     [esp+1B0h+var_1A0]
0x751178: add     esi, 1Ch
0x75117B: fstp    [esp+1B0h+var_1A0]
0x75117F: add     edi, 0Ch
0x751182: sub     [esp+1B0h+var_19C], 1
0x751187: fld     [esp+1B0h+var_1A0]
0x75118B: fld     [esp+1B0h+var_130]
0x751192: fmul    st, st(1)
0x751194: fstp    [esp+1B0h+var_184]
0x751198: fld     [esp+1B0h+var_120]
0x75119F: fmul    st, st(1)
0x7511A1: fstp    [esp+1B0h+var_180]
0x7511A5: fmul    [esp+1B0h+var_110]
0x7511AC: fstp    [esp+1B0h+var_17C]
0x7511B0: fld     [esp+1B0h+var_184]
0x7511B4: fadd    dword ptr [esp+1B0h+var_198]
0x7511B8: fstp    dword ptr [esp+1B0h+var_178]
0x7511BC: fld     [esp+1B0h+var_180]
0x7511C0: fadd    dword ptr [esp+1B0h+var_198+4]
0x7511C4: fstp    dword ptr [esp+1B0h+var_178+4]
0x7511C8: fld     [esp+1B0h+var_17C]
0x7511CC: fadd    [esp+1B0h+var_190]
0x7511D0: fstp    [esp+1B0h+var_170]
0x7511D4: fld     dword ptr [esi-8]
0x7511D7: fsubr   [esp+1B0h+var_160]
0x7511DB: fstp    [esp+1B0h+var_1A0]
0x7511DF: fld     [esp+1B0h+var_1A0]
0x7511E3: fld     dword ptr [esp+1B0h+var_178]
0x7511E7: fmul    st, st(1)
0x7511E9: fstp    dword ptr [esp+1B0h+var_140]
0x7511ED: fld     dword ptr [esp+1B0h+var_178+4]
0x7511F1: fmul    st, st(1)
0x7511F3: fstp    dword ptr [esp+1B0h+var_140+4]
0x7511F7: fmul    [esp+1B0h+var_170]
0x7511FB: fstp    [esp+1B0h+var_138]
0x7511FF: fld     dword ptr [esp+1B0h+var_140]
0x751203: fadd    dword ptr [esi-1Ch]
0x751206: fstp    dword ptr [esi-1Ch]
0x751209: fld     dword ptr [esi-18h]
0x75120C: fadd    dword ptr [esp+1B0h+var_140+4]
0x751210: fstp    dword ptr [esi-18h]
0x751213: fld     [esp+1B0h+var_138]
0x751217: fadd    dword ptr [esi-14h]
0x75121A: fstp    dword ptr [esi-14h]
0x75121D: jnz     loc_751100
0x751223: pop     edi
0x751224: pop     esi
0x751225: pop     ebx
0x751226: mov     esp, ebp
0x751228: pop     ebp
0x751229: retn    8
0x75122C: fldz
0x75122E: fcom    dword ptr [ebx+28h]
0x751231: fnstsw  ax
0x751233: test    ah, 44h
0x751236: jp      loc_7512C4
0x75123C: fcom    dword ptr [ebx+34h]
0x75123F: fnstsw  ax
0x751241: test    ah, 44h
0x751244: jp      short loc_7512C4
0x751246: test    dx, dx
0x751249: fstp    st
0x75124B: mov     ecx, [ecx+5Ch]
0x75124E: jbe     short loc_7512BB
0x751250: fld     [ebp+arg_0]
0x751253: movzx   eax, dx
0x751256: fld     [esp+1B0h+var_19C]
0x75125A: fld     dword ptr [esp+1B0h+var_178]
0x75125E: fld     dword ptr [esp+1B0h+var_178+4]
0x751262: fld     [esp+1B0h+var_170]
0x751266: fld     dword ptr [ecx+14h]
0x751269: add     ecx, 1Ch
0x75126C: sub     eax, 1
0x75126F: fsubr   st, st(5)
0x751271: fmul    st, st(4)
0x751273: fstp    [esp+1B0h+var_1A0]
0x751277: fld     [esp+1B0h+var_1A0]
0x75127B: fld     st
0x75127D: fmul    st, st(4)
0x75127F: fstp    [esp+1B0h+var_184]
0x751283: fld     st
0x751285: fmul    st, st(3)
0x751287: fstp    [esp+1B0h+var_180]
0x75128B: fmul    st, st(1)
0x75128D: fstp    [esp+1B0h+var_17C]
0x751291: fld     dword ptr [ecx-1Ch]
0x751294: fadd    [esp+1B0h+var_184]
0x751298: fstp    dword ptr [ecx-1Ch]
0x75129B: fld     [esp+1B0h+var_180]
0x75129F: fadd    dword ptr [ecx-18h]
0x7512A2: fstp    dword ptr [ecx-18h]
0x7512A5: fld     [esp+1B0h+var_17C]
0x7512A9: fadd    dword ptr [ecx-14h]
0x7512AC: fstp    dword ptr [ecx-14h]
0x7512AF: jnz     short loc_751266
0x7512B1: fstp    st(4)
0x7512B3: fstp    st(2)
0x7512B5: fstp    st
0x7512B7: fstp    st
0x7512B9: fstp    st
0x7512BB: pop     edi
0x7512BC: pop     esi
0x7512BD: pop     ebx
0x7512BE: mov     esp, ebp
0x7512C0: pop     ebp
0x7512C1: retn    8
0x7512C4: fcom    dword ptr [ebx+28h]
0x7512C7: fnstsw  ax
0x7512C9: test    ah, 44h
0x7512CC: jp      loc_751402
0x7512D2: fcom    dword ptr [ebx+34h]
0x7512D5: fnstsw  ax
0x7512D7: test    ah, 44h
0x7512DA: jnp     loc_751402
0x7512E0: test    dx, dx
0x7512E3: fstp    st
0x7512E5: fld     dword ptr [ebx+38h]
0x7512E8: mov     esi, [ecx+5Ch]
0x7512EB: fmul    dword ptr [ebx+34h]
0x7512EE: fmul    qword ptr ds:0A3F470h
0x7512F4: fstp    [esp+1B0h+var_1A0]
0x7512F8: jbe     short loc_7512BB
0x7512FA: fld     [esp+1B0h+var_1A0]
0x7512FE: movzx   edi, dx
0x751301: fstp    [esp+1B0h+var_168]
0x751305: fld     [esp+1B0h+var_19C]
0x751309: fld     dword ptr [esp+1B0h+var_178]
0x75130D: fmul    st, st(1)
0x75130F: fstp    [esp+1B0h+var_184]
0x751313: fld     dword ptr [esp+1B0h+var_178+4]
0x751317: fmul    st, st(1)
0x751319: fstp    [esp+1B0h+var_180]
0x75131D: fmul    [esp+1B0h+var_170]
0x751321: fstp    [esp+1B0h+var_17C]
0x751325: fld     [esp+1B0h+var_184]
0x751329: fstp    [esp+1B0h+var_130]
0x751330: fld     [esp+1B0h+var_180]
0x751334: fstp    [esp+1B0h+var_120]
0x75133B: fld     [esp+1B0h+var_17C]
0x75133F: fstp    [esp+1B0h+var_110]
0x751346: fld     [ebp+arg_0]
0x751349: fstp    [esp+1B0h+var_160]
0x75134D: lea     ecx, [ecx+0]
0x751350: call    sub_53D480
0x751355: fmul    [esp+1B0h+var_168]
0x751359: fstp    [esp+1B0h+var_184]
0x75135D: call    sub_53D480
0x751362: fmul    [esp+1B0h+var_168]
0x751366: fstp    [esp+1B0h+var_180]
0x75136A: call    sub_53D480
0x75136F: fmul    [esp+1B0h+var_168]
0x751373: add     esi, 1Ch
0x751376: sub     edi, 1
0x751379: fstp    [esp+1B0h+var_17C]
0x75137D: fld     [esp+1B0h+var_184]
0x751381: fadd    [esp+1B0h+var_130]
0x751388: fstp    dword ptr [esp+1B0h+var_198]
0x75138C: fld     [esp+1B0h+var_180]
0x751390: fadd    [esp+1B0h+var_120]
0x751397: fstp    dword ptr [esp+1B0h+var_198+4]
0x75139B: fld     [esp+1B0h+var_17C]
0x75139F: fadd    [esp+1B0h+var_110]
0x7513A6: fstp    [esp+1B0h+var_190]
0x7513AA: fld     dword ptr [esi-8]
0x7513AD: fsubr   [esp+1B0h+var_160]
0x7513B1: fstp    [esp+1B0h+var_1A0]
0x7513B5: fld     [esp+1B0h+var_1A0]
0x7513B9: fld     dword ptr [esp+1B0h+var_198]
0x7513BD: fmul    st, st(1)
0x7513BF: fstp    dword ptr [esp+1B0h+var_178]
0x7513C3: fld     dword ptr [esp+1B0h+var_198+4]
0x7513C7: fmul    st, st(1)
0x7513C9: fstp    dword ptr [esp+1B0h+var_178+4]
0x7513CD: fmul    [esp+1B0h+var_190]
0x7513D1: fstp    [esp+1B0h+var_170]
0x7513D5: fld     dword ptr [esp+1B0h+var_178]
0x7513D9: fadd    dword ptr [esi-1Ch]
0x7513DC: fstp    dword ptr [esi-1Ch]
0x7513DF: fld     dword ptr [esp+1B0h+var_178+4]
0x7513E3: fadd    dword ptr [esi-18h]
0x7513E6: fstp    dword ptr [esi-18h]
0x7513E9: fld     [esp+1B0h+var_170]
0x7513ED: fadd    dword ptr [esi-14h]
0x7513F0: fstp    dword ptr [esi-14h]
0x7513F3: jnz     loc_751350
0x7513F9: pop     edi
0x7513FA: pop     esi
0x7513FB: pop     ebx
0x7513FC: mov     esp, ebp
0x7513FE: pop     ebp
0x7513FF: retn    8
0x751402: fcom    dword ptr [ebx+28h]
0x751405: fnstsw  ax
0x751407: test    ah, 44h
0x75140A: jnp     loc_75158D
0x751410: fcom    dword ptr [ebx+34h]
0x751413: fnstsw  ax
0x751415: test    ah, 44h
0x751418: jp      loc_75158D
0x75141E: test    dx, dx
0x751421: mov     esi, [ecx+5Ch]
0x751424: mov     edi, [ecx+1Ch]
0x751427: jbe     loc_7512B9
0x75142D: fld     dword ptr [esp+1B0h+var_198]
0x751431: movzx   eax, dx
0x751434: fstp    [esp+1B0h+var_148]
0x751438: mov     [esp+1B0h+var_1A0], eax
0x75143C: fld     dword ptr [esp+1B0h+var_198+4]
0x751440: fstp    [esp+1B0h+var_150]
0x751444: fld     [esp+1B0h+var_190]
0x751448: fstp    [esp+1B0h+var_158]
0x75144C: fld     [ebp+arg_0]
0x75144F: fstp    [esp+1B0h+var_160]
0x751453: fld     [esp+1B0h+var_19C]
0x751457: fstp    [esp+1B0h+var_140]
0x75145B: fld     dword ptr [esp+1B0h+var_178]
0x75145F: fst     [esp+1B0h+var_120]
0x751466: fld     dword ptr [esp+1B0h+var_178+4]
0x75146A: fst     [esp+1B0h+var_110]
0x751471: fld     [esp+1B0h+var_170]
0x751475: fst     [esp+1B0h+var_130]
0x75147C: jmp     short loc_751482
0x75147E: fldz
0x751480: fxch    st(3)
0x751482: fld     dword ptr [edi]
0x751484: fsubr   [esp+1B0h+var_148]
0x751488: fstp    [esp+1B0h+var_184]
0x75148C: fld     dword ptr [edi+4]
0x75148F: fsubr   [esp+1B0h+var_150]
0x751493: fstp    [esp+1B0h+var_180]
0x751497: fld     dword ptr [edi+8]
0x75149A: fsubr   [esp+1B0h+var_158]
0x75149E: fstp    [esp+1B0h+var_17C]
0x7514A2: fld     [esp+1B0h+var_180]
0x7514A6: fmulp   st(2), st
0x7514A8: fld     [esp+1B0h+var_184]
0x7514AC: fmulp   st(3), st
0x7514AE: fxch    st(1)
0x7514B0: faddp   st(2), st
0x7514B2: fmul    [esp+1B0h+var_17C]
0x7514B6: faddp   st(1), st
0x7514B8: fstp    [esp+1B0h+var_19C]
0x7514BC: fld     [esp+1B0h+var_19C]
0x7514C0: fcom    st(1)
0x7514C2: fnstsw  ax
0x7514C4: fstp    st(1)
0x7514C6: test    ah, 5
0x7514C9: jp      short loc_7514E5
0x7514CB: fmul    dword ptr [ebx+28h]
0x7514CE: fstp    [esp+1B0h+var_19C]
0x7514D2: fld     [esp+1B0h+var_19C]
0x7514D6: call    __CIexp
0x7514DB: fstp    [esp+1B0h+var_19C]
0x7514DF: fld     [esp+1B0h+var_19C]
0x7514E3: jmp     short loc_751501
0x7514E5: fld     dword ptr [ebx+28h]
0x7514E8: fchs
0x7514EA: fmulp   st(1), st
0x7514EC: fstp    [esp+1B0h+var_19C]
0x7514F0: fld     [esp+1B0h+var_19C]
0x7514F4: call    __CIexp
0x7514F9: fstp    [esp+1B0h+var_19C]
0x7514FD: fld     [esp+1B0h+var_19C]
0x751501: fstp    [esp+1B0h+var_19C]
0x751505: add     esi, 1Ch
0x751508: fld     dword ptr [esi-8]
0x75150B: add     edi, 0Ch
0x75150E: sub     [esp+1B0h+var_1A0], 1
0x751513: fsubr   [esp+1B0h+var_160]
0x751517: fld     [esp+1B0h+var_19C]
0x75151B: fmul    [esp+1B0h+var_140]
0x75151F: fmulp   st(1), st
0x751521: fstp    [esp+1B0h+var_19C]
0x751525: fld     [esp+1B0h+var_19C]
0x751529: fld     st
0x75152B: fld     [esp+1B0h+var_120]
0x751532: fmul    st(1), st
0x751534: fxch    st(1)
0x751536: fstp    dword ptr [esp+1B0h+var_198]
0x75153A: fld     st(1)
0x75153C: fld     [esp+1B0h+var_110]
0x751543: fmul    st(1), st
0x751545: fxch    st(1)
0x751547: fstp    dword ptr [esp+1B0h+var_198+4]
0x75154B: fld     [esp+1B0h+var_130]
0x751552: fmul    st(3), st
0x751554: fxch    st(3)
0x751556: fstp    [esp+1B0h+var_190]
0x75155A: fld     dword ptr [esi-1Ch]
0x75155D: fadd    dword ptr [esp+1B0h+var_198]
0x751561: fstp    dword ptr [esi-1Ch]
0x751564: fld     dword ptr [esp+1B0h+var_198+4]
0x751568: fadd    dword ptr [esi-18h]
0x75156B: fstp    dword ptr [esi-18h]
0x75156E: fld     [esp+1B0h+var_190]
0x751572: fadd    dword ptr [esi-14h]
0x751575: fstp    dword ptr [esi-14h]
0x751578: jnz     loc_75147E
0x75157E: fstp    st(2)
0x751580: fstp    st
0x751582: fstp    st
0x751584: pop     edi
0x751585: pop     esi
0x751586: pop     ebx
0x751587: mov     esp, ebp
0x751589: pop     ebp
0x75158A: retn    8
0x75158D: fcom    dword ptr [ebx+28h]
0x751590: fnstsw  ax
0x751592: test    ah, 44h
0x751595: jnp     loc_7512B9
0x75159B: fcomp   dword ptr [ebx+34h]
0x75159E: fnstsw  ax
0x7515A0: test    ah, 44h
0x7515A3: jnp     loc_7512BB
0x7515A9: test    dx, dx
0x7515AC: fld     dword ptr [ebx+38h]
0x7515AF: fmul    dword ptr [ebx+34h]
0x7515B2: mov     esi, [ecx+5Ch]
0x7515B5: mov     edi, [ecx+1Ch]
0x7515B8: fmul    qword ptr ds:0A3F470h
0x7515BE: fstp    [esp+1B0h+var_1A0]
0x7515C2: jbe     loc_7512BB
0x7515C8: fld     [esp+1B0h+var_1A0]
0x7515CC: movzx   ecx, dx
0x7515CF: fstp    [esp+1B0h+var_168]
0x7515D3: fld     dword ptr [esp+1B0h+var_198]
0x7515D7: fstp    [esp+1B0h+var_148]
0x7515DB: fld     dword ptr [esp+1B0h+var_198+4]
0x7515DF: fstp    [esp+1B0h+var_150]
0x7515E3: fld     [esp+1B0h+var_190]
0x7515E7: fstp    [esp+1B0h+var_158]
0x7515EB: fld     dword ptr [esp+1B0h+var_178]
0x7515EF: fst     [esp+1B0h+var_120]
0x7515F6: fld     [esp+1B0h+var_19C]
0x7515FA: mov     [esp+1B0h+var_19C], ecx
0x7515FE: fld     st
0x751600: fmulp   st(2), st
0x751602: fxch    st(1)
0x751604: fstp    [esp+1B0h+var_184]
0x751608: fld     dword ptr [esp+1B0h+var_178+4]
0x75160C: fst     [esp+1B0h+var_110]
0x751613: fmul    st, st(1)
0x751615: fstp    [esp+1B0h+var_180]
0x751619: fld     [esp+1B0h+var_170]
0x75161D: fst     [esp+1B0h+var_130]
0x751624: fmulp   st(1), st
0x751626: fstp    [esp+1B0h+var_17C]
0x75162A: fld     [esp+1B0h+var_184]
0x75162E: fstp    [esp+1B0h+var_140]
0x751632: fld     [esp+1B0h+var_180]
0x751636: fstp    [esp+1B0h+var_178]
0x75163A: fld     [esp+1B0h+var_17C]
0x75163E: fstp    [esp+1B0h+var_198]
0x751642: fld     [ebp+arg_0]
0x751645: fstp    [esp+1B0h+var_160]
0x751649: lea     esp, [esp+0]
0x751650: call    sub_53D480
0x751655: fmul    [esp+1B0h+var_168]
0x751659: fstp    [esp+1B0h+var_DC]
0x751660: call    sub_53D480
0x751665: fmul    [esp+1B0h+var_168]
0x751669: fstp    [esp+1B0h+var_D8]
0x751670: call    sub_53D480
0x751675: fmul    [esp+1B0h+var_168]
0x751679: fstp    [esp+1B0h+var_D4]
0x751680: fld     dword ptr [edi]
0x751682: fsubr   [esp+1B0h+var_148]
0x751686: fstp    [esp+1B0h+var_184]
0x75168A: fld     dword ptr [edi+4]
0x75168D: fsubr   [esp+1B0h+var_150]
0x751691: fstp    [esp+1B0h+var_180]
0x751695: fld     dword ptr [edi+8]
0x751698: fsubr   [esp+1B0h+var_158]
0x75169C: fstp    [esp+1B0h+var_17C]
0x7516A0: fld     [esp+1B0h+var_180]
0x7516A4: fmul    [esp+1B0h+var_110]
0x7516AB: fld     [esp+1B0h+var_184]
0x7516AF: fmul    [esp+1B0h+var_120]
0x7516B6: faddp   st(1), st
0x7516B8: fld     [esp+1B0h+var_17C]
0x7516BC: fmul    [esp+1B0h+var_130]
0x7516C3: faddp   st(1), st
0x7516C5: fstp    [esp+1B0h+var_1A0]
0x7516C9: fldz
0x7516CB: fld     [esp+1B0h+var_1A0]
0x7516CF: fcom    st(1)
0x7516D1: fnstsw  ax
0x7516D3: fstp    st(1)
0x7516D5: test    ah, 5
0x7516D8: jp      short loc_7516F4
0x7516DA: fmul    dword ptr [ebx+28h]
0x7516DD: fstp    [esp+1B0h+var_1A0]
0x7516E1: fld     [esp+1B0h+var_1A0]
0x7516E5: call    __CIexp
0x7516EA: fstp    [esp+1B0h+var_1A0]
0x7516EE: fld     [esp+1B0h+var_1A0]
0x7516F2: jmp     short loc_751710
0x7516F4: fld     dword ptr [ebx+28h]
0x7516F7: fchs
0x7516F9: fmulp   st(1), st
0x7516FB: fstp    [esp+1B0h+var_1A0]
0x7516FF: fld     [esp+1B0h+var_1A0]
0x751703: call    __CIexp
0x751708: fstp    [esp+1B0h+var_1A0]
0x75170C: fld     [esp+1B0h+var_1A0]
0x751710: fstp    [esp+1B0h+var_1A0]
0x751714: add     esi, 1Ch
0x751717: fld     [esp+1B0h+var_1A0]
0x75171B: add     edi, 0Ch
0x75171E: sub     [esp+1B0h+var_19C], 1
0x751723: fld     [esp+1B0h+var_140]
0x751727: fmul    st, st(1)
0x751729: fstp    [esp+1B0h+var_E8]
0x751730: fld     [esp+1B0h+var_178]
0x751734: fmul    st, st(1)
0x751736: fstp    [esp+1B0h+var_E4]
0x75173D: fmul    [esp+1B0h+var_198]
0x751741: fstp    [esp+1B0h+var_E0]
0x751748: fld     [esp+1B0h+var_E8]
0x75174F: fadd    [esp+1B0h+var_DC]
0x751756: fstp    [esp+1B0h+var_F4]
0x75175D: fld     [esp+1B0h+var_E4]
0x751764: fadd    [esp+1B0h+var_D8]
0x75176B: fstp    [esp+1B0h+var_F0]
0x751772: fld     [esp+1B0h+var_E0]
0x751779: fadd    [esp+1B0h+var_D4]
0x751780: fstp    [esp+1B0h+var_EC]
0x751787: fld     dword ptr [esi-8]
0x75178A: fsubr   [esp+1B0h+var_160]
0x75178E: fstp    [esp+1B0h+var_1A0]
0x751792: fld     [esp+1B0h+var_1A0]
0x751796: fld     [esp+1B0h+var_F4]
0x75179D: fmul    st, st(1)
0x75179F: fstp    [esp+1B0h+var_100]
0x7517A6: fld     [esp+1B0h+var_F0]
0x7517AD: fmul    st, st(1)
0x7517AF: fstp    [esp+1B0h+var_FC]
0x7517B6: fmul    [esp+1B0h+var_EC]
0x7517BD: fstp    [esp+1B0h+var_F8]
0x7517C4: fld     [esp+1B0h+var_100]
0x7517CB: fadd    dword ptr [esi-1Ch]
0x7517CE: fstp    dword ptr [esi-1Ch]
0x7517D1: fld     [esp+1B0h+var_FC]
0x7517D8: fadd    dword ptr [esi-18h]
0x7517DB: fstp    dword ptr [esi-18h]
0x7517DE: fld     dword ptr [esi-14h]
0x7517E1: fadd    [esp+1B0h+var_F8]
0x7517E8: fstp    dword ptr [esi-14h]
0x7517EB: jnz     loc_751650
0x7517F1: pop     edi
0x7517F2: pop     esi
0x7517F3: pop     ebx
0x7517F4: mov     esp, ebp
0x7517F6: pop     ebp
0x7517F7: retn    8
