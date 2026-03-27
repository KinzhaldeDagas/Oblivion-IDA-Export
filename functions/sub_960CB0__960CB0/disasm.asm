0x960CB0: sub     esp, 10Ch
0x960CB6: push    ebx
0x960CB7: mov     ebx, [esp+110h+arg_10]
0x960CBE: push    ebp
0x960CBF: push    esi
0x960CC0: mov     esi, [esp+118h+arg_C]
0x960CC7: push    edi
0x960CC8: mov     edi, [esp+11Ch+arg_4]
0x960CCF: fld     dword ptr [edi+38h]
0x960CD2: mov     eax, [edi+20h]
0x960CD5: fmul    st, st
0x960CD7: mov     ebp, [esp+11Ch+arg_14]
0x960CDE: mov     ecx, [edi+24h]
0x960CE1: mov     edx, [edi+28h]
0x960CE4: fstp    [esp+11Ch+var_88]
0x960CEB: mov     [esp+11Ch+var_D0], eax
0x960CEF: fld     dword ptr [ebx]
0x960CF1: mov     eax, [edi+2Ch]
0x960CF4: fsub    dword ptr [esi]
0x960CF6: mov     [esp+11Ch+var_C4], eax
0x960CFA: mov     eax, [esi]
0x960CFC: mov     [esp+11Ch+var_CC], ecx
0x960D00: fstp    [esp+11Ch+var_10C]
0x960D04: mov     ecx, [edi+30h]
0x960D07: fld     dword ptr [ebx+4]
0x960D0A: mov     [esp+11Ch+var_AC], eax
0x960D0E: fsub    dword ptr [esi+4]
0x960D11: mov     eax, [esp+11Ch+var_10C]
0x960D15: mov     [esp+11Ch+var_C0], ecx
0x960D19: mov     ecx, [esi+4]
0x960D1C: fstp    [esp+11Ch+var_108]
0x960D20: mov     [esp+11Ch+var_C8], edx
0x960D24: fld     dword ptr [ebx+8]
0x960D27: mov     edx, [edi+34h]
0x960D2A: fsub    dword ptr [esi+8]
0x960D2D: mov     [esp+11Ch+var_A8], ecx
0x960D31: mov     ecx, [esp+11Ch+var_108]
0x960D35: mov     [esp+11Ch+var_BC], edx
0x960D39: mov     edx, [esi+8]
0x960D3C: fstp    [esp+11Ch+var_104]
0x960D40: fld     dword ptr [ebp+0]
0x960D43: mov     [esp+11Ch+var_A0], eax
0x960D47: fsub    dword ptr [esi]
0x960D49: mov     [esp+11Ch+var_A4], edx
0x960D4D: mov     edx, [esp+11Ch+var_104]
0x960D51: mov     [esp+11Ch+var_9C], ecx
0x960D58: fstp    [esp+11Ch+var_10C]
0x960D5C: mov     eax, [esp+11Ch+var_10C]
0x960D60: fld     dword ptr [ebp+4]
0x960D63: mov     [esp+11Ch+var_94], eax
0x960D6A: fsub    dword ptr [esi+4]
0x960D6D: mov     [esp+11Ch+var_98], edx
0x960D74: lea     eax, [esp+11Ch+var_7C]
0x960D7B: push    eax
0x960D7C: fstp    [esp+120h+var_108]
0x960D80: mov     ecx, [esp+120h+var_108]
0x960D84: fld     dword ptr [ebp+8]
0x960D87: mov     [esp+120h+var_90], ecx
0x960D8E: fsub    dword ptr [esi+8]
0x960D91: lea     ecx, [esp+120h+var_80]
0x960D98: push    ecx
0x960D99: lea     eax, [esp+124h+var_AC]
0x960D9D: fstp    [esp+124h+var_104]
0x960DA1: mov     edx, [esp+124h+var_104]
0x960DA5: mov     [esp+124h+var_8C], edx
0x960DAC: lea     edx, [esp+124h+var_84]
0x960DB3: push    edx
0x960DB4: push    eax
0x960DB5: lea     ecx, [esp+12Ch+var_D0]
0x960DB9: push    ecx
0x960DBA: call    sub_9726E0
0x960DBF: fsub    [esp+130h+var_88]
0x960DC6: add     esp, 14h
0x960DC9: fstp    dword ptr [esp+11Ch+var_F0]
0x960DCD: fld     dword ptr [esp+11Ch+var_F0]
0x960DD1: fldz
0x960DD3: fcom    st(1)
0x960DD5: fnstsw  ax
0x960DD7: fstp    st(1)
0x960DD9: test    ah, 1
0x960DDC: jnz     loc_960EEA
0x960DE2: cmp     [esp+11Ch+arg_24], 0
0x960DEA: mov     edx, [esp+11Ch+arg_1C]
0x960DF1: fstp    dword ptr [edx]
0x960DF3: mov     eax, [esp+11Ch+arg_20]
0x960DFA: fld     [esp+11Ch+var_94]
0x960E01: fld     [esp+11Ch+var_7C]
0x960E08: fld     st
0x960E0A: fmulp   st(2), st
0x960E0C: fxch    st(1)
0x960E0E: fstp    dword ptr [esp+11Ch+var_F0]
0x960E12: fld     [esp+11Ch+var_90]
0x960E19: fmul    st, st(1)
0x960E1B: fstp    dword ptr [esp+11Ch+var_F0+4]
0x960E1F: fmul    [esp+11Ch+var_8C]
0x960E26: fstp    [esp+11Ch+var_E8]
0x960E2A: fld     [esp+11Ch+var_A0]
0x960E2E: fld     [esp+11Ch+var_80]
0x960E35: fld     st
0x960E37: fmulp   st(2), st
0x960E39: fxch    st(1)
0x960E3B: fstp    [esp+11Ch+var_10C]
0x960E3F: fld     [esp+11Ch+var_9C]
0x960E46: fmul    st, st(1)
0x960E48: fstp    [esp+11Ch+var_108]
0x960E4C: fmul    [esp+11Ch+var_98]
0x960E53: fstp    [esp+11Ch+var_104]
0x960E57: fld     [esp+11Ch+var_AC]
0x960E5B: fadd    [esp+11Ch+var_10C]
0x960E5F: fstp    [esp+11Ch+var_FC]
0x960E63: fld     [esp+11Ch+var_A8]
0x960E67: fadd    [esp+11Ch+var_108]
0x960E6B: fstp    [esp+11Ch+var_F8]
0x960E6F: fld     [esp+11Ch+var_A4]
0x960E73: fadd    [esp+11Ch+var_104]
0x960E77: fstp    [esp+11Ch+var_F4]
0x960E7B: fld     [esp+11Ch+var_FC]
0x960E7F: fadd    dword ptr [esp+11Ch+var_F0]
0x960E83: fstp    [esp+11Ch+var_10C]
0x960E87: mov     ecx, [esp+11Ch+var_10C]
0x960E8B: fld     [esp+11Ch+var_F8]
0x960E8F: mov     [eax], ecx
0x960E91: fadd    dword ptr [esp+11Ch+var_F0+4]
0x960E95: fstp    [esp+11Ch+var_108]
0x960E99: mov     edx, [esp+11Ch+var_108]
0x960E9D: fld     [esp+11Ch+var_F4]
0x960EA1: mov     [eax+4], edx
0x960EA4: fadd    [esp+11Ch+var_E8]
0x960EA8: fstp    [esp+11Ch+var_104]
0x960EAC: mov     ecx, [esp+11Ch+var_104]
0x960EB0: mov     [eax+8], ecx
0x960EB3: jz      loc_96133C
0x960EB9: lea     edx, [esp+11Ch+var_DC]
0x960EBD: push    edx
0x960EBE: lea     ecx, [esp+120h+var_AC]
0x960EC2: call    sub_9741F0
0x960EC7: mov     edx, [eax]
0x960EC9: mov     ecx, [esp+11Ch+arg_2C]
0x960ED0: mov     [ecx], edx
0x960ED2: mov     edx, [eax+4]
0x960ED5: mov     [ecx+4], edx
0x960ED8: mov     eax, [eax+8]
0x960EDB: mov     [ecx+8], eax
0x960EDE: mov     eax, [esp+11Ch+arg_28]
0x960EE5: jmp     loc_96130E
0x960EEA: mov     eax, [esp+11Ch+arg_8]
0x960EF1: fstp    st
0x960EF3: mov     ecx, [esp+11Ch+arg_18]
0x960EFA: fld     dword ptr [eax]
0x960EFC: fsub    dword ptr [ecx]
0x960EFE: fstp    [esp+11Ch+var_10C]
0x960F02: mov     edx, [esp+11Ch+var_10C]
0x960F06: fld     dword ptr [eax+4]
0x960F09: mov     [esp+11Ch+var_B8], edx
0x960F0D: fsub    dword ptr [ecx+4]
0x960F10: fstp    [esp+11Ch+var_108]
0x960F14: fld     dword ptr [eax+8]
0x960F17: mov     eax, [esp+11Ch+var_108]
0x960F1B: fsub    dword ptr [ecx+8]
0x960F1E: mov     [esp+11Ch+var_B4], eax
0x960F22: fstp    [esp+11Ch+var_104]
0x960F26: mov     ecx, [esp+11Ch+var_104]
0x960F2A: fld     [esp+11Ch+var_10C]
0x960F2E: mov     [esp+11Ch+var_B0], ecx
0x960F32: fld     [esp+11Ch+var_108]
0x960F36: fld     [esp+11Ch+var_104]
0x960F3A: fld     st(1)
0x960F3C: fmulp   st(2), st
0x960F3E: fld     st(2)
0x960F40: fmulp   st(3), st
0x960F42: fxch    st(1)
0x960F44: faddp   st(2), st
0x960F46: fmul    st, st
0x960F48: faddp   st(1), st
0x960F4A: fstp    dword ptr [esp+11Ch+var_F0]
0x960F4E: fld     dword ptr [esp+11Ch+var_F0]
0x960F52: fmul    [esp+11Ch+arg_0]
0x960F59: fcomp   qword ptr ds:0AA3AF8h
0x960F5F: fnstsw  ax
0x960F61: test    ah, 41h
0x960F64: jp      short loc_960F73
0x960F66: pop     edi
0x960F67: pop     esi
0x960F68: pop     ebp
0x960F69: xor     al, al
0x960F6B: pop     ebx
0x960F6C: add     esp, 10Ch
0x960F72: retn
0x960F73: fld     [esp+11Ch+var_9C]
0x960F7A: fld     st
0x960F7C: fld     [esp+11Ch+var_8C]
0x960F83: fld     st
0x960F85: fmulp   st(2), st
0x960F87: fld     [esp+11Ch+var_98]
0x960F8E: fld     st
0x960F90: fld     [esp+11Ch+var_90]
0x960F97: fld     st
0x960F99: fmulp   st(2), st
0x960F9B: fxch    st(4)
0x960F9D: fsubrp  st(1), st
0x960F9F: fstp    dword ptr [esp+11Ch+var_F0]
0x960FA3: fld     [esp+11Ch+var_94]
0x960FAA: fld     st
0x960FAC: fmulp   st(2), st
0x960FAE: fld     [esp+11Ch+var_A0]
0x960FB2: fld     st
0x960FB4: fmulp   st(4), st
0x960FB6: fxch    st(2)
0x960FB8: fsubrp  st(3), st
0x960FBA: fxch    st(2)
0x960FBC: fstp    dword ptr [esp+11Ch+var_F0+4]
0x960FC0: fmulp   st(2), st
0x960FC2: fmulp   st(2), st
0x960FC4: fsubrp  st(1), st
0x960FC6: fstp    [esp+11Ch+var_E8]
0x960FCA: fld     dword ptr [esp+11Ch+var_F0]
0x960FCE: fchs
0x960FD0: fstp    [esp+11Ch+var_FC]
0x960FD4: fld     dword ptr [esp+11Ch+var_F0+4]
0x960FD8: fchs
0x960FDA: fstp    [esp+11Ch+var_F8]
0x960FDE: fld     [esp+11Ch+var_E8]
0x960FE2: fchs
0x960FE4: fstp    [esp+11Ch+var_F4]
0x960FE8: fld     dword ptr [edi+8]
0x960FEB: fld     [esp+11Ch+var_F8]
0x960FEF: fld     st
0x960FF1: fmulp   st(2), st
0x960FF3: fld     dword ptr [edi+4]
0x960FF6: fld     [esp+11Ch+var_FC]
0x960FFA: fld     st
0x960FFC: fmulp   st(2), st
0x960FFE: fxch    st(3)
0x961000: faddp   st(1), st
0x961002: fld     dword ptr [edi+0Ch]
0x961005: fld     [esp+11Ch+var_F4]
0x961009: fld     st
0x96100B: fmulp   st(2), st
0x96100D: fxch    st(2)
0x96100F: faddp   st(1), st
0x961011: fstp    dword ptr [esp+11Ch+var_F0]
0x961015: fld     dword ptr [edi+1Ch]
0x961018: fld     dword ptr [edi+38h]
0x96101B: fcompp
0x96101D: fnstsw  ax
0x96101F: test    ah, 5
0x961022: jp      short loc_961029
0x961024: fld     dword ptr [edi+1Ch]
0x961027: jmp     short loc_96102C
0x961029: fld     dword ptr [edi+38h]
0x96102C: fstp    [esp+11Ch+var_E4]
0x961030: fld     st(2)
0x961032: fmul    dword ptr [esi]
0x961034: fld     dword ptr [esi+4]
0x961037: fmul    st, st(3)
0x961039: faddp   st(1), st
0x96103B: fld     st(1)
0x96103D: fmul    dword ptr [esi+8]
0x961040: faddp   st(1), st
0x961042: fstp    [esp+11Ch+var_E0]
0x961046: fld     dword ptr [esp+11Ch+var_F0]
0x96104A: fsub    [esp+11Ch+var_E0]
0x96104E: fstp    [esp+11Ch+var_100]
0x961052: fld     [esp+11Ch+var_100]
0x961056: fmul    st, st
0x961058: fld     st(3)
0x96105A: fmulp   st(4), st
0x96105C: fld     st(2)
0x96105E: fmulp   st(3), st
0x961060: fxch    st(3)
0x961062: faddp   st(2), st
0x961064: fmul    st, st
0x961066: faddp   st(1), st
0x961068: fstp    [esp+11Ch+var_100]
0x96106C: fld     [esp+11Ch+var_100]
0x961070: fld     [esp+11Ch+var_E4]
0x961074: fld     st
0x961076: fmulp   st(2), st
0x961078: fmulp   st(1), st
0x96107A: fstp    [esp+11Ch+var_100]
0x96107E: fld     [esp+11Ch+var_100]
0x961082: fcompp
0x961084: fnstsw  ax
0x961086: test    ah, 5
0x961089: jp      loc_96122D
0x96108F: lea     ecx, [esp+11Ch+var_FC]
0x961093: call    sub_43F350
0x961098: fstp    st
0x96109A: fld     dword ptr [esp+11Ch+var_F0]
0x96109E: fld     [esp+11Ch+var_E0]
0x9610A2: fcompp
0x9610A4: fnstsw  ax
0x9610A6: fld     [esp+11Ch+var_FC]
0x9610AA: test    ah, 5
0x9610AD: fmul    [esp+11Ch+var_10C]
0x9610B1: fld     [esp+11Ch+var_F8]
0x9610B5: fmul    [esp+11Ch+var_108]
0x9610B9: faddp   st(1), st
0x9610BB: fld     [esp+11Ch+var_F4]
0x9610BF: fmul    [esp+11Ch+var_104]
0x9610C3: faddp   st(1), st
0x9610C5: jp      short loc_96111E
0x9610C7: fstp    [esp+11Ch+var_100]
0x9610CB: fld     [esp+11Ch+var_100]
0x9610CF: fcomp   dword ptr ds:0A2FAA8h
0x9610D5: fnstsw  ax
0x9610D7: test    ah, 1
0x9610DA: jz      loc_960F66
0x9610E0: fld     [esp+11Ch+var_E4]
0x9610E4: lea     edx, [esp+11Ch+var_FC]
0x9610E8: push    edx; int
0x9610E9: push    ecx
0x9610EA: lea     eax, [esp+124h+var_DC]
0x9610EE: fstp    [esp+124h+var_124]; float
0x9610F1: push    eax; int
0x9610F2: call    sub_47DA10
0x9610F7: add     esp, 0Ch
0x9610FA: push    eax
0x9610FB: lea     ecx, [esp+120h+var_F0]
0x9610FF: push    ecx
0x961100: lea     ecx, [edi+4]
0x961103: call    sub_4121A0
0x961108: mov     edx, [eax]
0x96110A: mov     ecx, [eax+4]
0x96110D: mov     [esp+11Ch+var_10C], edx
0x961111: mov     edx, [eax+8]
0x961114: mov     [esp+11Ch+var_108], ecx
0x961118: mov     [esp+11Ch+var_104], edx
0x96111C: jmp     short loc_961173
0x96111E: fstp    [esp+11Ch+var_100]
0x961122: fld     [esp+11Ch+var_100]
0x961126: fcomp   dword ptr ds:0A2FAA8h
0x96112C: fnstsw  ax
0x96112E: test    ah, 41h
0x961131: jnp     loc_960F66
0x961137: fld     [esp+11Ch+var_E4]
0x96113B: lea     eax, [esp+11Ch+var_FC]
0x96113F: push    eax; int
0x961140: push    ecx
0x961141: lea     ecx, [esp+124h+var_DC]
0x961145: fstp    [esp+124h+var_124]; float
0x961148: push    ecx; int
0x961149: call    sub_47DA10
0x96114E: add     esp, 0Ch
0x961151: push    eax
0x961152: lea     edx, [esp+120h+var_F0]
0x961156: push    edx
0x961157: lea     ecx, [edi+4]
0x96115A: call    sub_47D9B0
0x96115F: mov     ecx, [eax]
0x961161: mov     edx, [eax+4]
0x961164: mov     eax, [eax+8]
0x961167: mov     [esp+11Ch+var_10C], ecx
0x96116B: mov     [esp+11Ch+var_108], edx
0x96116F: mov     [esp+11Ch+var_104], eax
0x961173: fld     [esp+11Ch+var_FC]
0x961177: fld     st
0x961179: fmul    dword ptr [esi]
0x96117B: fld     dword ptr [esi+4]
0x96117E: fld     [esp+11Ch+var_F8]
0x961182: fld     st
0x961184: fmulp   st(2), st
0x961186: fxch    st(2)
0x961188: faddp   st(1), st
0x96118A: fld     [esp+11Ch+var_F4]
0x96118E: fld     st
0x961190: fmul    dword ptr [esi+8]
0x961193: faddp   st(2), st
0x961195: fxch    st(1)
0x961197: fstp    [esp+11Ch+var_E0]
0x96119B: fld     [esp+11Ch+var_E0]
0x96119F: fadd    qword ptr ds:0A30E40h
0x9611A5: fst     [esp+11Ch+var_F0]
0x9611A9: fld     [esp+11Ch+var_10C]
0x9611AD: fmulp   st(4), st
0x9611AF: fld     [esp+11Ch+var_108]
0x9611B3: fmulp   st(3), st
0x9611B5: fxch    st(3)
0x9611B7: faddp   st(2), st
0x9611B9: fmul    [esp+11Ch+var_104]
0x9611BD: faddp   st(1), st
0x9611BF: fstp    [esp+11Ch+var_100]
0x9611C3: fld     [esp+11Ch+var_100]
0x9611C7: fcompp
0x9611C9: fnstsw  ax
0x9611CB: test    ah, 41h
0x9611CE: jnz     short loc_96122D
0x9611D0: fld     [esp+11Ch+arg_0]
0x9611D7: lea     ecx, [esp+11Ch+var_B8]
0x9611DB: push    ecx; int
0x9611DC: push    ecx
0x9611DD: lea     edx, [esp+124h+var_78]
0x9611E4: fstp    [esp+124h+var_124]; float
0x9611E7: push    edx; int
0x9611E8: call    sub_47DA10
0x9611ED: fld     dword ptr [eax]
0x9611EF: fadd    [esp+128h+var_10C]
0x9611F3: add     esp, 0Ch
0x9611F6: lea     ecx, [esp+11Ch+var_FC]
0x9611FA: fstp    [esp+11Ch+var_DC]
0x9611FE: fld     dword ptr [eax+4]
0x961201: fadd    [esp+11Ch+var_108]
0x961205: fstp    [esp+11Ch+var_D8]
0x961209: fld     dword ptr [eax+8]
0x96120C: lea     eax, [esp+11Ch+var_DC]
0x961210: fadd    [esp+11Ch+var_104]
0x961214: push    eax
0x961215: fstp    [esp+120h+var_D4]
0x961219: call    sub_47D9E0
0x96121E: fcomp   [esp+11Ch+var_F0]
0x961222: fnstsw  ax
0x961224: test    ah, 41h
0x961227: jz      loc_960F66
0x96122D: fld     dword ptr ds:0A79DB4h
0x961233: push    20h ; ' '; int
0x961235: sub     esp, 0Ch
0x961238: fstp    [esp+12Ch+var_124]; float
0x96123C: lea     ecx, [esp+12Ch+var_6C]
0x961243: fld     dword ptr ds:0A37080h
0x961249: fstp    [esp+12Ch+var_128]; float
0x96124D: fld     [esp+12Ch+arg_0]
0x961254: fstp    [esp+12Ch+var_12C]; float
0x961257: push    ebp; int
0x961258: push    ebx; int
0x961259: push    esi; int
0x96125A: push    edi; int
0x96125B: call    sub_974110
0x961260: mov     ecx, [esp+11Ch+arg_18]
0x961267: mov     edx, [esp+11Ch+arg_8]
0x96126E: push    ecx
0x96126F: push    edx
0x961270: lea     ecx, [esp+124h+var_6C]
0x961277: call    sub_96F170
0x96127C: lea     ecx, [esp+11Ch+var_6C]
0x961283: call    sub_680CC0
0x961288: mov     eax, [esp+11Ch+arg_1C]
0x96128F: lea     ecx, [esp+11Ch+var_6C]
0x961296: fstp    dword ptr [eax]
0x961298: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96129D: cmp     eax, 3
0x9612A0: jz      short loc_9612B7
0x9612A2: lea     ecx, [esp+11Ch+var_6C]
0x9612A9: call    NiRenderTargetGroup__GetRenderTargetsNum
0x9612AE: cmp     eax, 2
0x9612B1: jnz     loc_960F66
0x9612B7: lea     ecx, [esp+11Ch+var_6C]
0x9612BE: call    sub_4E7DE0
0x9612C3: cmp     [esp+11Ch+arg_24], 0
0x9612CB: mov     edx, [eax]
0x9612CD: mov     ecx, [esp+11Ch+arg_20]
0x9612D4: mov     [ecx], edx
0x9612D6: mov     edx, [eax+4]
0x9612D9: mov     [ecx+4], edx
0x9612DC: mov     eax, [eax+8]
0x9612DF: mov     [ecx+8], eax
0x9612E2: jz      short loc_96133C
0x9612E4: lea     ecx, [esp+11Ch+var_6C]; this
0x9612EB: call    TESObjectREFR_GetPosition
0x9612F0: mov     edx, [eax]
0x9612F2: mov     ecx, [esp+11Ch+arg_28]
0x9612F9: mov     [ecx], edx
0x9612FB: mov     edx, [eax+4]
0x9612FE: mov     [ecx+4], edx
0x961301: mov     eax, [eax+8]
0x961304: mov     [ecx+8], eax
0x961307: mov     eax, [esp+11Ch+arg_2C]
0x96130E: fld     dword ptr [ecx]
0x961310: fchs
0x961312: fstp    [esp+11Ch+var_10C]
0x961316: fld     dword ptr [ecx+4]
0x961319: fchs
0x96131B: fstp    [esp+11Ch+var_108]
0x96131F: mov     edx, [esp+11Ch+var_108]
0x961323: fld     dword ptr [ecx+8]
0x961326: mov     ecx, [esp+11Ch+var_10C]
0x96132A: fchs
0x96132C: mov     [eax], ecx
0x96132E: fstp    [esp+11Ch+var_104]
0x961332: mov     ecx, [esp+11Ch+var_104]
0x961336: mov     [eax+4], edx
0x961339: mov     [eax+8], ecx
0x96133C: pop     edi
0x96133D: pop     esi
0x96133E: pop     ebp
0x96133F: mov     al, 1
0x961341: pop     ebx
0x961342: add     esp, 10Ch
0x961348: retn
