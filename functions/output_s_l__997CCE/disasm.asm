0x997CCE: push    ebp
0x997CCF: lea     ebp, [esp-1F8h]
0x997CD6: sub     esp, 278h
0x997CDC: mov     eax, ___security_cookie
0x997CE1: xor     eax, ebp
0x997CE3: mov     [ebp+1F8h+var_4], eax
0x997CE9: mov     eax, [ebp+1F8h+arg_0]
0x997CEF: push    ebx
0x997CF0: mov     ebx, [ebp+1F8h+arg_4]
0x997CF6: push    esi
0x997CF7: xor     esi, esi
0x997CF9: push    edi; WCh
0x997CFA: mov     edi, [ebp+1F8h+arg_C]
0x997D00: push    [ebp+1F8h+arg_8]; struct localeinfo_struct *
0x997D06: lea     ecx, [ebp+1F8h+Locale]; this
0x997D09: mov     [ebp+1F8h+File], eax
0x997D0C: mov     [ebp+1F8h+var_224], edi
0x997D0F: mov     [ebp+1F8h+var_25C], esi
0x997D12: mov     [ebp+1F8h+var_210], esi
0x997D15: mov     [ebp+1F8h+var_238], esi
0x997D18: mov     [ebp+1F8h+var_218], esi
0x997D1B: mov     [ebp+1F8h+var_234], esi
0x997D1E: mov     [ebp+1F8h+var_260], esi
0x997D21: mov     [ebp+1F8h+var_23C], esi
0x997D24: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x997D29: cmp     [ebp+1F8h+File], esi
0x997D2C: jnz     short loc_997D5B
0x997D2E: call    __errno
0x997D33: push    esi
0x997D34: push    esi
0x997D35: push    esi
0x997D36: push    esi
0x997D37: mov     dword ptr [eax], 16h
0x997D3D: push    esi
0x997D3E: call    __invalid_parameter
0x997D43: add     esp, 14h
0x997D46: cmp     [ebp+1F8h+var_248], 0
0x997D4A: jz      short loc_997D53
0x997D4C: mov     eax, [ebp+1F8h+var_24C]
0x997D4F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x997D53: or      eax, 0FFFFFFFFh
0x997D56: jmp     loc_998646
0x997D5B: mov     eax, [ebp+1F8h+File]
0x997D5E: test    byte ptr [eax+0Ch], 40h
0x997D62: jnz     loc_997E0C
0x997D68: push    eax; File
0x997D69: call    __fileno
0x997D6E: cmp     eax, 0FFFFFFFFh
0x997D71: pop     ecx
0x997D72: jz      short loc_997DAA
0x997D74: push    [ebp+1F8h+File]; File
0x997D77: call    __fileno
0x997D7C: cmp     eax, 0FFFFFFFEh
0x997D7F: pop     ecx
0x997D80: jz      short loc_997DAA
0x997D82: push    [ebp+1F8h+File]; File
0x997D85: call    __fileno
0x997D8A: push    [ebp+1F8h+File]; File
0x997D8D: sar     eax, 5
0x997D90: lea     esi, ds:0BAAAC0h[eax*4]
0x997D97: call    __fileno
0x997D9C: and     eax, 1Fh
0x997D9F: imul    eax, 28h ; '('
0x997DA2: add     eax, [esi]
0x997DA4: pop     ecx
0x997DA5: pop     ecx
0x997DA6: xor     esi, esi
0x997DA8: jmp     short loc_997DAF
0x997DAA: mov     eax, offset aA_1
0x997DAF: test    byte ptr [eax+24h], 7Fh
0x997DB3: jnz     loc_997D2E
0x997DB9: push    [ebp+1F8h+File]; File
0x997DBC: call    __fileno
0x997DC1: cmp     eax, 0FFFFFFFFh
0x997DC4: pop     ecx
0x997DC5: jz      short loc_997DFD
0x997DC7: push    [ebp+1F8h+File]; File
0x997DCA: call    __fileno
0x997DCF: cmp     eax, 0FFFFFFFEh
0x997DD2: pop     ecx
0x997DD3: jz      short loc_997DFD
0x997DD5: push    [ebp+1F8h+File]; File
0x997DD8: call    __fileno
0x997DDD: push    [ebp+1F8h+File]; File
0x997DE0: sar     eax, 5
0x997DE3: lea     esi, ds:0BAAAC0h[eax*4]
0x997DEA: call    __fileno
0x997DEF: and     eax, 1Fh
0x997DF2: imul    eax, 28h ; '('
0x997DF5: add     eax, [esi]
0x997DF7: pop     ecx
0x997DF8: pop     ecx
0x997DF9: xor     esi, esi
0x997DFB: jmp     short loc_997E02
0x997DFD: mov     eax, offset aA_1
0x997E02: test    byte ptr [eax+24h], 80h
0x997E06: jnz     loc_997D2E
0x997E0C: cmp     ebx, esi
0x997E0E: jz      loc_997D2E
0x997E14: mov     dl, [ebx]
0x997E16: test    dl, dl
0x997E18: mov     [ebp+1F8h+var_22C], esi
0x997E1B: mov     [ebp+1F8h+SizeConverted], esi
0x997E1E: mov     [ebp+1F8h+var_240], esi
0x997E21: mov     [ebp+1F8h+Memory], esi
0x997E24: mov     [ebp+1F8h+var_211], dl
0x997E27: jz      loc_998636
0x997E2D: inc     ebx
0x997E2E: xor     eax, eax
0x997E30: cmp     [ebp+1F8h+var_22C], eax
0x997E33: mov     [ebp+1F8h+var_244], ebx
0x997E36: jl      loc_998625
0x997E3C: mov     cl, dl
0x997E3E: sub     cl, 20h ; ' '
0x997E41: cmp     cl, 58h ; 'X'
0x997E44: ja      short loc_997E53
0x997E46: movsx   eax, dl
0x997E49: movzx   eax, byte ptr ds:qword_AAFBB0[eax]
0x997E50: and     eax, 0Fh
0x997E53: mov     ecx, [ebp+1F8h+var_240]
0x997E56: imul    eax, 9
0x997E59: movzx   eax, ds:byte_AAFBD0[eax+ecx]
0x997E61: push    8
0x997E63: shr     eax, 4
0x997E66: pop     esi
0x997E67: cmp     eax, esi
0x997E69: mov     [ebp+1F8h+var_240], eax
0x997E6C: jz      loc_99860E
0x997E72: push    7
0x997E74: pop     ecx
0x997E75: cmp     eax, ecx; switch 8 cases
0x997E77: ja      __output_s_l___def_997E7D
0x997E7D: jmp     ds:jpt_997E7D[eax*4]; switch jump
0x997E84: xor     eax, eax; jumptable 00997E7D case 1
0x997E86: or      [ebp+1F8h+var_218], 0FFFFFFFFh
0x997E8A: mov     [ebp+1F8h+var_26C], eax
0x997E8D: mov     [ebp+1F8h+var_260], eax
0x997E90: mov     [ebp+1F8h+var_238], eax
0x997E93: mov     [ebp+1F8h+var_234], eax
0x997E96: mov     [ebp+1F8h+var_210], eax
0x997E99: mov     [ebp+1F8h+var_23C], eax
0x997E9C: jmp     __output_s_l___def_997E7D
0x997EA1: movsx   eax, dl; jumptable 00997E7D case 2
0x997EA4: sub     eax, 20h ; ' '
0x997EA7: jz      short loc_997EE5
0x997EA9: sub     eax, 3
0x997EAC: jz      short loc_997ED9
0x997EAE: sub     eax, esi
0x997EB0: jz      short loc_997ED0
0x997EB2: dec     eax
0x997EB3: dec     eax
0x997EB4: jz      short loc_997EC7
0x997EB6: sub     eax, 3
0x997EB9: jnz     __output_s_l___def_997E7D
0x997EBF: or      [ebp+1F8h+var_210], esi
0x997EC2: jmp     __output_s_l___def_997E7D
0x997EC7: or      [ebp+1F8h+var_210], 4
0x997ECB: jmp     __output_s_l___def_997E7D
0x997ED0: or      [ebp+1F8h+var_210], 1
0x997ED4: jmp     __output_s_l___def_997E7D
0x997ED9: or      [ebp+1F8h+var_210], 80h
0x997EE0: jmp     __output_s_l___def_997E7D
0x997EE5: or      [ebp+1F8h+var_210], 2
0x997EE9: jmp     __output_s_l___def_997E7D
0x997EEE: cmp     dl, 2Ah ; '*'; jumptable 00997E7D case 3
0x997EF1: jnz     short loc_997F13
0x997EF3: add     edi, 4
0x997EF6: mov     [ebp+1F8h+var_224], edi
0x997EF9: mov     edi, [edi-4]
0x997EFC: test    edi, edi
0x997EFE: mov     [ebp+1F8h+var_238], edi
0x997F01: jge     __output_s_l___def_997E7D
0x997F07: or      [ebp+1F8h+var_210], 4
0x997F0B: neg     [ebp+1F8h+var_238]
0x997F0E: jmp     __output_s_l___def_997E7D
0x997F13: mov     eax, [ebp+1F8h+var_238]
0x997F16: imul    eax, 0Ah
0x997F19: movsx   ecx, dl
0x997F1C: lea     eax, [eax+ecx-30h]
0x997F20: mov     [ebp+1F8h+var_238], eax
0x997F23: jmp     __output_s_l___def_997E7D
0x997F28: and     [ebp+1F8h+var_218], 0; jumptable 00997E7D case 4
0x997F2C: jmp     __output_s_l___def_997E7D
0x997F31: cmp     dl, 2Ah ; '*'; jumptable 00997E7D case 5
0x997F34: jnz     short loc_997F53
0x997F36: add     edi, 4
0x997F39: mov     [ebp+1F8h+var_224], edi
0x997F3C: mov     edi, [edi-4]
0x997F3F: test    edi, edi
0x997F41: mov     [ebp+1F8h+var_218], edi
0x997F44: jge     __output_s_l___def_997E7D
0x997F4A: or      [ebp+1F8h+var_218], 0FFFFFFFFh
0x997F4E: jmp     __output_s_l___def_997E7D
0x997F53: mov     eax, [ebp+1F8h+var_218]
0x997F56: imul    eax, 0Ah
0x997F59: movsx   ecx, dl
0x997F5C: lea     eax, [eax+ecx-30h]
0x997F60: mov     [ebp+1F8h+var_218], eax
0x997F63: jmp     __output_s_l___def_997E7D
0x997F68: cmp     dl, 49h ; 'I'; jumptable 00997E7D case 6
0x997F6B: jz      short loc_997FB3
0x997F6D: cmp     dl, 68h ; 'h'
0x997F70: jz      short loc_997FAA
0x997F72: cmp     dl, 6Ch ; 'l'
0x997F75: jz      short loc_997F8C
0x997F77: cmp     dl, 77h ; 'w'
0x997F7A: jnz     __output_s_l___def_997E7D
0x997F80: or      [ebp+1F8h+var_210], 800h
0x997F87: jmp     __output_s_l___def_997E7D
0x997F8C: cmp     byte ptr [ebx], 6Ch ; 'l'
0x997F8F: jnz     short loc_997FA1
0x997F91: inc     ebx
0x997F92: or      [ebp+1F8h+var_210], 1000h
0x997F99: mov     [ebp+1F8h+var_244], ebx
0x997F9C: jmp     __output_s_l___def_997E7D
0x997FA1: or      [ebp+1F8h+var_210], 10h
0x997FA5: jmp     __output_s_l___def_997E7D
0x997FAA: or      [ebp+1F8h+var_210], 20h
0x997FAE: jmp     __output_s_l___def_997E7D
0x997FB3: mov     al, [ebx]
0x997FB5: cmp     al, 36h ; '6'
0x997FB7: jnz     short loc_997FD0
0x997FB9: cmp     byte ptr [ebx+1], 34h ; '4'
0x997FBD: jnz     short loc_997FD0
0x997FBF: inc     ebx
0x997FC0: inc     ebx
0x997FC1: or      [ebp+1F8h+var_210], 8000h
0x997FC8: mov     [ebp+1F8h+var_244], ebx
0x997FCB: jmp     __output_s_l___def_997E7D
0x997FD0: cmp     al, 33h ; '3'
0x997FD2: jnz     short loc_997FEB
0x997FD4: cmp     byte ptr [ebx+1], 32h ; '2'
0x997FD8: jnz     short loc_997FEB
0x997FDA: inc     ebx
0x997FDB: inc     ebx
0x997FDC: and     [ebp+1F8h+var_210], 0FFFF7FFFh
0x997FE3: mov     [ebp+1F8h+var_244], ebx
0x997FE6: jmp     __output_s_l___def_997E7D
0x997FEB: cmp     al, 64h ; 'd'
0x997FED: jz      __output_s_l___def_997E7D
0x997FF3: cmp     al, 69h ; 'i'
0x997FF5: jz      __output_s_l___def_997E7D
0x997FFB: cmp     al, 6Fh ; 'o'
0x997FFD: jz      __output_s_l___def_997E7D
0x998003: cmp     al, 75h ; 'u'
0x998005: jz      __output_s_l___def_997E7D
0x99800B: cmp     al, 78h ; 'x'
0x99800D: jz      __output_s_l___def_997E7D
0x998013: cmp     al, 58h ; 'X'
0x998015: jz      __output_s_l___def_997E7D
0x99801B: and     [ebp+1F8h+var_240], 0
0x99801F: and     [ebp+1F8h+var_23C], 0; jumptable 00997E7D case 0
0x998023: lea     eax, [ebp+1F8h+Locale]
0x998026: push    eax; Locale
0x998027: movzx   eax, dl
0x99802A: push    eax; C
0x99802B: call    __isleadbyte_l
0x998030: pop     ecx
0x998031: test    eax, eax
0x998033: mov     al, [ebp+1F8h+var_211]
0x998036: pop     ecx
0x998037: jz      short loc_998052
0x998039: mov     ecx, [ebp+1F8h+File]; File
0x99803C: lea     esi, [ebp+1F8h+var_22C]
0x99803F: call    _write_char
0x998044: mov     al, [ebx]
0x998046: inc     ebx
0x998047: test    al, al
0x998049: mov     [ebp+1F8h+var_244], ebx
0x99804C: jz      loc_99860E
0x998052: mov     ecx, [ebp+1F8h+File]; File
0x998055: lea     esi, [ebp+1F8h+var_22C]
0x998058: call    _write_char
0x99805D: jmp     __output_s_l___def_997E7D
0x998062: movsx   eax, dl; jumptable 00997E7D case 7
0x998065: cmp     eax, 64h ; 'd'
0x998068: jg      loc_9981E2
0x99806E: jz      loc_99825D
0x998074: cmp     eax, 53h ; 'S'
0x998077: jg      loc_998129
0x99807D: jz      short loc_9980DA
0x99807F: sub     eax, 41h ; 'A'
0x998082: jz      short loc_998094
0x998084: dec     eax
0x998085: dec     eax
0x998086: jz      short loc_9980C9
0x998088: dec     eax
0x998089: dec     eax
0x99808A: jz      short loc_998094
0x99808C: dec     eax
0x99808D: dec     eax
0x99808E: jnz     loc_9984E0
0x998094: add     dl, 20h ; ' '
0x998097: mov     [ebp+1F8h+var_26C], 1
0x99809E: mov     [ebp+1F8h+var_211], dl
0x9980A1: or      [ebp+1F8h+var_210], 40h
0x9980A5: cmp     [ebp+1F8h+var_218], 0
0x9980A9: lea     ebx, [ebp+1F8h+MbCh]
0x9980AC: mov     eax, 200h
0x9980B1: mov     [ebp+1F8h+var_21C], ebx
0x9980B4: mov     [ebp+1F8h+var_264], eax
0x9980B7: jge     loc_998281
0x9980BD: mov     [ebp+1F8h+var_218], 6
0x9980C4: jmp     loc_9982D0
0x9980C9: test    word ptr [ebp+1F8h+var_210], 830h
0x9980CF: jnz     short loc_998146
0x9980D1: or      [ebp+1F8h+var_210], 800h
0x9980D8: jmp     short loc_998146
0x9980DA: test    word ptr [ebp+1F8h+var_210], 830h
0x9980E0: jnz     short loc_9980E9
0x9980E2: or      [ebp+1F8h+var_210], 800h
0x9980E9: mov     ecx, [ebp+1F8h+var_218]
0x9980EC: cmp     ecx, 0FFFFFFFFh
0x9980EF: jnz     short loc_9980F6
0x9980F1: mov     ecx, 7FFFFFFFh
0x9980F6: add     edi, 4
0x9980F9: test    word ptr [ebp+1F8h+var_210], 810h
0x9980FF: mov     [ebp+1F8h+var_224], edi
0x998102: mov     edi, [edi-4]
0x998105: mov     [ebp+1F8h+var_21C], edi
0x998108: jz      loc_9984BE
0x99810E: test    edi, edi
0x998110: jnz     short loc_99811A
0x998112: mov     eax, off_B31364
0x998117: mov     [ebp+1F8h+var_21C], eax
0x99811A: mov     eax, [ebp+1F8h+var_21C]
0x99811D: mov     [ebp+1F8h+var_23C], 1
0x998124: jmp     loc_9984B3
0x998129: sub     eax, 58h ; 'X'
0x99812C: jz      loc_998366
0x998132: dec     eax
0x998133: dec     eax
0x998134: jz      short loc_998193
0x998136: sub     eax, ecx
0x998138: jz      loc_9980A1
0x99813E: dec     eax
0x99813F: dec     eax
0x998140: jnz     loc_9984E0
0x998146: add     edi, 4
0x998149: test    word ptr [ebp+1F8h+var_210], 810h
0x99814F: mov     [ebp+1F8h+var_224], edi
0x998152: jz      short loc_99817B
0x998154: movzx   eax, word ptr [edi-4]
0x998158: push    eax; WCh
0x998159: push    200h; SizeInBytes
0x99815E: lea     eax, [ebp+1F8h+MbCh]
0x998161: push    eax; MbCh
0x998162: lea     eax, [ebp+1F8h+SizeConverted]
0x998165: push    eax; SizeConverted
0x998166: call    _wctomb_s
0x99816B: add     esp, 10h
0x99816E: test    eax, eax
0x998170: jz      short loc_998188
0x998172: mov     [ebp+1F8h+var_260], 1
0x998179: jmp     short loc_998188
0x99817B: mov     al, [edi-4]
0x99817E: mov     [ebp+1F8h+MbCh], al
0x998181: mov     [ebp+1F8h+SizeConverted], 1
0x998188: lea     eax, [ebp+1F8h+MbCh]
0x99818B: mov     [ebp+1F8h+var_21C], eax
0x99818E: jmp     loc_9984E0
0x998193: mov     eax, [edi]
0x998195: add     edi, 4
0x998198: test    eax, eax
0x99819A: mov     [ebp+1F8h+var_224], edi
0x99819D: jz      short loc_9981CE
0x99819F: mov     ecx, [eax+4]
0x9981A2: test    ecx, ecx
0x9981A4: jz      short loc_9981CE
0x9981A6: test    word ptr [ebp+1F8h+var_210], 800h
0x9981AC: movsx   eax, word ptr [eax]
0x9981AF: mov     [ebp+1F8h+var_21C], ecx
0x9981B2: jz      short loc_9981C5
0x9981B4: cdq
0x9981B5: sub     eax, edx
0x9981B7: sar     eax, 1
0x9981B9: mov     [ebp+1F8h+var_23C], 1
0x9981C0: jmp     loc_9984DD
0x9981C5: and     [ebp+1F8h+var_23C], 0
0x9981C9: jmp     loc_9984DD
0x9981CE: mov     eax, off_B31360
0x9981D3: mov     [ebp+1F8h+var_21C], eax
0x9981D6: push    eax; Str
0x9981D7: call    _strlen
0x9981DC: pop     ecx
0x9981DD: jmp     loc_9984DD
0x9981E2: cmp     eax, 70h ; 'p'
0x9981E5: jg      loc_99836B
0x9981EB: jz      loc_998363
0x9981F1: cmp     eax, 65h ; 'e'
0x9981F4: jl      loc_9984E0
0x9981FA: cmp     eax, 67h ; 'g'
0x9981FD: jle     loc_9980A1
0x998203: cmp     eax, 69h ; 'i'
0x998206: jz      short loc_99825D
0x998208: cmp     eax, 6Eh ; 'n'
0x99820B: jz      short loc_998228
0x99820D: cmp     eax, 6Fh ; 'o'
0x998210: jnz     loc_9984E0
0x998216: test    byte ptr [ebp+1F8h+var_210], 80h
0x99821A: mov     [ebp+1F8h+SizeConverted], esi
0x99821D: jz      short __output_s_l___$COMMON_INT$25537
0x99821F: or      [ebp+1F8h+var_210], 200h
0x998226: jmp     short __output_s_l___$COMMON_INT$25537
0x998228: mov     esi, [edi]
0x99822A: add     edi, 4
0x99822D: mov     [ebp+1F8h+var_224], edi
0x998230: call    __get_printf_count_output
0x998235: test    eax, eax
0x998237: jz      loc_99860E
0x99823D: test    byte ptr [ebp+1F8h+var_210], 20h
0x998241: jz      short loc_99824C
0x998243: mov     ax, word ptr [ebp+1F8h+var_22C]
0x998247: mov     [esi], ax
0x99824A: jmp     short loc_998251
0x99824C: mov     eax, [ebp+1F8h+var_22C]
0x99824F: mov     [esi], eax
0x998251: mov     [ebp+1F8h+var_260], 1
0x998258: jmp     loc_9985E5
0x99825D: or      [ebp+1F8h+var_210], 40h
0x998261: mov     [ebp+1F8h+SizeConverted], 0Ah
