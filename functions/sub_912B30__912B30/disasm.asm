0x912B30: push    ebp
0x912B31: mov     ebp, esp
0x912B33: and     esp, 0FFFFFFF0h
0x912B36: sub     esp, 0D4h
0x912B3C: push    ebx
0x912B3D: mov     ebx, [ebp+arg_0]
0x912B40: push    esi
0x912B41: mov     esi, [ebp+arg_8]
0x912B44: push    edi
0x912B45: mov     edi, [ebp+arg_4]
0x912B48: mov     eax, [edi+1Ch]
0x912B4B: mov     edx, [edi+20h]
0x912B4E: mov     [esp+0E0h+var_10], eax
0x912B55: mov     eax, [ebx+10h]
0x912B58: mov     [esp+0E0h+var_D4], eax
0x912B5C: mov     eax, [ebx+28h]
0x912B5F: mov     [esp+0E0h+var_C], edx
0x912B66: mov     edx, [ebx+1Ch]
0x912B69: mov     [esp+0E0h+var_C8], ecx
0x912B6D: mov     [esp+0E0h+var_8], 0
0x912B78: mov     [esp+0E0h+var_CC], eax
0x912B7C: mov     eax, [edx]
0x912B7E: cmp     eax, 19h; switch 26 cases
0x912B81: mov     [esp+0E0h+var_D0], edx
0x912B85: ja      def_912B8B
0x912B8B: jmp     ds:jpt_912B8B[eax*4]; switch jump
0x912B92: mov     ecx, [esp+0E0h+var_D4]; jumptable 00912B8B case 3
0x912B96: movaps  xmm0, xmmword ptr [ecx]
0x912B99: mov     eax, [esp+0E0h+var_10]
0x912BA0: movaps  xmm2, xmmword ptr [eax+20h]
0x912BA4: movaps  xmm3, xmmword ptr [eax+10h]
0x912BA8: movaps  xmm1, xmm0
0x912BAB: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x912BAF: mulps   xmm2, xmm1
0x912BB2: movaps  xmm1, xmm0
0x912BB5: shufps  xmm1, xmm0, 55h ; 'U'
0x912BB9: add     edx, 4
0x912BBC: mulps   xmm3, xmm1
0x912BBF: movaps  xmm1, xmm0
0x912BC2: mov     [esp+0E0h+var_D0], edx
0x912BC6: mov     edx, [edx]
0x912BC8: shufps  xmm1, xmm0, 0
0x912BCC: movaps  xmm0, xmmword ptr [eax]
0x912BCF: mulps   xmm0, xmm1
0x912BD2: shl     edx, 4
0x912BD5: addps   xmm0, xmm3
0x912BD8: add     ecx, 10h
0x912BDB: addps   xmm0, xmm2
0x912BDE: movaps  [esp+edx+0E0h+var_A0], xmm0
0x912BE3: mov     edx, [esp+0E0h+var_D0]
0x912BE7: mov     [esp+0E0h+var_D4], ecx
0x912BEB: mov     ecx, [esp+0E0h+var_C8]
0x912BEF: add     edx, 4
0x912BF2: jmp     short loc_912B7C
0x912BF4: mov     ecx, [esp+0E0h+var_D4]; jumptable 00912B8B case 4
0x912BF8: movaps  xmm0, xmmword ptr [ecx]
0x912BFB: mov     eax, [esp+0E0h+var_C]
0x912C02: movaps  xmm2, xmmword ptr [eax+20h]
0x912C06: movaps  xmm3, xmmword ptr [eax+10h]
0x912C0A: movaps  xmm1, xmm0
0x912C0D: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x912C11: mulps   xmm2, xmm1
0x912C14: movaps  xmm1, xmm0
0x912C17: shufps  xmm1, xmm0, 55h ; 'U'
0x912C1B: mulps   xmm3, xmm1
0x912C1E: movaps  xmm1, xmm0
0x912C21: shufps  xmm1, xmm0, 0
0x912C25: movaps  xmm0, xmmword ptr [eax]
0x912C28: mov     eax, [edx+4]
0x912C2B: add     edx, 4
0x912C2E: add     ecx, 10h
0x912C31: mulps   xmm0, xmm1
0x912C34: shl     eax, 4
0x912C37: addps   xmm0, xmm3
0x912C3A: mov     [esp+0E0h+var_D0], edx
0x912C3E: addps   xmm0, xmm2
0x912C41: mov     [esp+0E0h+var_D4], ecx
0x912C45: mov     ecx, [esp+0E0h+var_C8]
0x912C49: movaps  [esp+eax+0E0h+var_A0], xmm0
0x912C4E: add     edx, 4
0x912C51: jmp     loc_912B7C
0x912C56: mov     ecx, [edx+4]; jumptable 00912B8B case 5
0x912C59: mov     eax, [esp+0E0h+var_D4]
0x912C5D: movaps  xmm0, xmmword ptr [eax]
0x912C60: add     edx, 4
0x912C63: shl     ecx, 4
0x912C66: add     eax, 10h
0x912C69: mov     [esp+0E0h+var_D0], edx
0x912C6D: movaps  [esp+ecx+0E0h+var_A0], xmm0
0x912C72: mov     ecx, [esp+0E0h+var_C8]
0x912C76: mov     [esp+0E0h+var_D4], eax
0x912C7A: add     edx, 4
0x912C7D: jmp     loc_912B7C
0x912C82: push    esi; jumptable 00912B8B case 6
0x912C83: push    edi
0x912C84: lea     edx, [esp+0E8h+var_C0]
0x912C88: push    edx
0x912C89: push    ebx
0x912C8A: lea     eax, [esp+0F0h+var_D4]
0x912C8E: push    eax
0x912C8F: lea     edx, [esp+0F4h+var_D0]
0x912C93: push    edx
0x912C94: call    sub_9120D0
0x912C99: mov     edx, [esp+0E0h+var_D0]
0x912C9D: mov     ecx, [esp+0E0h+var_C8]
0x912CA1: add     edx, 4
0x912CA4: jmp     loc_912B7C
0x912CA9: push    esi; jumptable 00912B8B case 7
0x912CAA: push    edi
0x912CAB: lea     eax, [esp+0E8h+var_C0]
0x912CAF: push    eax
0x912CB0: push    ebx
0x912CB1: lea     edx, [esp+0F0h+var_D4]
0x912CB5: push    edx
0x912CB6: lea     eax, [esp+0F4h+var_D0]
0x912CBA: push    eax
0x912CBB: call    sub_912030
0x912CC0: mov     edx, [esp+0E0h+var_D0]
0x912CC4: mov     ecx, [esp+0E0h+var_C8]
0x912CC8: add     edx, 4
0x912CCB: jmp     loc_912B7C
0x912CD0: mov     ecx, [esp+0E0h+var_D4]; jumptable 00912B8B case 8
0x912CD4: mov     eax, ecx
0x912CD6: add     ecx, 30h ; '0'
0x912CD9: mov     [esp+0E0h+var_D4], ecx
0x912CDD: mov     ecx, [esp+0E0h+var_10]
0x912CE4: push    eax
0x912CE5: push    ecx
0x912CE6: lea     ecx, [esp+0E8h+var_70]
0x912CEA: call    sub_8D2AB0
0x912CEF: mov     edx, [esp+0E0h+var_D0]
0x912CF3: mov     ecx, [esp+0E0h+var_C8]
0x912CF7: add     edx, 4
0x912CFA: jmp     loc_912B7C
0x912CFF: mov     ecx, [esp+0E0h+var_D4]; jumptable 00912B8B case 9
0x912D03: mov     edx, [esp+0E0h+var_C]
0x912D0A: mov     eax, ecx
0x912D0C: add     ecx, 30h ; '0'
0x912D0F: push    eax
0x912D10: mov     [esp+0E4h+var_D4], ecx
0x912D14: push    edx
0x912D15: lea     ecx, [esp+0E8h+var_40]
0x912D1C: call    sub_8D2AB0
0x912D21: mov     edx, [esp+0E0h+var_D0]
0x912D25: mov     ecx, [esp+0E0h+var_C8]
0x912D29: add     edx, 4
0x912D2C: jmp     loc_912B7C
0x912D31: mov     eax, [esp+0E0h+var_10]; jumptable 00912B8B case 10
0x912D38: movaps  xmm0, xmmword ptr [eax]
0x912D3B: mov     edx, [esp+0E0h+var_D0]
0x912D3F: mov     ecx, [esp+0E0h+var_C8]
0x912D43: movaps  [esp+0E0h+var_70], xmm0
0x912D48: movaps  xmm0, xmmword ptr [eax+10h]
0x912D4C: movaps  [esp+0E0h+var_60], xmm0
0x912D54: movaps  xmm0, xmmword ptr [eax+20h]
0x912D58: movaps  [esp+0E0h+var_50], xmm0
0x912D60: add     edx, 4
0x912D63: jmp     loc_912B7C
0x912D68: mov     eax, [esp+0E0h+var_C]; jumptable 00912B8B case 11
0x912D6F: movaps  xmm0, xmmword ptr [eax]
0x912D72: mov     edx, [esp+0E0h+var_D0]
0x912D76: mov     ecx, [esp+0E0h+var_C8]
0x912D7A: movaps  [esp+0E0h+var_40], xmm0
0x912D82: movaps  xmm0, xmmword ptr [eax+10h]
0x912D86: movaps  [esp+0E0h+var_30], xmm0
0x912D8E: movaps  xmm0, xmmword ptr [eax+20h]
0x912D92: movaps  [esp+0E0h+var_20], xmm0
0x912D9A: add     edx, 4
0x912D9D: jmp     loc_912B7C
0x912DA2: push    esi; jumptable 00912B8B case 12
0x912DA3: push    edi
0x912DA4: lea     eax, [esp+0E8h+var_C0]
0x912DA8: push    eax
0x912DA9: push    ebx
0x912DAA: lea     edx, [esp+0F0h+var_D4]
0x912DAE: push    edx
0x912DAF: lea     eax, [esp+0F4h+var_D0]
0x912DB3: push    eax
0x912DB4: call    sub_9121D0
0x912DB9: mov     edx, [esp+0E0h+var_D0]
0x912DBD: mov     ecx, [esp+0E0h+var_C8]
0x912DC1: add     edx, 4
0x912DC4: jmp     loc_912B7C
0x912DC9: push    esi; jumptable 00912B8B case 13
0x912DCA: push    edi
0x912DCB: lea     edx, [esp+0E8h+var_C0]
0x912DCF: push    edx
0x912DD0: push    ebx
0x912DD1: lea     eax, [esp+0F0h+var_D4]
0x912DD5: push    eax
0x912DD6: lea     edx, [esp+0F4h+var_D0]
0x912DDA: push    edx
0x912DDB: call    sub_912280
0x912DE0: mov     edx, [esp+0E0h+var_D0]
0x912DE4: mov     ecx, [esp+0E0h+var_C8]
0x912DE8: add     edx, 4
0x912DEB: jmp     loc_912B7C
0x912DF0: push    esi; jumptable 00912B8B case 16
0x912DF1: push    edi
0x912DF2: lea     eax, [esp+0E8h+var_C0]
0x912DF6: push    eax
0x912DF7: push    ebx
0x912DF8: lea     edx, [esp+0F0h+var_D4]
0x912DFC: push    edx
0x912DFD: lea     eax, [esp+0F4h+var_D0]
0x912E01: push    eax
0x912E02: call    sub_912340
0x912E07: mov     edx, [esp+0E0h+var_D0]
0x912E0B: mov     ecx, [esp+0E0h+var_C8]
0x912E0F: add     edx, 4
0x912E12: jmp     loc_912B7C
0x912E17: push    esi; jumptable 00912B8B case 17
0x912E18: push    edi
0x912E19: lea     edx, [esp+0E8h+var_C0]
0x912E1D: push    edx
0x912E1E: push    ebx
0x912E1F: lea     eax, [esp+0F0h+var_D4]
0x912E23: push    eax
0x912E24: lea     edx, [esp+0F4h+var_D0]
0x912E28: push    edx
0x912E29: call    sub_9123C0
0x912E2E: mov     edx, [esp+0E0h+var_D0]
0x912E32: mov     ecx, [esp+0E0h+var_C8]
0x912E36: add     edx, 4
0x912E39: jmp     loc_912B7C
0x912E3E: push    esi; jumptable 00912B8B case 18
0x912E3F: push    edi
0x912E40: lea     eax, [esp+0E8h+var_C0]
0x912E44: push    eax
0x912E45: push    ebx
0x912E46: lea     edx, [esp+0F0h+var_D4]
0x912E4A: push    edx
0x912E4B: lea     eax, [esp+0F4h+var_D0]
0x912E4F: push    eax
0x912E50: call    sub_9127A0
0x912E55: mov     edx, [esp+0E0h+var_D0]
0x912E59: mov     ecx, [esp+0E0h+var_C8]
0x912E5D: add     edx, 4
0x912E60: jmp     loc_912B7C
0x912E65: push    esi; jumptable 00912B8B case 19
0x912E66: push    edi
0x912E67: lea     edx, [esp+0E8h+var_C0]
0x912E6B: push    edx
0x912E6C: push    ebx
0x912E6D: lea     eax, [esp+0F0h+var_D4]
0x912E71: push    eax
0x912E72: lea     edx, [esp+0F4h+var_D0]
0x912E76: push    edx
0x912E77: call    sub_9124B0
0x912E7C: mov     edx, [esp+0E0h+var_D0]
0x912E80: mov     ecx, [esp+0E0h+var_C8]
0x912E84: add     edx, 4
0x912E87: jmp     loc_912B7C
0x912E8C: push    esi; jumptable 00912B8B case 14
0x912E8D: push    edi
0x912E8E: lea     eax, [esp+0E8h+var_C0]
0x912E92: push    eax
0x912E93: push    ebx
0x912E94: lea     edx, [esp+0F0h+var_D4]
0x912E98: push    edx
0x912E99: lea     eax, [esp+0F4h+var_D0]
0x912E9D: push    eax
0x912E9E: call    sub_912940
0x912EA3: mov     edx, [esp+0E0h+var_D0]
0x912EA7: mov     ecx, [esp+0E0h+var_C8]
0x912EAB: add     edx, 4
0x912EAE: jmp     loc_912B7C
0x912EB3: push    esi; jumptable 00912B8B case 15
0x912EB4: push    edi
0x912EB5: lea     edx, [esp+0E8h+var_C0]
0x912EB9: push    edx
0x912EBA: push    ebx
0x912EBB: lea     eax, [esp+0F0h+var_D4]
0x912EBF: push    eax
0x912EC0: lea     edx, [esp+0F4h+var_D0]
0x912EC4: push    edx
0x912EC5: call    sub_912550
0x912ECA: mov     edx, [esp+0E0h+var_D0]
0x912ECE: mov     ecx, [esp+0E0h+var_C8]
0x912ED2: add     edx, 4
0x912ED5: jmp     loc_912B7C
0x912EDA: push    esi; jumptable 00912B8B case 20
0x912EDB: push    edi
0x912EDC: lea     eax, [esp+0E8h+var_C0]
0x912EE0: push    eax
0x912EE1: push    ebx
0x912EE2: lea     edx, [esp+0F0h+var_D4]
0x912EE6: push    edx
0x912EE7: lea     eax, [esp+0F4h+var_D0]
0x912EEB: push    eax
0x912EEC: call    sub_912690
0x912EF1: mov     edx, [esp+0E0h+var_D0]
0x912EF5: mov     ecx, [esp+0E0h+var_C8]
0x912EF9: add     edx, 4
0x912EFC: jmp     loc_912B7C
0x912F01: push    esi; jumptable 00912B8B case 21
0x912F02: push    edi
0x912F03: lea     edx, [esp+0E8h+var_C0]
0x912F07: push    edx
0x912F08: push    ebx
0x912F09: lea     eax, [esp+0F0h+var_D4]
0x912F0D: push    eax
0x912F0E: lea     edx, [esp+0F4h+var_D0]
0x912F12: push    edx
0x912F13: call    sub_912710
0x912F18: mov     edx, [esp+0E0h+var_D0]
0x912F1C: mov     ecx, [esp+0E0h+var_C8]
0x912F20: add     edx, 4
0x912F23: jmp     loc_912B7C
0x912F28: mov     eax, [esp+0E0h+var_D4]; jumptable 00912B8B case 1
0x912F2C: mov     ecx, [esp+0E0h+var_10]
0x912F33: push    eax
0x912F34: push    ecx
0x912F35: lea     ecx, [esp+0E8h+var_C0]
0x912F39: call    sub_88FCC0
0x912F3E: mov     eax, [esp+0E0h+var_D4]
0x912F42: mov     edx, [esp+0E0h+var_D0]
0x912F46: mov     ecx, [esp+0E0h+var_C8]
0x912F4A: add     eax, 10h
0x912F4D: mov     [esp+0E0h+var_D4], eax
0x912F51: add     edx, 4
0x912F54: jmp     loc_912B7C
0x912F59: mov     edx, [esp+0E0h+var_D4]; jumptable 00912B8B case 2
0x912F5D: mov     eax, [esp+0E0h+var_C]
0x912F64: push    edx
0x912F65: push    eax
0x912F66: lea     ecx, [esp+0E8h+var_B0]
0x912F6A: call    sub_88FCC0
0x912F6F: mov     eax, [esp+0E0h+var_D4]
0x912F73: mov     edx, [esp+0E0h+var_D0]
0x912F77: mov     ecx, [esp+0E0h+var_C8]
0x912F7B: add     eax, 10h
0x912F7E: mov     [esp+0E0h+var_D4], eax
0x912F82: add     edx, 4
0x912F85: jmp     loc_912B7C
0x912F8A: mov     eax, [esp+0E0h+var_D4]; jumptable 00912B8B case 22
0x912F8E: mov     ecx, [eax+4]
0x912F91: mov     edx, [eax]
0x912F93: push    esi
0x912F94: push    ecx
0x912F95: push    edx
0x912F96: call    sub_8F0F20
0x912F9B: mov     eax, [esp+0ECh+var_D4]
0x912F9F: mov     edx, [esp+0ECh+var_D0]
0x912FA3: mov     ecx, [esp+0ECh+var_C8]
0x912FA7: add     eax, 10h
0x912FAA: add     esp, 0Ch
0x912FAD: mov     [esp+0E0h+var_D4], eax
0x912FB1: add     edx, 4
0x912FB4: jmp     loc_912B7C
0x912FB9: push    esi; jumptable 00912B8B case 23
0x912FBA: call    sub_8F0F50
0x912FBF: mov     edx, [esp+0E4h+var_D0]
0x912FC3: mov     ecx, [esp+0E4h+var_C8]
0x912FC7: add     esp, 4
0x912FCA: add     edx, 4
0x912FCD: jmp     loc_912B7C
0x912FD2: mov     eax, [esp+0E0h+var_CC]; jumptable 00912B8B case 24
0x912FD6: mov     ecx, [eax]
0x912FD8: mov     eax, [ecx]
0x912FDA: add     edx, 4
0x912FDD: mov     [esp+0E0h+var_D0], edx
0x912FE1: mov     edx, [edx]
0x912FE3: push    edx
0x912FE4: lea     edx, [esp+0E4h+var_C0]
0x912FE8: push    edx
0x912FE9: call    dword ptr [eax]
0x912FEB: jmp     short loc_91301C
0x912FED: mov     eax, [esp+0E0h+var_CC]; jumptable 00912B8B case 25
0x912FF1: mov     ecx, [eax]
0x912FF3: mov     eax, [ecx]
0x912FF5: add     edx, 4
0x912FF8: mov     [esp+0E0h+var_D0], edx
0x912FFC: mov     edx, [edx]
0x912FFE: push    edx
0x912FFF: lea     edx, [esp+0E4h+var_C0]
0x913003: push    edx
0x913004: call    dword ptr [eax+4]
0x913007: fstp    [esp+0E8h+var_CC]
0x91300B: mov     eax, [esp+0E8h+var_CC]
0x91300F: push    1; int
0x913011: push    esi; int
0x913012: push    edi; int
0x913013: push    eax; float
0x913014: call    sub_8F0EF0
0x913019: add     esp, 10h
0x91301C: add     [esp+0E8h+var_D4], 4
