0x8F1CC0: push    ebp
0x8F1CC1: mov     ebp, esp
0x8F1CC3: and     esp, 0FFFFFFF0h
0x8F1CC6: sub     esp, 14h
0x8F1CC9: mov     eax, [ebp+arg_8]
0x8F1CCC: mov     edx, [ebp+arg_C]
0x8F1CCF: mov     ecx, [eax+14h]
0x8F1CD2: push    ebx
0x8F1CD3: push    esi
0x8F1CD4: mov     esi, [eax+18h]
0x8F1CD7: mov     eax, [edx]
0x8F1CD9: push    edi
0x8F1CDA: mov     edi, [edx+4]
0x8F1CDD: mov     edx, offset xmmword_B2F090
0x8F1CE2: mov     [esp+20h+var_C], 3
0x8F1CEA: lea     ebx, [ebx+0]
0x8F1CF0: movaps  xmm0, xmmword ptr [edx]
0x8F1CF3: mov     ebx, [ebp+arg_0]
0x8F1CF6: movaps  xmmword ptr [eax], xmm0
0x8F1CF9: movaps  xmm0, xmmword ptr [ebx]
0x8F1CFC: movaps  xmm1, xmmword ptr [ecx+40h]
0x8F1D00: mov     ebx, [ebp+arg_4]
0x8F1D03: movaps  xmm2, xmmword ptr [esi+40h]
0x8F1D07: subps   xmm0, xmm1
0x8F1D0A: movaps  xmm1, xmmword ptr [ebx]
0x8F1D0D: mov     bl, [ecx+0Ch]
0x8F1D10: test    bl, bl
0x8F1D12: subps   xmm1, xmm2
0x8F1D15: movaps  xmm2, xmmword ptr [edx]
0x8F1D18: movaps  xmm4, xmm0
0x8F1D1B: movaps  xmm3, xmm2
0x8F1D1E: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8F1D22: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F1D26: mulps   xmm4, xmm3
0x8F1D29: movaps  xmm3, xmm2
0x8F1D2C: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8F1D30: movaps  xmm2, xmm0
0x8F1D33: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F1D37: movaps  xmm0, xmm2
0x8F1D3A: mulps   xmm0, xmm3
0x8F1D3D: subps   xmm0, xmm4
0x8F1D40: jnz     short loc_8F1D72
0x8F1D42: movaps  xmm3, xmmword ptr [ecx+70h]
0x8F1D46: movaps  xmm4, xmmword ptr [ecx+60h]
0x8F1D4A: movaps  xmm2, xmm0
0x8F1D4D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1D51: mulps   xmm3, xmm2
0x8F1D54: movaps  xmm2, xmm0
0x8F1D57: shufps  xmm2, xmm0, 55h ; 'U'
0x8F1D5B: mulps   xmm4, xmm2
0x8F1D5E: movaps  xmm2, xmm0
0x8F1D61: shufps  xmm2, xmm0, 0
0x8F1D65: movaps  xmm0, xmmword ptr [ecx+50h]
0x8F1D69: mulps   xmm0, xmm2
0x8F1D6C: addps   xmm0, xmm4
0x8F1D6F: addps   xmm0, xmm3
0x8F1D72: movaps  xmmword ptr [eax+10h], xmm0
0x8F1D76: movaps  xmm0, xmmword ptr [edx]
0x8F1D79: mov     bl, [esi+0Ch]
0x8F1D7C: test    bl, bl
0x8F1D7E: movaps  xmm3, xmm0
0x8F1D81: movaps  xmm2, xmm1
0x8F1D84: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8F1D88: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F1D8C: mulps   xmm3, xmm2
0x8F1D8F: movaps  xmm2, xmm1
0x8F1D92: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8F1D96: movaps  xmm1, xmm0
0x8F1D99: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F1D9D: movaps  xmm0, xmm1
0x8F1DA0: mulps   xmm0, xmm2
0x8F1DA3: subps   xmm0, xmm3
0x8F1DA6: jnz     short loc_8F1DD8
0x8F1DA8: movaps  xmm2, xmmword ptr [esi+70h]
0x8F1DAC: movaps  xmm3, xmmword ptr [esi+60h]
0x8F1DB0: movaps  xmm1, xmm0
0x8F1DB3: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1DB7: mulps   xmm2, xmm1
0x8F1DBA: movaps  xmm1, xmm0
0x8F1DBD: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1DC1: mulps   xmm3, xmm1
0x8F1DC4: movaps  xmm1, xmm0
0x8F1DC7: shufps  xmm1, xmm0, 0
0x8F1DCB: movaps  xmm0, xmmword ptr [esi+50h]
0x8F1DCF: mulps   xmm0, xmm1
0x8F1DD2: addps   xmm0, xmm3
0x8F1DD5: addps   xmm0, xmm2
0x8F1DD8: movaps  xmm1, xmmword ptr [eax+10h]
0x8F1DDC: movaps  xmmword ptr [eax+20h], xmm0
0x8F1DE0: fld     dword ptr [esi+3Ch]
0x8F1DE3: movaps  xmm0, xmmword ptr [eax+20h]
0x8F1DE7: fadd    dword ptr [ecx+3Ch]
0x8F1DEA: movaps  xmm2, xmmword ptr [esi+30h]
0x8F1DEE: movaps  xmm3, xmm0
0x8F1DF1: fadd    dword ptr ds:0A9B1ECh
0x8F1DF7: mulps   xmm3, xmm0
0x8F1DFA: movaps  xmm0, xmmword ptr [ecx+30h]
0x8F1DFE: mulps   xmm3, xmm2
0x8F1E01: movaps  xmm2, xmm1
0x8F1E04: mulps   xmm2, xmm1
0x8F1E07: movaps  xmm1, xmm2
0x8F1E0A: mulps   xmm1, xmm0
0x8F1E0D: movaps  xmm0, xmm1
0x8F1E10: addps   xmm0, xmm3
0x8F1E13: movaps  xmm1, xmm0
0x8F1E16: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1E1A: addss   xmm1, xmm0
0x8F1E1E: movaps  xmm2, xmm0
0x8F1E21: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1E25: addss   xmm2, xmm1
0x8F1E29: lea     ebx, [esp+20h+var_8]
0x8F1E2D: movss   dword ptr [ebx], xmm2
0x8F1E31: fadd    [esp+20h+var_8]
0x8F1E35: mov     ebx, [ebp+arg_0]
0x8F1E38: add     edi, 4
0x8F1E3B: fst     dword ptr [eax+2Ch]
0x8F1E3E: add     eax, 30h ; '0'
0x8F1E41: fld     dword ptr ds:0A2F948h
0x8F1E47: add     edx, 10h
0x8F1E4A: fdiv    st, st(1)
0x8F1E4C: fstp    dword ptr [eax-14h]
0x8F1E4F: movaps  xmm0, xmmword ptr [ebx]
0x8F1E52: mov     ebx, [ebp+arg_4]
0x8F1E55: movaps  xmm2, xmmword ptr [ebx]
0x8F1E58: fstp    st
0x8F1E5A: movaps  xmm1, xmmword ptr [edx-10h]
0x8F1E5E: subps   xmm2, xmm0
0x8F1E61: movaps  xmm0, xmm2
0x8F1E64: mulps   xmm0, xmm1
0x8F1E67: movaps  xmm1, xmm0
0x8F1E6A: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1E6E: movaps  xmm2, xmm0
0x8F1E71: lea     ebx, [esp+20h+var_4]
0x8F1E75: addss   xmm1, xmm0
0x8F1E79: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1E7D: addss   xmm2, xmm1
0x8F1E81: movss   dword ptr [ebx], xmm2
0x8F1E85: fld     [esp+20h+var_4]
0x8F1E89: mov     ebx, [ebp+arg_8]
0x8F1E8C: fmul    dword ptr [ebx+4]
0x8F1E8F: mov     ebx, [esp+20h+var_C]
0x8F1E93: dec     ebx
0x8F1E94: mov     [esp+20h+var_C], ebx
0x8F1E98: fstp    dword ptr [eax-24h]
0x8F1E9B: mov     dword ptr [edi-4], 3040Dh
0x8F1EA2: jnz     loc_8F1CF0
0x8F1EA8: mov     ecx, [ebp+arg_C]
0x8F1EAB: mov     [ecx+4], edi
0x8F1EAE: pop     edi
0x8F1EAF: pop     esi
0x8F1EB0: mov     [ecx], eax
0x8F1EB2: pop     ebx
0x8F1EB3: mov     esp, ebp
0x8F1EB5: pop     ebp
0x8F1EB6: retn
