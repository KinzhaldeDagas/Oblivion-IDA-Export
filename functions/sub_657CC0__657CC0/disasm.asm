0x657CC0: sub     esp, 268h
0x657CC6: mov     eax, ds:0B30AACh
0x657CCB: xor     eax, esp
0x657CCD: mov     [esp+268h+var_4], eax
0x657CD4: push    esi
0x657CD5: push    edi
0x657CD6: mov     edi, [esp+270h+arg_0]
0x657CDD: test    edi, edi
0x657CDF: mov     esi, ecx
0x657CE1: mov     [esp+270h+var_260], edi
0x657CE5: jz      loc_657EDC
0x657CEB: mov     eax, [edi]
0x657CED: mov     edx, [eax+154h]
0x657CF3: mov     ecx, edi
0x657CF5: call    edx
0x657CF7: test    eax, eax
0x657CF9: jz      loc_65848B
0x657CFF: mov     eax, [edi+8]
0x657D02: mov     ecx, eax
0x657D04: shr     ecx, 5
0x657D07: test    cl, 1
0x657D0A: jnz     loc_65848B
0x657D10: shr     eax, 0Bh
0x657D13: test    al, 1
0x657D15: jnz     loc_65848B
0x657D1B: mov     ecx, edi; this
0x657D1D: call    TESObjectREFR_GetParentCell
0x657D22: test    eax, eax
0x657D24: jz      loc_65848B
0x657D2A: mov     ecx, edi; this
0x657D2C: call    TESObjectREFR_GetParentCell
0x657D31: cmp     byte ptr [eax+26h], 3
0x657D35: jnz     loc_65848B
0x657D3B: push    ebx
0x657D3C: push    ebp
0x657D3D: push    0; int
0x657D3F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x657D44: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x657D49: push    0; int
0x657D4B: push    edi; void *
0x657D4C: call    OblivionDynamicCast
0x657D51: mov     edi, eax
0x657D53: add     esp, 14h
0x657D56: test    edi, edi
0x657D58: jz      def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657D5E: movzx   eax, byte ptr [esi+16Ah]
0x657D65: test    al, al
0x657D67: jz      short loc_657D79
0x657D69: push    eax
0x657D6A: push    edi
0x657D6B: call    sub_693210
0x657D70: add     esp, 8
0x657D73: mov     [esi+16Ah], al
0x657D79: mov     edx, [esi]
0x657D7B: mov     eax, [edx+18h]
0x657D7E: push    0
0x657D80: push    edi
0x657D81: mov     ecx, esi
0x657D83: call    eax
0x657D85: mov     edx, [esi]
0x657D87: mov     bl, al
0x657D89: mov     eax, [edx+184h]
0x657D8F: mov     ecx, esi
0x657D91: mov     byte ptr [esp+278h+var_264], bl
0x657D95: call    eax
0x657D97: test    bl, bl
0x657D99: jnz     short loc_657DA7
0x657D9B: test    eax, eax
0x657D9D: jnz     short loc_657DB4
0x657D9F: cmp     [esi+0D0h], al
0x657DA5: jnz     short loc_657DB4
0x657DA7: mov     edx, [esi]
0x657DA9: mov     eax, [edx+3C0h]
0x657DAF: push    edi
0x657DB0: mov     ecx, esi
0x657DB2: call    eax
0x657DB4: mov     edx, [esi]
0x657DB6: mov     eax, [edx+184h]
0x657DBC: mov     ecx, esi
0x657DBE: call    eax
0x657DC0: mov     edx, [esi]
0x657DC2: mov     ebp, eax
0x657DC4: mov     eax, [edx+574h]
0x657DCA: mov     ecx, esi
0x657DCC: call    eax
0x657DCE: test    bl, bl
0x657DD0: jz      short loc_657DE6
0x657DD2: mov     ecx, edi
0x657DD4: call    sub_5E7BE0
0x657DD9: mov     edx, [esi]
0x657DDB: mov     eax, [edx+55Ch]
0x657DE1: push    edi
0x657DE2: mov     ecx, esi
0x657DE4: call    eax
0x657DE6: test    ebp, ebp
0x657DE8: jz      def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657DEE: cmp     dword ptr [ebp+18h], 0FFFFFFFFh
0x657DF2: jz      def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657DF8: mov     ecx, ds:0B333C4h; this
0x657DFE: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x657E03: test    al, al
0x657E05: jnz     short loc_657E15
0x657E07: mov     ecx, ds:0B333C4h
0x657E0D: cmp     [ecx+610h], al
0x657E13: jz      short loc_657E1F
0x657E15: test    byte ptr [ebp+1Eh], 1
0x657E19: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657E1F: push    1
0x657E21: call    sub_571F90
0x657E26: mov     edx, ds:0B139A4h
0x657E2C: sub     edx, ds:0B13980h
0x657E32: add     esp, 4
0x657E35: mov     [esp+278h+var_268], edx
0x657E39: fild    [esp+278h+var_268]
0x657E3D: push    1; int
0x657E3F: sub     esp, 8
0x657E42: mov     ecx, eax
0x657E44: fstp    [esp+284h+var_280]; float
0x657E48: fild    dword ptr ds:0B1399Ch
0x657E4E: fstp    [esp+284h+var_284]; float
0x657E51: call    sub_571720
0x657E56: mov     ebx, [ebp+18h]
0x657E59: mov     [esp+278h+var_268], eax
0x657E5D: mov     eax, [esi]
0x657E5F: mov     edx, [eax+180h]
0x657E65: mov     ecx, esi
0x657E67: call    edx
0x657E69: mov     ecx, ds:0B152B0h[ebx*4]
0x657E70: mov     eax, [ecx+eax*4]
0x657E73: cmp     eax, 2Ch; switch 45 cases
0x657E76: ja      short def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657E78: movzx   edx, ds:byte_658518[eax]
0x657E7F: jmp     ds:jpt_657E7F[edx*4]; switch jump
0x657E86: mov     ecx, [esp+278h+var_264]; jumptable 00657E7F case 0
0x657E8A: mov     eax, [esi]
0x657E8C: mov     edx, [eax+58Ch]
0x657E92: push    101h
0x657E97: push    1
0x657E99: push    ecx
0x657E9A: push    edi
0x657E9B: mov     ecx, esi
0x657E9D: call    edx
0x657E9F: cmp     byte ptr ds:0B15800h, 0; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657EA6: jz      short loc_657ECC
0x657EA8: test    edi, edi
0x657EAA: jz      short loc_657ECC
0x657EAC: mov     ecx, ds:0B3BF80h
0x657EB2: test    ecx, ecx
0x657EB4: jz      short loc_657ECC
0x657EB6: push    edi
0x657EB7: call    sub_6825C0
0x657EBC: test    al, al
0x657EBE: jnz     short loc_657EDA
0x657EC0: mov     ecx, ds:0B3BF80h
0x657EC6: push    edi
0x657EC7: call    sub_6826D0
0x657ECC: mov     ecx, [esp+278h+var_260]
0x657ED0: mov     ecx, [ecx+58h]
0x657ED3: mov     edx, [ecx]
0x657ED5: mov     eax, [edx+20h]
0x657ED8: call    eax
0x657EDA: pop     ebp
0x657EDB: pop     ebx
0x657EDC: mov     ecx, [esp+270h+var_4]
0x657EE3: pop     edi
0x657EE4: pop     esi
0x657EE5: xor     ecx, esp
0x657EE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x657EEC: add     esp, 268h
0x657EF2: retn    4
0x657EF5: mov     eax, [esi]; jumptable 00657E7F case 41
0x657EF7: mov     edx, [eax+53Ch]
0x657EFD: push    edi
0x657EFE: mov     ecx, esi
0x657F00: call    edx
0x657F02: jmp     short def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F04: mov     eax, [esi]; jumptable 00657E7F case 2
0x657F06: mov     edx, [eax+51Ch]
0x657F0C: push    1
0x657F0E: push    edi
0x657F0F: mov     ecx, esi
0x657F11: call    edx
0x657F13: jmp     short def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F15: mov     eax, [esi]; jumptable 00657E7F case 43
0x657F17: mov     edx, [eax+188h]
0x657F1D: push    2
0x657F1F: push    edi
0x657F20: mov     ecx, esi
0x657F22: call    edx
0x657F24: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F29: mov     eax, [esi]; jumptable 00657E7F case 27
0x657F2B: mov     edx, [eax+548h]
0x657F31: push    edi
0x657F32: mov     ecx, esi
0x657F34: call    edx
0x657F36: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F3B: mov     eax, [esi]; jumptable 00657E7F case 35
0x657F3D: mov     edx, [eax+534h]
0x657F43: push    edi
0x657F44: mov     ecx, esi
0x657F46: call    edx
0x657F48: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F4D: mov     eax, [esi]; jumptable 00657E7F case 32
0x657F4F: mov     edx, [eax+52Ch]
0x657F55: push    edi
0x657F56: mov     ecx, esi
0x657F58: call    edx
0x657F5A: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F5F: mov     eax, [esi]; jumptable 00657E7F case 40
0x657F61: mov     edx, [eax+540h]
0x657F67: push    edi
0x657F68: mov     ecx, esi
0x657F6A: call    edx
0x657F6C: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F71: mov     eax, [esi]; jumptable 00657E7F case 9
0x657F73: mov     edx, [eax+514h]
0x657F79: push    edi
0x657F7A: mov     ecx, esi
0x657F7C: call    edx
0x657F7E: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F83: mov     eax, [esi]; jumptable 00657E7F case 28
0x657F85: mov     edx, [eax+550h]
0x657F8B: push    edi
0x657F8C: mov     ecx, esi
0x657F8E: call    edx
0x657F90: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657F95: mov     eax, [esi]; jumptable 00657E7F case 26
0x657F97: mov     edx, [eax+54Ch]
0x657F9D: push    edi
0x657F9E: mov     ecx, esi
0x657FA0: call    edx
0x657FA2: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657FA7: mov     eax, [esi]; jumptable 00657E7F case 37
0x657FA9: mov     edx, [eax+588h]
0x657FAF: push    0
0x657FB1: push    1
0x657FB3: push    edi
0x657FB4: mov     ecx, esi
0x657FB6: call    edx
0x657FB8: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657FBD: mov     eax, [esi]; jumptable 00657E7F case 36
0x657FBF: mov     edx, [eax+538h]
0x657FC5: push    edi
0x657FC6: mov     ecx, esi
0x657FC8: call    edx
0x657FCA: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657FCF: mov     eax, [esi]; jumptable 00657E7F case 3
0x657FD1: mov     edx, [eax+524h]
0x657FD7: push    edi
0x657FD8: mov     ecx, esi
0x657FDA: call    edx
0x657FDC: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657FE1: mov     eax, [esi]; jumptable 00657E7F case 30
0x657FE3: mov     edx, [eax+530h]
0x657FE9: push    edi
0x657FEA: mov     ecx, esi
0x657FEC: call    edx
0x657FEE: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x657FF3: mov     eax, [esi]; jumptable 00657E7F case 29
0x657FF5: mov     edx, [eax+520h]
0x657FFB: push    edi
0x657FFC: mov     ecx, esi
0x657FFE: call    edx
0x658000: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658005: cmp     dword ptr [esi+2Ch], 0; jumptable 00657E7F case 17
0x658009: jnz     short loc_658043
0x65800B: mov     eax, [esi]
0x65800D: mov     edx, [eax+558h]
0x658013: push    edi
0x658014: mov     ecx, esi
0x658016: call    edx
0x658018: cmp     dword ptr [esi+2Ch], 0
0x65801C: jnz     short loc_658043
0x65801E: mov     eax, [esi]
0x658020: mov     edx, [eax+188h]
0x658026: push    1
0x658028: push    edi
0x658029: mov     ecx, esi
0x65802B: call    edx
0x65802D: cmp     byte ptr [esi+0D0h], 0
0x658034: jnz     short loc_658043
0x658036: mov     eax, [esi]
0x658038: mov     edx, [eax+194h]
0x65803E: push    edi
0x65803F: mov     ecx, esi
0x658041: call    edx
0x658043: mov     eax, [esi]
0x658045: mov     edx, [eax+84h]
0x65804B: push    1
0x65804D: push    ebp
0x65804E: push    edi
0x65804F: mov     ecx, esi
0x658051: call    edx
0x658053: mov     eax, [esi]
0x658055: mov     edx, [eax+188h]
0x65805B: push    1
0x65805D: push    edi
0x65805E: mov     ecx, esi
0x658060: call    edx
0x658062: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658067: cmp     dword ptr [esi+2Ch], 0; jumptable 00657E7F case 13
0x65806B: jnz     short loc_65807A
0x65806D: mov     eax, [esi]
0x65806F: mov     edx, [eax+558h]
0x658075: push    edi
0x658076: mov     ecx, esi
0x658078: call    edx
0x65807A: mov     eax, [esi+2Ch]
0x65807D: test    eax, eax
0x65807F: jz      short loc_65808B
0x658081: mov     eax, [eax+8]
0x658084: shr     eax, 5
0x658087: test    al, 1
0x658089: jz      short loc_65809A
0x65808B: mov     edx, [esi]
0x65808D: mov     eax, [edx+188h]
0x658093: push    1
0x658095: push    edi
0x658096: mov     ecx, esi
0x658098: call    eax
0x65809A: test    byte ptr [ebp+1Eh], 1
0x65809E: jnz     loc_658166
0x6580A4: mov     ecx, edi
0x6580A6: call    sub_5E0380
0x6580AB: cmp     byte ptr [eax+20h], 1
0x6580AF: jnz     short loc_6580FA
0x6580B1: mov     ecx, [esi+8]
0x6580B4: mov     ecx, [ecx+28h]
0x6580B7: call    sub_452A60
0x6580BC: mov     edx, [esi+2Ch]
0x6580BF: mov     [esp+278h+var_264], eax
0x6580C3: fild    [esp+278h+var_264]
0x6580C7: push    0
0x6580C9: push    edx
0x6580CA: mov     ecx, edi
0x6580CC: fstp    [esp+280h+var_264]
0x6580D0: call    TesObjectREF_GetDistance
0x6580D5: fld     [esp+278h+var_264]
0x6580D9: fcompp
0x6580DB: fnstsw  ax
0x6580DD: test    ah, 1
0x6580E0: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6580E6: mov     eax, [esi]
0x6580E8: mov     edx, [eax+188h]
0x6580EE: push    1
0x6580F0: push    edi
0x6580F1: mov     ecx, esi
0x6580F3: call    edx
0x6580F5: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6580FA: mov     ecx, [ebp+28h]
0x6580FD: call    sub_452A60
0x658102: test    eax, eax
0x658104: mov     [esp+278h+var_268], eax
0x658108: jg      short loc_658112
0x65810A: mov     [esp+278h+var_268], 0C8h ; 'È'
0x658112: mov     ecx, edi; this
0x658114: call    TESObjectREFR_GetParentCell
0x658119: mov     ecx, eax; this
0x65811B: call    TESObjectCELL_IsInterior
0x658120: test    al, al
0x658122: jz      short loc_658132
0x658124: mov     ecx, offset flt_B36AA0
0x658129: call    GameSetting_GetSafeFloatPointer
0x65812E: fld     dword ptr [eax]
0x658130: jmp     short loc_658142
0x658132: mov     ecx, offset flt_B36A98
0x658137: call    GameSetting_GetSafeFloatPointer
0x65813C: fild    [esp+278h+var_268]
0x658140: fmul    dword ptr [eax]
0x658142: mov     eax, [esi+2Ch]
0x658145: fstp    [esp+278h+var_268]
0x658149: push    0
0x65814B: push    eax
0x65814C: mov     ecx, edi
0x65814E: call    TesObjectREF_GetDistance
0x658153: fld     [esp+278h+var_268]
0x658157: fmul    qword ptr ds:0A2FAA0h
0x65815D: fcompp
0x65815F: fnstsw  ax
0x658161: test    ah, 1
0x658164: jmp     short loc_6581B5
0x658166: mov     ecx, ds:0B333C4h
0x65816C: push    edi
0x65816D: call    sub_663A60
0x658172: test    al, al
0x658174: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x65817A: mov     ecx, ds:0B333C4h
0x658180: call    sub_663A00
0x658185: cmp     eax, ds:0B36A80h
0x65818B: jge     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658191: push    0
0x658193: mov     ecx, ebp
0x658195: call    sub_5668E0
0x65819A: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x65819F: push    edi; jumptable 00657E7F case 22
0x6581A0: mov     ecx, esi
0x6581A2: call    sub_654F10
0x6581A7: mov     edx, [esi]
0x6581A9: mov     eax, [edx+36Ch]
0x6581AF: mov     ecx, esi
0x6581B1: call    eax
0x6581B3: test    eax, eax
0x6581B5: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6581BB: mov     edx, [esi]
0x6581BD: mov     eax, [edx+188h]
0x6581C3: push    1
0x6581C5: push    edi
0x6581C6: mov     ecx, esi
0x6581C8: call    eax
0x6581CA: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6581CF: mov     edx, [esi]; jumptable 00657E7F case 14
0x6581D1: mov     eax, [edx+51Ch]
0x6581D7: push    0
0x6581D9: push    edi
0x6581DA: mov     ecx, esi
0x6581DC: call    eax
0x6581DE: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6581E3: call    sub_579440; jumptable 00657E7F case 4
0x6581E8: cmp     eax, edi
0x6581EA: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6581F0: mov     ecx, [esi+8]
0x6581F3: movsx   eax, byte ptr [ecx+20h]
0x6581F7: mov     edx, ds:0B12988h[eax*4]
0x6581FE: push    edx
0x6581FF: mov     ecx, edi; this
0x658201: call    TESObjectREFR_GetName
0x658206: push    eax
0x658207: lea     eax, [esp+280h+Format]
0x65820B: push    offset aSIsSleeping_0; "%s is sleeping "
0x658210: push    eax
0x658211: call    __sprintf
0x658216: mov     eax, [esp+288h+var_268]
0x65821A: add     esp, 10h
0x65821D: test    eax, eax
0x65821F: jz      short loc_658237
0x658221: push    eax; unsigned __int8 *
0x658222: lea     ecx, [esp+27Ch+Format]
0x658226: push    ecx; unsigned __int8 *
0x658227: call    __mbsicmp
0x65822C: add     esp, 8
0x65822F: test    eax, eax
0x658231: jz      def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658237: lea     edx, [esp+278h+Format]
0x65823B: push    edx; Format
0x65823C: call    Interface_ConsolePrint
0x658241: add     esp, 4
0x658244: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658249: mov     eax, [esi]; jumptable 00657E7F case 5
0x65824B: mov     edx, [eax+510h]
0x658251: push    edi
0x658252: mov     ecx, esi
0x658254: call    edx
0x658256: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x65825B: mov     eax, [esi]; jumptable 00657E7F case 6
0x65825D: mov     edx, [eax+198h]
0x658263: push    0
0x658265: push    0FFFFFFFFh
0x658267: push    1
0x658269: push    edi
0x65826A: mov     ecx, esi
0x65826C: jmp     loc_657E9D
0x658271: mov     eax, [esi]; jumptable 00657E7F case 7
0x658273: mov     edx, [eax+508h]
0x658279: push    edi
0x65827A: mov     ecx, esi
0x65827C: call    edx
0x65827E: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658283: mov     eax, [esi]; jumptable 00657E7F case 12
0x658285: mov     edx, [eax+584h]
0x65828B: push    edi
0x65828C: mov     ecx, esi
0x65828E: call    edx
0x658290: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658295: mov     eax, [esi]; jumptable 00657E7F case 8
0x658297: mov     edx, [eax+518h]
0x65829D: push    edi
0x65829E: mov     ecx, esi
0x6582A0: call    edx
0x6582A2: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6582A7: mov     eax, [esi]; jumptable 00657E7F case 15
0x6582A9: mov     edx, [eax+19Ch]
0x6582AF: push    0FFFFFFFFh
0x6582B1: push    1
0x6582B3: push    0
0x6582B5: push    edi
0x6582B6: mov     ecx, esi
0x6582B8: jmp     loc_657E9D
0x6582BD: mov     eax, [esi]; jumptable 00657E7F case 23
0x6582BF: mov     edx, [eax+560h]
0x6582C5: push    edi
0x6582C6: mov     ecx, esi
0x6582C8: call    edx
0x6582CA: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6582CF: mov     eax, [esi]; jumptable 00657E7F case 10
0x6582D1: mov     edx, [eax+1A0h]
0x6582D7: push    edi
0x6582D8: mov     ecx, esi
0x6582DA: call    edx
0x6582DC: mov     al, [ebp+20h]; jumptable 00657E7F case 44
0x6582DF: cmp     al, 3
0x6582E1: jz      loc_658477
0x6582E7: cmp     al, 4
0x6582E9: jz      loc_658477
0x6582EF: fld     dword ptr ds:0A30634h
0x6582F5: push    ecx
0x6582F6: fstp    [esp+27Ch+var_27C]; float
0x6582F9: push    0; char
0x6582FB: push    edi; int
0x6582FC: mov     ecx, ebp
0x6582FE: call    sub_566DC0
0x658303: test    al, al
0x658305: jnz     short loc_65831B
0x658307: mov     eax, [esi]
0x658309: mov     edx, [eax+188h]
0x65830F: push    0FFFFFFFFh
0x658311: push    edi
0x658312: mov     ecx, esi
0x658314: call    edx
0x658316: jmp     loc_657EDA
0x65831B: push    400h
0x658320: lea     ebx, [edi+44h]
0x658323: push    ebx
0x658324: push    ebp
0x658325: call    Script_AddEventToExtraScript
0x65832A: add     esp, 0Ch
0x65832D: mov     ecx, ebp
0x65832F: call    sub_565DF0
0x658334: test    al, al
0x658336: jz      short loc_65834B
0x658338: mov     ecx, offset TimeGlobals
0x65833D: call    TimeGlobals_GetGameDay
0x658342: mov     ecx, ebx
0x658344: push    eax
0x658345: push    ebp
0x658346: call    sub_41FFC0
0x65834B: call    sub_579440
0x658350: cmp     eax, edi
0x658352: jnz     short loc_6583B1
0x658354: mov     eax, [esi+8]
0x658357: movsx   eax, byte ptr [eax+20h]
0x65835B: mov     ecx, ds:0B12988h[eax*4]
0x658362: push    ecx
0x658363: mov     ecx, edi; this
0x658365: call    TESObjectREFR_GetName
0x65836A: push    eax
0x65836B: lea     edx, [esp+280h+var_130]
0x658372: push    offset aSIsDoneWithS; "%s is done with %s"
0x658377: push    edx
0x658378: call    __sprintf
0x65837D: mov     eax, [esp+288h+var_268]
0x658381: xor     ebx, ebx
0x658383: add     esp, 10h
0x658386: cmp     eax, ebx
0x658388: jz      short loc_65839F
0x65838A: push    eax; unsigned __int8 *
0x65838B: lea     eax, [esp+27Ch+var_130]
0x658392: push    eax; unsigned __int8 *
0x658393: call    __mbsicmp
0x658398: add     esp, 8
0x65839B: test    eax, eax
0x65839D: jz      short loc_6583B3
0x65839F: lea     ecx, [esp+278h+var_130]
0x6583A6: push    ecx; Format
0x6583A7: call    Interface_ConsolePrint
0x6583AC: add     esp, 4
0x6583AF: jmp     short loc_6583B3
0x6583B1: xor     ebx, ebx
0x6583B3: cmp     [ebp+30h], ebx
0x6583B6: jnz     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x6583BC: mov     ecx, [esi+0C0h]
0x6583C2: cmp     ecx, ebx
0x6583C4: mov     [esi+2Ch], ebx
0x6583C7: jz      short loc_6583DA
0x6583C9: mov     edx, [ecx]
0x6583CB: mov     eax, [edx+10h]
0x6583CE: push    1
0x6583D0: call    eax
0x6583D2: mov     [esi+0C0h], ebx
0x6583D8: jmp     short loc_65841D
0x6583DA: mov     ecx, [esi+8]
0x6583DD: call    sub_5660A0
0x6583E2: test    al, al
0x6583E4: jz      short loc_65841D
0x6583E6: mov     edx, [edi]
0x6583E8: mov     eax, [edx+44h]
0x6583EB: push    30000h
0x6583F0: mov     ecx, edi
0x6583F2: call    eax
0x6583F4: mov     ecx, [esi+8]
0x6583F7: cmp     ecx, ebx
0x6583F9: jz      short loc_658404
0x6583FB: mov     edx, [ecx]
0x6583FD: mov     eax, [edx+10h]
0x658400: push    1
0x658402: call    eax
0x658404: cmp     byte ptr [esi+0D0h], 0
0x65840B: mov     [esi+8], ebx
0x65840E: jnz     short loc_65841D
0x658410: mov     edx, [esi]
0x658412: mov     eax, [edx+194h]
0x658418: push    edi
0x658419: mov     ecx, esi
0x65841B: call    eax
0x65841D: mov     eax, [esi+44h]
0x658420: cmp     eax, ebx
0x658422: jz      short loc_65842D
0x658424: push    eax
0x658425: call    FormHeapFree
0x65842A: add     esp, 4
0x65842D: lea     ebp, [esi+3Ch]
0x658430: mov     ecx, ebp
0x658432: mov     [esi+44h], ebx
0x658435: call    BSSimpleList_IsEmpty
0x65843A: test    al, al
0x65843C: jnz     short loc_658463
0x65843E: mov     edi, edi
0x658440: mov     ebx, [ebp+0]
0x658443: test    ebx, ebx
0x658445: jz      short loc_658450
0x658447: push    ebx
0x658448: call    FormHeapFree
0x65844D: add     esp, 4
0x658450: push    ebx
0x658451: mov     ecx, ebp
0x658453: call    BSSimpleList_Remove
0x658458: mov     ecx, ebp
0x65845A: call    BSSimpleList_IsEmpty
0x65845F: test    al, al
0x658461: jz      short loc_658440
0x658463: lea     ecx, [esi+4Ch]
0x658466: mov     dword ptr [esi+30h], 0
0x65846D: call    BSSimpleList_Clear
0x658472: jmp     def_657E7F; jumptable 00657E7F default case, cases 1,11,16,18-21,24,25,31,33,34,38,39,42
0x658477: mov     edx, [esi]
0x658479: mov     eax, [edx+188h]
0x65847F: push    0FFFFFFFFh
0x658481: push    edi
0x658482: mov     ecx, esi
0x658484: call    eax
0x658486: jmp     loc_657EDA
0x65848B: mov     edx, [esi]
0x65848D: mov     eax, [edx+20h]
0x658490: mov     ecx, esi
0x658492: call    eax
0x658494: jmp     loc_657EDC
