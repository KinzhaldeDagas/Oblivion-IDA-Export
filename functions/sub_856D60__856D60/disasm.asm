0x856D60: push    0FFFFFFFFh
0x856D62: push    offset SEH_856D60
0x856D67: mov     eax, large fs:0
0x856D6D: push    eax
0x856D6E: push    esi
0x856D6F: mov     eax, ds:0B30AACh
0x856D74: xor     eax, esp
0x856D76: push    eax
0x856D77: lea     eax, [esp+14h+var_C]
0x856D7B: mov     large fs:0, eax
0x856D81: mov     esi, ecx
0x856D83: cmp     [esp+14h+arg_14], 0
0x856D88: jnz     loc_857323
0x856D8E: cmp     [esp+14h+arg_18], 0
0x856D93: jz      loc_856EF9
0x856D99: cmp     [esp+14h+arg_1C], 0
0x856D9E: jz      short loc_856DBE
0x856DA0: mov     eax, ds:0B42E8Ch
0x856DA5: test    eax, eax
0x856DA7: jz      loc_85772B
0x856DAD: push    0; _DWORD
0x856DAF: push    offset aShaderError_25; "SHADER ERROR : no shader to handle ADT_"...
0x856DB4: call    eax ; dword_B42E8C
0x856DB6: add     esp, 8
0x856DB9: jmp     loc_85772B
0x856DBE: cmp     [esp+14h+arg_28], 0
0x856DC3: jnz     loc_856E61
0x856DC9: cmp     [esp+14h+arg_24], 0
0x856DCE: jnz     short loc_856E17
0x856DD0: cmp     byte ptr [esp+14h+arg_C], 1
0x856DD5: jnz     loc_857723
0x856DDB: push    10h; Size
0x856DDD: call    FormHeapAlloc
0x856DE2: add     esp, 4
0x856DE5: mov     [esp+14h+arg_C], eax
0x856DE9: test    eax, eax
0x856DEB: mov     [esp+14h+var_4], 0
0x856DF3: jz      loc_857706
0x856DF9: mov     ecx, [esp+14h+arg_4]
0x856DFD: mov     edx, [esp+14h+arg_0]
0x856E01: push    ecx
0x856E02: push    1
0x856E04: push    1
0x856E06: push    78h ; 'x'
0x856E08: push    edx
0x856E09: push    eax
0x856E0A: call    sub_7E2370
0x856E0F: add     esp, 18h
0x856E12: jmp     loc_857708
0x856E17: cmp     byte ptr [esp+14h+arg_C], 1
0x856E1C: jnz     loc_857723
0x856E22: push    10h; Size
0x856E24: call    FormHeapAlloc
0x856E29: add     esp, 4
0x856E2C: mov     [esp+14h+arg_C], eax
0x856E30: test    eax, eax
0x856E32: mov     [esp+14h+var_4], 1
0x856E3A: jz      loc_857706
0x856E40: mov     ecx, [esp+14h+arg_4]
0x856E44: mov     edx, [esp+14h+arg_0]
0x856E48: push    ecx
0x856E49: push    1
0x856E4B: push    1
0x856E4D: push    86h ; '†'
0x856E52: push    edx
0x856E53: push    eax
0x856E54: call    sub_7E2370
0x856E59: add     esp, 18h
0x856E5C: jmp     loc_857708
0x856E61: cmp     [esp+14h+arg_24], 0
0x856E66: jnz     short loc_856EAF
0x856E68: cmp     byte ptr [esp+14h+arg_C], 1
0x856E6D: jnz     loc_857723
0x856E73: push    10h; Size
0x856E75: call    FormHeapAlloc
0x856E7A: add     esp, 4
0x856E7D: mov     [esp+14h+arg_C], eax
0x856E81: test    eax, eax
0x856E83: mov     [esp+14h+var_4], 2
0x856E8B: jz      loc_857706
0x856E91: mov     ecx, [esp+14h+arg_4]
0x856E95: mov     edx, [esp+14h+arg_0]
0x856E99: push    ecx
0x856E9A: push    1
0x856E9C: push    1
0x856E9E: push    7Bh ; '{'
0x856EA0: push    edx
0x856EA1: push    eax
0x856EA2: call    sub_7E2370
0x856EA7: add     esp, 18h
0x856EAA: jmp     loc_857708
0x856EAF: cmp     byte ptr [esp+14h+arg_C], 1
0x856EB4: jnz     loc_857723
0x856EBA: push    10h; Size
0x856EBC: call    FormHeapAlloc
0x856EC1: add     esp, 4
0x856EC4: mov     [esp+14h+arg_C], eax
0x856EC8: test    eax, eax
0x856ECA: mov     [esp+14h+var_4], 3
0x856ED2: jz      loc_857706
0x856ED8: mov     ecx, [esp+14h+arg_4]
0x856EDC: mov     edx, [esp+14h+arg_0]
0x856EE0: push    ecx
0x856EE1: push    1
0x856EE3: push    1
0x856EE5: push    89h ; '‰'
0x856EEA: push    edx
0x856EEB: push    eax
0x856EEC: call    sub_7E2370
0x856EF1: add     esp, 18h
0x856EF4: jmp     loc_857708
0x856EF9: cmp     [esp+14h+arg_1C], 0
0x856EFE: jz      loc_856F9C
0x856F04: cmp     [esp+14h+arg_24], 0
0x856F09: jnz     short loc_856F52
0x856F0B: cmp     byte ptr [esp+14h+arg_C], 1
0x856F10: jnz     loc_857723
0x856F16: push    10h; Size
0x856F18: call    FormHeapAlloc
0x856F1D: add     esp, 4
0x856F20: mov     [esp+14h+arg_C], eax
0x856F24: test    eax, eax
0x856F26: mov     [esp+14h+var_4], 4
0x856F2E: jz      loc_857706
0x856F34: mov     ecx, [esp+14h+arg_4]
0x856F38: mov     edx, [esp+14h+arg_0]
0x856F3C: push    ecx
0x856F3D: push    1
0x856F3F: push    1
0x856F41: push    79h ; 'y'
0x856F43: push    edx
0x856F44: push    eax
0x856F45: call    sub_7E2370
0x856F4A: add     esp, 18h
0x856F4D: jmp     loc_857708
0x856F52: cmp     byte ptr [esp+14h+arg_C], 1
0x856F57: jnz     loc_857723
0x856F5D: push    10h; Size
0x856F5F: call    FormHeapAlloc
0x856F64: add     esp, 4
0x856F67: mov     [esp+14h+arg_C], eax
0x856F6B: test    eax, eax
0x856F6D: mov     [esp+14h+var_4], 5
0x856F75: jz      loc_857706
0x856F7B: mov     ecx, [esp+14h+arg_4]
0x856F7F: mov     edx, [esp+14h+arg_0]
0x856F83: push    ecx
0x856F84: push    1
0x856F86: push    1
0x856F88: push    87h ; '‡'
0x856F8D: push    edx
0x856F8E: push    eax
0x856F8F: call    sub_7E2370
0x856F94: add     esp, 18h
0x856F97: jmp     loc_857708
0x856F9C: cmp     [esp+14h+arg_28], 0
0x856FA1: jnz     loc_85728B
0x856FA7: cmp     [esp+14h+arg_2C], 0
0x856FAC: jnz     loc_8571F3
0x856FB2: cmp     [esp+14h+arg_24], 0
0x856FB7: jnz     loc_857103
0x856FBD: cmp     [esp+14h+arg_30], 0
0x856FC2: jnz     loc_857068
0x856FC8: cmp     [esp+14h+arg_34], 0
0x856FCD: jnz     loc_85706F
0x856FD3: cmp     [esp+14h+arg_38], 0
0x856FD8: jnz     short loc_857021
0x856FDA: cmp     byte ptr [esp+14h+arg_C], 1
0x856FDF: jnz     loc_857723
0x856FE5: push    10h; Size
0x856FE7: call    FormHeapAlloc
0x856FEC: add     esp, 4
0x856FEF: mov     [esp+14h+arg_C], eax
0x856FF3: test    eax, eax
0x856FF5: mov     [esp+14h+var_4], 6
0x856FFD: jz      loc_857706
0x857003: mov     ecx, [esp+14h+arg_4]
0x857007: mov     edx, [esp+14h+arg_0]
0x85700B: push    ecx
0x85700C: push    1
0x85700E: push    1
0x857010: push    76h ; 'v'
0x857012: push    edx
0x857013: push    eax
0x857014: call    sub_7E2370
0x857019: add     esp, 18h
0x85701C: jmp     loc_857708
0x857021: cmp     byte ptr [esp+14h+arg_C], 1
0x857026: jnz     loc_857723
0x85702C: push    10h; Size
0x85702E: call    FormHeapAlloc
0x857033: add     esp, 4
0x857036: mov     [esp+14h+arg_C], eax
0x85703A: test    eax, eax
0x85703C: mov     [esp+14h+var_4], 7
0x857044: jz      loc_857706
0x85704A: mov     ecx, [esp+14h+arg_4]
0x85704E: mov     edx, [esp+14h+arg_0]
0x857052: push    ecx
0x857053: push    1
0x857055: push    1
0x857057: push    7Ch ; '|'
0x857059: push    edx
0x85705A: push    eax
0x85705B: call    sub_7E2370
0x857060: add     esp, 18h
0x857063: jmp     loc_857708
0x857068: cmp     [esp+14h+arg_34], 0
0x85706D: jz      short loc_8570B9
0x85706F: cmp     byte ptr [esp+14h+arg_C], 1
0x857074: jnz     loc_857723
0x85707A: push    10h; Size
0x85707C: call    FormHeapAlloc
0x857081: add     esp, 4
0x857084: mov     [esp+14h+arg_C], eax
0x857088: test    eax, eax
0x85708A: mov     [esp+14h+var_4], 8
0x857092: jz      loc_857706
0x857098: mov     ecx, [esp+14h+arg_4]
0x85709C: mov     edx, [esp+14h+arg_0]
0x8570A0: push    ecx
0x8570A1: push    1
0x8570A3: push    1
0x8570A5: push    17Bh
0x8570AA: push    edx
0x8570AB: push    eax
0x8570AC: call    sub_7E2370
0x8570B1: add     esp, 18h
0x8570B4: jmp     loc_857708
0x8570B9: cmp     byte ptr [esp+14h+arg_C], 1
0x8570BE: jnz     loc_857723
0x8570C4: push    10h; Size
0x8570C6: call    FormHeapAlloc
0x8570CB: add     esp, 4
0x8570CE: mov     [esp+14h+arg_C], eax
0x8570D2: test    eax, eax
0x8570D4: mov     [esp+14h+var_4], 9
0x8570DC: jz      loc_857706
0x8570E2: mov     ecx, [esp+14h+arg_4]
0x8570E6: mov     edx, [esp+14h+arg_0]
0x8570EA: push    ecx
0x8570EB: push    1
0x8570ED: push    1
0x8570EF: push    82h ; '‚'
0x8570F4: push    edx
0x8570F5: push    eax
0x8570F6: call    sub_7E2370
0x8570FB: add     esp, 18h
0x8570FE: jmp     loc_857708
0x857103: cmp     [esp+14h+arg_30], 0
0x857108: jnz     loc_8571A9
0x85710E: cmp     [esp+14h+arg_38], 0
0x857113: jnz     short loc_85715F
0x857115: cmp     byte ptr [esp+14h+arg_C], 1
0x85711A: jnz     loc_857723
0x857120: push    10h; Size
0x857122: call    FormHeapAlloc
0x857127: add     esp, 4
0x85712A: mov     [esp+14h+arg_C], eax
0x85712E: test    eax, eax
0x857130: mov     [esp+14h+var_4], 0Ah
0x857138: jz      loc_857706
0x85713E: mov     ecx, [esp+14h+arg_4]
0x857142: mov     edx, [esp+14h+arg_0]
0x857146: push    ecx
0x857147: push    1
0x857149: push    1
0x85714B: push    84h ; '„'
0x857150: push    edx
0x857151: push    eax
0x857152: call    sub_7E2370
0x857157: add     esp, 18h
0x85715A: jmp     loc_857708
0x85715F: cmp     byte ptr [esp+14h+arg_C], 1
0x857164: jnz     loc_857723
0x85716A: push    10h; Size
0x85716C: call    FormHeapAlloc
0x857171: add     esp, 4
0x857174: mov     [esp+14h+arg_C], eax
0x857178: test    eax, eax
0x85717A: mov     [esp+14h+var_4], 0Bh
0x857182: jz      loc_857706
0x857188: mov     ecx, [esp+14h+arg_4]
0x85718C: mov     edx, [esp+14h+arg_0]
0x857190: push    ecx
0x857191: push    1
0x857193: push    1
0x857195: push    8Ah ; 'Š'
0x85719A: push    edx
0x85719B: push    eax
0x85719C: call    sub_7E2370
0x8571A1: add     esp, 18h
0x8571A4: jmp     loc_857708
0x8571A9: cmp     byte ptr [esp+14h+arg_C], 1
0x8571AE: jnz     loc_857723
0x8571B4: push    10h; Size
0x8571B6: call    FormHeapAlloc
0x8571BB: add     esp, 4
0x8571BE: mov     [esp+14h+arg_C], eax
0x8571C2: test    eax, eax
0x8571C4: mov     [esp+14h+var_4], 0Ch
0x8571CC: jz      loc_857706
0x8571D2: mov     ecx, [esp+14h+arg_4]
0x8571D6: mov     edx, [esp+14h+arg_0]
0x8571DA: push    ecx
0x8571DB: push    1
0x8571DD: push    1
0x8571DF: push    90h
0x8571E4: push    edx
0x8571E5: push    eax
0x8571E6: call    sub_7E2370
0x8571EB: add     esp, 18h
0x8571EE: jmp     loc_857708
0x8571F3: cmp     [esp+14h+arg_24], 0
0x8571F8: jnz     short loc_857241
0x8571FA: cmp     byte ptr [esp+14h+arg_C], 1
0x8571FF: jnz     loc_857723
0x857205: push    10h; Size
0x857207: call    FormHeapAlloc
0x85720C: add     esp, 4
0x85720F: mov     [esp+14h+arg_C], eax
0x857213: test    eax, eax
0x857215: mov     [esp+14h+var_4], 0Dh
0x85721D: jz      loc_857706
0x857223: mov     ecx, [esp+14h+arg_4]
0x857227: mov     edx, [esp+14h+arg_0]
0x85722B: push    ecx
0x85722C: push    1
0x85722E: push    1
0x857230: push    77h ; 'w'
0x857232: push    edx
0x857233: push    eax
0x857234: call    sub_7E2370
0x857239: add     esp, 18h
0x85723C: jmp     loc_857708
0x857241: cmp     byte ptr [esp+14h+arg_C], 1
0x857246: jnz     loc_857723
0x85724C: push    10h; Size
0x85724E: call    FormHeapAlloc
0x857253: add     esp, 4
0x857256: mov     [esp+14h+arg_C], eax
0x85725A: test    eax, eax
0x85725C: mov     [esp+14h+var_4], 0Eh
0x857264: jz      loc_857706
0x85726A: mov     ecx, [esp+14h+arg_4]
0x85726E: mov     edx, [esp+14h+arg_0]
0x857272: push    ecx
0x857273: push    1
0x857275: push    1
0x857277: push    85h ; '…'
0x85727C: push    edx
0x85727D: push    eax
0x85727E: call    sub_7E2370
0x857283: add     esp, 18h
0x857286: jmp     loc_857708
0x85728B: cmp     [esp+14h+arg_24], 0
0x857290: jnz     short loc_8572D9
0x857292: cmp     byte ptr [esp+14h+arg_C], 1
0x857297: jnz     loc_857723
0x85729D: push    10h; Size
0x85729F: call    FormHeapAlloc
0x8572A4: add     esp, 4
0x8572A7: mov     [esp+14h+arg_C], eax
0x8572AB: test    eax, eax
0x8572AD: mov     [esp+14h+var_4], 0Fh
0x8572B5: jz      loc_857706
0x8572BB: mov     ecx, [esp+14h+arg_4]
0x8572BF: mov     edx, [esp+14h+arg_0]
0x8572C3: push    ecx
0x8572C4: push    1
0x8572C6: push    1
0x8572C8: push    7Ah ; 'z'
0x8572CA: push    edx
0x8572CB: push    eax
0x8572CC: call    sub_7E2370
0x8572D1: add     esp, 18h
0x8572D4: jmp     loc_857708
0x8572D9: cmp     byte ptr [esp+14h+arg_C], 1
0x8572DE: jnz     loc_857723
0x8572E4: push    10h; Size
0x8572E6: call    FormHeapAlloc
0x8572EB: add     esp, 4
0x8572EE: mov     [esp+14h+arg_C], eax
0x8572F2: test    eax, eax
0x8572F4: mov     [esp+14h+var_4], 10h
0x8572FC: jz      loc_857706
0x857302: mov     ecx, [esp+14h+arg_4]
0x857306: mov     edx, [esp+14h+arg_0]
0x85730A: push    ecx
0x85730B: push    1
0x85730D: push    1
0x85730F: push    88h ; 'ˆ'
0x857314: push    edx
0x857315: push    eax
0x857316: call    sub_7E2370
0x85731B: add     esp, 18h
0x85731E: jmp     loc_857708
0x857323: cmp     [esp+14h+arg_18], 0
0x857328: jz      loc_857491
0x85732E: cmp     [esp+14h+arg_1C], 0
0x857333: jz      short loc_857353
0x857335: mov     eax, ds:0B42E8Ch
0x85733A: test    eax, eax
0x85733C: jz      loc_85772B
0x857342: push    0; _DWORD
0x857344: push    offset aShaderError_26; "SHADER ERROR : no shader to handle ADT_"...
0x857349: call    eax ; dword_B42E8C
0x85734B: add     esp, 8
0x85734E: jmp     loc_85772B
0x857353: cmp     [esp+14h+arg_28], 0
0x857358: jnz     loc_8573F6
0x85735E: cmp     [esp+14h+arg_24], 0
0x857363: jnz     short loc_8573AC
0x857365: cmp     byte ptr [esp+14h+arg_C], 1
0x85736A: jnz     loc_857723
0x857370: push    10h; Size
0x857372: call    FormHeapAlloc
0x857377: add     esp, 4
0x85737A: mov     [esp+14h+arg_C], eax
0x85737E: test    eax, eax
0x857380: mov     [esp+14h+var_4], 11h
0x857388: jz      loc_857706
0x85738E: mov     ecx, [esp+14h+arg_4]
0x857392: mov     edx, [esp+14h+arg_0]
0x857396: push    ecx
0x857397: push    1
0x857399: push    1
0x85739B: push    7Eh ; '~'
0x85739D: push    edx
0x85739E: push    eax
0x85739F: call    sub_7E2370
0x8573A4: add     esp, 18h
0x8573A7: jmp     loc_857708
0x8573AC: cmp     byte ptr [esp+14h+arg_C], 1
0x8573B1: jnz     loc_857723
0x8573B7: push    10h; Size
0x8573B9: call    FormHeapAlloc
0x8573BE: add     esp, 4
0x8573C1: mov     [esp+14h+arg_C], eax
0x8573C5: test    eax, eax
0x8573C7: mov     [esp+14h+var_4], 12h
0x8573CF: jz      loc_857706
0x8573D5: mov     ecx, [esp+14h+arg_4]
0x8573D9: mov     edx, [esp+14h+arg_0]
0x8573DD: push    ecx
0x8573DE: push    1
0x8573E0: push    1
0x8573E2: push    8Ch ; 'Œ'
0x8573E7: push    edx
0x8573E8: push    eax
0x8573E9: call    sub_7E2370
0x8573EE: add     esp, 18h
0x8573F1: jmp     loc_857708
0x8573F6: cmp     [esp+14h+arg_24], 0
0x8573FB: jnz     short loc_857447
0x8573FD: cmp     byte ptr [esp+14h+arg_C], 1
0x857402: jnz     loc_857723
0x857408: push    10h; Size
0x85740A: call    FormHeapAlloc
0x85740F: add     esp, 4
0x857412: mov     [esp+14h+arg_C], eax
0x857416: test    eax, eax
0x857418: mov     [esp+14h+var_4], 13h
0x857420: jz      loc_857706
0x857426: mov     ecx, [esp+14h+arg_4]
0x85742A: mov     edx, [esp+14h+arg_0]
0x85742E: push    ecx
0x85742F: push    1
0x857431: push    1
0x857433: push    81h
0x857438: push    edx
0x857439: push    eax
0x85743A: call    sub_7E2370
0x85743F: add     esp, 18h
0x857442: jmp     loc_857708
0x857447: cmp     byte ptr [esp+14h+arg_C], 1
0x85744C: jnz     loc_857723
0x857452: push    10h; Size
0x857454: call    FormHeapAlloc
0x857459: add     esp, 4
0x85745C: mov     [esp+14h+arg_C], eax
0x857460: test    eax, eax
0x857462: mov     [esp+14h+var_4], 14h
0x85746A: jz      loc_857706
0x857470: mov     ecx, [esp+14h+arg_4]
0x857474: mov     edx, [esp+14h+arg_0]
0x857478: push    ecx
0x857479: push    1
0x85747B: push    1
0x85747D: push    8Fh
0x857482: push    edx
0x857483: push    eax
0x857484: call    sub_7E2370
0x857489: add     esp, 18h
0x85748C: jmp     loc_857708
0x857491: cmp     [esp+14h+arg_1C], 0
0x857496: jz      loc_857534
0x85749C: cmp     [esp+14h+arg_24], 0
0x8574A1: jnz     short loc_8574EA
0x8574A3: cmp     byte ptr [esp+14h+arg_C], 1
0x8574A8: jnz     loc_857723
0x8574AE: push    10h; Size
0x8574B0: call    FormHeapAlloc
0x8574B5: add     esp, 4
0x8574B8: mov     [esp+14h+arg_C], eax
0x8574BC: test    eax, eax
0x8574BE: mov     [esp+14h+var_4], 15h
0x8574C6: jz      loc_857706
0x8574CC: mov     ecx, [esp+14h+arg_4]
0x8574D0: mov     edx, [esp+14h+arg_0]
0x8574D4: push    ecx
0x8574D5: push    1
0x8574D7: push    1
0x8574D9: push    7Fh
0x8574DB: push    edx
0x8574DC: push    eax
0x8574DD: call    sub_7E2370
0x8574E2: add     esp, 18h
0x8574E5: jmp     loc_857708
0x8574EA: cmp     byte ptr [esp+14h+arg_C], 1
0x8574EF: jnz     loc_857723
0x8574F5: push    10h; Size
0x8574F7: call    FormHeapAlloc
0x8574FC: add     esp, 4
0x8574FF: mov     [esp+14h+arg_C], eax
0x857503: test    eax, eax
0x857505: mov     [esp+14h+var_4], 16h
0x85750D: jz      loc_857706
0x857513: mov     ecx, [esp+14h+arg_4]
0x857517: mov     edx, [esp+14h+arg_0]
0x85751B: push    ecx
0x85751C: push    1
0x85751E: push    1
0x857520: push    8Dh
0x857525: push    edx
0x857526: push    eax
0x857527: call    sub_7E2370
0x85752C: add     esp, 18h
0x85752F: jmp     loc_857708
0x857534: cmp     [esp+14h+arg_28], 0
0x857539: jnz     loc_85767D
0x85753F: cmp     [esp+14h+arg_24], 0
0x857544: jnz     loc_8575E2
0x85754A: cmp     [esp+14h+arg_38], 0
0x85754F: jnz     short loc_857598
0x857551: cmp     byte ptr [esp+14h+arg_C], 1
0x857556: jnz     loc_857723
0x85755C: push    10h; Size
0x85755E: call    FormHeapAlloc
0x857563: add     esp, 4
0x857566: mov     [esp+14h+arg_C], eax
0x85756A: test    eax, eax
0x85756C: mov     [esp+14h+var_4], 17h
0x857574: jz      loc_857706
0x85757A: mov     ecx, [esp+14h+arg_4]
0x85757E: mov     edx, [esp+14h+arg_0]
0x857582: push    ecx
0x857583: push    1
0x857585: push    1
0x857587: push    7Dh ; '}'
0x857589: push    edx
0x85758A: push    eax
0x85758B: call    sub_7E2370
0x857590: add     esp, 18h
0x857593: jmp     loc_857708
0x857598: cmp     byte ptr [esp+14h+arg_C], 1
0x85759D: jnz     loc_857723
0x8575A3: push    10h; Size
0x8575A5: call    FormHeapAlloc
0x8575AA: add     esp, 4
0x8575AD: mov     [esp+14h+arg_C], eax
0x8575B1: test    eax, eax
0x8575B3: mov     [esp+14h+var_4], 18h
0x8575BB: jz      loc_857706
0x8575C1: mov     ecx, [esp+14h+arg_4]
0x8575C5: mov     edx, [esp+14h+arg_0]
0x8575C9: push    ecx
0x8575CA: push    1
0x8575CC: push    1
0x8575CE: push    83h ; 'ƒ'
0x8575D3: push    edx
0x8575D4: push    eax
0x8575D5: call    sub_7E2370
0x8575DA: add     esp, 18h
0x8575DD: jmp     loc_857708
0x8575E2: cmp     [esp+14h+arg_38], 0
0x8575E7: jnz     short loc_857633
0x8575E9: cmp     byte ptr [esp+14h+arg_C], 1
0x8575EE: jnz     loc_857723
0x8575F4: push    10h; Size
0x8575F6: call    FormHeapAlloc
0x8575FB: add     esp, 4
0x8575FE: mov     [esp+14h+arg_C], eax
0x857602: test    eax, eax
0x857604: mov     [esp+14h+var_4], 19h
0x85760C: jz      loc_857706
0x857612: mov     ecx, [esp+14h+arg_4]
0x857616: mov     edx, [esp+14h+arg_0]
0x85761A: push    ecx
0x85761B: push    1
0x85761D: push    1
0x85761F: push    8Bh ; '‹'
0x857624: push    edx
0x857625: push    eax
0x857626: call    sub_7E2370
0x85762B: add     esp, 18h
0x85762E: jmp     loc_857708
0x857633: cmp     byte ptr [esp+14h+arg_C], 1
0x857638: jnz     loc_857723
0x85763E: push    10h; Size
0x857640: call    FormHeapAlloc
0x857645: add     esp, 4
0x857648: mov     [esp+14h+arg_C], eax
0x85764C: test    eax, eax
0x85764E: mov     [esp+14h+var_4], 1Ah
0x857656: jz      loc_857706
0x85765C: mov     ecx, [esp+14h+arg_4]
0x857660: mov     edx, [esp+14h+arg_0]
0x857664: push    ecx
0x857665: push    1
0x857667: push    1
0x857669: push    91h ; '‘'
0x85766E: push    edx
0x85766F: push    eax
0x857670: call    sub_7E2370
0x857675: add     esp, 18h
0x857678: jmp     loc_857708
0x85767D: cmp     [esp+14h+arg_24], 0
0x857682: jnz     short loc_8576C7
0x857684: cmp     byte ptr [esp+14h+arg_C], 1
0x857689: jnz     loc_857723
0x85768F: push    10h; Size
0x857691: call    FormHeapAlloc
0x857696: add     esp, 4
0x857699: mov     [esp+14h+arg_C], eax
0x85769D: test    eax, eax
0x85769F: mov     [esp+14h+var_4], 1Bh
0x8576A7: jz      short loc_857706
0x8576A9: mov     ecx, [esp+14h+arg_4]
0x8576AD: mov     edx, [esp+14h+arg_0]
0x8576B1: push    ecx
0x8576B2: push    1
0x8576B4: push    1
0x8576B6: push    80h ; '€'
0x8576BB: push    edx
0x8576BC: push    eax
0x8576BD: call    sub_7E2370
0x8576C2: add     esp, 18h
0x8576C5: jmp     short loc_857708
0x8576C7: cmp     byte ptr [esp+14h+arg_C], 1
0x8576CC: jnz     short loc_857723
0x8576CE: push    10h; Size
0x8576D0: call    FormHeapAlloc
0x8576D5: add     esp, 4
0x8576D8: mov     [esp+14h+arg_C], eax
0x8576DC: test    eax, eax
0x8576DE: mov     [esp+14h+var_4], 1Ch
0x8576E6: jz      short loc_857706
0x8576E8: mov     ecx, [esp+14h+arg_4]
0x8576EC: mov     edx, [esp+14h+arg_0]
0x8576F0: push    ecx
0x8576F1: push    1
0x8576F3: push    1
0x8576F5: push    8Eh ; 'Ž'
0x8576FA: push    edx
0x8576FB: push    eax
0x8576FC: call    sub_7E2370
0x857701: add     esp, 18h
0x857704: jmp     short loc_857708
0x857706: xor     eax, eax
0x857708: mov     [esp+14h+arg_C], eax
0x85770C: lea     eax, [esp+14h+arg_C]
0x857710: push    eax
0x857711: lea     ecx, [esi+28h]
0x857714: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85771C: call    sub_5B1E20
0x857721: jmp     short loc_85772B
0x857723: mov     eax, [esp+14h+arg_8]
0x857727: add     word ptr [eax], 1
0x85772B: mov     ecx, [esp+14h+arg_10]
0x85772F: mov     byte ptr [ecx], 0
0x857732: mov     ecx, [esp+14h+var_C]
0x857736: mov     large fs:0, ecx
0x85773D: pop     ecx
0x85773E: pop     esi
0x85773F: add     esp, 0Ch
0x857742: retn    3Ch ; '<'
