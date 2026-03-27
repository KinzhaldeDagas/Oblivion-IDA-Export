0x999C01: push    ebp
0x999C02: mov     ebp, esp
0x999C04: push    ecx
0x999C05: push    ecx
0x999C06: mov     eax, ___security_cookie
0x999C0B: xor     eax, ebp
0x999C0D: mov     [ebp+var_4], eax
0x999C10: mov     eax, dword_BAA75C
0x999C15: push    ebx
0x999C16: push    esi
0x999C17: xor     ebx, ebx
0x999C19: cmp     eax, ebx
0x999C1B: push    edi
0x999C1C: mov     edi, ecx
0x999C1E: jnz     short loc_999C5A
0x999C20: lea     eax, [ebp+CharType]
0x999C23: push    eax; lpCharType
0x999C24: xor     esi, esi
0x999C26: inc     esi
0x999C27: push    esi; cchSrc
0x999C28: push    offset SrcStr; lpSrcStr
0x999C2D: push    esi; dwInfoType
0x999C2E: call    ds:GetStringTypeW
0x999C34: test    eax, eax
0x999C36: jz      short loc_999C40
0x999C38: mov     dword_BAA75C, esi
0x999C3E: jmp     short loc_999C74
0x999C40: call    ds:GetLastError
0x999C46: cmp     eax, 78h ; 'x'
0x999C49: jnz     short loc_999C55
0x999C4B: push    2
0x999C4D: pop     eax
0x999C4E: mov     dword_BAA75C, eax
0x999C53: jmp     short loc_999C5A
0x999C55: mov     eax, dword_BAA75C
0x999C5A: cmp     eax, 2
0x999C5D: jz      loc_999D32
0x999C63: cmp     eax, ebx
0x999C65: jz      loc_999D32
0x999C6B: cmp     eax, 1
0x999C6E: jnz     loc_999D5C
0x999C74: cmp     [ebp+CodePage], ebx
0x999C77: mov     dword ptr [ebp+CharType], ebx
0x999C7A: jnz     short loc_999C84
0x999C7C: mov     eax, [edi]
0x999C7E: mov     eax, [eax+4]
0x999C81: mov     [ebp+CodePage], eax
0x999C84: mov     esi, ds:MultiByteToWideChar
0x999C8A: xor     eax, eax
0x999C8C: cmp     [ebp+arg_18], ebx
0x999C8F: push    ebx; cchWideChar
0x999C90: push    ebx; lpWideCharStr
0x999C91: push    [ebp+cbMultiByte]; cbMultiByte
0x999C94: setnz   al
0x999C97: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x999C9A: lea     eax, ds:1[eax*8]
0x999CA1: push    eax; dwFlags
0x999CA2: push    [ebp+CodePage]; CodePage
0x999CA5: call    esi ; MultiByteToWideChar
0x999CA7: mov     edi, eax
0x999CA9: cmp     edi, ebx
0x999CAB: jz      loc_999D5C
0x999CB1: jle     short loc_999CEF
0x999CB3: cmp     edi, 7FFFFFF0h
0x999CB9: ja      short loc_999CEF
0x999CBB: lea     eax, [edi+edi+8]
0x999CBF: cmp     eax, 400h
0x999CC4: ja      short loc_999CD9
0x999CC6: call    __alloca?
0x999CCB: mov     eax, esp
0x999CCD: cmp     eax, ebx
0x999CCF: jz      short loc_999CED
0x999CD1: mov     dword ptr [eax], 0CCCCh
0x999CD7: jmp     short loc_999CEA
0x999CD9: push    eax; Size
0x999CDA: call    _malloc
0x999CDF: cmp     eax, ebx
0x999CE1: pop     ecx
0x999CE2: jz      short loc_999CED
0x999CE4: mov     dword ptr [eax], 0DDDDh
0x999CEA: add     eax, 8
0x999CED: mov     ebx, eax
0x999CEF: test    ebx, ebx
0x999CF1: jz      short loc_999D5C
0x999CF3: lea     eax, [edi+edi]
0x999CF6: push    eax
0x999CF7: push    0
0x999CF9: push    ebx
0x999CFA: call    __memset
0x999CFF: add     esp, 0Ch
0x999D02: push    edi; cchWideChar
0x999D03: push    ebx; lpWideCharStr
0x999D04: push    [ebp+cbMultiByte]; cbMultiByte
0x999D07: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x999D0A: push    1; dwFlags
0x999D0C: push    [ebp+CodePage]; CodePage
0x999D0F: call    esi ; MultiByteToWideChar
0x999D11: test    eax, eax
0x999D13: jz      short loc_999D26
0x999D15: push    [ebp+lpCharType]; lpCharType
0x999D18: push    eax; cchSrc
0x999D19: push    ebx; lpSrcStr
0x999D1A: push    [ebp+dwInfoType]; dwInfoType
0x999D1D: call    ds:GetStringTypeW
0x999D23: mov     dword ptr [ebp+CharType], eax
0x999D26: push    ebx; Memory
0x999D27: call    __freea
0x999D2C: mov     eax, dword ptr [ebp+CharType]
0x999D2F: pop     ecx
0x999D30: jmp     short loc_999DA7
0x999D32: xor     esi, esi
0x999D34: cmp     [ebp+Locale], ebx
0x999D37: jnz     short loc_999D41
0x999D39: mov     eax, [edi]
0x999D3B: mov     eax, [eax+14h]
0x999D3E: mov     [ebp+Locale], eax
0x999D41: cmp     [ebp+CodePage], ebx
0x999D44: jnz     short loc_999D4E
0x999D46: mov     eax, [edi]
0x999D48: mov     eax, [eax+4]
0x999D4B: mov     [ebp+CodePage], eax
0x999D4E: push    [ebp+Locale]; Locale
0x999D51: call    ___ansicp
0x999D56: cmp     eax, 0FFFFFFFFh
0x999D59: pop     ecx
0x999D5A: jnz     short loc_999D60
0x999D5C: xor     eax, eax
0x999D5E: jmp     short loc_999DA7
0x999D60: cmp     eax, [ebp+CodePage]
0x999D63: jz      short loc_999D83
0x999D65: push    ebx; int
0x999D66: push    ebx; int
0x999D67: lea     ecx, [ebp+cbMultiByte]
0x999D6A: push    ecx; int
0x999D6B: push    [ebp+lpMultiByteStr]; int
0x999D6E: push    eax; UINT
0x999D6F: push    [ebp+CodePage]; CodePage
0x999D72: call    ___convertcp
0x999D77: mov     esi, eax
0x999D79: add     esp, 18h
0x999D7C: cmp     esi, ebx
0x999D7E: jz      short loc_999D5C
0x999D80: mov     [ebp+lpMultiByteStr], esi
0x999D83: push    [ebp+lpCharType]; lpCharType
0x999D86: push    [ebp+cbMultiByte]; cchSrc
0x999D89: push    [ebp+lpMultiByteStr]; lpSrcStr
0x999D8C: push    [ebp+dwInfoType]; dwInfoType
0x999D8F: push    [ebp+Locale]; Locale
0x999D92: call    ds:GetStringTypeA
0x999D98: cmp     esi, ebx
0x999D9A: mov     edi, eax
0x999D9C: jz      short loc_999DA5
0x999D9E: push    esi; Memory
0x999D9F: call    _free
0x999DA4: pop     ecx
0x999DA5: mov     eax, edi
0x999DA7: lea     esp, [ebp-14h]
0x999DAA: pop     edi
0x999DAB: pop     esi
0x999DAC: pop     ebx
0x999DAD: mov     ecx, [ebp+var_4]
0x999DB0: xor     ecx, ebp
0x999DB2: call    @__security_check_cookie@4
0x999DB7: leave
0x999DB8: retn
