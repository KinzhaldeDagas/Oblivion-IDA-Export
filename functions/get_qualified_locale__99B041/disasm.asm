0x99B041: push    ebx
0x99B042: push    ebp
0x99B043: push    esi
0x99B044: push    edi; Radix
0x99B045: call    __getptd
0x99B04A: mov     ebp, [esp+10h+arg_0]
0x99B04E: mov     esi, eax
0x99B050: xor     ebx, ebx
0x99B052: add     esi, 9Ch ; 'œ'
0x99B058: cmp     ebp, ebx
0x99B05A: jnz     short loc_99B068
0x99B05C: or      dword ptr [esi+8], 104h
0x99B063: jmp     loc_99B119
0x99B068: lea     eax, [ebp+40h]
0x99B06B: cmp     eax, ebx
0x99B06D: lea     edi, [esi+4]
0x99B070: mov     [esi], ebp
0x99B072: mov     [edi], eax
0x99B074: jz      short loc_99B08A
0x99B076: cmp     [eax], bl
0x99B078: jz      short loc_99B08A
0x99B07A: push    edi
0x99B07B: push    16h
0x99B07D: push    offset off_AB06F0
0x99B082: call    _TranslateName
0x99B087: add     esp, 0Ch
0x99B08A: mov     eax, [esi]
0x99B08C: cmp     eax, ebx
0x99B08E: mov     [esi+8], ebx
0x99B091: jz      short loc_99B0DE
0x99B093: cmp     [eax], bl
0x99B095: jz      short loc_99B0DE
0x99B097: mov     eax, [edi]
0x99B099: cmp     eax, ebx
0x99B09B: jz      short loc_99B0A8
0x99B09D: cmp     [eax], bl
0x99B09F: jz      short loc_99B0A8
0x99B0A1: call    _GetLcidFromLangCountry
0x99B0A6: jmp     short loc_99B0AD
0x99B0A8: call    _GetLcidFromLanguage
0x99B0AD: cmp     [esi+8], ebx
0x99B0B0: jnz     short loc_99B12E
0x99B0B2: push    esi
0x99B0B3: push    40h ; '@'
0x99B0B5: push    offset off_AB04E8
0x99B0BA: call    _TranslateName
0x99B0BF: add     esp, 0Ch
0x99B0C2: test    eax, eax
0x99B0C4: jz      short loc_99B125
0x99B0C6: mov     edi, [edi]
0x99B0C8: cmp     edi, ebx
0x99B0CA: jz      short loc_99B0D7
0x99B0CC: cmp     [edi], bl
0x99B0CE: jz      short loc_99B0D7
0x99B0D0: call    _GetLcidFromLangCountry
0x99B0D5: jmp     short loc_99B125
0x99B0D7: call    _GetLcidFromLanguage
0x99B0DC: jmp     short loc_99B125
0x99B0DE: mov     edi, [edi]
0x99B0E0: cmp     edi, ebx
0x99B0E2: jz      short loc_99B112
0x99B0E4: cmp     [edi], bl
0x99B0E6: jz      short loc_99B112
0x99B0E8: push    edi; Str
0x99B0E9: call    _strlen
0x99B0EE: sub     eax, 3
0x99B0F1: neg     eax
0x99B0F3: pop     ecx
0x99B0F4: sbb     eax, eax
0x99B0F6: push    1; dwFlags
0x99B0F8: inc     eax
0x99B0F9: push    offset _CountryEnumProc@4; lpLocaleEnumProc
0x99B0FE: mov     [esi+14h], eax
0x99B101: call    ds:EnumSystemLocalesA
0x99B107: test    byte ptr [esi+8], 4
0x99B10B: jnz     short loc_99B125
0x99B10D: mov     [esi+8], ebx
0x99B110: jmp     short loc_99B125
0x99B112: mov     dword ptr [esi+8], 104h
0x99B119: call    ds:GetUserDefaultLCID
0x99B11F: mov     [esi+18h], eax
0x99B122: mov     [esi+1Ch], eax
0x99B125: cmp     [esi+8], ebx
0x99B128: jz      loc_99B21D
0x99B12E: mov     ecx, ebp
0x99B130: add     ebp, 80h ; '€'
0x99B136: neg     ecx
0x99B138: sbb     ecx, ecx
0x99B13A: and     ecx, ebp; Str
0x99B13C: mov     edi, esi
0x99B13E: call    _ProcessCodePage
0x99B143: mov     ebx, eax
0x99B145: test    ebx, ebx
0x99B147: jz      loc_99B21D
0x99B14D: cmp     ebx, 0FDE8h
0x99B153: jz      loc_99B21D
0x99B159: cmp     ebx, 0FDE9h
0x99B15F: jz      loc_99B21D
0x99B165: movzx   eax, bx
0x99B168: push    eax; CodePage
0x99B169: call    ds:IsValidCodePage
0x99B16F: test    eax, eax
0x99B171: jz      loc_99B21D
0x99B177: push    1; dwFlags
0x99B179: push    dword ptr [esi+18h]; Locale
0x99B17C: call    ds:IsValidLocale
0x99B182: test    eax, eax
0x99B184: jz      loc_99B21D
0x99B18A: mov     eax, [esp+10h+arg_4]
0x99B18E: test    eax, eax
0x99B190: jz      short loc_99B1A5
0x99B192: mov     cx, [esi+18h]
0x99B196: mov     [eax], cx
0x99B199: mov     cx, [esi+1Ch]
0x99B19D: mov     [eax+2], cx
0x99B1A1: mov     [eax+4], bx
0x99B1A5: mov     edi, [esp+10h+Dst]
0x99B1A9: test    edi, edi
0x99B1AB: jz      short loc_99B218
0x99B1AD: cmp     word ptr [eax], 814h
0x99B1B2: mov     ebp, ds:GetLocaleInfoA
0x99B1B8: jnz     short loc_99B1DF
0x99B1BA: push    offset aNorwegianNynor
0x99B1BF: push    40h ; '@'; SizeInBytes
0x99B1C1: push    edi; Dst
0x99B1C2: call    _strcpy_s
0x99B1C7: add     esp, 0Ch
0x99B1CA: test    eax, eax
0x99B1CC: jz      short loc_99B1F0
0x99B1CE: xor     eax, eax
0x99B1D0: push    eax
0x99B1D1: push    eax
0x99B1D2: push    eax
0x99B1D3: push    eax
0x99B1D4: push    eax
0x99B1D5: call    __invoke_watson
0x99B1DA: add     esp, 14h
0x99B1DD: jmp     short loc_99B1F0
0x99B1DF: push    40h ; '@'; cchData
0x99B1E1: push    edi; lpLCData
0x99B1E2: push    1001h; LCType
0x99B1E7: push    dword ptr [esi+18h]; Locale
0x99B1EA: call    ebp ; GetLocaleInfoA
0x99B1EC: test    eax, eax
0x99B1EE: jz      short loc_99B21D
0x99B1F0: push    40h ; '@'; cchData
0x99B1F2: lea     eax, [edi+40h]
0x99B1F5: push    eax; lpLCData
0x99B1F6: push    1002h; LCType
0x99B1FB: push    dword ptr [esi+1Ch]; Locale
0x99B1FE: call    ebp ; GetLocaleInfoA
0x99B200: test    eax, eax
0x99B202: jz      short loc_99B21D
0x99B204: push    0Ah; Radix
0x99B206: push    10h; Size
0x99B208: add     edi, 80h ; '€'
0x99B20E: push    edi; DstBuf
0x99B20F: push    ebx; Value
0x99B210: call    __itoa_s
0x99B215: add     esp, 10h
0x99B218: xor     eax, eax
0x99B21A: inc     eax
0x99B21B: jmp     short loc_99B21F
0x99B21D: xor     eax, eax
0x99B21F: pop     edi
0x99B220: pop     esi
0x99B221: pop     ebp
0x99B222: pop     ebx
0x99B223: retn
