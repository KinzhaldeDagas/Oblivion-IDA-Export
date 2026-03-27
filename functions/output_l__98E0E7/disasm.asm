0x98E0E7: push    ebp
0x98E0E8: lea     ebp, [esp-1F8h]
0x98E0EF: sub     esp, 278h
0x98E0F5: mov     eax, ___security_cookie
0x98E0FA: xor     eax, ebp
0x98E0FC: mov     [ebp+1F8h+var_4], eax
0x98E102: mov     eax, [ebp+1F8h+arg_0]
0x98E108: push    ebx
0x98E109: mov     ebx, [ebp+1F8h+arg_4]
0x98E10F: push    esi
0x98E110: xor     esi, esi
0x98E112: push    edi; WCh
0x98E113: mov     edi, [ebp+1F8h+arg_C]
0x98E119: push    [ebp+1F8h+arg_8]; struct localeinfo_struct *
0x98E11F: lea     ecx, [ebp+1F8h+Locale]; this
0x98E122: mov     [ebp+1F8h+File], eax
0x98E125: mov     [ebp+1F8h+var_224], edi
0x98E128: mov     [ebp+1F8h+var_244], esi
0x98E12B: mov     [ebp+1F8h+var_210], esi
0x98E12E: mov     [ebp+1F8h+var_238], esi
0x98E131: mov     [ebp+1F8h+var_218], esi
0x98E134: mov     [ebp+1F8h+var_234], esi
0x98E137: mov     [ebp+1F8h+var_248], esi
0x98E13A: mov     [ebp+1F8h+var_23C], esi
0x98E13D: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98E142: cmp     [ebp+1F8h+File], esi
0x98E145: jnz     short loc_98E174
0x98E147: call    __errno
0x98E14C: push    esi
0x98E14D: push    esi
0x98E14E: push    esi
0x98E14F: push    esi
0x98E150: mov     dword ptr [eax], 16h
0x98E156: push    esi
0x98E157: call    __invalid_parameter
0x98E15C: add     esp, 14h
0x98E15F: cmp     [ebp+1F8h+var_250], 0
0x98E163: jz      short loc_98E16C
0x98E165: mov     eax, [ebp+1F8h+var_254]
0x98E168: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98E16C: or      eax, 0FFFFFFFFh
0x98E16F: jmp     loc_98EA44
0x98E174: mov     eax, [ebp+1F8h+File]
0x98E177: test    byte ptr [eax+0Ch], 40h
0x98E17B: jnz     loc_98E225
0x98E181: push    eax; File
0x98E182: call    __fileno
0x98E187: cmp     eax, 0FFFFFFFFh
0x98E18A: pop     ecx
0x98E18B: jz      short loc_98E1C3
0x98E18D: push    [ebp+1F8h+File]; File
0x98E190: call    __fileno
0x98E195: cmp     eax, 0FFFFFFFEh
0x98E198: pop     ecx
0x98E199: jz      short loc_98E1C3
0x98E19B: push    [ebp+1F8h+File]; File
0x98E19E: call    __fileno
0x98E1A3: push    [ebp+1F8h+File]; File
0x98E1A6: sar     eax, 5
0x98E1A9: lea     esi, ds:0BAAAC0h[eax*4]
0x98E1B0: call    __fileno
0x98E1B5: and     eax, 1Fh
0x98E1B8: imul    eax, 28h ; '('
0x98E1BB: add     eax, [esi]
0x98E1BD: pop     ecx
0x98E1BE: pop     ecx
0x98E1BF: xor     esi, esi
0x98E1C1: jmp     short loc_98E1C8
0x98E1C3: mov     eax, offset aA_1
0x98E1C8: test    byte ptr [eax+24h], 7Fh
0x98E1CC: jnz     loc_98E147
0x98E1D2: push    [ebp+1F8h+File]; File
0x98E1D5: call    __fileno
0x98E1DA: cmp     eax, 0FFFFFFFFh
0x98E1DD: pop     ecx
0x98E1DE: jz      short loc_98E216
0x98E1E0: push    [ebp+1F8h+File]; File
0x98E1E3: call    __fileno
0x98E1E8: cmp     eax, 0FFFFFFFEh
0x98E1EB: pop     ecx
0x98E1EC: jz      short loc_98E216
0x98E1EE: push    [ebp+1F8h+File]; File
0x98E1F1: call    __fileno
0x98E1F6: push    [ebp+1F8h+File]; File
0x98E1F9: sar     eax, 5
0x98E1FC: lea     esi, ds:0BAAAC0h[eax*4]
0x98E203: call    __fileno
0x98E208: and     eax, 1Fh
0x98E20B: imul    eax, 28h ; '('
0x98E20E: add     eax, [esi]
0x98E210: pop     ecx
0x98E211: pop     ecx
0x98E212: xor     esi, esi
0x98E214: jmp     short loc_98E21B
0x98E216: mov     eax, offset aA_1
0x98E21B: test    byte ptr [eax+24h], 80h
0x98E21F: jnz     loc_98E147
0x98E225: cmp     ebx, esi
0x98E227: jz      loc_98E147
0x98E22D: mov     dl, [ebx]
0x98E22F: xor     ecx, ecx
0x98E231: test    dl, dl
0x98E233: mov     [ebp+1F8h+var_22C], esi
0x98E236: mov     [ebp+1F8h+SizeConverted], esi
0x98E239: mov     [ebp+1F8h+Memory], esi
0x98E23C: mov     [ebp+1F8h+var_211], dl
0x98E23F: jz      loc_98EA34
0x98E245: inc     ebx
0x98E246: cmp     [ebp+1F8h+var_22C], 0
0x98E24A: mov     [ebp+1F8h+var_240], ebx
0x98E24D: jl      loc_98EA34
0x98E253: mov     al, dl
0x98E255: sub     al, 20h ; ' '
0x98E257: cmp     al, 58h ; 'X'
0x98E259: ja      short loc_98E26C
0x98E25B: movsx   eax, dl
0x98E25E: movzx   eax, byte ptr [eax+0AA4F80h]
0x98E265: and     eax, 0Fh
0x98E268: xor     esi, esi
0x98E26A: jmp     short loc_98E270
0x98E26C: xor     esi, esi
0x98E26E: xor     eax, eax
0x98E270: movsx   eax, ds:byte_AA4FA0[ecx+eax*8]
0x98E278: push    7
0x98E27A: sar     eax, 4
0x98E27D: pop     ecx
0x98E27E: cmp     eax, ecx; switch 8 cases
0x98E280: mov     [ebp+1F8h+var_26C], eax
0x98E283: ja      __output_l___def_98E289
0x98E289: jmp     ds:jpt_98E289[eax*4]; switch jump
0x98E290: or      [ebp+1F8h+var_218], 0FFFFFFFFh; jumptable 0098E289 case 1
0x98E294: mov     [ebp+1F8h+var_270], esi
0x98E297: mov     [ebp+1F8h+var_248], esi
0x98E29A: mov     [ebp+1F8h+var_238], esi
0x98E29D: mov     [ebp+1F8h+var_234], esi
0x98E2A0: mov     [ebp+1F8h+var_210], esi
0x98E2A3: mov     [ebp+1F8h+var_23C], esi
0x98E2A6: jmp     __output_l___def_98E289
0x98E2AB: movsx   eax, dl; jumptable 0098E289 case 2
0x98E2AE: sub     eax, 20h ; ' '
0x98E2B1: jz      short loc_98E2F1
0x98E2B3: sub     eax, 3
0x98E2B6: jz      short loc_98E2E5
0x98E2B8: sub     eax, 8
0x98E2BB: jz      short loc_98E2DC
0x98E2BD: dec     eax
0x98E2BE: dec     eax
0x98E2BF: jz      short loc_98E2D3
0x98E2C1: sub     eax, 3
0x98E2C4: jnz     __output_l___def_98E289
0x98E2CA: or      [ebp+1F8h+var_210], 8
0x98E2CE: jmp     __output_l___def_98E289
0x98E2D3: or      [ebp+1F8h+var_210], 4
0x98E2D7: jmp     __output_l___def_98E289
0x98E2DC: or      [ebp+1F8h+var_210], 1
0x98E2E0: jmp     __output_l___def_98E289
0x98E2E5: or      [ebp+1F8h+var_210], 80h
0x98E2EC: jmp     __output_l___def_98E289
0x98E2F1: or      [ebp+1F8h+var_210], 2
0x98E2F5: jmp     __output_l___def_98E289
0x98E2FA: cmp     dl, 2Ah ; '*'; jumptable 0098E289 case 3
0x98E2FD: jnz     short loc_98E31F
0x98E2FF: add     edi, 4
0x98E302: mov     [ebp+1F8h+var_224], edi
0x98E305: mov     edi, [edi-4]
0x98E308: cmp     edi, esi
0x98E30A: mov     [ebp+1F8h+var_238], edi
0x98E30D: jge     __output_l___def_98E289
0x98E313: or      [ebp+1F8h+var_210], 4
0x98E317: neg     [ebp+1F8h+var_238]
0x98E31A: jmp     __output_l___def_98E289
0x98E31F: mov     eax, [ebp+1F8h+var_238]
0x98E322: imul    eax, 0Ah
0x98E325: movsx   ecx, dl
0x98E328: lea     eax, [eax+ecx-30h]
0x98E32C: mov     [ebp+1F8h+var_238], eax
0x98E32F: jmp     __output_l___def_98E289
0x98E334: mov     [ebp+1F8h+var_218], esi; jumptable 0098E289 case 4
0x98E337: jmp     __output_l___def_98E289
0x98E33C: cmp     dl, 2Ah ; '*'; jumptable 0098E289 case 5
0x98E33F: jnz     short loc_98E35E
0x98E341: add     edi, 4
0x98E344: mov     [ebp+1F8h+var_224], edi
0x98E347: mov     edi, [edi-4]
0x98E34A: cmp     edi, esi
0x98E34C: mov     [ebp+1F8h+var_218], edi
0x98E34F: jge     __output_l___def_98E289
0x98E355: or      [ebp+1F8h+var_218], 0FFFFFFFFh
0x98E359: jmp     __output_l___def_98E289
0x98E35E: mov     eax, [ebp+1F8h+var_218]
0x98E361: imul    eax, 0Ah
0x98E364: movsx   ecx, dl
0x98E367: lea     eax, [eax+ecx-30h]
0x98E36B: mov     [ebp+1F8h+var_218], eax
0x98E36E: jmp     __output_l___def_98E289
0x98E373: cmp     dl, 49h ; 'I'; jumptable 0098E289 case 6
0x98E376: jz      short loc_98E3BE
0x98E378: cmp     dl, 68h ; 'h'
0x98E37B: jz      short loc_98E3B5
0x98E37D: cmp     dl, 6Ch ; 'l'
0x98E380: jz      short loc_98E397
0x98E382: cmp     dl, 77h ; 'w'
0x98E385: jnz     __output_l___def_98E289
0x98E38B: or      [ebp+1F8h+var_210], 800h
0x98E392: jmp     __output_l___def_98E289
0x98E397: cmp     byte ptr [ebx], 6Ch ; 'l'
0x98E39A: jnz     short loc_98E3AC
0x98E39C: inc     ebx
0x98E39D: or      [ebp+1F8h+var_210], 1000h
0x98E3A4: mov     [ebp+1F8h+var_240], ebx
0x98E3A7: jmp     __output_l___def_98E289
0x98E3AC: or      [ebp+1F8h+var_210], 10h
0x98E3B0: jmp     __output_l___def_98E289
0x98E3B5: or      [ebp+1F8h+var_210], 20h
0x98E3B9: jmp     __output_l___def_98E289
0x98E3BE: mov     al, [ebx]
0x98E3C0: cmp     al, 36h ; '6'
0x98E3C2: jnz     short loc_98E3DB
0x98E3C4: cmp     byte ptr [ebx+1], 34h ; '4'
0x98E3C8: jnz     short loc_98E3DB
0x98E3CA: inc     ebx
0x98E3CB: inc     ebx
0x98E3CC: or      [ebp+1F8h+var_210], 8000h
0x98E3D3: mov     [ebp+1F8h+var_240], ebx
0x98E3D6: jmp     __output_l___def_98E289
0x98E3DB: cmp     al, 33h ; '3'
0x98E3DD: jnz     short loc_98E3F6
0x98E3DF: cmp     byte ptr [ebx+1], 32h ; '2'
0x98E3E3: jnz     short loc_98E3F6
0x98E3E5: inc     ebx
0x98E3E6: inc     ebx
0x98E3E7: and     [ebp+1F8h+var_210], 0FFFF7FFFh
0x98E3EE: mov     [ebp+1F8h+var_240], ebx
0x98E3F1: jmp     __output_l___def_98E289
0x98E3F6: cmp     al, 64h ; 'd'
0x98E3F8: jz      __output_l___def_98E289
0x98E3FE: cmp     al, 69h ; 'i'
0x98E400: jz      __output_l___def_98E289
0x98E406: cmp     al, 6Fh ; 'o'
0x98E408: jz      __output_l___def_98E289
0x98E40E: cmp     al, 75h ; 'u'
0x98E410: jz      __output_l___def_98E289
0x98E416: cmp     al, 78h ; 'x'
0x98E418: jz      __output_l___def_98E289
0x98E41E: cmp     al, 58h ; 'X'
0x98E420: jz      __output_l___def_98E289
0x98E426: mov     [ebp+1F8h+var_26C], esi
0x98E429: lea     eax, [ebp+1F8h+Locale]; jumptable 0098E289 case 0
0x98E42C: push    eax; Locale
0x98E42D: movzx   eax, dl
0x98E430: push    eax; C
0x98E431: mov     [ebp+1F8h+var_23C], esi
0x98E434: call    __isleadbyte_l
0x98E439: pop     ecx
0x98E43A: test    eax, eax
0x98E43C: mov     al, [ebp+1F8h+var_211]
0x98E43F: pop     ecx
0x98E440: jz      short loc_98E45B
0x98E442: mov     ecx, [ebp+1F8h+File]; File
0x98E445: lea     esi, [ebp+1F8h+var_22C]
0x98E448: call    _write_char
0x98E44D: mov     al, [ebx]
0x98E44F: inc     ebx
0x98E450: test    al, al
0x98E452: mov     [ebp+1F8h+var_240], ebx
0x98E455: jz      loc_98EA1D
0x98E45B: mov     ecx, [ebp+1F8h+File]; File
0x98E45E: lea     esi, [ebp+1F8h+var_22C]
0x98E461: call    _write_char
0x98E466: jmp     __output_l___def_98E289
0x98E46B: movsx   eax, dl; jumptable 0098E289 case 7
0x98E46E: cmp     eax, 64h ; 'd'
0x98E471: jg      loc_98E5E9
0x98E477: jz      loc_98E668
0x98E47D: cmp     eax, 53h ; 'S'
0x98E480: jg      loc_98E531
0x98E486: jz      short loc_98E4E2
0x98E488: sub     eax, 41h ; 'A'
0x98E48B: jz      short loc_98E49D
0x98E48D: dec     eax
0x98E48E: dec     eax
0x98E48F: jz      short loc_98E4D1
0x98E491: dec     eax
0x98E492: dec     eax
0x98E493: jz      short loc_98E49D
0x98E495: dec     eax
0x98E496: dec     eax
0x98E497: jnz     loc_98E8EC
0x98E49D: add     dl, 20h ; ' '
0x98E4A0: mov     [ebp+1F8h+var_270], 1
0x98E4A7: mov     [ebp+1F8h+var_211], dl
0x98E4AA: or      [ebp+1F8h+var_210], 40h
0x98E4AE: cmp     [ebp+1F8h+var_218], esi
0x98E4B1: lea     ebx, [ebp+1F8h+MbCh]
0x98E4B4: mov     eax, 200h
0x98E4B9: mov     [ebp+1F8h+var_21C], ebx
0x98E4BC: mov     [ebp+1F8h+var_260], eax
0x98E4BF: jge     loc_98E68C
0x98E4C5: mov     [ebp+1F8h+var_218], 6
0x98E4CC: jmp     loc_98E6DA
0x98E4D1: test    word ptr [ebp+1F8h+var_210], 830h
0x98E4D7: jnz     short loc_98E54E
0x98E4D9: or      [ebp+1F8h+var_210], 800h
0x98E4E0: jmp     short loc_98E54E
0x98E4E2: test    word ptr [ebp+1F8h+var_210], 830h
0x98E4E8: jnz     short loc_98E4F1
0x98E4EA: or      [ebp+1F8h+var_210], 800h
0x98E4F1: mov     ecx, [ebp+1F8h+var_218]
0x98E4F4: cmp     ecx, 0FFFFFFFFh
0x98E4F7: jnz     short loc_98E4FE
0x98E4F9: mov     ecx, 7FFFFFFFh
0x98E4FE: add     edi, 4
0x98E501: test    word ptr [ebp+1F8h+var_210], 810h
0x98E507: mov     [ebp+1F8h+var_224], edi
0x98E50A: mov     edi, [edi-4]
0x98E50D: mov     [ebp+1F8h+var_21C], edi
0x98E510: jz      loc_98E8CA
0x98E516: cmp     edi, esi
0x98E518: jnz     short loc_98E522
0x98E51A: mov     eax, off_B31364
0x98E51F: mov     [ebp+1F8h+var_21C], eax
0x98E522: mov     eax, [ebp+1F8h+var_21C]
0x98E525: mov     [ebp+1F8h+var_23C], 1
0x98E52C: jmp     loc_98E8BF
0x98E531: sub     eax, 58h ; 'X'
0x98E534: jz      loc_98E773
0x98E53A: dec     eax
0x98E53B: dec     eax
0x98E53C: jz      short loc_98E59B
0x98E53E: sub     eax, ecx
0x98E540: jz      loc_98E4AA
0x98E546: dec     eax
0x98E547: dec     eax
0x98E548: jnz     loc_98E8EC
0x98E54E: add     edi, 4
0x98E551: test    word ptr [ebp+1F8h+var_210], 810h
0x98E557: mov     [ebp+1F8h+var_224], edi
0x98E55A: jz      short loc_98E583
0x98E55C: movzx   eax, word ptr [edi-4]
0x98E560: push    eax; WCh
0x98E561: push    200h; SizeInBytes
0x98E566: lea     eax, [ebp+1F8h+MbCh]
0x98E569: push    eax; MbCh
0x98E56A: lea     eax, [ebp+1F8h+SizeConverted]
0x98E56D: push    eax; SizeConverted
0x98E56E: call    _wctomb_s
0x98E573: add     esp, 10h
0x98E576: test    eax, eax
0x98E578: jz      short loc_98E590
0x98E57A: mov     [ebp+1F8h+var_248], 1
0x98E581: jmp     short loc_98E590
0x98E583: mov     al, [edi-4]
0x98E586: mov     [ebp+1F8h+MbCh], al
0x98E589: mov     [ebp+1F8h+SizeConverted], 1
0x98E590: lea     eax, [ebp+1F8h+MbCh]
0x98E593: mov     [ebp+1F8h+var_21C], eax
0x98E596: jmp     loc_98E8EC
0x98E59B: mov     eax, [edi]
0x98E59D: add     edi, 4
0x98E5A0: cmp     eax, esi
0x98E5A2: mov     [ebp+1F8h+var_224], edi
0x98E5A5: jz      short loc_98E5D5
0x98E5A7: mov     ecx, [eax+4]
0x98E5AA: cmp     ecx, esi
0x98E5AC: jz      short loc_98E5D5
0x98E5AE: test    word ptr [ebp+1F8h+var_210], 800h
0x98E5B4: movsx   eax, word ptr [eax]
0x98E5B7: mov     [ebp+1F8h+var_21C], ecx
0x98E5BA: jz      short loc_98E5CD
0x98E5BC: cdq
0x98E5BD: sub     eax, edx
0x98E5BF: sar     eax, 1
0x98E5C1: mov     [ebp+1F8h+var_23C], 1
0x98E5C8: jmp     loc_98E8E9
0x98E5CD: mov     [ebp+1F8h+var_23C], esi
0x98E5D0: jmp     loc_98E8E9
0x98E5D5: mov     eax, off_B31360
0x98E5DA: mov     [ebp+1F8h+var_21C], eax
0x98E5DD: push    eax; Str
0x98E5DE: call    _strlen
0x98E5E3: pop     ecx
0x98E5E4: jmp     loc_98E8E9
0x98E5E9: cmp     eax, 70h ; 'p'
0x98E5EC: jg      loc_98E778
0x98E5F2: jz      loc_98E76C
0x98E5F8: cmp     eax, 65h ; 'e'
0x98E5FB: jl      loc_98E8EC
0x98E601: cmp     eax, 67h ; 'g'
0x98E604: jle     loc_98E4AA
0x98E60A: cmp     eax, 69h ; 'i'
0x98E60D: jz      short loc_98E668
0x98E60F: cmp     eax, 6Eh ; 'n'
0x98E612: jz      short loc_98E633
0x98E614: cmp     eax, 6Fh ; 'o'
0x98E617: jnz     loc_98E8EC
0x98E61D: test    byte ptr [ebp+1F8h+var_210], 80h
0x98E621: mov     [ebp+1F8h+SizeConverted], 8
0x98E628: jz      short __output_l___$COMMON_INT$25533
0x98E62A: or      [ebp+1F8h+var_210], 200h
0x98E631: jmp     short __output_l___$COMMON_INT$25533
0x98E633: mov     esi, [edi]
0x98E635: add     edi, 4
0x98E638: mov     [ebp+1F8h+var_224], edi
0x98E63B: call    __get_printf_count_output
0x98E640: test    eax, eax
0x98E642: jz      loc_98EA1D
0x98E648: test    byte ptr [ebp+1F8h+var_210], 20h
0x98E64C: jz      short loc_98E657
0x98E64E: mov     ax, word ptr [ebp+1F8h+var_22C]
0x98E652: mov     [esi], ax
0x98E655: jmp     short loc_98E65C
0x98E657: mov     eax, [ebp+1F8h+var_22C]
0x98E65A: mov     [esi], eax
0x98E65C: mov     [ebp+1F8h+var_248], 1
0x98E663: jmp     loc_98E9F1
0x98E668: or      [ebp+1F8h+var_210], 40h
0x98E66C: mov     [ebp+1F8h+SizeConverted], 0Ah
