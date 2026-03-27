0x99CEA7: push    ebp
0x99CEA8: mov     ebp, esp
0x99CEAA: push    ecx
0x99CEAB: push    ecx
0x99CEAC: mov     eax, ___security_cookie
0x99CEB1: xor     eax, ebp
0x99CEB3: mov     [ebp+var_4], eax
0x99CEB6: mov     eax, dword_BAA778
0x99CEBB: push    ebx
0x99CEBC: mov     ebx, ds:GetLocaleInfoW
0x99CEC2: push    esi
0x99CEC3: push    edi
0x99CEC4: xor     edi, edi
0x99CEC6: xor     esi, esi
0x99CEC8: inc     edi
0x99CEC9: cmp     eax, esi
0x99CECB: jnz     short loc_99CEF9
0x99CECD: push    esi; cchData
0x99CECE: push    esi; lpLCData
0x99CECF: push    edi; LCType
0x99CED0: push    esi; Locale
0x99CED1: call    ebx ; GetLocaleInfoW
0x99CED3: test    eax, eax
0x99CED5: jz      short loc_99CEDF
0x99CED7: mov     dword_BAA778, edi
0x99CEDD: jmp     short loc_99CF0E
0x99CEDF: call    ds:GetLastError
0x99CEE5: cmp     eax, 78h ; 'x'
0x99CEE8: jnz     short loc_99CEF4
0x99CEEA: push    2
0x99CEEC: pop     eax
0x99CEED: mov     dword_BAA778, eax
0x99CEF2: jmp     short loc_99CEF9
0x99CEF4: mov     eax, dword_BAA778
0x99CEF9: cmp     eax, 2
0x99CEFC: jz      loc_99CFC0
0x99CF02: cmp     eax, esi
0x99CF04: jz      loc_99CFC0
0x99CF0A: cmp     eax, edi
0x99CF0C: jnz     short loc_99CF31
0x99CF0E: cmp     [ebp+CodePage], esi
0x99CF11: jnz     short loc_99CF1E
0x99CF13: mov     eax, [ebp+arg_0]
0x99CF16: mov     eax, [eax]
0x99CF18: mov     eax, [eax+4]
0x99CF1B: mov     [ebp+CodePage], eax
0x99CF1E: push    esi; cchData
0x99CF1F: push    esi; lpLCData
0x99CF20: push    [ebp+LCType]; LCType
0x99CF23: push    [ebp+Locale]; Locale
0x99CF26: call    ebx ; GetLocaleInfoW
0x99CF28: mov     ecx, eax
0x99CF2A: cmp     ecx, esi
0x99CF2C: mov     [ebp+cchData], ecx
0x99CF2F: jnz     short loc_99CF38
0x99CF31: xor     eax, eax
0x99CF33: jmp     loc_99CFD2
0x99CF38: jle     short loc_99CF7F
0x99CF3A: push    0FFFFFFE0h
0x99CF3C: xor     edx, edx
0x99CF3E: pop     eax
0x99CF3F: div     ecx
0x99CF41: cmp     eax, 2
0x99CF44: jb      short loc_99CF7F
0x99CF46: lea     eax, [ecx+ecx+8]
0x99CF4A: cmp     eax, 400h
0x99CF4F: ja      short loc_99CF67
0x99CF51: call    __alloca?
0x99CF56: mov     edi, esp
0x99CF58: cmp     edi, esi
0x99CF5A: jz      short loc_99CF31
0x99CF5C: mov     dword ptr [edi], 0CCCCh
0x99CF62: add     edi, 8
0x99CF65: jmp     short loc_99CF81
0x99CF67: push    eax; Size
0x99CF68: call    _malloc
0x99CF6D: cmp     eax, esi
0x99CF6F: pop     ecx
0x99CF70: jz      short loc_99CF7B
0x99CF72: mov     dword ptr [eax], 0DDDDh
0x99CF78: add     eax, 8
0x99CF7B: mov     edi, eax
0x99CF7D: jmp     short loc_99CF81
0x99CF7F: xor     edi, edi
0x99CF81: cmp     edi, esi
0x99CF83: jz      short loc_99CF31
0x99CF85: push    [ebp+cchData]; cchData
0x99CF88: push    edi; lpLCData
0x99CF89: push    [ebp+LCType]; LCType
0x99CF8C: push    [ebp+Locale]; Locale
0x99CF8F: call    ebx ; GetLocaleInfoW
0x99CF91: test    eax, eax
0x99CF93: jz      short unknown_libname_198___unknown_libname_199
0x99CF95: cmp     [ebp+cbMultiByte], esi
0x99CF98: push    esi; lpUsedDefaultChar
0x99CF99: push    esi; lpDefaultChar
0x99CF9A: jnz     short loc_99CFA0
0x99CF9C: push    esi
0x99CF9D: push    esi
0x99CF9E: jmp     short loc_99CFA6
0x99CFA0: push    [ebp+cbMultiByte]; cbMultiByte
0x99CFA3: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x99CFA6: push    0FFFFFFFFh; cchWideChar
0x99CFA8: push    edi; lpWideCharStr
0x99CFA9: push    esi; dwFlags
0x99CFAA: push    [ebp+CodePage]; CodePage
0x99CFAD: call    ds:WideCharToMultiByte
0x99CFB3: mov     esi, eax
