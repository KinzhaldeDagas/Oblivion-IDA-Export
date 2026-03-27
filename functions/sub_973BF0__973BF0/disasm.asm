0x973BF0: sub     esp, 34h
0x973BF3: push    ebx
0x973BF4: mov     ebx, [esp+38h+arg_14]
0x973BF8: push    ebp
0x973BF9: mov     ebp, [esp+3Ch+arg_10]
0x973BFD: push    esi
0x973BFE: mov     esi, [esp+40h+arg_0]
0x973C02: mov     eax, [esi]
0x973C04: mov     ecx, [esi+4]
0x973C07: mov     edx, [esi+8]
0x973C0A: push    edi
0x973C0B: mov     edi, [esp+44h+arg_4]
0x973C0F: mov     [esp+44h+var_18], eax
0x973C13: mov     eax, [esi+0Ch]
0x973C16: push    ebx
0x973C17: mov     [esp+48h+var_14], ecx
0x973C1B: mov     ecx, [esi+10h]
0x973C1E: mov     [esp+48h+var_C], eax
0x973C22: mov     eax, [esp+48h+arg_8]
0x973C26: push    ebp
0x973C27: push    eax
0x973C28: mov     [esp+50h+var_8], ecx
0x973C2C: mov     [esp+50h+var_10], edx
0x973C30: mov     edx, [esi+14h]
0x973C33: lea     ecx, [esp+50h+var_18]
0x973C37: push    edi
0x973C38: push    ecx
0x973C39: mov     [esp+58h+var_4], edx
0x973C3D: call    sub_9708E0
0x973C42: fstp    [esp+58h+arg_0]
0x973C46: fldz
0x973C48: mov     edx, [esp+58h+arg_C]
0x973C4C: fstp    dword ptr [edx]
0x973C4E: mov     eax, [esi+18h]
0x973C51: mov     ecx, [esi+1Ch]
0x973C54: mov     edx, [esi+20h]
0x973C57: mov     [esp+58h+var_C], eax
0x973C5B: lea     eax, [esp+58h+var_2C]
0x973C5F: push    eax
0x973C60: mov     [esp+5Ch+var_8], ecx
0x973C64: lea     ecx, [esp+5Ch+var_28]
0x973C68: push    ecx
0x973C69: mov     [esp+60h+var_4], edx
0x973C6D: lea     edx, [esp+60h+var_34]
0x973C71: push    edx
0x973C72: lea     eax, [esp+64h+var_18]
0x973C76: push    edi
0x973C77: push    eax
0x973C78: call    sub_9708E0
0x973C7D: fstp    [esp+6Ch+arg_4]
0x973C81: fldz
0x973C83: add     esp, 28h
0x973C86: fst     [esp+44h+var_30]
0x973C8A: fld     [esp+44h+arg_4]
0x973C8E: fld     [esp+44h+arg_0]
0x973C92: fcomp   st(1)
0x973C94: fnstsw  ax
0x973C96: test    ah, 41h
0x973C99: jnz     short loc_973CBE
0x973C9B: mov     ecx, [esp+44h+arg_8]
0x973C9F: fstp    [esp+44h+arg_0]
0x973CA3: mov     edx, [esp+44h+arg_C]
0x973CA7: fstp    dword ptr [ecx]
0x973CA9: fld     [esp+44h+var_34]
0x973CAD: fstp    dword ptr [edx]
0x973CAF: fld     [esp+44h+var_28]
0x973CB3: fstp    dword ptr [ebp+0]
0x973CB6: fld     [esp+44h+var_2C]
0x973CBA: fstp    dword ptr [ebx]
0x973CBC: jmp     short loc_973CC2
0x973CBE: fstp    st(1)
0x973CC0: fstp    st
0x973CC2: fld     dword ptr [esi+0Ch]
0x973CC5: fadd    [esp+44h+var_18]
0x973CC9: fstp    [esp+44h+var_24]
0x973CCD: mov     eax, [esp+44h+var_24]
0x973CD1: fld     dword ptr [esi+10h]
0x973CD4: mov     [esp+44h+var_18], eax
0x973CD8: fadd    [esp+44h+var_14]
0x973CDC: fstp    [esp+44h+var_20]
0x973CE0: mov     ecx, [esp+44h+var_20]
0x973CE4: fld     dword ptr [esi+14h]
0x973CE7: mov     [esp+44h+var_14], ecx
0x973CEB: fadd    [esp+44h+var_10]
0x973CEF: fstp    [esp+44h+var_1C]
0x973CF3: mov     edx, [esp+44h+var_1C]
0x973CF7: fld     [esp+44h+var_C]
0x973CFB: mov     [esp+44h+var_10], edx
0x973CFF: fsub    dword ptr [esi+0Ch]
0x973D02: fstp    [esp+44h+var_24]
0x973D06: mov     eax, [esp+44h+var_24]
0x973D0A: fld     [esp+44h+var_8]
0x973D0E: mov     [esp+44h+var_C], eax
0x973D12: fsub    dword ptr [esi+10h]
0x973D15: lea     eax, [esp+44h+var_2C]
0x973D19: push    eax
0x973D1A: lea     eax, [esp+48h+var_18]
0x973D1E: fstp    [esp+48h+var_20]
0x973D22: mov     ecx, [esp+48h+var_20]
0x973D26: fld     [esp+48h+var_4]
0x973D2A: mov     [esp+48h+var_8], ecx
0x973D2E: fsub    dword ptr [esi+14h]
0x973D31: lea     ecx, [esp+48h+var_28]
0x973D35: push    ecx
0x973D36: fstp    [esp+4Ch+var_1C]
0x973D3A: mov     edx, [esp+4Ch+var_1C]
0x973D3E: mov     [esp+4Ch+var_4], edx
0x973D42: lea     edx, [esp+4Ch+var_34]
0x973D46: push    edx
0x973D47: push    edi
0x973D48: push    eax
0x973D49: call    sub_9708E0
0x973D4E: fstp    [esp+58h+arg_4]
0x973D52: fld     [esp+58h+var_34]
0x973D56: add     esp, 14h
0x973D59: fld     st
0x973D5B: fld1
0x973D5D: fsubrp  st(1), st
0x973D5F: fstp    [esp+44h+var_30]
0x973D63: fld     [esp+44h+arg_4]
0x973D67: fld     [esp+44h+arg_0]
0x973D6B: fcomp   st(1)
0x973D6D: fnstsw  ax
0x973D6F: test    ah, 41h
0x973D72: jnz     short loc_973D97
0x973D74: mov     ecx, [esp+44h+arg_8]
0x973D78: fstp    [esp+44h+arg_0]
0x973D7C: fld     [esp+44h+var_30]
0x973D80: mov     edx, [esp+44h+arg_C]
0x973D84: fstp    dword ptr [ecx]
0x973D86: fstp    dword ptr [edx]
0x973D88: fld     [esp+44h+var_28]
0x973D8C: fstp    dword ptr [ebp+0]
0x973D8F: fld     [esp+44h+var_2C]
0x973D93: fstp    dword ptr [ebx]
0x973D95: jmp     short loc_973D9B
0x973D97: fstp    st(1)
0x973D99: fstp    st
0x973D9B: mov     eax, [edi]
0x973D9D: mov     ecx, [edi+4]
0x973DA0: mov     edx, [edi+8]
0x973DA3: mov     [esp+44h+var_18], eax
0x973DA7: mov     eax, [edi+0Ch]
0x973DAA: mov     [esp+44h+var_14], ecx
0x973DAE: mov     ecx, [edi+10h]
0x973DB1: mov     [esp+44h+var_C], eax
0x973DB5: mov     [esp+44h+var_10], edx
0x973DB9: mov     edx, [edi+14h]
0x973DBC: lea     eax, [esp+44h+var_34]
0x973DC0: push    eax
0x973DC1: mov     [esp+48h+var_8], ecx
0x973DC5: lea     ecx, [esp+48h+var_30]
0x973DC9: push    ecx
0x973DCA: mov     [esp+4Ch+var_4], edx
0x973DCE: lea     edx, [esp+4Ch+var_28]
0x973DD2: push    edx
0x973DD3: lea     eax, [esp+50h+var_18]
0x973DD7: push    esi
0x973DD8: push    eax
0x973DD9: call    sub_9726E0
0x973DDE: fstp    [esp+58h+arg_4]
0x973DE2: fldz
0x973DE4: add     esp, 14h
0x973DE7: fst     [esp+44h+var_2C]
0x973DEB: fld     [esp+44h+arg_4]
0x973DEF: fld     [esp+44h+arg_0]
0x973DF3: fcomp   st(1)
0x973DF5: fnstsw  ax
0x973DF7: test    ah, 41h
0x973DFA: jnz     short loc_973E1F
0x973DFC: mov     ecx, [esp+44h+arg_8]
0x973E00: fstp    [esp+44h+arg_0]
0x973E04: fld     [esp+44h+var_30]
0x973E08: mov     edx, [esp+44h+arg_C]
0x973E0C: fstp    dword ptr [ecx]
0x973E0E: fld     [esp+44h+var_34]
0x973E12: fstp    dword ptr [edx]
0x973E14: fld     [esp+44h+var_28]
0x973E18: fstp    dword ptr [ebp+0]
0x973E1B: fstp    dword ptr [ebx]
0x973E1D: jmp     short loc_973E23
0x973E1F: fstp    st
0x973E21: fstp    st
0x973E23: mov     eax, [edi+18h]
0x973E26: mov     ecx, [edi+1Ch]
0x973E29: mov     edx, [edi+20h]
0x973E2C: mov     [esp+44h+var_C], eax
0x973E30: lea     eax, [esp+44h+var_34]
0x973E34: push    eax
0x973E35: mov     [esp+48h+var_8], ecx
0x973E39: lea     ecx, [esp+48h+var_30]
0x973E3D: push    ecx
0x973E3E: mov     [esp+4Ch+var_4], edx
0x973E42: lea     edx, [esp+4Ch+var_2C]
0x973E46: push    edx
0x973E47: lea     eax, [esp+50h+var_18]
0x973E4B: push    esi
0x973E4C: push    eax
0x973E4D: call    sub_9726E0
0x973E52: fstp    [esp+58h+arg_4]
0x973E56: fldz
0x973E58: add     esp, 14h
0x973E5B: fst     [esp+44h+var_28]
0x973E5F: fld     [esp+44h+arg_4]
0x973E63: fld     [esp+44h+arg_0]
0x973E67: fcomp   st(1)
0x973E69: fnstsw  ax
0x973E6B: test    ah, 41h
0x973E6E: jnz     short loc_973E93
0x973E70: mov     ecx, [esp+44h+arg_8]
0x973E74: fstp    [esp+44h+arg_0]
0x973E78: fld     [esp+44h+var_30]
0x973E7C: mov     edx, [esp+44h+arg_C]
0x973E80: fstp    dword ptr [ecx]
0x973E82: fld     [esp+44h+var_34]
0x973E86: fstp    dword ptr [edx]
0x973E88: fstp    dword ptr [ebp+0]
0x973E8B: fld     [esp+44h+var_2C]
0x973E8F: fstp    dword ptr [ebx]
0x973E91: jmp     short loc_973E97
0x973E93: fstp    st
0x973E95: fstp    st
0x973E97: fld     dword ptr [edi+18h]
0x973E9A: fadd    dword ptr [edi]
0x973E9C: fstp    [esp+44h+var_24]
0x973EA0: mov     eax, [esp+44h+var_24]
0x973EA4: fld     dword ptr [edi+1Ch]
0x973EA7: mov     [esp+44h+var_18], eax
0x973EAB: fadd    dword ptr [edi+4]
0x973EAE: mov     eax, [edi+0Ch]
0x973EB1: mov     [esp+44h+var_C], eax
0x973EB5: lea     eax, [esp+44h+var_34]
0x973EB9: fstp    [esp+44h+var_20]
0x973EBD: mov     ecx, [esp+44h+var_20]
0x973EC1: fld     dword ptr [edi+20h]
0x973EC4: mov     [esp+44h+var_14], ecx
0x973EC8: fadd    dword ptr [edi+8]
0x973ECB: mov     ecx, [edi+10h]
0x973ECE: push    eax
0x973ECF: mov     [esp+48h+var_8], ecx
0x973ED3: fstp    [esp+48h+var_1C]
0x973ED7: mov     edx, [esp+48h+var_1C]
0x973EDB: mov     [esp+48h+var_10], edx
0x973EDF: mov     edx, [edi+14h]
0x973EE2: lea     ecx, [esp+48h+var_30]
0x973EE6: push    ecx
0x973EE7: mov     [esp+4Ch+var_4], edx
0x973EEB: lea     edx, [esp+4Ch+var_28]
0x973EEF: push    edx
0x973EF0: lea     eax, [esp+50h+var_18]
0x973EF4: push    esi
0x973EF5: push    eax
0x973EF6: call    sub_9726E0
0x973EFB: fstp    [esp+58h+arg_4]
0x973EFF: fld1
0x973F01: add     esp, 14h
0x973F04: fst     [esp+44h+var_2C]
0x973F08: fld     [esp+44h+arg_4]
0x973F0C: fld     [esp+44h+arg_0]
0x973F10: fcomp   st(1)
0x973F12: fnstsw  ax
0x973F14: test    ah, 41h
0x973F17: jnz     short loc_973F3C
0x973F19: mov     ecx, [esp+44h+arg_8]
0x973F1D: fstp    [esp+44h+arg_0]
0x973F21: fld     [esp+44h+var_30]
0x973F25: mov     edx, [esp+44h+arg_C]
0x973F29: fstp    dword ptr [ecx]
0x973F2B: fld     [esp+44h+var_34]
0x973F2F: fstp    dword ptr [edx]
0x973F31: fld     [esp+44h+var_28]
0x973F35: fstp    dword ptr [ebp+0]
0x973F38: fstp    dword ptr [ebx]
0x973F3A: jmp     short loc_973F40
0x973F3C: fstp    st
0x973F3E: fstp    st
0x973F40: fld     dword ptr [edi]
0x973F42: fadd    dword ptr [edi+0Ch]
0x973F45: fstp    [esp+44h+var_24]
0x973F49: mov     eax, [esp+44h+var_24]
0x973F4D: fld     dword ptr [edi+10h]
0x973F50: mov     [esp+44h+var_18], eax
0x973F54: fadd    dword ptr [edi+4]
0x973F57: mov     eax, [edi+18h]
0x973F5A: mov     [esp+44h+var_C], eax
0x973F5E: lea     eax, [esp+44h+var_34]
0x973F62: fstp    [esp+44h+var_20]
0x973F66: mov     ecx, [esp+44h+var_20]
0x973F6A: fld     dword ptr [edi+14h]
0x973F6D: mov     [esp+44h+var_14], ecx
0x973F71: fadd    dword ptr [edi+8]
0x973F74: mov     ecx, [edi+1Ch]
0x973F77: push    eax
0x973F78: mov     [esp+48h+var_8], ecx
0x973F7C: fstp    [esp+48h+var_1C]
0x973F80: mov     edx, [esp+48h+var_1C]
0x973F84: mov     [esp+48h+var_10], edx
0x973F88: mov     edx, [edi+20h]
0x973F8B: lea     ecx, [esp+48h+var_30]
0x973F8F: push    ecx
0x973F90: mov     [esp+4Ch+var_4], edx
0x973F94: lea     edx, [esp+4Ch+var_2C]
0x973F98: push    edx
0x973F99: lea     eax, [esp+50h+var_18]
0x973F9D: push    esi
0x973F9E: push    eax
0x973F9F: call    sub_9726E0
0x973FA4: fstp    [esp+58h+arg_4]
0x973FA8: fld     [esp+58h+arg_4]
0x973FAC: add     esp, 14h
0x973FAF: fld     [esp+44h+arg_0]
0x973FB3: fcom    st(1)
0x973FB5: fnstsw  ax
0x973FB7: test    ah, 41h
0x973FBA: jnz     short loc_973FED
0x973FBC: mov     ecx, [esp+44h+arg_8]
0x973FC0: fstp    st
0x973FC2: mov     edx, [esp+44h+arg_C]
0x973FC6: fstp    [esp+44h+arg_0]
0x973FCA: fld     [esp+44h+var_30]
0x973FCE: pop     edi
0x973FCF: fstp    dword ptr [ecx]
0x973FD1: pop     esi
0x973FD2: fld     [esp+3Ch+var_34]
0x973FD6: fstp    dword ptr [edx]
0x973FD8: fld1
0x973FDA: fstp    dword ptr [ebp+0]
0x973FDD: fld     [esp+3Ch+var_2C]
0x973FE1: pop     ebp
0x973FE2: fstp    dword ptr [ebx]
0x973FE4: fld     [esp+38h+arg_0]
0x973FE8: pop     ebx
0x973FE9: add     esp, 34h
0x973FEC: retn
0x973FED: pop     edi
0x973FEE: fstp    st(1)
0x973FF0: pop     esi
0x973FF1: pop     ebp
0x973FF2: pop     ebx
0x973FF3: add     esp, 34h
0x973FF6: retn
