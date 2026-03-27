0x99AD11: push    ebp
0x99AD12: mov     ebp, esp
0x99AD14: sub     esp, 7Ch
0x99AD17: mov     eax, ___security_cookie
0x99AD1C: xor     eax, ebp
0x99AD1E: mov     [ebp+var_4], eax
0x99AD21: push    ebx
0x99AD22: push    esi
0x99AD23: push    edi
0x99AD24: mov     edi, [ebp+arg_0]
0x99AD27: call    __getptd
0x99AD2C: mov     esi, eax
0x99AD2E: mov     edx, edi
0x99AD30: add     esi, 9Ch ; 'œ'
0x99AD36: call    _LcidFromHexString
0x99AD3B: mov     ebx, ds:GetLocaleInfoA
0x99AD41: mov     edi, eax
0x99AD43: push    78h ; 'x'; cchData
0x99AD45: lea     eax, [ebp+LCData]
0x99AD48: push    eax; lpLCData
0x99AD49: mov     eax, [esi+14h]
0x99AD4C: neg     eax
0x99AD4E: sbb     eax, eax
0x99AD50: and     eax, 0FFFFF005h
0x99AD55: add     eax, 1002h
0x99AD5A: push    eax; LCType
0x99AD5B: push    edi; Locale
0x99AD5C: call    ebx ; GetLocaleInfoA
0x99AD5E: test    eax, eax
0x99AD60: jnz     short loc_99AD6E
0x99AD62: and     dword ptr [esi+8], 0
0x99AD66: xor     eax, eax
0x99AD68: inc     eax
0x99AD69: jmp     loc_99AED0
0x99AD6E: lea     eax, [ebp+LCData]
0x99AD71: push    eax; Str2
0x99AD72: push    dword ptr [esi+4]; Str1
0x99AD75: call    __strcmp
0x99AD7A: test    eax, eax
0x99AD7C: pop     ecx
0x99AD7D: pop     ecx
0x99AD7E: jnz     loc_99AE15
0x99AD84: push    78h ; 'x'; cchData
0x99AD86: lea     eax, [ebp+LCData]
0x99AD89: push    eax; lpLCData
0x99AD8A: mov     eax, [esi+10h]
0x99AD8D: neg     eax
0x99AD8F: sbb     eax, eax
0x99AD91: and     eax, 0FFFFF002h
0x99AD96: add     eax, 1001h
0x99AD9B: push    eax; LCType
0x99AD9C: push    edi; Locale
0x99AD9D: call    ebx ; GetLocaleInfoA
0x99AD9F: test    eax, eax
0x99ADA1: jz      short loc_99AD62
0x99ADA3: lea     eax, [ebp+LCData]
0x99ADA6: push    eax; Str2
0x99ADA7: push    dword ptr [esi]; Str1
0x99ADA9: call    __strcmp
0x99ADAE: test    eax, eax
0x99ADB0: pop     ecx
0x99ADB1: pop     ecx
0x99ADB2: jnz     short loc_99ADC0
0x99ADB4: or      dword ptr [esi+8], 304h
0x99ADBB: mov     [esi+18h], edi
0x99ADBE: jmp     short loc_99AE12
0x99ADC0: test    byte ptr [esi+8], 2
0x99ADC4: jnz     short loc_99AE15
0x99ADC6: mov     eax, [esi+0Ch]
0x99ADC9: test    eax, eax
0x99ADCB: jz      short loc_99ADF9
0x99ADCD: push    eax; MaxCount
0x99ADCE: lea     eax, [ebp+LCData]
0x99ADD1: push    eax; Str2
0x99ADD2: push    dword ptr [esi]; Str1
0x99ADD4: call    __strnicmp
0x99ADD9: add     esp, 0Ch
0x99ADDC: test    eax, eax
0x99ADDE: jnz     short loc_99ADF9
0x99ADE0: push    dword ptr [esi]; Str
0x99ADE2: or      dword ptr [esi+8], 2
0x99ADE6: mov     [esi+1Ch], edi
0x99ADE9: call    _strlen
0x99ADEE: cmp     eax, [esi+0Ch]
0x99ADF1: pop     ecx
0x99ADF2: jnz     short loc_99AE15
0x99ADF4: mov     [esi+18h], edi
0x99ADF7: jmp     short loc_99AE15
0x99ADF9: mov     edx, [esi+8]
0x99ADFC: test    dl, 1
0x99ADFF: jnz     short loc_99AE15
0x99AE01: push    edi
0x99AE02: call    _TestDefaultCountry
0x99AE07: test    eax, eax
0x99AE09: pop     ecx
0x99AE0A: jz      short loc_99AE15
0x99AE0C: or      edx, 1
0x99AE0F: mov     [esi+8], edx
0x99AE12: mov     [esi+1Ch], edi
0x99AE15: mov     ecx, [esi+8]
0x99AE18: mov     eax, 300h
0x99AE1D: and     ecx, eax
0x99AE1F: cmp     ecx, eax
0x99AE21: jz      loc_99AEC5
0x99AE27: push    78h ; 'x'; cchData
0x99AE29: lea     eax, [ebp+LCData]
0x99AE2C: push    eax; lpLCData
0x99AE2D: mov     eax, [esi+10h]
0x99AE30: neg     eax
0x99AE32: sbb     eax, eax
0x99AE34: and     eax, 0FFFFF002h
0x99AE39: add     eax, 1001h
0x99AE3E: push    eax; LCType
0x99AE3F: push    edi; Locale
0x99AE40: call    ebx ; GetLocaleInfoA
0x99AE42: test    eax, eax
0x99AE44: jz      loc_99AD62
0x99AE4A: lea     eax, [ebp+LCData]
0x99AE4D: push    eax; Str2
0x99AE4E: push    dword ptr [esi]; Str1
0x99AE50: call    __strcmp
0x99AE55: pop     ecx
0x99AE56: xor     ebx, ebx
0x99AE58: test    eax, eax
0x99AE5A: pop     ecx
0x99AE5B: jnz     short loc_99AE8C
0x99AE5D: or      dword ptr [esi+8], 200h
0x99AE64: cmp     [esi+10h], ebx
0x99AE67: mov     eax, [esi+8]
0x99AE6A: jz      short loc_99AE76
0x99AE6C: or      eax, 100h
0x99AE71: mov     [esi+8], eax
0x99AE74: jmp     short loc_99AEBD
0x99AE76: cmp     [esi+0Ch], ebx
0x99AE79: jz      short loc_99AEB6
0x99AE7B: push    dword ptr [esi]; Str
0x99AE7D: call    _strlen
0x99AE82: cmp     eax, [esi+0Ch]
0x99AE85: pop     ecx
0x99AE86: jnz     short loc_99AEB6
0x99AE88: push    1
0x99AE8A: jmp     short loc_99AEA8
0x99AE8C: cmp     [esi+10h], ebx
0x99AE8F: jnz     short loc_99AEC5
0x99AE91: cmp     [esi+0Ch], ebx
0x99AE94: jz      short loc_99AEC5
0x99AE96: lea     eax, [ebp+LCData]
0x99AE99: push    eax; Str2
0x99AE9A: push    dword ptr [esi]; Str1
0x99AE9C: call    __strcmp
0x99AEA1: test    eax, eax
0x99AEA3: pop     ecx
0x99AEA4: pop     ecx
0x99AEA5: jnz     short loc_99AEC5
0x99AEA7: push    ebx
0x99AEA8: push    edi
0x99AEA9: mov     ecx, esi
0x99AEAB: call    _TestDefaultLanguage
0x99AEB0: test    eax, eax
0x99AEB2: pop     ecx
0x99AEB3: pop     ecx
0x99AEB4: jz      short loc_99AEC5
0x99AEB6: or      dword ptr [esi+8], 100h
0x99AEBD: cmp     [esi+18h], ebx
0x99AEC0: jnz     short loc_99AEC5
0x99AEC2: mov     [esi+18h], edi
0x99AEC5: mov     eax, [esi+8]
0x99AEC8: shr     eax, 2
0x99AECB: not     eax
0x99AECD: and     eax, 1
0x99AED0: mov     ecx, [ebp+var_4]
0x99AED3: pop     edi
0x99AED4: pop     esi
0x99AED5: xor     ecx, ebp
0x99AED7: pop     ebx
0x99AED8: call    @__security_check_cookie@4
0x99AEDD: leave
0x99AEDE: retn    4
