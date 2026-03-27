0x793E10: sub     esp, 0B4h
0x793E16: cmp     dword ptr [ecx+38h], 1
0x793E1A: mov     [esp+0B4h+var_7C], ecx
0x793E1E: jnz     loc_794335
0x793E24: cmp     dword ptr [ecx+74h], 0
0x793E28: jz      loc_794335
0x793E2E: mov     eax, [esp+0B4h+arg_8]
0x793E35: test    eax, eax
0x793E37: jle     loc_794335
0x793E3D: push    ebx
0x793E3E: push    ebp
0x793E3F: push    esi
0x793E40: push    edi
0x793E41: mov     edi, [esp+0C4h+arg_4]
0x793E48: add     edi, 4
0x793E4B: mov     [esp+0C4h+var_A4], edi
0x793E4F: mov     [esp+0C4h+var_78], eax
0x793E53: mov     ebp, [edi]
0x793E55: cmp     ebp, [edi+4]
0x793E58: jbe     short loc_793E60
0x793E5A: call    __invalid_parameter_noinfo
0x793E5F: nop
0x793E60: mov     esi, [edi+4]
0x793E63: cmp     [edi], esi
0x793E65: ja      short loc_793E6B
0x793E67: cmp     esi, esi
0x793E69: jbe     short loc_793E70
0x793E6B: call    __invalid_parameter_noinfo
0x793E70: lea     ebx, [edi-4]
0x793E73: cmp     ebx, ebx
0x793E75: jz      short loc_793E7C
0x793E77: call    __invalid_parameter_noinfo
0x793E7C: cmp     ebp, esi
0x793E7E: jz      loc_79431F
0x793E84: cmp     ebp, [ebx+8]
0x793E87: jb      short loc_793E8E
0x793E89: call    __invalid_parameter_noinfo
0x793E8E: mov     eax, [ebp+0]
0x793E91: add     eax, 1Ch
0x793E94: cmp     ebp, [ebx+8]
0x793E97: mov     [esp+0C4h+var_1C], eax
0x793E9E: jb      short loc_793EA5
0x793EA0: call    __invalid_parameter_noinfo
0x793EA5: mov     edi, [ebp+0]
0x793EA8: add     edi, 4
0x793EAB: cmp     ebp, [ebx+8]
0x793EAE: jb      short loc_793EB5
0x793EB0: call    __invalid_parameter_noinfo
0x793EB5: mov     ecx, [ebp+0]
0x793EB8: lea     eax, [esp+0C4h+var_C]
0x793EBF: push    eax
0x793EC0: call    sub_7A7EC0
0x793EC5: fldz
0x793EC7: fst     [esp+0C4h+var_6C]
0x793ECB: xor     ebx, ebx
0x793ECD: fst     [esp+0C4h+var_70]
0x793ED1: mov     esi, offset unk_B2B7D4
0x793ED6: fst     [esp+0C4h+var_74]
0x793EDA: fld     dword ptr ds:0A30634h
0x793EE0: fstp    [esp+0C4h+var_80]
0x793EE4: fst     [esp+0C4h+var_A8]
0x793EE8: fst     [esp+0C4h+var_AC]
0x793EEC: fst     [esp+0C4h+var_B0]
0x793EF0: fld1
0x793EF2: cmp     ds:byte_B42A18[ebx], 0
0x793EF9: jz      loc_794217
0x793EFF: fstp    st
0x793F01: fld     dword ptr [esi-4]
0x793F04: fstp    [esp+0C4h+var_90]
0x793F08: fld     dword ptr [esi]
0x793F0A: fstp    [esp+0C4h+var_8C]
0x793F0E: fld     dword ptr [esi+4]
0x793F11: fstp    [esp+0C4h+var_88]
0x793F15: fcomp   dword ptr [esi+2Ch]
0x793F18: fnstsw  ax
0x793F1A: test    ah, 44h
0x793F1D: jp      short loc_793F25
0x793F1F: lea     eax, [esp+0C4h+var_90]
0x793F23: jmp     short loc_793F55
0x793F25: fld     [esp+0C4h+var_90]
0x793F29: lea     eax, [esp+0C4h+var_18]
0x793F30: fsub    dword ptr [edi]
0x793F32: fstp    [esp+0C4h+var_18]
0x793F39: fld     [esp+0C4h+var_8C]
0x793F3D: fsub    dword ptr [edi+4]
0x793F40: fstp    [esp+0C4h+var_14]
0x793F47: fld     [esp+0C4h+var_88]
0x793F4B: fsub    dword ptr [edi+8]
0x793F4E: fstp    [esp+0C4h+var_10]
0x793F55: mov     edx, [eax+4]
0x793F58: mov     ecx, [eax]
0x793F5A: mov     eax, [eax+8]
0x793F5D: mov     [esp+0C4h+var_98], edx
0x793F61: fld     [esp+0C4h+var_98]
0x793F65: mov     [esp+0C4h+var_9C], ecx
0x793F69: fld     [esp+0C4h+var_9C]
0x793F6D: mov     [esp+0C4h+var_94], eax
0x793F71: fld     [esp+0C4h+var_94]
0x793F75: fld     st(1)
0x793F77: fmulp   st(2), st
0x793F79: fld     st(2)
0x793F7B: fmulp   st(3), st
0x793F7D: fxch    st(1)
0x793F7F: faddp   st(2), st
0x793F81: fmul    st, st
0x793F83: faddp   st(1), st
0x793F85: fstp    [esp+0C4h+var_B4]
0x793F89: fld     [esp+0C4h+var_B4]
0x793F8D: call    __CIsqrt
0x793F92: fstp    [esp+0C4h+var_B4]
0x793F96: fld     [esp+0C4h+var_B4]
0x793F9A: mov     eax, [esp+0C4h+var_1C]
0x793FA1: fld1
0x793FA3: fld     st
0x793FA5: fdivrp  st(2), st
0x793FA7: fxch    st(1)
0x793FA9: fstp    [esp+0C4h+var_B4]
0x793FAD: fld     [esp+0C4h+var_9C]
0x793FB1: fld     [esp+0C4h+var_B4]
0x793FB5: fld     st
0x793FB7: fmulp   st(2), st
0x793FB9: fxch    st(1)
0x793FBB: fstp    [esp+0C4h+var_9C]
0x793FBF: fld     [esp+0C4h+var_98]
0x793FC3: fmul    st, st(1)
0x793FC5: fstp    [esp+0C4h+var_98]
0x793FC9: fmul    [esp+0C4h+var_94]
0x793FCD: fstp    [esp+0C4h+var_94]
0x793FD1: fld     dword ptr [eax+4]
0x793FD4: fmul    [esp+0C4h+var_98]
0x793FD8: fld     [esp+0C4h+var_9C]
0x793FDC: fmul    dword ptr [eax]
0x793FDE: faddp   st(1), st
0x793FE0: fld     dword ptr [eax+8]
0x793FE3: fmul    [esp+0C4h+var_94]
0x793FE7: faddp   st(1), st
0x793FE9: fstp    [esp+0C4h+var_A0]
0x793FED: fld     [esp+0C4h+var_A0]
0x793FF1: fld     [esp+0C4h+var_80]
0x793FF5: fcomp   st(1)
0x793FF7: fnstsw  ax
0x793FF9: test    ah, 41h
0x793FFC: jp      short loc_79401A
0x793FFE: mov     ecx, [esp+0C4h+var_90]
0x794002: fst     [esp+0C4h+var_80]
0x794006: mov     edx, [esp+0C4h+var_8C]
0x79400A: mov     eax, [esp+0C4h+var_88]
0x79400E: mov     [esp+0C4h+var_74], ecx
0x794012: mov     [esp+0C4h+var_70], edx
0x794016: mov     [esp+0C4h+var_6C], eax
0x79401A: fldz
0x79401C: fcom    st(1)
0x79401E: fnstsw  ax
0x794020: test    ah, 41h
0x794023: jnz     short loc_794031
0x794025: fstp    st(1)
0x794027: fst     [esp+0C4h+var_A0]
0x79402B: fld     [esp+0C4h+var_A0]
0x79402F: fxch    st(1)
0x794031: mov     eax, [esp+0C4h+var_7C]
0x794035: test    byte ptr [eax+74h], 1
0x794039: fld     dword ptr [eax+70h]
0x79403C: fstp    [esp+0C4h+var_B4]
0x794040: fld     [esp+0C4h+var_B4]
0x794044: fld     st
0x794046: fsubr   st, st(4)
0x794048: fmulp   st(3), st
0x79404A: faddp   st(2), st
0x79404C: fxch    st(1)
0x79404E: fstp    [esp+0C4h+var_A0]
0x794052: jz      loc_794240
0x794058: fld     dword ptr [eax+60h]
0x79405B: fstp    [esp+0C4h+var_4C]
0x79405F: fld     dword ptr [eax+64h]
0x794062: fstp    [esp+0C4h+var_48]
0x794066: fld     dword ptr [eax+68h]
0x794069: fstp    [esp+0C4h+var_44]
0x794070: fld     dword ptr [esi+14h]
0x794073: fmul    dword ptr [eax+48h]
0x794076: fstp    [esp+0C4h+var_40]
0x79407D: fld     dword ptr [esi+18h]
0x794080: fmul    dword ptr [eax+4Ch]
0x794083: fstp    [esp+0C4h+var_3C]
0x79408A: fld     dword ptr [esi+1Ch]
0x79408D: fmul    dword ptr [eax+50h]
0x794090: fstp    [esp+0C4h+var_38]
0x794097: fld1
0x794099: fst     [esp+0C4h+var_B4]
0x79409D: fld     st(1)
0x79409F: fcomp   dword ptr [esi+2Ch]
0x7940A2: fnstsw  ax
0x7940A4: test    ah, 44h
0x7940A7: jnp     short loc_79411B
0x7940A9: fld     [esp+0C4h+var_8C]
0x7940AD: fsub    dword ptr [edi+4]
0x7940B0: fld     [esp+0C4h+var_90]
0x7940B4: fsub    dword ptr [edi]
0x7940B6: fld     [esp+0C4h+var_88]
0x7940BA: fsub    dword ptr [edi+8]
0x7940BD: fld     st(1)
0x7940BF: fmulp   st(2), st
0x7940C1: fld     st(2)
0x7940C3: fmulp   st(3), st
0x7940C5: fxch    st(1)
0x7940C7: faddp   st(2), st
0x7940C9: fmul    st, st
0x7940CB: faddp   st(1), st
0x7940CD: fstp    [esp+0C4h+var_84]
0x7940D1: mov     ecx, [esp+0C4h+var_84]
0x7940D5: fld     dword ptr [esi+34h]
0x7940D8: sar     ecx, 1
0x7940DA: add     ecx, 1FC00000h
0x7940E0: mov     [esp+0C4h+var_50], ecx
0x7940E4: fld     [esp+0C4h+var_50]
0x7940E8: fld     st
0x7940EA: fmulp   st(2), st
0x7940EC: fld     dword ptr [esi+30h]
0x7940EF: faddp   st(2), st
0x7940F1: fld     dword ptr [esi+38h]
0x7940F4: fmul    st, st(1)
0x7940F6: fmulp   st(1), st
0x7940F8: faddp   st(1), st
0x7940FA: fstp    [esp+0C4h+var_84]
0x7940FE: fld     st(1)
0x794100: fld     [esp+0C4h+var_84]
0x794104: fucom   st(1)
0x794106: fnstsw  ax
0x794108: fstp    st(1)
0x79410A: test    ah, 44h
0x79410D: jnp     short loc_794119
0x79410F: fdivp   st(3), st
0x794111: fxch    st(2)
0x794113: fstp    [esp+0C4h+var_B4]
0x794117: jmp     short loc_79411D
0x794119: fstp    st
0x79411B: fstp    st(2)
0x79411D: fld     dword ptr [esi+8]
0x794120: fld     [esp+0C4h+var_A0]
0x794124: fld     st
0x794126: fmulp   st(2), st
0x794128: fld     [esp+0C4h+var_C]
0x79412F: fmulp   st(2), st
0x794131: fxch    st(1)
0x794133: fstp    [esp+0C4h+var_28]
0x79413A: fld     dword ptr [esi+0Ch]
0x79413D: fmul    st, st(1)
0x79413F: fmul    [esp+0C4h+var_8]
0x794146: fstp    [esp+0C4h+var_24]
0x79414D: fmul    dword ptr [esi+10h]
0x794150: fmul    [esp+0C4h+var_4]
0x794157: fstp    [esp+0C4h+var_20]
0x79415E: fld     [esp+0C4h+var_28]
0x794165: fadd    [esp+0C4h+var_40]
0x79416C: fstp    [esp+0C4h+var_68]
0x794170: fld     [esp+0C4h+var_24]
0x794177: fadd    [esp+0C4h+var_3C]
0x79417E: fstp    [esp+0C4h+var_64]
0x794182: fld     [esp+0C4h+var_20]
0x794189: fadd    [esp+0C4h+var_38]
0x794190: fstp    [esp+0C4h+var_60]
0x794194: fld     [esp+0C4h+var_68]
0x794198: fld     [esp+0C4h+var_B4]
0x79419C: fld     st
0x79419E: fmulp   st(2), st
0x7941A0: fxch    st(1)
0x7941A2: fstp    [esp+0C4h+var_5C]
0x7941A6: fld     [esp+0C4h+var_64]
0x7941AA: fmul    st, st(1)
0x7941AC: fstp    [esp+0C4h+var_58]
0x7941B0: fmul    [esp+0C4h+var_60]
0x7941B4: fstp    [esp+0C4h+var_54]
0x7941B8: fld     [esp+0C4h+var_5C]
0x7941BC: fadd    [esp+0C4h+var_4C]
0x7941C0: fstp    [esp+0C4h+var_34]
0x7941C7: fld     [esp+0C4h+var_58]
0x7941CB: fadd    [esp+0C4h+var_48]
0x7941CF: fstp    [esp+0C4h+var_30]
0x7941D6: fld     [esp+0C4h+var_54]
0x7941DA: fadd    [esp+0C4h+var_44]
0x7941E1: fstp    [esp+0C4h+var_2C]
0x7941E8: fld     [esp+0C4h+var_34]
0x7941EF: fadd    [esp+0C4h+var_B0]
0x7941F3: fstp    [esp+0C4h+var_B0]
0x7941F7: fld     [esp+0C4h+var_30]
0x7941FE: fadd    [esp+0C4h+var_AC]
0x794202: fstp    [esp+0C4h+var_AC]
0x794206: fld     [esp+0C4h+var_2C]
0x79420D: fadd    [esp+0C4h+var_A8]
0x794211: fstp    [esp+0C4h+var_A8]
0x794215: fxch    st(1)
0x794217: add     esi, 40h ; '@'
0x79421A: add     ebx, 1
0x79421D: cmp     esi, offset unk_B2B9D4
0x794223: jl      loc_793EF2
0x794229: fld     [esp+0C4h+var_B0]
0x79422D: fcom    st(2)
0x79422F: fnstsw  ax
0x794231: test    ah, 5
0x794234: jp      short loc_794246
0x794236: fstp    st
0x794238: fxch    st(1)
0x79423A: fst     [esp+0C4h+var_B0]
0x79423E: jmp     short loc_794255
0x794240: fstp    st(1)
0x794242: fld1
0x794244: jmp     short loc_794217
0x794246: fcomp   st(1)
0x794248: fnstsw  ax
0x79424A: test    ah, 41h
0x79424D: jnz     short loc_794253
0x79424F: fst     [esp+0C4h+var_B0]
0x794253: fxch    st(1)
0x794255: fld     [esp+0C4h+var_AC]
0x794259: fcom    st(1)
0x79425B: fnstsw  ax
0x79425D: test    ah, 5
0x794260: jp      short loc_79426A
0x794262: fstp    st
0x794264: fst     [esp+0C4h+var_AC]
0x794268: jmp     short loc_79427B
0x79426A: fcomp   st(2)
0x79426C: fnstsw  ax
0x79426E: test    ah, 41h
0x794271: jnz     short loc_79427B
0x794273: fxch    st(1)
0x794275: fst     [esp+0C4h+var_AC]
0x794279: fxch    st(1)
0x79427B: fld     [esp+0C4h+var_A8]
0x79427F: fcom    st(1)
0x794281: fnstsw  ax
0x794283: test    ah, 5
0x794286: jp      short loc_794292
0x794288: fstp    st
0x79428A: fstp    st(1)
0x79428C: fstp    [esp+0C4h+var_A8]
0x794290: jmp     short loc_7942A5
0x794292: fstp    st(1)
0x794294: fcomp   st(1)
0x794296: fnstsw  ax
0x794298: test    ah, 41h
0x79429B: jnz     short loc_7942A3
0x79429D: fstp    [esp+0C4h+var_A8]
0x7942A1: jmp     short loc_7942A5
0x7942A3: fstp    st
0x7942A5: mov     esi, [esp+0C4h+var_7C]
0x7942A9: test    byte ptr [esi+74h], 1
0x7942AD: jz      short loc_7942CF
0x7942AF: mov     eax, [esp+0C4h+var_A4]
0x7942B3: add     eax, 0FFFFFFFCh
0x7942B6: cmp     ebp, [eax+8]
0x7942B9: jb      short loc_7942C0
0x7942BB: call    __invalid_parameter_noinfo
0x7942C0: mov     ecx, [ebp+0]
0x7942C3: push    0
0x7942C5: lea     edx, [esp+0C8h+var_B0]
0x7942C9: push    edx
0x7942CA: call    sub_7A7F10
0x7942CF: test    byte ptr [esi+74h], 2
0x7942D3: jz      short loc_794302
0x7942D5: mov     eax, [esp+0C4h+var_A4]
0x7942D9: add     eax, 0FFFFFFFCh
0x7942DC: cmp     ebp, [eax+8]
0x7942DF: jb      short loc_7942E6
0x7942E1: call    __invalid_parameter_noinfo
0x7942E6: fld     dword ptr [esi+70h]
0x7942E9: push    ecx
0x7942EA: mov     ecx, [esp+0C8h+arg_0]
0x7942F1: fstp    [esp+0C8h+var_C8]; float
0x7942F4: lea     eax, [esp+0C8h+var_74]
0x7942F8: push    eax; int
0x7942F9: push    ecx; int
0x7942FA: mov     ecx, [ebp+0]
0x7942FD: call    sub_7A8090
0x794302: mov     eax, [esp+0C4h+var_A4]
0x794306: add     eax, 0FFFFFFFCh
0x794309: cmp     ebp, [eax+8]
0x79430C: jb      short loc_794313
0x79430E: call    __invalid_parameter_noinfo
0x794313: mov     edi, [esp+0C4h+var_A4]
0x794317: add     ebp, 4
0x79431A: jmp     loc_793E60
0x79431F: add     edi, 10h
0x794322: sub     [esp+0C4h+var_78], 1
0x794327: mov     [esp+0C4h+var_A4], edi
0x79432B: jnz     loc_793E53
0x794331: pop     edi
0x794332: pop     esi
0x794333: pop     ebp
0x794334: pop     ebx
0x794335: add     esp, 0B4h
0x79433B: retn    0Ch
