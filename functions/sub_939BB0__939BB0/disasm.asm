0x939BB0: push    ebp
0x939BB1: mov     ebp, esp
0x939BB3: and     esp, 0FFFFFFF0h
0x939BB6: sub     esp, 0F4h
0x939BBC: mov     ecx, [ebp+arg_8]
0x939BBF: push    ebx
0x939BC0: mov     ebx, [ebp+arg_0]
0x939BC3: movzx   eax, byte ptr [ebx+2]
0x939BC7: cmp     ecx, eax
0x939BC9: push    esi
0x939BCA: mov     edx, eax
0x939BCC: push    edi
0x939BCD: mov     [esp+100h+var_6C], edx
0x939BD4: mov     [esp+100h+var_F4], ecx
0x939BD8: jge     loc_93A5A6
0x939BDE: mov     esi, [ebp+arg_4]
0x939BE1: lea     edi, [ebx+ecx*8+4]
0x939BE5: mov     eax, [ebp+arg_C]
0x939BE8: mov     ecx, [eax]
0x939BEA: movzx   edx, byte ptr [edi]
0x939BED: movzx   eax, byte ptr [edi+1]
0x939BF1: lea     eax, [eax+edx*4]
0x939BF4: cmp     eax, 0Dh; switch 14 cases
0x939BF7: mov     [esp+100h+var_58], ecx
0x939BFE: ja      def_939C0B; jumptable 00939C0B default case, cases 0-4,8,11,12
0x939C04: movzx   ecx, ds:byte_93A604[eax]
0x939C0B: jmp     ds:jpt_939C0B[ecx*4]; switch jump
0x939C12: movzx   eax, byte ptr [edi+4]; jumptable 00939C0B case 5
0x939C16: movzx   edx, byte ptr [edi+5]
0x939C1A: movaps  xmm2, xmmword ptr [eax+esi]
0x939C1E: movaps  xmm0, xmmword ptr [edx+esi]
0x939C22: add     eax, esi
0x939C24: movaps  xmm1, xmm2
0x939C27: subps   xmm1, xmm0
0x939C2A: movaps  xmm0, xmm1
0x939C2D: mulps   xmm0, xmm1
0x939C30: movaps  xmm3, xmm0
0x939C33: shufps  xmm3, xmm0, 55h ; 'U'
0x939C37: movaps  xmm4, xmm0
0x939C3A: lea     eax, [esp+100h+var_50]
0x939C41: addss   xmm3, xmm0
0x939C45: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x939C49: addss   xmm4, xmm3
0x939C4D: movss   dword ptr [eax], xmm4
0x939C51: fld     [esp+100h+var_50]
0x939C58: fcomp   dword ptr [esi+11Ch]
0x939C5E: fnstsw  ax
0x939C60: test    ah, 41h
0x939C63: jnz     short loc_939C6F
0x939C65: mov     eax, 1
0x939C6A: jmp     loc_93A4A7
0x939C6F: movaps  xmm0, xmmword ptr [esi+100h]
0x939C76: movaps  [esp+100h+var_B0], xmm1
0x939C7B: movaps  [esp+100h+var_A0], xmm0
0x939C80: movaps  [esp+100h+var_C0], xmm2
0x939C85: xor     eax, eax
0x939C87: jmp     loc_93A4A7
0x939C8C: movzx   edx, byte ptr [edi+6]; jumptable 00939C0B case 6
0x939C90: movzx   eax, byte ptr [edi+4]
0x939C94: movzx   ecx, byte ptr [edi+5]
0x939C98: movaps  xmm3, xmmword ptr [eax+esi]
0x939C9C: movaps  xmm0, xmmword ptr [esi+100h]
0x939CA3: movaps  xmm1, xmmword ptr [edx+esi]
0x939CA7: movaps  xmm6, xmmword ptr [ecx+esi]
0x939CAB: movaps  [esp+100h+var_D0], xmm1
0x939CB0: add     eax, esi
0x939CB2: add     ecx, esi
0x939CB4: add     edx, esi
0x939CB6: movaps  [esp+100h+var_A0], xmm0
0x939CBB: movaps  xmm0, xmm1
0x939CBE: subps   xmm1, xmm3
0x939CC1: subps   xmm0, xmm6
0x939CC4: movaps  xmm2, xmm1
0x939CC7: shufps  xmm2, xmm1, 0C9h ; 'É'
0x939CCB: movaps  [esp+100h+var_C0], xmm3
0x939CD0: movaps  xmm4, xmm0
0x939CD3: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x939CD7: mulps   xmm4, xmm2
0x939CDA: movaps  xmm2, xmm1
0x939CDD: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x939CE1: subps   xmm3, xmm6
0x939CE4: mulps   xmm1, xmm0
0x939CE7: movaps  xmm5, xmm0
0x939CEA: shufps  xmm5, xmm0, 0C9h ; 'É'
0x939CEE: mulps   xmm5, xmm2
0x939CF1: movaps  xmm2, xmm5
0x939CF4: subps   xmm2, xmm4
0x939CF7: movaps  xmm4, xmm3
0x939CFA: mulps   xmm2, xmm2
0x939CFD: movaps  xmm3, xmm1
0x939D00: movaps  xmm7, xmm2
0x939D03: movaps  xmm5, xmm2
0x939D06: shufps  xmm5, xmm2, 44h ; 'D'
0x939D0A: shufps  xmm7, xmm2, 0EEh ; 'î'
0x939D0E: mulps   xmm4, xmm0
0x939D11: shufps  xmm1, xmm4, 0EEh ; 'î'
0x939D15: shufps  xmm3, xmm4, 44h ; 'D'
0x939D19: shufps  xmm1, xmm7, 88h ; 'ˆ'
0x939D1D: movaps  xmm2, xmm1
0x939D20: movaps  xmm1, xmm3
0x939D23: shufps  xmm3, xmm5, 88h ; 'ˆ'
0x939D27: shufps  xmm1, xmm5, 0DDh ; 'Ý'
0x939D2B: addps   xmm3, xmm1
0x939D2E: movaps  xmm1, xmm3
0x939D31: mulps   xmm0, xmm0
0x939D34: addps   xmm1, xmm2
0x939D37: movaps  xmm2, xmm0
0x939D3A: shufps  xmm2, xmm0, 55h ; 'U'
0x939D3E: movaps  xmm3, xmm0
0x939D41: addss   xmm2, xmm0
0x939D45: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x939D49: lea     ecx, [esp+100h+var_54]
0x939D50: addss   xmm3, xmm2
0x939D54: movss   dword ptr [ecx], xmm3
0x939D58: fld     [esp+100h+var_54]
0x939D5F: fmul    dword ptr [esi+11Ch]
0x939D65: movaps  [esp+100h+var_10], xmm1
0x939D6D: fcomp   dword ptr [esp+100h+var_10+0Ch]
0x939D74: fnstsw  ax
0x939D76: test    ah, 5
0x939D79: jnp     loc_939C65
0x939D7F: movmskps edx, xmm1
0x939D82: test    dl, 3
0x939D85: jnz     loc_939C65
0x939D8B: movaps  xmm0, xmm1
0x939D8E: shufps  xmm0, xmm1, 55h ; 'U'
0x939D92: movaps  xmm2, xmm1
0x939D95: addss   xmm2, xmm0
0x939D99: divss   xmm1, xmm2
0x939D9D: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x939DA4: movaps  xmm0, xmm1
0x939DA7: shufps  xmm0, xmm0, 0
0x939DAB: subps   xmm2, xmm0
0x939DAE: movaps  xmm1, xmm0
0x939DB1: mulps   xmm1, [esp+100h+var_D0]
0x939DB6: movaps  xmm0, [esp+100h+var_C0]
0x939DBB: mulps   xmm2, xmm6
0x939DBE: addps   xmm2, xmm1
0x939DC1: subps   xmm0, xmm2
0x939DC4: movaps  [esp+100h+var_B0], xmm0
0x939DC9: xor     eax, eax
0x939DCB: jmp     loc_93A4A7
0x939DD0: movzx   eax, byte ptr [edi+4]; jumptable 00939C0B case 7
0x939DD4: movzx   ecx, byte ptr [edi+5]
0x939DD8: movzx   edx, byte ptr [edi+6]
0x939DDC: movzx   ebx, byte ptr [edi+7]
0x939DE0: movaps  xmm5, xmmword ptr [ebx+esi]
0x939DE4: movaps  xmm3, xmmword ptr [ecx+esi]
0x939DE8: movaps  xmm2, xmmword ptr [edx+esi]
0x939DEC: movaps  xmm4, xmmword ptr [eax+esi]
0x939DF0: movaps  xmm1, xmm3
0x939DF3: subps   xmm1, xmm5
0x939DF6: add     eax, esi
0x939DF8: add     ecx, esi
0x939DFA: add     edx, esi
0x939DFC: movaps  xmm0, xmm5
0x939DFF: subps   xmm0, xmm2
0x939E02: movaps  xmm6, xmm0
0x939E05: shufps  xmm6, xmm0, 0C9h ; 'É'
0x939E09: add     ebx, esi
0x939E0B: movaps  xmm7, xmm1
0x939E0E: shufps  xmm7, xmm1, 0D2h ; 'Ò'
0x939E12: movaps  [esp+100h+var_C0], xmm4
0x939E17: subps   xmm4, xmm3
0x939E1A: movaps  [esp+100h+var_D0], xmm2
0x939E1F: subps   xmm2, xmm3
0x939E22: movaps  xmm3, xmm0
0x939E25: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x939E29: movaps  [esp+100h+var_E0], xmm3
0x939E2E: movaps  xmm0, xmm6
0x939E31: mulps   xmm0, xmm7
0x939E34: movaps  [esp+100h+var_40], xmm5
0x939E3C: movaps  xmm5, xmm1
0x939E3F: shufps  xmm5, xmm1, 0C9h ; 'É'
0x939E43: mulps   xmm3, xmm5
0x939E46: movaps  xmm1, xmm0
0x939E49: subps   xmm1, xmm3
0x939E4C: movaps  xmm0, xmm1
0x939E4F: mulps   xmm0, xmm1
0x939E52: movaps  xmm3, xmm0
0x939E55: shufps  xmm3, xmm0, 55h ; 'U'
0x939E59: addss   xmm3, xmm0
0x939E5D: movaps  [esp+100h+var_F0], xmm7
0x939E62: movaps  xmm7, xmm0
0x939E65: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x939E69: movaps  xmm0, xmm7
0x939E6C: addss   xmm0, xmm3
0x939E70: movaps  [esp+100h+var_80], xmm0
0x939E78: rsqrtss xmm3, xmm0
0x939E7C: movss   dword ptr [esp+100h+var_80], xmm3
0x939E85: movaps  xmm3, [esp+100h+var_80]
0x939E8D: mulss   xmm0, xmm3
0x939E91: mulss   xmm0, xmm3
0x939E95: mov     [esp+100h+var_4C], 40400000h
0x939EA0: movss   xmm7, [esp+100h+var_4C]
0x939EA9: subss   xmm7, xmm0
0x939EAD: mov     [esp+100h+var_44], 3F000000h
0x939EB8: movss   xmm0, [esp+100h+var_44]
0x939EC1: mulss   xmm0, xmm3
0x939EC5: mulss   xmm0, xmm7
0x939EC9: movaps  xmm3, xmm0
0x939ECC: shufps  xmm3, xmm0, 0
0x939ED0: movaps  xmm0, xmm3
0x939ED3: movaps  xmm3, [esp+100h+var_C0]
0x939ED8: mulps   xmm0, xmm1
0x939EDB: movaps  xmm1, xmm3
0x939EDE: subps   xmm1, [esp+100h+var_D0]
0x939EE3: subps   xmm3, [esp+100h+var_40]
0x939EEB: movaps  xmm7, xmm1
0x939EEE: shufps  xmm7, xmm1, 0D2h ; 'Ò'
0x939EF2: mulps   xmm7, xmm6
0x939EF5: movaps  xmm6, xmm1
0x939EF8: shufps  xmm6, xmm1, 0C9h ; 'É'
0x939EFC: mulps   xmm6, [esp+100h+var_E0]
0x939F01: movaps  xmm1, xmm6
0x939F04: movaps  xmm6, xmm3
0x939F07: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x939F0B: mulps   xmm6, xmm5
0x939F0E: subps   xmm1, xmm7
0x939F11: movaps  xmm5, xmm3
0x939F14: movaps  [esp+100h+var_B0], xmm4
0x939F19: mulps   xmm1, xmm0
0x939F1C: shufps  xmm5, xmm3, 0C9h ; 'É'
0x939F20: mulps   xmm5, [esp+100h+var_F0]
0x939F25: movaps  xmm3, xmm2
0x939F28: shufps  xmm3, xmm2, 0C9h ; 'É'
0x939F2C: subps   xmm5, xmm6
0x939F2F: movaps  xmm6, xmm4
0x939F32: shufps  xmm6, xmm4, 0D2h ; 'Ò'
0x939F36: mulps   xmm6, xmm3
0x939F39: movaps  xmm3, xmm2
0x939F3C: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x939F40: movaps  xmm2, xmm4
0x939F43: shufps  xmm2, xmm4, 0C9h ; 'É'
0x939F47: movaps  xmm4, xmmword ptr [esi+100h]
0x939F4E: mulps   xmm2, xmm3
0x939F51: subps   xmm2, xmm6
0x939F54: mulps   xmm2, xmm0
0x939F57: movaps  xmm6, xmm2
0x939F5A: movaps  xmm3, xmm1
0x939F5D: mulps   xmm5, xmm0
0x939F60: mulps   xmm4, xmm0
0x939F63: shufps  xmm3, xmm5, 44h ; 'D'
0x939F67: shufps  xmm2, xmm4, 0EEh ; 'î'
0x939F6B: shufps  xmm1, xmm5, 0EEh ; 'î'
0x939F6F: shufps  xmm1, xmm2, 88h ; 'ˆ'
0x939F73: movaps  xmm2, xmm3
0x939F76: shufps  xmm6, xmm4, 44h ; 'D'
0x939F7A: shufps  xmm3, xmm6, 88h ; 'ˆ'
0x939F7E: shufps  xmm2, xmm6, 0DDh ; 'Ý'
0x939F82: addps   xmm3, xmm2
0x939F85: addps   xmm3, xmm1
0x939F88: movmskps eax, xmm3
0x939F8B: jmp     loc_93A487
0x939F90: movzx   ecx, byte ptr [edi+5]; jumptable 00939C0B case 9
0x939F94: movzx   eax, byte ptr [edi+4]
0x939F98: movzx   edx, byte ptr [edi+6]
0x939F9C: movaps  xmm0, xmmword ptr [esi+100h]
0x939FA3: movaps  xmm6, xmmword ptr [eax+esi]
0x939FA7: movaps  xmm1, xmmword ptr [ecx+esi]
0x939FAB: movaps  xmm3, xmmword ptr [edx+esi]
0x939FAF: movaps  [esp+100h+var_F0], xmm1
0x939FB4: add     eax, esi
0x939FB6: add     ecx, esi
0x939FB8: add     edx, esi
0x939FBA: movaps  [esp+100h+var_A0], xmm0
0x939FBF: movaps  xmm0, xmm1
0x939FC2: subps   xmm1, xmm3
0x939FC5: subps   xmm0, xmm6
0x939FC8: movaps  xmm2, xmm1
0x939FCB: shufps  xmm2, xmm1, 0C9h ; 'É'
0x939FCF: movaps  [esp+100h+var_E0], xmm3
0x939FD4: movaps  xmm4, xmm0
0x939FD7: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x939FDB: mulps   xmm4, xmm2
0x939FDE: movaps  xmm2, xmm1
0x939FE1: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x939FE5: subps   xmm3, xmm6
0x939FE8: mulps   xmm1, xmm0
0x939FEB: movaps  xmm5, xmm0
0x939FEE: shufps  xmm5, xmm0, 0C9h ; 'É'
0x939FF2: mulps   xmm5, xmm2
0x939FF5: movaps  xmm2, xmm5
0x939FF8: subps   xmm2, xmm4
0x939FFB: movaps  xmm4, xmm3
0x939FFE: mulps   xmm2, xmm2
0x93A001: movaps  xmm3, xmm1
0x93A004: movaps  xmm7, xmm2
0x93A007: movaps  xmm5, xmm2
0x93A00A: shufps  xmm5, xmm2, 44h ; 'D'
0x93A00E: shufps  xmm7, xmm2, 0EEh ; 'î'
0x93A012: mulps   xmm4, xmm0
0x93A015: shufps  xmm1, xmm4, 0EEh ; 'î'
0x93A019: shufps  xmm3, xmm4, 44h ; 'D'
0x93A01D: shufps  xmm1, xmm7, 88h ; 'ˆ'
0x93A021: movaps  xmm2, xmm1
0x93A024: movaps  xmm1, xmm3
0x93A027: shufps  xmm3, xmm5, 88h ; 'ˆ'
0x93A02B: shufps  xmm1, xmm5, 0DDh ; 'Ý'
0x93A02F: addps   xmm3, xmm1
0x93A032: movaps  xmm1, xmm3
0x93A035: mulps   xmm0, xmm0
0x93A038: addps   xmm1, xmm2
0x93A03B: movaps  xmm2, xmm0
0x93A03E: shufps  xmm2, xmm0, 55h ; 'U'
0x93A042: movaps  xmm3, xmm0
0x93A045: lea     eax, [esp+100h+var_68]
0x93A04C: addss   xmm2, xmm0
0x93A050: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93A054: addss   xmm3, xmm2
0x93A058: movss   dword ptr [eax], xmm3
0x93A05C: fld     [esp+100h+var_68]
0x93A063: fmul    dword ptr [esi+11Ch]
0x93A069: movaps  [esp+100h+var_20], xmm1
0x93A071: fcomp   dword ptr [esp+100h+var_20+0Ch]
0x93A078: fnstsw  ax
0x93A07A: test    ah, 5
0x93A07D: jnp     loc_939C65
0x93A083: movmskps ecx, xmm1
0x93A086: test    cl, 3
0x93A089: jnz     loc_939C65
0x93A08F: movaps  xmm0, xmm1
0x93A092: shufps  xmm0, xmm1, 55h ; 'U'
0x93A096: movaps  xmm2, xmm1
0x93A099: addss   xmm2, xmm0
0x93A09D: divss   xmm1, xmm2
0x93A0A1: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x93A0A8: movaps  xmm0, xmm1
0x93A0AB: shufps  xmm0, xmm0, 0
0x93A0AF: movaps  xmm1, xmm0
0x93A0B2: subps   xmm2, xmm0
0x93A0B5: movaps  xmm0, xmm2
0x93A0B8: mulps   xmm0, [esp+100h+var_F0]
0x93A0BD: mulps   xmm1, xmm6
0x93A0C0: addps   xmm0, xmm1
0x93A0C3: movaps  [esp+100h+var_C0], xmm0
0x93A0C8: subps   xmm0, [esp+100h+var_E0]
0x93A0CD: movaps  [esp+100h+var_B0], xmm0
0x93A0D2: xor     eax, eax
0x93A0D4: jmp     loc_93A4A7
0x93A0D9: movzx   ecx, byte ptr [edi+5]; jumptable 00939C0B case 10
0x93A0DD: movzx   eax, byte ptr [edi+4]
0x93A0E1: movzx   ebx, byte ptr [edi+7]
0x93A0E5: movzx   edx, byte ptr [edi+6]
0x93A0E9: movaps  xmm2, xmmword ptr [eax+esi]
0x93A0ED: movaps  xmm3, xmmword ptr [ecx+esi]
0x93A0F1: movaps  xmm5, xmmword ptr [ebx+esi]
0x93A0F5: movaps  xmm4, xmmword ptr [edx+esi]
0x93A0F9: movaps  xmm1, xmm5
0x93A0FC: subps   xmm1, xmm4
0x93A0FF: add     eax, esi
0x93A101: add     ecx, esi
0x93A103: movaps  [esp+100h+var_40], xmm5
0x93A10B: add     ebx, esi
0x93A10D: movaps  [esp+100h+var_80], xmm4
0x93A115: add     edx, esi
0x93A117: movaps  [esp+100h+var_D0], xmm2
0x93A11C: movaps  xmm0, xmm3
0x93A11F: subps   xmm0, xmm2
0x93A122: subps   xmm2, xmm4
0x93A125: movaps  xmm4, xmm1
0x93A128: shufps  xmm4, xmm1, 0C9h ; 'É'
0x93A12C: movaps  [esp+100h+var_E0], xmm3
0x93A131: subps   xmm3, xmm5
0x93A134: movaps  xmm5, xmm0
0x93A137: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x93A13B: shufps  xmm0, xmm0, 0C9h ; 'É'
0x93A13F: movaps  xmm6, xmm5
0x93A142: mulps   xmm6, xmm4
0x93A145: shufps  xmm1, xmm1, 0D2h ; 'Ò'
0x93A149: movaps  xmm7, xmm6
0x93A14C: movaps  xmm6, xmm0
0x93A14F: mulps   xmm6, xmm1
0x93A152: subps   xmm6, xmm7
0x93A155: movaps  xmm7, xmm6
0x93A158: shufps  xmm7, xmm6, 0C9h ; 'É'
0x93A15C: movaps  [esp+100h+var_F0], xmm7
0x93A161: movaps  xmm7, [esp+100h+var_F0]
0x93A166: mulps   xmm1, xmm7
0x93A169: shufps  xmm6, xmm6, 0D2h ; 'Ò'
0x93A16D: mulps   xmm0, xmm6
0x93A170: mulps   xmm4, xmm6
0x93A173: subps   xmm4, xmm1
0x93A176: movaps  xmm1, xmmword ptr [esi+100h]
0x93A17D: mulps   xmm5, xmm7
0x93A180: subps   xmm0, xmm5
0x93A183: movaps  [esp+100h+var_A0], xmm1
0x93A188: movaps  xmm1, xmm2
0x93A18B: mulps   xmm2, xmm0
0x93A18E: mulps   xmm1, xmm4
0x93A191: movaps  xmm5, xmm3
0x93A194: mulps   xmm3, xmm0
0x93A197: mulps   xmm5, xmm4
0x93A19A: movaps  xmm0, xmm1
0x93A19D: shufps  xmm0, xmm2, 44h ; 'D'
0x93A1A1: shufps  xmm1, xmm2, 0EEh ; 'î'
0x93A1A5: movaps  xmm2, xmm0
0x93A1A8: movaps  xmm4, xmm5
0x93A1AB: shufps  xmm4, xmm3, 44h ; 'D'
0x93A1AF: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x93A1B3: shufps  xmm5, xmm3, 0EEh ; 'î'
0x93A1B7: shufps  xmm2, xmm4, 0DDh ; 'Ý'
0x93A1BB: shufps  xmm1, xmm5, 88h ; 'ˆ'
0x93A1BF: addps   xmm0, xmm2
0x93A1C2: addps   xmm0, xmm1
0x93A1C5: movmskps eax, xmm0
0x93A1C8: cmp     eax, 3
0x93A1CB: jz      short loc_93A1DC
0x93A1CD: cmp     eax, 0Ch
0x93A1D0: jz      short loc_93A1DC
0x93A1D2: mov     eax, 1
0x93A1D7: jmp     loc_93A4A4
0x93A1DC: movaps  xmm1, xmm0
0x93A1DF: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93A1E3: movaps  xmm2, xmm0
0x93A1E6: subss   xmm2, xmm1
0x93A1EA: movaps  xmm1, xmm0
0x93A1ED: divss   xmm1, xmm2
0x93A1F1: shufps  xmm1, xmm1, 0
0x93A1F5: movaps  xmm2, xmm1
0x93A1F8: mulps   xmm2, [esp+100h+var_E0]
0x93A1FD: movaps  xmm3, xmm2
0x93A200: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x93A207: movaps  xmm4, xmm2
0x93A20A: subps   xmm4, xmm1
0x93A20D: movaps  xmm1, xmm4
0x93A210: mulps   xmm1, [esp+100h+var_D0]
0x93A215: addps   xmm1, xmm3
0x93A218: movaps  xmm3, xmm0
0x93A21B: shufps  xmm3, xmm0, 0FFh
0x93A21F: shufps  xmm0, xmm0, 55h ; 'U'
0x93A223: movaps  xmm4, xmm0
0x93A226: subss   xmm4, xmm3
0x93A22A: divss   xmm0, xmm4
0x93A22E: shufps  xmm0, xmm0, 0
0x93A232: subps   xmm2, xmm0
0x93A235: mulps   xmm2, [esp+100h+var_80]
0x93A23D: movaps  xmm3, xmm0
0x93A240: mulps   xmm3, [esp+100h+var_40]
0x93A248: movaps  [esp+100h+var_C0], xmm1
0x93A24D: addps   xmm2, xmm3
0x93A250: subps   xmm1, xmm2
0x93A253: movaps  [esp+100h+var_B0], xmm1
0x93A258: xor     eax, eax
0x93A25A: jmp     loc_93A4A4
0x93A25F: movzx   eax, byte ptr [edi+4]; jumptable 00939C0B case 13
0x93A263: movzx   ecx, byte ptr [edi+5]
0x93A267: movzx   edx, byte ptr [edi+6]
0x93A26B: movzx   ebx, byte ptr [edi+7]
0x93A26F: movaps  xmm7, xmmword ptr [eax+esi]
0x93A273: movaps  xmm1, xmmword ptr [ebx+esi]
0x93A277: movaps  xmm2, xmmword ptr [edx+esi]
0x93A27B: movaps  xmm5, xmmword ptr [ecx+esi]
0x93A27F: movaps  [esp+100h+var_F0], xmm2
0x93A284: add     eax, esi
0x93A286: add     ecx, esi
0x93A288: add     edx, esi
0x93A28A: movaps  xmm0, xmm7
0x93A28D: subps   xmm0, xmm1
0x93A290: movaps  [esp+100h+var_B0], xmm0
0x93A295: movaps  xmm0, xmm2
0x93A298: subps   xmm0, xmm5
0x93A29B: add     ebx, esi
0x93A29D: movaps  xmm3, xmm7
0x93A2A0: subps   xmm3, xmm2
0x93A2A3: movaps  xmm2, xmm0
0x93A2A6: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x93A2AA: movaps  [esp+100h+var_40], xmm2
0x93A2B2: movaps  xmm2, xmm3
0x93A2B5: shufps  xmm2, xmm3, 0D2h ; 'Ò'
0x93A2B9: movaps  xmm6, xmm3
0x93A2BC: shufps  xmm6, xmm3, 0C9h ; 'É'
0x93A2C0: movaps  [esp+100h+var_D0], xmm2
0x93A2C5: movaps  xmm2, xmm0
0x93A2C8: shufps  xmm2, xmm0, 0C9h ; 'É'
0x93A2CC: movaps  xmm0, [esp+100h+var_40]
0x93A2D4: mulps   xmm0, xmm6
0x93A2D7: movaps  [esp+100h+var_E0], xmm2
0x93A2DC: mulps   xmm2, [esp+100h+var_D0]
0x93A2E1: subps   xmm2, xmm0
0x93A2E4: movaps  xmm0, xmm2
0x93A2E7: mulps   xmm0, xmm2
0x93A2EA: movaps  xmm3, xmm0
0x93A2ED: shufps  xmm3, xmm0, 55h ; 'U'
0x93A2F1: addss   xmm3, xmm0
0x93A2F5: movaps  [esp+100h+var_30], xmm6
0x93A2FD: movaps  xmm6, xmm0
0x93A300: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x93A304: movaps  xmm0, xmm6
0x93A307: addss   xmm0, xmm3
0x93A30B: movaps  [esp+100h+var_80], xmm0
0x93A313: rsqrtss xmm3, xmm0
0x93A317: movss   dword ptr [esp+100h+var_80], xmm3
0x93A320: movaps  xmm3, [esp+100h+var_80]
0x93A328: mulss   xmm0, xmm3
0x93A32C: mulss   xmm0, xmm3
0x93A330: mov     [esp+100h+var_64], 40400000h
0x93A33B: movss   xmm6, [esp+100h+var_64]
0x93A344: subss   xmm6, xmm0
0x93A348: mov     [esp+100h+var_5C], 3F000000h
0x93A353: movss   xmm0, [esp+100h+var_5C]
0x93A35C: mulss   xmm0, xmm3
0x93A360: mulss   xmm0, xmm6
0x93A364: movaps  xmm3, xmm0
0x93A367: shufps  xmm3, xmm0, 0
0x93A36B: movaps  xmm0, xmm3
0x93A36E: mulps   xmm0, xmm2
0x93A371: movaps  xmm4, xmm5
0x93A374: subps   xmm4, xmm7
0x93A377: movaps  xmm3, xmm1
0x93A37A: subps   xmm3, xmm5
0x93A37D: movaps  xmm6, xmm1
0x93A380: subps   xmm6, xmm7
0x93A383: movaps  xmm7, xmm3
0x93A386: movaps  xmm2, xmm3
0x93A389: shufps  xmm2, xmm3, 0D2h ; 'Ò'
0x93A38D: mulps   xmm2, [esp+100h+var_E0]
0x93A392: shufps  xmm7, xmm3, 0C9h ; 'É'
0x93A396: mulps   xmm7, [esp+100h+var_40]
0x93A39E: movaps  xmm5, xmm1
0x93A3A1: subps   xmm5, [esp+100h+var_F0]
0x93A3A6: movaps  xmm3, xmm7
0x93A3A9: subps   xmm3, xmm2
0x93A3AC: movaps  xmm2, xmm5
0x93A3AF: mulps   xmm3, xmm0
0x93A3B2: shufps  xmm2, xmm5, 0D2h ; 'Ò'
0x93A3B6: mulps   xmm2, [esp+100h+var_30]
0x93A3BE: movaps  xmm7, xmm5
0x93A3C1: shufps  xmm7, xmm5, 0C9h ; 'É'
0x93A3C5: mulps   xmm7, [esp+100h+var_D0]
0x93A3CA: movaps  xmm5, xmm7
0x93A3CD: subps   xmm5, xmm2
0x93A3D0: movaps  xmm2, xmm5
0x93A3D3: movaps  xmm7, xmm6
0x93A3D6: shufps  xmm7, xmm6, 0D2h ; 'Ò'
0x93A3DA: movaps  xmm5, xmm4
0x93A3DD: shufps  xmm5, xmm4, 0C9h ; 'É'
0x93A3E1: mulps   xmm7, xmm5
0x93A3E4: movaps  xmm5, xmm4
0x93A3E7: shufps  xmm5, xmm4, 0D2h ; 'Ò'
0x93A3EB: movaps  xmm4, xmm6
0x93A3EE: shufps  xmm4, xmm6, 0C9h ; 'É'
0x93A3F2: movaps  xmm6, xmmword ptr [esi+100h]
0x93A3F9: mulps   xmm2, xmm0
0x93A3FC: mulps   xmm4, xmm5
0x93A3FF: movaps  [esp+100h+var_F0], xmm2
0x93A404: mulps   xmm6, xmm0
0x93A407: subps   xmm4, xmm7
0x93A40A: movaps  xmm5, xmm3
0x93A40D: shufps  xmm3, [esp+100h+var_F0], var_20+0Eh
0x93A413: shufps  xmm5, xmm2, 44h ; 'D'
0x93A417: mulps   xmm4, xmm0
0x93A41A: movaps  [esp+100h+var_30], xmm6
0x93A422: movaps  xmm2, xmm4
0x93A425: shufps  xmm4, [esp+100h+var_30], var_20+0Eh
0x93A42E: shufps  xmm2, xmm6, 44h ; 'D'
0x93A432: movaps  [esp+100h+var_E0], xmm2
0x93A437: movaps  xmm2, [esp+100h+var_B0]
0x93A43C: mulps   xmm2, xmm0
0x93A43F: movaps  xmm6, xmm2
0x93A442: shufps  xmm6, xmm2, 55h ; 'U'
0x93A446: addss   xmm6, xmm2
0x93A44A: movaps  xmm7, xmm2
0x93A44D: shufps  xmm7, xmm2, 0AAh ; 'ª'
0x93A451: movaps  xmm2, xmm7
0x93A454: addss   xmm2, xmm6
0x93A458: movaps  xmm6, xmm2
0x93A45B: shufps  xmm6, xmm2, 0
0x93A45F: mulps   xmm6, xmm0
0x93A462: addps   xmm1, xmm6
0x93A465: movaps  xmm2, xmm5
0x93A468: movaps  [esp+100h+var_C0], xmm1
0x93A46D: movaps  xmm1, [esp+100h+var_E0]
0x93A472: shufps  xmm5, xmm1, 88h ; 'ˆ'
0x93A476: shufps  xmm2, xmm1, 0DDh ; 'Ý'
0x93A47A: shufps  xmm3, xmm4, 88h ; 'ˆ'
0x93A47E: addps   xmm5, xmm2
0x93A481: addps   xmm5, xmm3
0x93A484: movmskps eax, xmm5
0x93A487: test    al, 8
0x93A489: movaps  [esp+100h+var_A0], xmm0
0x93A48E: jz      short loc_93A49F
0x93A490: movaps  xmm1, xmmword ptr ds:0A965C0h
0x93A497: xorps   xmm0, xmm1
0x93A49A: movaps  [esp+100h+var_A0], xmm0
0x93A49F: not     eax
0x93A4A1: and     eax, 7
0x93A4A4: mov     ebx, [ebp+arg_0]
0x93A4A7: test    eax, eax
0x93A4A9: jnz     def_939C0B; jumptable 00939C0B default case, cases 0-4,8,11,12
0x93A4AF: movaps  xmm1, [esp+100h+var_A0]
0x93A4B4: movaps  xmm0, xmm1
0x93A4B7: mulps   xmm0, [esp+100h+var_B0]
0x93A4BC: movaps  xmm2, xmm0
0x93A4BF: shufps  xmm2, xmm0, 55h ; 'U'
0x93A4C3: movaps  xmm3, xmm0
0x93A4C6: addss   xmm2, xmm0
0x93A4CA: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93A4CE: lea     edx, [esp+100h+var_48]
0x93A4D5: addss   xmm3, xmm2
0x93A4D9: movss   dword ptr [edx], xmm3
0x93A4DD: fld     [esp+100h+var_48]
0x93A4E4: fsub    dword ptr [esi+114h]
0x93A4EA: fld     st
0x93A4EC: fchs
0x93A4EE: fstp    [esp+100h+var_60]
0x93A4F5: fsub    dword ptr [esi+110h]
0x93A4FB: fcom    dword ptr [esi+118h]
0x93A501: fnstsw  ax
0x93A503: test    ah, 5
0x93A506: jp      short loc_93A54C
0x93A508: mov     eax, [esp+100h+var_60]
0x93A50F: mov     [esp+100h+var_84], eax
0x93A513: movss   xmm0, [esp+100h+var_84]
0x93A519: mov     eax, [esp+100h+var_58]
0x93A520: movaps  xmm2, xmm0
0x93A523: shufps  xmm2, xmm0, 0
0x93A527: movaps  xmm0, [esp+100h+var_C0]
0x93A52C: movaps  xmmword ptr [eax+10h], xmm1
0x93A530: mulps   xmm2, xmm1
0x93A533: addps   xmm0, xmm2
0x93A536: movaps  xmmword ptr [eax], xmm0
0x93A539: fstp    dword ptr [eax+1Ch]
0x93A53C: mov     cx, [edi+2]
0x93A540: mov     [eax+20h], cx
0x93A544: mov     eax, [ebp+arg_C]
0x93A547: add     dword ptr [eax], 30h ; '0'
0x93A54A: jmp     short loc_93A587
0x93A54C: fstp    st
0x93A54E: xor     eax, eax; jumptable 00939C0B default case, cases 0-4,8,11,12
0x93A550: mov     ax, [edi+2]
0x93A554: cmp     ax, 0FFFFh
0x93A558: jz      short loc_93A563
0x93A55A: mov     ecx, [ebp+arg_10]
0x93A55D: mov     edx, [ecx]
0x93A55F: push    eax
0x93A560: call    dword ptr [edx+10h]
0x93A563: mov     dl, [ebx+2]
0x93A566: dec     dl
0x93A568: movzx   eax, dl
0x93A56B: mov     [ebx+2], dl
0x93A56E: mov     ecx, [ebx+eax*8+4]
0x93A572: mov     [edi], ecx
0x93A574: mov     ecx, [esp+100h+var_F4]
0x93A578: mov     edx, [ebx+eax*8+8]
0x93A57C: dec     ecx
0x93A57D: mov     [edi+4], edx
0x93A580: mov     [esp+100h+var_F4], ecx
0x93A584: sub     edi, 8
0x93A587: mov     eax, [esp+100h+var_F4]
0x93A58B: movzx   ecx, byte ptr [ebx+2]
0x93A58F: inc     eax
0x93A590: add     edi, 8
0x93A593: cmp     eax, ecx
0x93A595: mov     [esp+100h+var_F4], eax
0x93A599: jl      loc_939BE5
0x93A59F: mov     edx, [esp+100h+var_6C]
0x93A5A6: movzx   eax, byte ptr [ebx+2]
0x93A5AA: cmp     edx, eax
0x93A5AC: jle     short loc_93A5DC
0x93A5AE: movzx   esi, byte ptr [ebx]
0x93A5B1: lea     ecx, [ebx+eax*8+4]
0x93A5B5: movzx   eax, byte ptr [ebx+1]
0x93A5B9: lea     eax, [eax+esi-1]
0x93A5BD: sar     eax, 1
0x93A5BF: test    eax, eax
0x93A5C1: lea     edx, [ebx+edx*8+4]
0x93A5C5: jl      short loc_93A5D5
0x93A5C7: inc     eax
0x93A5C8: mov     esi, [edx]
0x93A5CA: mov     [ecx], esi
0x93A5CC: add     ecx, 4
0x93A5CF: add     edx, 4
0x93A5D2: dec     eax
0x93A5D3: jnz     short loc_93A5C8
0x93A5D5: mov     ecx, ebx
0x93A5D7: call    sub_9399E0
0x93A5DC: pop     edi
0x93A5DD: pop     esi
0x93A5DE: pop     ebx
0x93A5DF: mov     esp, ebp
0x93A5E1: pop     ebp
0x93A5E2: retn
