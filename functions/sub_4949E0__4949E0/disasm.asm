0x4949E0: sub     esp, 24h
0x4949E3: cmp     byte ptr ds:0B06B38h, 0
0x4949EA: push    edi
0x4949EB: mov     edi, 6
0x4949F0: mov     [esp+28h+var_24], edi
0x4949F4: jz      short loc_494A11
0x4949F6: movzx   eax, [esp+28h+arg_8]
0x4949FB: and     eax, 0Fh
0x4949FE: sub     eax, 2
0x494A01: mov     al, 6
0x494A03: jnz     short loc_494A07
0x494A05: mov     al, 5
0x494A07: movsx   eax, al
0x494A0A: pop     edi
0x494A0B: add     esp, 24h
0x494A0E: retn    0Ch
0x494A11: push    ebx
0x494A12: push    esi
0x494A13: mov     ecx, offset TimeInfo
0x494A18: call    OsGlobalsTime__UpdatetimeInfo
0x494A1D: mov     bl, [esp+30h+arg_8]
0x494A21: and     bl, 0Fh
0x494A24: cmp     byte ptr ds:0B06B16h, 0
0x494A2B: jz      loc_494E0B
0x494A31: mov     eax, ds:0B33398h
0x494A36: test    eax, eax
0x494A38: jz      loc_494E0B
0x494A3E: cmp     dword ptr [eax+20h], 0
0x494A42: jz      loc_494E0B
0x494A48: mov     esi, [eax+10h]
0x494A4B: call    dword ptr ds:0A2808Ch
0x494A51: cmp     eax, esi
0x494A53: jnz     loc_494E0B
0x494A59: movsx   eax, bl
0x494A5C: xor     ecx, ecx
0x494A5E: xor     edx, edx
0x494A60: mov     [esp+30h+var_20], eax
0x494A64: sub     eax, 2
0x494A67: mov     byte ptr ds:0B06B16h, 0
0x494A6E: mov     [esp+30h+arg_8], 0FFh
0x494A73: mov     [esp+30h+arg_4], 0
0x494A7B: jz      short loc_494AA1
0x494A7D: sub     eax, 1
0x494A80: jz      short loc_494A8E
0x494A82: sub     eax, 1
0x494A85: jz      short loc_494A94
0x494A87: mov     eax, ds:0B34DCCh
0x494A8C: jmp     short loc_494ABA
0x494A8E: mov     edx, ds:0B34DACh
0x494A94: mov     eax, ds:0B34D9Ch
0x494A99: mov     ecx, ds:0B34DA4h
0x494A9F: jmp     short loc_494ABA
0x494AA1: mov     eax, ds:0B34DB4h
0x494AA6: mov     ecx, ds:0B34DBCh
0x494AAC: mov     edx, ds:0B34DC4h
0x494AB2: mov     [esp+30h+arg_4], 3
0x494ABA: push    0
0x494ABC: push    edx
0x494ABD: push    ecx
0x494ABE: mov     ecx, [esp+3Ch+arg_0]
0x494AC2: push    eax
0x494AC3: mov     eax, [esp+40h+arg_4]
0x494AC7: push    eax
0x494AC8: push    0
0x494ACA: push    ecx
0x494ACB: call    ShowUIMessageBox
0x494AD0: add     esp, 1Ch
0x494AD3: test    al, al
0x494AD5: jz      loc_494E02
0x494ADB: mov     edx, ds:0B33398h
0x494AE1: mov     ecx, ds:0B3A6B0h
0x494AE7: mov     esi, [edx+20h]
0x494AEA: push    ebp
0x494AEB: push    2
0x494AED: call    sub_572DF0
0x494AF2: mov     byte ptr [esp+34h+arg_0], al
0x494AF6: call    sub_579930
0x494AFB: mov     ecx, ds:0B3A6B0h
0x494B01: push    1
0x494B03: push    2
0x494B05: call    sub_572EC0
0x494B0A: mov     ebx, ds:0A2826Ch
0x494B10: mov     ebp, ds:0A28268h
0x494B16: xor     eax, eax
0x494B18: push    1; wRemoveMsg
0x494B1A: push    eax; wMsgFilterMax
0x494B1B: push    eax; wMsgFilterMin
0x494B1C: push    eax; hWnd
0x494B1D: mov     [esp+44h+Msg.hwnd], eax
0x494B21: mov     [esp+44h+Msg.message], eax
0x494B25: mov     [esp+44h+Msg.wParam], eax
0x494B29: mov     [esp+44h+Msg.lParam], eax
0x494B2D: mov     [esp+44h+Msg.time], eax
0x494B31: mov     [esp+44h+Msg.pt.x], eax
0x494B35: mov     [esp+44h+Msg.pt.y], eax
0x494B39: lea     eax, [esp+44h+Msg]
0x494B3D: push    eax; lpMsg
0x494B3E: call    ebx ; PeekMessageA
0x494B40: test    eax, eax
0x494B42: jz      short loc_494B69
0x494B44: lea     ecx, [esp+34h+Msg]
0x494B48: push    ecx; lpMsg
0x494B49: call    ebp ; TranslateMessage
0x494B4B: lea     edx, [esp+34h+Msg]
0x494B4F: push    edx; lpMsg
0x494B50: call    dword ptr ds:0A28264h
0x494B56: push    1; wRemoveMsg
0x494B58: push    0; wMsgFilterMax
0x494B5A: push    0; wMsgFilterMin
0x494B5C: push    0; hWnd
0x494B5E: lea     eax, [esp+44h+Msg]
0x494B62: push    eax; lpMsg
0x494B63: call    ebx ; PeekMessageA
0x494B65: test    eax, eax
0x494B67: jnz     short loc_494B44
0x494B69: mov     ecx, ds:0B33398h
0x494B6F: mov     edi, [ecx+8]
0x494B72: call    dword ptr ds:0A282B0h
0x494B78: cmp     eax, edi
0x494B7A: jnz     loc_494D64
0x494B80: mov     ecx, esi; this
0x494B82: call    InputGlobals__PollAndUpdateInputState
0x494B87: mov     eax, [esp+34h+var_20]
0x494B8B: sub     eax, 2
0x494B8E: jz      loc_494C93
0x494B94: sub     eax, 1
0x494B97: jz      short loc_494BEC
0x494B99: sub     eax, 1
0x494B9C: jz      short loc_494C0E
0x494B9E: push    1; a3
0x494BA0: push    1Ch; a2
0x494BA2: mov     ecx, esi; this
0x494BA4: call    InputGlobals__QueryKeyboardState
0x494BA9: test    eax, eax
0x494BAB: jnz     short loc_494BE2
0x494BAD: push    eax; a3
0x494BAE: push    1Ch; a2
0x494BB0: mov     ecx, esi; this
0x494BB2: call    InputGlobals__QueryKeyboardState
0x494BB7: test    eax, eax
0x494BB9: jnz     short loc_494BE2
0x494BBB: push    1; a3
0x494BBD: push    9Ch ; 'œ'; a2
0x494BC2: mov     ecx, esi; this
0x494BC4: call    InputGlobals__QueryKeyboardState
0x494BC9: test    eax, eax
0x494BCB: jnz     short loc_494BE2
0x494BCD: push    eax; a3
0x494BCE: push    9Ch ; 'œ'; a2
0x494BD3: mov     ecx, esi; this
0x494BD5: call    InputGlobals__QueryKeyboardState
0x494BDA: test    eax, eax
0x494BDC: jz      loc_494D0A
0x494BE2: mov     [esp+34h+arg_8], 0
0x494BE7: jmp     loc_494D0A
0x494BEC: push    1; a3
0x494BEE: push    1; a2
0x494BF0: mov     ecx, esi; this
0x494BF2: call    InputGlobals__QueryKeyboardState
0x494BF7: test    eax, eax
0x494BF9: jnz     short loc_494C09
0x494BFB: push    eax; a3
0x494BFC: push    1; a2
0x494BFE: mov     ecx, esi; this
0x494C00: call    InputGlobals__QueryKeyboardState
0x494C05: test    eax, eax
0x494C07: jz      short loc_494C0E
0x494C09: mov     [esp+34h+arg_8], 2
0x494C0E: push    1; a3
0x494C10: push    1Ch; a2
0x494C12: mov     ecx, esi; this
0x494C14: call    InputGlobals__QueryKeyboardState
0x494C19: test    eax, eax
0x494C1B: jnz     short loc_494BE2
0x494C1D: push    eax; a3
0x494C1E: push    1Ch; a2
0x494C20: mov     ecx, esi; this
0x494C22: call    InputGlobals__QueryKeyboardState
0x494C27: test    eax, eax
0x494C29: jnz     short loc_494BE2
0x494C2B: push    1; a3
0x494C2D: push    15h; a2
0x494C2F: mov     ecx, esi; this
0x494C31: call    InputGlobals__QueryKeyboardState
0x494C36: test    eax, eax
0x494C38: jnz     short loc_494BE2
0x494C3A: push    eax; a3
0x494C3B: push    15h; a2
0x494C3D: mov     ecx, esi; this
0x494C3F: call    InputGlobals__QueryKeyboardState
0x494C44: test    eax, eax
0x494C46: jnz     short loc_494BE2
0x494C48: push    1; a3
0x494C4A: push    9Ch ; 'œ'; a2
0x494C4F: mov     ecx, esi; this
0x494C51: call    InputGlobals__QueryKeyboardState
0x494C56: test    eax, eax
0x494C58: jnz     short loc_494BE2
0x494C5A: push    eax; a3
0x494C5B: push    9Ch ; 'œ'; a2
0x494C60: mov     ecx, esi; this
0x494C62: call    InputGlobals__QueryKeyboardState
0x494C67: test    eax, eax
0x494C69: jnz     loc_494BE2
0x494C6F: push    1; a3
0x494C71: push    31h ; '1'; a2
0x494C73: mov     ecx, esi; this
0x494C75: call    InputGlobals__QueryKeyboardState
0x494C7A: test    eax, eax
0x494C7C: jnz     short loc_494C8C
0x494C7E: push    eax; a3
0x494C7F: push    31h ; '1'; a2
0x494C81: mov     ecx, esi; this
0x494C83: call    InputGlobals__QueryKeyboardState
0x494C88: test    eax, eax
0x494C8A: jz      short loc_494D0A
0x494C8C: mov     [esp+34h+arg_8], 1
0x494C91: jmp     short loc_494D0A
0x494C93: push    1; a3
0x494C95: push    1Eh; a2
0x494C97: mov     ecx, esi; this
0x494C99: call    InputGlobals__QueryKeyboardState
0x494C9E: test    eax, eax
0x494CA0: jnz     short loc_494D02
0x494CA2: push    eax; a3
0x494CA3: push    1Eh; a2
0x494CA5: mov     ecx, esi; this
0x494CA7: call    InputGlobals__QueryKeyboardState
0x494CAC: test    eax, eax
0x494CAE: jnz     short loc_494D02
0x494CB0: push    1; a3
0x494CB2: push    13h; a2
0x494CB4: mov     ecx, esi; this
0x494CB6: call    InputGlobals__QueryKeyboardState
0x494CBB: test    eax, eax
0x494CBD: jnz     short loc_494CF6
0x494CBF: push    eax; a3
0x494CC0: push    13h; a2
0x494CC2: mov     ecx, esi; this
0x494CC4: call    InputGlobals__QueryKeyboardState
0x494CC9: test    eax, eax
0x494CCB: jnz     short loc_494CF6
0x494CCD: push    1; a3
0x494CCF: push    17h; a2
0x494CD1: mov     ecx, esi; this
0x494CD3: call    InputGlobals__QueryKeyboardState
0x494CD8: test    eax, eax
0x494CDA: jnz     short loc_494CEA
0x494CDC: push    eax; a3
0x494CDD: push    17h; a2
0x494CDF: mov     ecx, esi; this
0x494CE1: call    InputGlobals__QueryKeyboardState
0x494CE6: test    eax, eax
0x494CE8: jz      short loc_494D0A
0x494CEA: mov     al, byte ptr [esp+34h+arg_4]
0x494CEE: add     al, 2
0x494CF0: mov     [esp+34h+arg_8], al
0x494CF4: jmp     short loc_494D0A
0x494CF6: mov     al, byte ptr [esp+34h+arg_4]
0x494CFA: add     al, 1
0x494CFC: mov     [esp+34h+arg_8], al
0x494D00: jmp     short loc_494D0A
0x494D02: mov     dl, byte ptr [esp+34h+arg_4]
0x494D06: mov     [esp+34h+arg_8], dl
0x494D0A: call    sub_5791A0
0x494D0F: mov     al, [esp+34h+arg_8]
0x494D13: cmp     al, 0FFh
0x494D15: jnz     short loc_494D27
0x494D17: call    sub_579970
0x494D1C: call    sub_578D70
0x494D21: mov     [esp+34h+arg_8], al
0x494D25: jmp     short loc_494D5F
0x494D27: cmp     al, 2
0x494D29: jnz     short loc_494D3D
0x494D2B: push    1; arg1
0x494D2D: push    0; canCreate
0x494D2F: call    InterfaceManager_GetSingleton
0x494D34: add     esp, 8
0x494D37: cmp     dword ptr [eax+60h], 0
0x494D3B: jnz     short loc_494D5F
0x494D3D: push    3E9h
0x494D42: call    Menu_GetOpenMenuTile
0x494D47: add     esp, 4
0x494D4A: test    eax, eax
0x494D4C: jz      short loc_494D58
0x494D4E: mov     edx, [eax]
0x494D50: mov     ecx, eax
0x494D52: mov     eax, [edx]
0x494D54: push    1
0x494D56: call    eax
0x494D58: mov     ecx, esi; this
0x494D5A: call    InputGlobals__FlushKeyboardBuffer
0x494D5F: call    sub_579220
0x494D64: push    0
0x494D66: call    sub_579260
0x494D6B: add     esp, 4
0x494D6E: call    sub_5792B0
0x494D73: cmp     [esp+34h+arg_8], 0FFh
0x494D78: jz      loc_494B16
0x494D7E: movsx   eax, [esp+34h+arg_8]
0x494D83: cmp     eax, 5; switch 6 cases
0x494D86: pop     ebp
0x494D87: ja      short def_494D89
0x494D89: jmp     ds:jpt_494D89[eax*4]; switch jump
0x494D90: mov     [esp+30h+var_24], 6; jumptable 00494D89 case 0
0x494D98: jmp     short def_494D89
0x494D9A: mov     [esp+30h+var_24], 7; jumptable 00494D89 case 1
0x494DA2: jmp     short def_494D89
0x494DA4: mov     [esp+30h+var_24], 2; jumptable 00494D89 case 2
0x494DAC: jmp     short def_494D89
0x494DAE: mov     [esp+30h+var_24], 3; jumptable 00494D89 case 3
0x494DB6: jmp     short def_494D89
0x494DB8: mov     [esp+30h+var_24], 4; jumptable 00494D89 case 4
0x494DC0: jmp     short def_494D89
0x494DC2: mov     [esp+30h+var_24], 5; jumptable 00494D89 case 5
