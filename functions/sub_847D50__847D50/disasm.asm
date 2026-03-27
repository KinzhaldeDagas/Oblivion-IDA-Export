0x847D50: push    0FFFFFFFFh
0x847D52: push    offset SEH_8479E0
0x847D57: mov     eax, large fs:0
0x847D5D: push    eax
0x847D5E: sub     esp, 20h
0x847D61: push    ebx
0x847D62: push    ebp
0x847D63: push    esi
0x847D64: push    edi
0x847D65: mov     eax, ds:0B30AACh
0x847D6A: xor     eax, esp
0x847D6C: push    eax
0x847D6D: lea     eax, [esp+40h+var_C]
0x847D71: mov     large fs:0, eax
0x847D77: mov     [esp+40h+var_2C], ecx
0x847D7B: mov     eax, ds:0B42EB8h
0x847D80: fld1
0x847D82: movzx   ebx, byte ptr [eax+9]
0x847D86: mov     esi, [esp+40h+arg_C]
0x847D8A: mov     eax, [esi+0C8h]
0x847D90: movzx   eax, byte ptr [eax+ebx]
0x847D94: mov     ecx, ds:0B25AD0h
0x847D9A: mov     edx, ds:0B25AD8h
0x847DA0: mov     edi, ds:0B45B74h
0x847DA6: mov     [esp+40h+var_1C], ecx
0x847DAA: mov     ecx, ds:0B25AD4h
0x847DB0: mov     [esp+40h+arg_C], eax
0x847DB4: fstp    [esp+40h+var_1C]
0x847DB8: mov     ebp, [esp+40h+var_1C]
0x847DBC: sub     esp, 10h
0x847DBF: fild    [esp+50h+arg_C]
0x847DC3: mov     eax, esp
0x847DC5: mov     [eax], ebp
0x847DC7: mov     [esp+50h+var_14], edx
0x847DCB: mov     edx, ds:0B25ADCh
0x847DD1: mov     [eax+4], ecx
0x847DD4: fstp    [esp+50h+var_14]
0x847DD8: mov     ecx, [esp+50h+var_14]
0x847DDC: mov     [eax+8], ecx
0x847DDF: push    1Fh
0x847DE1: mov     [esp+54h+var_28], ebx
0x847DE5: mov     [eax+0Ch], edx
0x847DE8: call    sub_7ECAE0
0x847DED: mov     edx, [edi+24h]
0x847DF0: mov     eax, [esi]
0x847DF2: mov     ebp, [edx]
0x847DF4: mov     edx, [eax+88h]
0x847DFA: add     esp, 14h
0x847DFD: push    ebx
0x847DFE: mov     ecx, esi
0x847E00: call    edx
0x847E02: mov     ebx, [ebp+4]
0x847E05: cmp     ebx, eax
0x847E07: mov     [esp+40h+arg_C], eax
0x847E0B: jz      short loc_847E42
0x847E0D: test    ebx, ebx
0x847E0F: jz      short loc_847E31
0x847E11: lea     eax, [ebx+4]
0x847E14: push    eax; lpAddend
0x847E15: call    dword ptr ds:0A2807Ch
0x847E1B: test    eax, eax
0x847E1D: jnz     short loc_847E2D
0x847E1F: test    ebx, ebx
0x847E21: jz      short loc_847E2D
0x847E23: mov     edx, [ebx]
0x847E25: mov     eax, [edx]
0x847E27: push    1
0x847E29: mov     ecx, ebx
0x847E2B: call    eax
0x847E2D: mov     eax, [esp+40h+arg_C]
0x847E31: test    eax, eax
0x847E33: mov     [ebp+4], eax
0x847E36: jz      short loc_847E42
0x847E38: add     eax, 4
0x847E3B: push    eax; lpAddend
0x847E3C: call    dword ptr ds:0A28078h
0x847E42: push    esi
0x847E43: push    ebp
0x847E44: mov     ebp, [esp+48h+var_2C]
0x847E48: mov     ecx, ebp
0x847E4A: call    sub_848FA0
0x847E4F: mov     ecx, [edi+24h]
0x847E52: mov     edx, [esp+40h+var_28]
0x847E56: mov     ebx, [ecx+4]
0x847E59: push    edx
0x847E5A: push    esi
0x847E5B: mov     ecx, ebp
0x847E5D: call    sub_848FD0
0x847E62: mov     ebp, [ebx+4]
0x847E65: cmp     ebp, eax
0x847E67: mov     [esp+40h+arg_C], eax
0x847E6B: jz      short loc_847EA3
0x847E6D: test    ebp, ebp
0x847E6F: jz      short loc_847E92
0x847E71: lea     eax, [ebp+4]
0x847E74: push    eax; lpAddend
0x847E75: call    dword ptr ds:0A2807Ch
0x847E7B: test    eax, eax
0x847E7D: jnz     short loc_847E8E
0x847E7F: test    ebp, ebp
0x847E81: jz      short loc_847E8E
0x847E83: mov     edx, [ebp+0]
0x847E86: mov     eax, [edx]
0x847E88: push    1
0x847E8A: mov     ecx, ebp
0x847E8C: call    eax
0x847E8E: mov     eax, [esp+40h+arg_C]
0x847E92: test    eax, eax
0x847E94: mov     [ebx+4], eax
0x847E97: jz      short loc_847EA3
0x847E99: add     eax, 4
0x847E9C: push    eax; lpAddend
0x847E9D: call    dword ptr ds:0A28078h
0x847EA3: mov     ecx, [esp+40h+var_2C]
0x847EA7: push    esi
0x847EA8: push    ebx
0x847EA9: call    sub_848FA0
0x847EAE: mov     ecx, [edi+24h]
0x847EB1: mov     esi, [ecx+8]
0x847EB4: mov     eax, ds:0B43108h
0x847EB9: mov     ebp, [esi+4]
0x847EBC: add     esi, 4
0x847EBF: cmp     ebp, eax
0x847EC1: mov     ebx, eax
0x847EC3: jz      short loc_847EF6
0x847EC5: test    ebp, ebp
0x847EC7: jz      short loc_847EE6
0x847EC9: lea     edx, [ebp+4]
0x847ECC: push    edx; lpAddend
0x847ECD: call    dword ptr ds:0A2807Ch
0x847ED3: test    eax, eax
0x847ED5: jnz     short loc_847EE6
0x847ED7: test    ebp, ebp
0x847ED9: jz      short loc_847EE6
0x847EDB: mov     eax, [ebp+0]
0x847EDE: mov     edx, [eax]
0x847EE0: push    1
0x847EE2: mov     ecx, ebp
0x847EE4: call    edx
0x847EE6: test    ebx, ebx
0x847EE8: mov     [esi], ebx
0x847EEA: jz      short loc_847EF6
0x847EEC: add     ebx, 4
0x847EEF: push    ebx; lpAddend
0x847EF0: call    dword ptr ds:0A28078h
0x847EF6: mov     eax, [edi+24h]
0x847EF9: mov     ebx, [eax+0Ch]
0x847EFC: mov     eax, ds:0B4310Ch
0x847F01: mov     esi, [ebx+4]
0x847F04: cmp     esi, eax
0x847F06: mov     ebp, eax
0x847F08: jz      short loc_847F3B
0x847F0A: test    esi, esi
0x847F0C: jz      short loc_847F2A
0x847F0E: lea     ecx, [esi+4]
0x847F11: push    ecx; lpAddend
0x847F12: call    dword ptr ds:0A2807Ch
0x847F18: test    eax, eax
0x847F1A: jnz     short loc_847F2A
0x847F1C: test    esi, esi
0x847F1E: jz      short loc_847F2A
0x847F20: mov     edx, [esi]
0x847F22: mov     eax, [edx]
0x847F24: push    1
0x847F26: mov     ecx, esi
0x847F28: call    eax
0x847F2A: test    ebp, ebp
0x847F2C: mov     [ebx+4], ebp
0x847F2F: jz      short loc_847F3B
0x847F31: add     ebp, 4
0x847F34: push    ebp; lpAddend
0x847F35: call    dword ptr ds:0A28078h
0x847F3B: mov     esi, [esp+40h+var_28]
0x847F3F: fldz
0x847F41: cmp     esi, 4
0x847F44: jnz     short loc_847F5F
0x847F46: fld1
0x847F48: fst     [esp+40h+var_20]
0x847F4C: cmp     esi, 2
0x847F4F: fxch    st(1)
0x847F51: fst     [esp+40h+var_24]
0x847F55: jnz     short loc_847F70
0x847F57: fxch    st(1)
0x847F59: fstp    [esp+40h+var_28]
0x847F5D: jmp     short loc_847F7F
0x847F5F: cmp     esi, 3
0x847F62: fst     [esp+40h+var_20]
0x847F66: fld1
0x847F68: jnz     short loc_847F4C
0x847F6A: fst     [esp+40h+var_24]
0x847F6E: fxch    st(1)
0x847F70: cmp     esi, 1
0x847F73: fst     [esp+40h+var_28]
0x847F77: jnz     short loc_847F7D
0x847F79: fstp    st
0x847F7B: jmp     short loc_847F7F
0x847F7D: fstp    st(1)
0x847F7F: fstp    [esp+40h+arg_C]
0x847F83: sub     esp, 10h
0x847F86: fld     [esp+50h+arg_C]
0x847F8A: mov     eax, esp
0x847F8C: fstp    [esp+50h+var_1C]
0x847F90: mov     ecx, [esp+50h+var_1C]
0x847F94: fld     [esp+50h+var_28]
0x847F98: mov     [eax], ecx
0x847F9A: fstp    [esp+50h+var_18]
0x847F9E: mov     edx, [esp+50h+var_18]
0x847FA2: fld     [esp+50h+var_24]
0x847FA6: mov     [eax+4], edx
0x847FA9: fstp    [esp+50h+var_14]
0x847FAD: mov     ecx, [esp+50h+var_14]
0x847FB1: fld     [esp+50h+var_20]
0x847FB5: mov     [eax+8], ecx
0x847FB8: fstp    [esp+50h+var_10]
0x847FBC: mov     edx, [esp+50h+var_10]
0x847FC0: push    2
0x847FC2: mov     [eax+0Ch], edx
0x847FC5: call    sub_7ECAE0
0x847FCA: add     esp, 14h
0x847FCD: cmp     esi, 8
0x847FD0: jnz     short loc_847FDC
0x847FD2: fld1
0x847FD4: fst     [esp+40h+var_28]
0x847FD8: fldz
0x847FDA: jmp     short loc_847FFE
0x847FDC: cmp     esi, 7
0x847FDF: fldz
0x847FE1: fst     [esp+40h+var_28]
0x847FE5: fld1
0x847FE7: jnz     short loc_847FFC
0x847FE9: fst     [esp+40h+var_24]
0x847FED: fxch    st(1)
0x847FEF: cmp     esi, 5
0x847FF2: fst     [esp+40h+var_20]
0x847FF6: jnz     short loc_84800F
0x847FF8: fstp    st
0x847FFA: jmp     short loc_848011
0x847FFC: fxch    st(1)
0x847FFE: cmp     esi, 6
0x848001: fst     [esp+40h+var_24]
0x848005: jnz     short loc_847FEF
0x848007: fxch    st(1)
0x848009: fstp    [esp+40h+var_20]
0x84800D: jmp     short loc_848011
0x84800F: fstp    st(1)
0x848011: fstp    [esp+40h+arg_C]
0x848015: sub     esp, 10h
0x848018: fld     [esp+50h+arg_C]
0x84801C: mov     eax, esp
0x84801E: fstp    [esp+50h+var_1C]
0x848022: mov     ecx, [esp+50h+var_1C]
0x848026: fld     [esp+50h+var_20]
0x84802A: mov     [eax], ecx
0x84802C: fstp    [esp+50h+var_18]
0x848030: mov     edx, [esp+50h+var_18]
0x848034: fld     [esp+50h+var_24]
0x848038: mov     [eax+4], edx
0x84803B: fstp    [esp+50h+var_14]
0x84803F: mov     ecx, [esp+50h+var_14]
0x848043: fld     [esp+50h+var_28]
0x848047: mov     [eax+8], ecx
0x84804A: fstp    [esp+50h+var_10]
0x84804E: mov     edx, [esp+50h+var_10]
0x848052: push    3
0x848054: mov     [eax+0Ch], edx
0x848057: call    sub_7ECAE0
0x84805C: add     esp, 14h
0x84805F: cmp     byte ptr [esp+40h+arg_10], 0
0x848064: jz      short loc_8480A5
0x848066: mov     ebx, 1
0x84806B: add     [edi+60h], ebx
0x84806E: mov     [esp+40h+arg_10], edi
0x848072: mov     esi, [esp+40h+var_2C]
0x848076: mov     ecx, [esi+38h]
0x848079: lea     eax, [esp+40h+arg_10]
0x84807D: push    eax
0x84807E: push    ecx
0x84807F: lea     ecx, [esi+40h]
0x848082: mov     [esp+48h+var_4], 0
0x84808A: call    sub_76CE40
0x84808F: or      eax, 0FFFFFFFFh
0x848092: add     [edi+60h], eax
0x848095: mov     [esp+40h+var_4], eax
0x848099: jnz     short loc_8480A2
0x84809B: mov     ecx, edi
0x84809D: call    sub_7604D0
0x8480A2: add     [esi+38h], ebx
0x8480A5: mov     ecx, dword ptr [esp+40h+var_C]
0x8480A9: mov     large fs:0, ecx
0x8480B0: pop     ecx
0x8480B1: pop     edi
0x8480B2: pop     esi
0x8480B3: pop     ebp
0x8480B4: pop     ebx
0x8480B5: add     esp, 2Ch
0x8480B8: retn    14h
