0x6B0C70: push    0FFFFFFFFh
0x6B0C72: push    offset SEH_6B0C70
0x6B0C77: mov     eax, large fs:0
0x6B0C7D: push    eax
0x6B0C7E: sub     esp, 1Ch
0x6B0C81: push    ebx
0x6B0C82: push    ebp
0x6B0C83: push    esi
0x6B0C84: push    edi
0x6B0C85: mov     eax, ds:0B30AACh
0x6B0C8A: xor     eax, esp
0x6B0C8C: push    eax
0x6B0C8D: lea     eax, [esp+3Ch+var_C]
0x6B0C91: mov     large fs:0, eax
0x6B0C97: mov     esi, [esp+3Ch+arg_0]
0x6B0C9B: mov     eax, [esi+1Ch]
0x6B0C9E: cmp     eax, [esi+20h]
0x6B0CA1: jnz     short loc_6B0CAB
0x6B0CA3: test    eax, eax
0x6B0CA5: jnz     loc_6B11ED
0x6B0CAB: mov     eax, ds:0B3C20Ch
0x6B0CB0: cmp     eax, ds:0B16304h
0x6B0CB6: jnb     loc_6B11ED
0x6B0CBC: test    byte ptr ds:0B3C180h, 1
0x6B0CC3: jnz     short loc_6B0CF3
0x6B0CC5: or      dword ptr ds:0B3C180h, 1
0x6B0CCC: mov     ecx, offset stru_B3C100; lpCriticalSection
0x6B0CD1: mov     [esp+3Ch+var_4], 0
0x6B0CD9: call    NiInitalizeCriticalSection
0x6B0CDE: push    offset sub_A26270; void (__cdecl *)()
0x6B0CE3: call    _atexit
0x6B0CE8: add     esp, 4
0x6B0CEB: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6B0CF3: push    offset aImpactmixerPla; lpCriticalSection
0x6B0CF8: mov     ecx, offset stru_B3C100
0x6B0CFD: call    NiEnterCriticalSection
0x6B0D02: mov     eax, ds:0B3C0F0h
0x6B0D07: test    eax, eax
0x6B0D09: jnz     short loc_6B0D19
0x6B0D0B: mov     ecx, ds:0B33398h
0x6B0D11: mov     eax, [ecx+24h]
0x6B0D14: mov     ds:0B3C0F0h, eax
0x6B0D19: cmp     byte ptr [esi+14h], 1Fh
0x6B0D1D: fld     dword ptr [esi+0Ch]
0x6B0D20: fmul    qword ptr ds:0A77808h
0x6B0D26: fstp    [esp+3Ch+var_20]
0x6B0D2A: fld     dword ptr [esi+0Ch]
0x6B0D2D: fdiv    qword ptr ds:0A37478h
0x6B0D33: fstp    [esp+3Ch+var_28]
0x6B0D37: jnz     short loc_6B0D4D
0x6B0D39: cmp     byte ptr [esi+15h], 6
0x6B0D3D: jnz     short loc_6B0D4D
0x6B0D3F: fld     [esp+3Ch+var_28]
0x6B0D43: fmul    qword ptr ds:0A3C800h
0x6B0D49: fstp    [esp+3Ch+var_28]
0x6B0D4D: cmp     byte ptr ds:0B333B8h, 0
0x6B0D54: jz      loc_6B0DEC
0x6B0D5A: fld     dword ptr [eax+80h]
0x6B0D60: fstp    [esp+3Ch+var_18]
0x6B0D64: fld     dword ptr [eax+84h]
0x6B0D6A: fstp    [esp+3Ch+var_14]
0x6B0D6E: fld     dword ptr [eax+88h]
0x6B0D74: fstp    [esp+3Ch+var_10]
0x6B0D78: fld     [esp+3Ch+var_18]
0x6B0D7C: fsub    dword ptr [esi]
0x6B0D7E: fstp    [esp+3Ch+var_18]
0x6B0D82: fld     [esp+3Ch+var_14]
0x6B0D86: fsub    dword ptr [esi+4]
0x6B0D89: fstp    [esp+3Ch+var_14]
0x6B0D8D: fld     [esp+3Ch+var_10]
0x6B0D91: fsub    dword ptr [esi+8]
0x6B0D94: fstp    [esp+3Ch+var_10]
0x6B0D98: fld     [esp+3Ch+var_14]
0x6B0D9C: fld     [esp+3Ch+var_18]
0x6B0DA0: fld     [esp+3Ch+var_10]
0x6B0DA4: fld     st(2)
0x6B0DA6: fmulp   st(3), st
0x6B0DA8: fld     st(1)
0x6B0DAA: fmulp   st(2), st
0x6B0DAC: fxch    st(2)
0x6B0DAE: faddp   st(1), st
0x6B0DB0: fld     st(1)
0x6B0DB2: fmulp   st(2), st
0x6B0DB4: faddp   st(1), st
0x6B0DB6: fstp    [esp+3Ch+arg_0]
0x6B0DBA: fld     [esp+3Ch+arg_0]
0x6B0DBE: call    __CIsqrt
0x6B0DC3: fstp    [esp+3Ch+arg_0]
0x6B0DC7: fld     [esp+3Ch+arg_0]
0x6B0DCB: fld     dword ptr ds:0B162FCh
0x6B0DD1: fmul    qword ptr ds:0A2FAA0h
0x6B0DD7: fstp    [esp+3Ch+arg_0]
0x6B0DDB: fld     [esp+3Ch+arg_0]
0x6B0DDF: fcompp
0x6B0DE1: fnstsw  ax
0x6B0DE3: test    ah, 5
0x6B0DE6: jnp     loc_6B11E3
0x6B0DEC: mov     ecx, [esi+1Ch]
0x6B0DEF: test    ecx, ecx
0x6B0DF1: jz      short loc_6B0DFA
0x6B0DF3: call    sub_535AC0
0x6B0DF8: jmp     short loc_6B0E00
0x6B0DFA: fld     dword ptr ds:0A31E2Ch
0x6B0E00: mov     ecx, [esi+20h]
0x6B0E03: fstp    [esp+3Ch+arg_0]
0x6B0E07: test    ecx, ecx
0x6B0E09: jz      short loc_6B0E12
0x6B0E0B: call    sub_535AC0
0x6B0E10: jmp     short loc_6B0E18
0x6B0E12: fld     dword ptr ds:0A31E2Ch
0x6B0E18: mov     al, [esi+14h]
0x6B0E1B: fstp    [esp+3Ch+a3]
0x6B0E1F: cmp     al, 0Fh
0x6B0E21: jl      short loc_6B0E28
0x6B0E23: sub     al, 0Fh
0x6B0E25: mov     [esi+14h], al
0x6B0E28: mov     al, [esi+15h]
0x6B0E2B: cmp     al, 0Fh
0x6B0E2D: jl      short loc_6B0E34
0x6B0E2F: sub     al, 0Fh
0x6B0E31: mov     [esi+15h], al
0x6B0E34: movsx   edx, byte ptr [esi+14h]
0x6B0E38: fld     [esp+3Ch+arg_0]
0x6B0E3C: push    ecx
0x6B0E3D: fstp    [esp+40h+var_40]; float
0x6B0E40: push    edx; int
0x6B0E41: call    sub_6B0350
0x6B0E46: fld     [esp+44h+a3]
0x6B0E4A: mov     ebp, eax
0x6B0E4C: fstp    [esp+44h+var_40]; float
0x6B0E50: movsx   eax, byte ptr [esi+15h]
0x6B0E54: add     esp, 4
0x6B0E57: push    eax; int
0x6B0E58: call    sub_6B0350
0x6B0E5D: mov     ecx, ds:0B33EA0h
0x6B0E63: add     esp, 8
0x6B0E66: lea     edx, [esp+3Ch+arg_0]
0x6B0E6A: mov     [esp+3Ch+var_1C], eax
0x6B0E6E: mov     eax, [esi+18h]
0x6B0E71: push    edx
0x6B0E72: mov     [esp+40h+a3], ecx
0x6B0E76: xor     ebx, ebx
0x6B0E78: push    eax
0x6B0E79: mov     ecx, offset off_B1630C
0x6B0E7E: xor     edi, edi
0x6B0E80: mov     [esp+44h+arg_0], ebx
0x6B0E84: call    NiTMap_GetAt
0x6B0E89: test    al, al
0x6B0E8B: jz      short loc_6B0EA1
0x6B0E8D: mov     ecx, [esp+3Ch+a3]
0x6B0E91: sub     ecx, [esp+3Ch+arg_0]
0x6B0E95: cmp     ecx, ds:0B16244h
0x6B0E9B: jb      loc_6B11E3
0x6B0EA1: mov     edx, [esp+3Ch+a3]
0x6B0EA5: mov     eax, [esi+18h]
0x6B0EA8: push    edx; a3
0x6B0EA9: push    eax; a2
0x6B0EAA: mov     ecx, offset off_B1630C; this
0x6B0EAF: call    NiTMap_SetAt
0x6B0EB4: test    ebp, ebp
0x6B0EB6: jz      short loc_6B0EDC
0x6B0EB8: cmp     byte ptr [esi+14h], 7
0x6B0EBC: jnz     short loc_6B0EC4
0x6B0EBE: cmp     byte ptr [esi+15h], 7
0x6B0EC2: jz      short loc_6B0EDC
0x6B0EC4: mov     ebp, [ebp+0Ch]
0x6B0EC7: mov     ecx, ds:0B3C0F0h
0x6B0ECD: push    0
0x6B0ECF: push    4102h
0x6B0ED4: push    ebp
0x6B0ED5: call    OSGLobals_PlaySound
0x6B0EDA: mov     edi, eax
0x6B0EDC: mov     eax, [esp+3Ch+var_1C]
0x6B0EE0: test    eax, eax
0x6B0EE2: jz      short loc_6B0F08
0x6B0EE4: cmp     byte ptr [esi+14h], 7
0x6B0EE8: jnz     short loc_6B0EF0
0x6B0EEA: cmp     byte ptr [esi+15h], 7
0x6B0EEE: jz      short loc_6B0F08
0x6B0EF0: mov     eax, [eax+0Ch]
0x6B0EF3: mov     ecx, ds:0B3C0F0h
0x6B0EF9: push    0
0x6B0EFB: push    4102h
0x6B0F00: push    eax
0x6B0F01: call    OSGLobals_PlaySound
0x6B0F06: mov     ebx, eax
0x6B0F08: test    edi, edi
0x6B0F0A: jz      loc_6B1019
0x6B0F10: fld     dword ptr [esi+8]
0x6B0F13: sub     esp, 0Ch
0x6B0F16: fstp    [esp+48h+var_40]; float
0x6B0F1A: mov     ecx, edi
0x6B0F1C: fld     dword ptr [esi+4]
0x6B0F1F: fstp    [esp+48h+var_44]; float
0x6B0F23: fld     dword ptr [esi]
0x6B0F25: fstp    [esp+48h+var_48]; float
0x6B0F28: call    sub_6B7360
0x6B0F2D: fld     [esp+3Ch+var_20]
0x6B0F31: fdiv    qword ptr ds:0A46E48h
0x6B0F37: fld1
0x6B0F39: fcom    st(1)
0x6B0F3B: fnstsw  ax
0x6B0F3D: test    ah, 5
0x6B0F40: jp      short loc_6B0F46
0x6B0F42: fstp    st(1)
0x6B0F44: jmp     short loc_6B0F48
0x6B0F46: fstp    st
0x6B0F48: fmul    qword ptr ds:0A38538h
0x6B0F4E: push    ecx
0x6B0F4F: mov     ecx, edi
0x6B0F51: fadd    qword ptr ds:0A6E700h
0x6B0F57: fstp    [esp+40h+arg_0]
0x6B0F5B: fld     [esp+40h+arg_0]
0x6B0F5F: fstp    [esp+40h+var_40]; float
0x6B0F62: call    sub_6B7310
0x6B0F67: fld     [esp+3Ch+var_28]
0x6B0F6B: fmul    qword ptr ds:0A2FAA0h
0x6B0F71: fld1
0x6B0F73: fcom    st(1)
0x6B0F75: fnstsw  ax
0x6B0F77: test    ah, 41h
0x6B0F7A: jnz     short loc_6B0F8D
0x6B0F7C: fld     st(1)
0x6B0F7E: fldz
0x6B0F80: fcom    st(1)
0x6B0F82: fnstsw  ax
0x6B0F84: fstp    st(1)
0x6B0F86: test    ah, 5
0x6B0F89: jp      short loc_6B0F9A
0x6B0F8B: fstp    st
0x6B0F8D: fcom    st(1)
0x6B0F8F: fnstsw  ax
0x6B0F91: test    ah, 41h
0x6B0F94: jz      short loc_6B0F9C
0x6B0F96: fstp    st(1)
0x6B0F98: jmp     short loc_6B0F9E
0x6B0F9A: fstp    st(2)
0x6B0F9C: fstp    st
0x6B0F9E: fstp    [esp+3Ch+arg_0]
0x6B0FA2: push    ecx
0x6B0FA3: fld     [esp+40h+arg_0]
0x6B0FA7: mov     ecx, edi
0x6B0FA9: fstp    [esp+40h+var_40]; float
0x6B0FAC: call    sub_6B7280
0x6B0FB1: fld     dword ptr ds:0A379CCh
0x6B0FB7: sub     esp, 8
0x6B0FBA: fnstcw  word ptr [esp+44h+arg_0]
0x6B0FBE: movzx   eax, word ptr [esp+44h+arg_0]
0x6B0FC3: fstp    [esp+44h+var_40]; float
0x6B0FC7: or      eax, 0C00h
0x6B0FCC: fld     [esp+44h+var_28]
0x6B0FD0: mov     [esp+44h+var_1C], eax
0x6B0FD4: fldcw   word ptr [esp+44h+var_1C]
0x6B0FD8: mov     eax, [edi]
0x6B0FDA: fistp   [esp+44h+var_1C]
0x6B0FDE: mov     cl, byte ptr [esp+44h+var_1C]
0x6B0FE2: movzx   edx, cl
0x6B0FE5: mov     ecx, ds:0B3C0F0h
0x6B0FEB: fldcw   word ptr [esp+44h+arg_0]
0x6B0FEF: mov     [esp+44h+arg_0], edx
0x6B0FF3: fild    [esp+44h+arg_0]
0x6B0FF7: fstp    [esp+44h+var_44]; float
0x6B0FFA: push    eax; int
0x6B0FFB: call    sub_6ACC50
0x6B1000: push    0
0x6B1002: mov     ecx, edi
0x6B1004: call    sub_6B7190
0x6B1009: mov     ecx, edi; this
0x6B100B: call    sub_6B73E0
0x6B1010: push    edi
0x6B1011: call    FormHeapFree
0x6B1016: add     esp, 4
0x6B1019: test    ebx, ebx
0x6B101B: jz      loc_6B112A
0x6B1021: fld     dword ptr [esi+8]
0x6B1024: sub     esp, 0Ch
0x6B1027: fstp    [esp+48h+var_40]; float
0x6B102B: mov     ecx, ebx
0x6B102D: fld     dword ptr [esi+4]
0x6B1030: fstp    [esp+48h+var_44]; float
0x6B1034: fld     dword ptr [esi]
0x6B1036: fstp    [esp+48h+var_48]; float
0x6B1039: call    sub_6B7360
0x6B103E: fld     [esp+3Ch+var_20]
0x6B1042: fdiv    qword ptr ds:0A46E48h
0x6B1048: fld1
0x6B104A: fcom    st(1)
0x6B104C: fnstsw  ax
0x6B104E: test    ah, 5
0x6B1051: jp      short loc_6B1057
0x6B1053: fstp    st(1)
0x6B1055: jmp     short loc_6B1059
0x6B1057: fstp    st
0x6B1059: fmul    qword ptr ds:0A38538h
0x6B105F: push    ecx
0x6B1060: mov     ecx, ebx
0x6B1062: fadd    qword ptr ds:0A6E700h
0x6B1068: fstp    [esp+40h+arg_0]
0x6B106C: fld     [esp+40h+arg_0]
0x6B1070: fstp    [esp+40h+var_40]; float
0x6B1073: call    sub_6B7310
0x6B1078: fld     [esp+3Ch+var_28]
0x6B107C: fmul    qword ptr ds:0A2FAA0h
0x6B1082: fld1
0x6B1084: fcom    st(1)
0x6B1086: fnstsw  ax
0x6B1088: test    ah, 41h
0x6B108B: jnz     short loc_6B109E
0x6B108D: fld     st(1)
0x6B108F: fldz
0x6B1091: fcom    st(1)
0x6B1093: fnstsw  ax
0x6B1095: fstp    st(1)
0x6B1097: test    ah, 5
0x6B109A: jp      short loc_6B10AB
0x6B109C: fstp    st
0x6B109E: fcom    st(1)
0x6B10A0: fnstsw  ax
0x6B10A2: test    ah, 41h
0x6B10A5: jz      short loc_6B10AD
0x6B10A7: fstp    st(1)
0x6B10A9: jmp     short loc_6B10AF
0x6B10AB: fstp    st(2)
0x6B10AD: fstp    st
0x6B10AF: fstp    [esp+3Ch+arg_0]
0x6B10B3: push    ecx
0x6B10B4: fld     [esp+40h+arg_0]
0x6B10B8: mov     ecx, ebx
0x6B10BA: fstp    [esp+40h+var_40]; float
0x6B10BD: call    sub_6B7280
0x6B10C2: fld     dword ptr ds:0A379CCh
0x6B10C8: sub     esp, 8
0x6B10CB: fnstcw  word ptr [esp+44h+arg_0]
0x6B10CF: movzx   eax, word ptr [esp+44h+arg_0]
0x6B10D4: fstp    [esp+44h+var_40]; float
0x6B10D8: or      eax, 0C00h
0x6B10DD: fld     [esp+44h+var_28]
0x6B10E1: mov     [esp+44h+var_1C], eax
0x6B10E5: fldcw   word ptr [esp+44h+var_1C]
0x6B10E9: mov     eax, [ebx]
0x6B10EB: fistp   [esp+44h+var_1C]
0x6B10EF: mov     cl, byte ptr [esp+44h+var_1C]
0x6B10F3: movzx   edx, cl
0x6B10F6: mov     ecx, ds:0B3C0F0h
0x6B10FC: fldcw   word ptr [esp+44h+arg_0]
0x6B1100: mov     [esp+44h+arg_0], edx
0x6B1104: fild    [esp+44h+arg_0]
0x6B1108: fstp    [esp+44h+var_44]; float
0x6B110B: push    eax; int
0x6B110C: call    sub_6ACC50
0x6B1111: push    0
0x6B1113: mov     ecx, ebx
0x6B1115: call    sub_6B7190
0x6B111A: mov     ecx, ebx; this
0x6B111C: call    sub_6B73E0
0x6B1121: push    ebx
0x6B1122: call    FormHeapFree
0x6B1127: add     esp, 4
0x6B112A: mov     ecx, [esi]
0x6B112C: mov     edi, ds:0B16244h
0x6B1132: mov     ds:0B3C0F4h, ecx
0x6B1138: mov     edx, [esi+4]
0x6B113B: mov     ds:0B3C0F8h, edx
0x6B1141: mov     eax, [esi+8]
0x6B1144: add     edi, edi
0x6B1146: mov     ecx, offset off_B1630C
0x6B114B: mov     ds:0B3C0FCh, eax
0x6B1150: add     edi, edi
0x6B1152: call    sub_6A9030
0x6B1157: mov     ebx, ds:0B33EA0h
0x6B115D: xor     esi, esi
0x6B115F: test    eax, eax
0x6B1161: mov     [esp+3Ch+arg_0], eax
0x6B1165: jz      short loc_6B11E3
0x6B1167: lea     ecx, [esp+3Ch+var_1C]
0x6B116B: push    ecx
0x6B116C: lea     edx, [esp+40h+var_20]
0x6B1170: push    edx
0x6B1171: lea     eax, [esp+44h+arg_0]
0x6B1175: push    eax
0x6B1176: mov     ecx, offset off_B1630C
0x6B117B: add     esi, 1
0x6B117E: call    sub_452600
0x6B1183: mov     ecx, ebx
0x6B1185: sub     ecx, [esp+3Ch+var_1C]
0x6B1189: cmp     ecx, edi
0x6B118B: jbe     short loc_6B11C3
0x6B118D: mov     edx, [esp+3Ch+var_20]
0x6B1191: push    edx
0x6B1192: mov     ecx, offset off_B1630C
0x6B1197: call    NiTMap_RemoveAt
0x6B119C: mov     ecx, ds:0B16310h
0x6B11A2: xor     eax, eax
0x6B11A4: test    ecx, ecx
0x6B11A6: jbe     short loc_6B11BD
0x6B11A8: mov     edx, ds:0B16314h
0x6B11AE: mov     edi, edi
0x6B11B0: cmp     dword ptr [edx+eax*4], 0
0x6B11B4: jnz     short loc_6B11D4
0x6B11B6: add     eax, 1
0x6B11B9: cmp     eax, ecx
0x6B11BB: jb      short loc_6B11B0
0x6B11BD: xor     eax, eax
0x6B11BF: mov     [esp+3Ch+arg_0], eax
0x6B11C3: cmp     esi, 100h
0x6B11C9: ja      short loc_6B11D9
0x6B11CB: cmp     [esp+3Ch+arg_0], 0
0x6B11D0: jnz     short loc_6B1167
0x6B11D2: jmp     short loc_6B11E3
0x6B11D4: mov     eax, [edx+eax*4]
0x6B11D7: jmp     short loc_6B11BF
0x6B11D9: mov     ecx, offset off_B1630C
0x6B11DE: call    NiTMap_Clear
0x6B11E3: mov     ecx, offset stru_B3C100; lpCriticalSection
0x6B11E8: call    NiLeaveCriticalSection_0
0x6B11ED: mov     ecx, dword ptr [esp+3Ch+var_C]
0x6B11F1: mov     large fs:0, ecx
0x6B11F8: pop     ecx
0x6B11F9: pop     edi
0x6B11FA: pop     esi
0x6B11FB: pop     ebp
0x6B11FC: pop     ebx
0x6B11FD: add     esp, 28h
0x6B1200: retn
