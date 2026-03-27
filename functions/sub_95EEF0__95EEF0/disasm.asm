0x95EEF0: sub     esp, 24h
0x95EEF3: mov     edx, [esp+24h+arg_C]
0x95EEF7: mov     ecx, [esp+24h+arg_4]
0x95EEFB: fld     dword ptr [edx+4]
0x95EEFE: fmul    dword ptr [ecx+4]
0x95EF01: push    esi
0x95EF02: fld     dword ptr [edx+8]
0x95EF05: fmul    dword ptr [ecx+8]
0x95EF08: faddp   st(1), st
0x95EF0A: fld     dword ptr [edx+0Ch]
0x95EF0D: fmul    dword ptr [ecx+0Ch]
0x95EF10: faddp   st(1), st
0x95EF12: fstp    [esp+28h+arg_4]
0x95EF16: fld     [esp+28h+arg_4]
0x95EF1A: fcom    qword ptr ds:0AA3A10h
0x95EF20: fnstsw  ax
0x95EF22: test    ah, 41h
0x95EF25: jnz     loc_95F05D
0x95EF2B: cmp     [esp+28h+arg_1C], 0
0x95EF30: fld     st
0x95EF32: fmul    st, st
0x95EF34: mov     eax, [esp+28h+arg_14]
0x95EF38: fld1
0x95EF3A: fld     st
0x95EF3C: fsubrp  st(2), st
0x95EF3E: fdivrp  st(1), st
0x95EF40: fstp    [esp+28h+arg_4]
0x95EF44: fld     dword ptr [ecx+10h]
0x95EF47: fld     dword ptr [edx+10h]
0x95EF4A: fmul    st, st(2)
0x95EF4C: fsubp   st(1), st
0x95EF4E: fld     [esp+28h+arg_4]
0x95EF52: fld     st
0x95EF54: fmulp   st(2), st
0x95EF56: fxch    st(1)
0x95EF58: fstp    [esp+28h+arg_C]
0x95EF5C: fld     dword ptr [edx+10h]
0x95EF5F: fld     dword ptr [ecx+10h]
0x95EF62: fmulp   st(3), st
0x95EF64: fsubrp  st(2), st
0x95EF66: fmulp   st(1), st
0x95EF68: fstp    [esp+28h+arg_4]
0x95EF6C: fldz
0x95EF6E: fstp    dword ptr [eax]
0x95EF70: fld     dword ptr [edx+4]
0x95EF73: mov     eax, [esp+28h+arg_18]
0x95EF77: fld     [esp+28h+arg_4]
0x95EF7B: fld     st
0x95EF7D: fmulp   st(2), st
0x95EF7F: fxch    st(1)
0x95EF81: fstp    [esp+28h+var_18]
0x95EF85: fld     dword ptr [edx+8]
0x95EF88: fmul    st, st(1)
0x95EF8A: fstp    [esp+28h+var_14]
0x95EF8E: fmul    dword ptr [edx+0Ch]
0x95EF91: fstp    [esp+28h+var_10]
0x95EF95: fld     dword ptr [ecx+4]
0x95EF98: fld     [esp+28h+arg_C]
0x95EF9C: fld     st
0x95EF9E: fmulp   st(2), st
0x95EFA0: fxch    st(1)
0x95EFA2: fstp    [esp+28h+var_24]
0x95EFA6: fld     dword ptr [ecx+8]
0x95EFA9: fmul    st, st(1)
0x95EFAB: fstp    [esp+28h+var_20]
0x95EFAF: fmul    dword ptr [ecx+0Ch]
0x95EFB2: fstp    [esp+28h+var_1C]
0x95EFB6: fld     [esp+28h+var_24]
0x95EFBA: fadd    [esp+28h+var_18]
0x95EFBE: fstp    [esp+28h+var_C]
0x95EFC2: mov     esi, [esp+28h+var_C]
0x95EFC6: fld     [esp+28h+var_14]
0x95EFCA: mov     [eax], esi
0x95EFCC: fadd    [esp+28h+var_20]
0x95EFD0: fstp    [esp+28h+var_8]
0x95EFD4: mov     esi, [esp+28h+var_8]
0x95EFD8: fld     [esp+28h+var_1C]
0x95EFDC: mov     [eax+4], esi
0x95EFDF: fadd    [esp+28h+var_10]
0x95EFE3: fstp    [esp+28h+var_4]
0x95EFE7: mov     esi, [esp+28h+var_4]
0x95EFEB: mov     [eax+8], esi
0x95EFEE: jz      short loc_95F056
0x95EFF0: fld     dword ptr [ecx+4]
0x95EFF3: mov     eax, [esp+28h+arg_20]
0x95EFF7: fchs
0x95EFF9: fstp    [esp+28h+var_C]
0x95EFFD: fld     dword ptr [ecx+8]
0x95F000: fchs
0x95F002: fstp    [esp+28h+var_8]
0x95F006: fld     dword ptr [ecx+0Ch]
0x95F009: mov     ecx, [esp+28h+var_C]
0x95F00D: mov     [eax], ecx
0x95F00F: fchs
0x95F011: mov     ecx, [esp+28h+var_8]
0x95F015: fstp    [esp+28h+var_4]
0x95F019: mov     [eax+4], ecx
0x95F01C: mov     ecx, [esp+28h+var_4]
0x95F020: mov     [eax+8], ecx
0x95F023: fld     dword ptr [edx+4]
0x95F026: mov     eax, [esp+28h+arg_24]
0x95F02A: fchs
0x95F02C: fstp    [esp+28h+var_C]
0x95F030: fld     dword ptr [edx+8]
0x95F033: fchs
0x95F035: fstp    [esp+28h+var_8]
0x95F039: mov     ecx, [esp+28h+var_8]
0x95F03D: fld     dword ptr [edx+0Ch]
0x95F040: mov     edx, [esp+28h+var_C]
0x95F044: fchs
0x95F046: mov     [eax], edx
0x95F048: fstp    [esp+28h+var_4]
0x95F04C: mov     edx, [esp+28h+var_4]
0x95F050: mov     [eax+4], ecx
0x95F053: mov     [eax+8], edx
0x95F056: mov     al, 1
0x95F058: pop     esi
0x95F059: add     esp, 24h
0x95F05C: retn
0x95F05D: fstp    st
0x95F05F: fld     dword ptr [ecx+10h]
0x95F062: fld     dword ptr [edx+10h]
0x95F065: fchs
0x95F067: fcompp
0x95F069: fnstsw  ax
0x95F06B: test    ah, 1
0x95F06E: jnz     loc_95F0F7
0x95F074: fldz
0x95F076: mov     eax, [esp+28h+arg_14]
0x95F07A: fstp    dword ptr [eax]
0x95F07C: fld     dword ptr [ecx+10h]
0x95F07F: mov     eax, [esp+28h+arg_18]
0x95F083: fsub    dword ptr [edx+10h]
0x95F086: fstp    [esp+28h+arg_4]
0x95F08A: fld     dword ptr [ecx+4]
0x95F08D: fld     [esp+28h+arg_4]
0x95F091: fld     st
0x95F093: fmulp   st(2), st
0x95F095: fxch    st(1)
0x95F097: fstp    [esp+28h+var_C]
0x95F09B: mov     esi, [esp+28h+var_C]
0x95F09F: fld     dword ptr [ecx+8]
0x95F0A2: fmul    st, st(1)
0x95F0A4: fstp    [esp+28h+var_8]
0x95F0A8: fmul    dword ptr [ecx+0Ch]
0x95F0AB: mov     [eax], esi
0x95F0AD: mov     esi, [esp+28h+var_8]
0x95F0B1: mov     [eax+4], esi
0x95F0B4: fstp    [esp+28h+var_4]
0x95F0B8: mov     esi, [esp+28h+var_4]
0x95F0BC: cmp     [esp+28h+arg_1C], 0
0x95F0C1: mov     [eax+8], esi
0x95F0C4: jz      short loc_95F0F0
0x95F0C6: mov     esi, [ecx+4]
0x95F0C9: mov     eax, [esp+28h+arg_24]
0x95F0CD: mov     [eax], esi
0x95F0CF: mov     esi, [ecx+8]
0x95F0D2: mov     [eax+4], esi
0x95F0D5: mov     ecx, [ecx+0Ch]
0x95F0D8: mov     [eax+8], ecx
0x95F0DB: mov     ecx, [edx+4]
0x95F0DE: mov     eax, [esp+28h+arg_20]
0x95F0E2: mov     [eax], ecx
0x95F0E4: mov     ecx, [edx+8]
0x95F0E7: mov     [eax+4], ecx
0x95F0EA: mov     edx, [edx+0Ch]
0x95F0ED: mov     [eax+8], edx
0x95F0F0: mov     al, 1
0x95F0F2: pop     esi
0x95F0F3: add     esp, 24h
0x95F0F6: retn
0x95F0F7: mov     eax, [esp+28h+arg_10]
0x95F0FB: mov     esi, [esp+28h+arg_8]
0x95F0FF: fld     dword ptr [eax]
0x95F101: fsub    dword ptr [esi]
0x95F103: fstp    [esp+28h+var_C]
0x95F107: fld     dword ptr [eax+4]
0x95F10A: fsub    dword ptr [esi+4]
0x95F10D: fstp    [esp+28h+var_8]
0x95F111: fld     dword ptr [eax+8]
0x95F114: fsub    dword ptr [esi+8]
0x95F117: fstp    [esp+28h+var_4]
0x95F11B: fld     dword ptr [ecx+8]
0x95F11E: fmul    [esp+28h+var_8]
0x95F122: fld     dword ptr [ecx+4]
0x95F125: fmul    [esp+28h+var_C]
0x95F129: faddp   st(1), st
0x95F12B: fld     dword ptr [ecx+0Ch]
0x95F12E: fmul    [esp+28h+var_4]
0x95F132: faddp   st(1), st
0x95F134: fstp    [esp+28h+arg_4]
0x95F138: fldz
0x95F13A: fld     [esp+28h+arg_4]
0x95F13E: fcom    st(1)
0x95F140: fnstsw  ax
0x95F142: fstp    st(1)
0x95F144: test    ah, 41h
0x95F147: jnp     loc_95F202
0x95F14D: fld     dword ptr [ecx+10h]
0x95F150: fld     st(1)
0x95F152: fmul    [esp+28h+arg_0]
0x95F156: fsub    dword ptr [edx+10h]
0x95F159: fcompp
0x95F15B: fnstsw  ax
0x95F15D: test    ah, 1
0x95F160: jnz     loc_95F202
0x95F166: fld     dword ptr [edx+10h]
0x95F169: mov     eax, [esp+28h+arg_14]
0x95F16D: fadd    dword ptr [ecx+10h]
0x95F170: fdivrp  st(1), st
0x95F172: fstp    [esp+28h+arg_4]
0x95F176: fld     [esp+28h+arg_4]
0x95F17A: fst     dword ptr [eax]
0x95F17C: fstp    [esp+28h+arg_4]
0x95F180: fld     [esp+28h+arg_4]
0x95F184: mov     eax, [esp+28h+arg_18]
0x95F188: fld     st
0x95F18A: fmul    dword ptr [esi]
0x95F18C: fstp    [esp+28h+var_18]
0x95F190: fld     dword ptr [esi+4]
0x95F193: fmul    st, st(1)
0x95F195: fstp    [esp+28h+var_14]
0x95F199: fmul    dword ptr [esi+8]
0x95F19C: fstp    [esp+28h+var_10]
0x95F1A0: fld     dword ptr [ecx+10h]
0x95F1A3: fstp    [esp+28h+arg_4]
0x95F1A7: fld     dword ptr [ecx+4]
0x95F1AA: fld     [esp+28h+arg_4]
0x95F1AE: fld     st
0x95F1B0: fmulp   st(2), st
0x95F1B2: fxch    st(1)
0x95F1B4: fstp    [esp+28h+var_C]
0x95F1B8: fld     dword ptr [ecx+8]
0x95F1BB: fmul    st, st(1)
0x95F1BD: fstp    [esp+28h+var_8]
0x95F1C1: fmul    dword ptr [ecx+0Ch]
0x95F1C4: fstp    [esp+28h+var_4]
0x95F1C8: fld     [esp+28h+var_C]
0x95F1CC: fadd    [esp+28h+var_18]
0x95F1D0: fstp    [esp+28h+var_24]
0x95F1D4: mov     esi, [esp+28h+var_24]
0x95F1D8: fld     [esp+28h+var_8]
0x95F1DC: mov     [eax], esi
0x95F1DE: fadd    [esp+28h+var_14]
0x95F1E2: fstp    [esp+28h+var_20]
0x95F1E6: mov     esi, [esp+28h+var_20]
0x95F1EA: fld     [esp+28h+var_4]
0x95F1EE: mov     [eax+4], esi
0x95F1F1: fadd    [esp+28h+var_10]
0x95F1F5: fstp    [esp+28h+var_1C]
0x95F1F9: mov     esi, [esp+28h+var_1C]
0x95F1FD: jmp     loc_95F0BC
0x95F202: xor     al, al
0x95F204: fstp    st
0x95F206: pop     esi
0x95F207: add     esp, 24h
0x95F20A: retn
