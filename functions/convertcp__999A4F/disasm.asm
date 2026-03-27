0x999A4F: push    ebp
0x999A50: mov     ebp, esp
0x999A52: sub     esp, 34h
0x999A55: mov     eax, ___security_cookie
0x999A5A: xor     eax, ebp
0x999A5C: mov     [ebp+var_4], eax
0x999A5F: mov     eax, [ebp+arg_8]
0x999A62: mov     ecx, [ebp+arg_10]
0x999A65: mov     [ebp+Str], eax
0x999A68: mov     eax, [ebp+arg_C]
0x999A6B: push    ebx
0x999A6C: mov     [ebp+var_30], eax
0x999A6F: mov     eax, [eax]
0x999A71: push    esi
0x999A72: mov     [ebp+cbMultiByte], eax
0x999A75: mov     eax, [ebp+CodePage]
0x999A78: push    edi
0x999A79: xor     edi, edi
0x999A7B: cmp     eax, [ebp+arg_4]
0x999A7E: mov     [ebp+lpMultiByteStr], ecx
0x999A81: mov     [ebp+Memory], edi
0x999A84: mov     [ebp+var_2C], edi
0x999A87: jz      loc_999BEC
0x999A8D: mov     esi, ds:GetCPInfo
0x999A93: lea     ecx, [ebp+CPInfo]
0x999A96: push    ecx; lpCPInfo
0x999A97: push    eax; CodePage
0x999A98: call    esi ; GetCPInfo
0x999A9A: test    eax, eax
0x999A9C: mov     ebx, ds:MultiByteToWideChar
0x999AA2: jz      short loc_999B02
0x999AA4: cmp     [ebp+CPInfo.MaxCharSize], 1
0x999AA8: jnz     short loc_999B02
0x999AAA: lea     eax, [ebp+CPInfo]
0x999AAD: push    eax; lpCPInfo
0x999AAE: push    [ebp+arg_4]; CodePage
0x999AB1: call    esi ; GetCPInfo
0x999AB3: test    eax, eax
0x999AB5: jz      short loc_999B02
0x999AB7: cmp     [ebp+CPInfo.MaxCharSize], 1
0x999ABB: jnz     short loc_999B02
0x999ABD: mov     esi, [ebp+cbMultiByte]
0x999AC0: cmp     esi, 0FFFFFFFFh
0x999AC3: mov     [ebp+var_2C], 1
0x999ACA: jnz     short loc_999AD8
0x999ACC: push    [ebp+Str]; Str
0x999ACF: call    _strlen
0x999AD4: mov     esi, eax
0x999AD6: pop     ecx
0x999AD7: inc     esi
0x999AD8: cmp     esi, edi
0x999ADA: jle     short loc_999B37
0x999ADC: cmp     esi, 7FFFFFF0h
0x999AE2: ja      short loc_999B37
0x999AE4: lea     eax, [esi+esi+8]
0x999AE8: cmp     eax, 400h
0x999AED: ja      short loc_999B1E
0x999AEF: call    __alloca?
0x999AF4: mov     eax, esp
0x999AF6: cmp     eax, edi
0x999AF8: jz      short loc_999B32
0x999AFA: mov     dword ptr [eax], 0CCCCh
0x999B00: jmp     short loc_999B2F
0x999B02: push    edi; cchWideChar
0x999B03: push    edi; lpWideCharStr
0x999B04: push    [ebp+cbMultiByte]; cbMultiByte
0x999B07: push    [ebp+Str]; lpMultiByteStr
0x999B0A: push    1; dwFlags
0x999B0C: push    [ebp+CodePage]; CodePage
0x999B0F: call    ebx ; MultiByteToWideChar
0x999B11: mov     esi, eax
0x999B13: cmp     esi, edi
0x999B15: jnz     short loc_999ADA
0x999B17: xor     eax, eax
0x999B19: jmp     loc_999BEF
0x999B1E: push    eax; Size
0x999B1F: call    _malloc
0x999B24: cmp     eax, edi
0x999B26: pop     ecx
0x999B27: jz      short loc_999B32
0x999B29: mov     dword ptr [eax], 0DDDDh
0x999B2F: add     eax, 8
0x999B32: mov     [ebp+lpWideCharStr], eax
0x999B35: jmp     short loc_999B3A
0x999B37: mov     [ebp+lpWideCharStr], edi
0x999B3A: cmp     [ebp+lpWideCharStr], edi
0x999B3D: jz      short loc_999B17
0x999B3F: lea     eax, [esi+esi]
0x999B42: push    eax
0x999B43: push    edi
0x999B44: push    [ebp+lpWideCharStr]
0x999B47: call    __memset
0x999B4C: add     esp, 0Ch
0x999B4F: push    esi; cchWideChar
0x999B50: push    [ebp+lpWideCharStr]; lpWideCharStr
0x999B53: push    [ebp+cbMultiByte]; cbMultiByte
0x999B56: push    [ebp+Str]; lpMultiByteStr
0x999B59: push    1; dwFlags
0x999B5B: push    [ebp+CodePage]; CodePage
0x999B5E: call    ebx ; MultiByteToWideChar
0x999B60: test    eax, eax
0x999B62: jz      short loc_999BE3
0x999B64: mov     ebx, [ebp+lpMultiByteStr]
0x999B67: cmp     ebx, edi
0x999B69: jz      short loc_999B88
0x999B6B: push    edi; lpUsedDefaultChar
0x999B6C: push    edi; lpDefaultChar
0x999B6D: push    [ebp+arg_14]; cbMultiByte
0x999B70: push    ebx; lpMultiByteStr
0x999B71: push    esi; cchWideChar
0x999B72: push    [ebp+lpWideCharStr]; lpWideCharStr
0x999B75: push    edi; dwFlags
0x999B76: push    [ebp+arg_4]; CodePage
0x999B79: call    ds:WideCharToMultiByte
0x999B7F: test    eax, eax
0x999B81: jz      short loc_999BE3
0x999B83: mov     [ebp+Memory], ebx
0x999B86: jmp     short loc_999BE3
0x999B88: cmp     [ebp+var_2C], edi
0x999B8B: mov     ebx, ds:WideCharToMultiByte
0x999B91: jnz     short loc_999BA7
0x999B93: push    edi; lpUsedDefaultChar
0x999B94: push    edi; lpDefaultChar
0x999B95: push    edi; cbMultiByte
0x999B96: push    edi; lpMultiByteStr
0x999B97: push    esi; cchWideChar
0x999B98: push    [ebp+lpWideCharStr]; lpWideCharStr
0x999B9B: push    edi; dwFlags
0x999B9C: push    [ebp+arg_4]; CodePage
0x999B9F: call    ebx ; WideCharToMultiByte
0x999BA1: mov     esi, eax
0x999BA3: cmp     esi, edi
0x999BA5: jz      short loc_999BE3
0x999BA7: push    esi
0x999BA8: push    1
0x999BAA: call    unknown_libname_74
0x999BAF: cmp     eax, edi
0x999BB1: pop     ecx
0x999BB2: pop     ecx
0x999BB3: mov     [ebp+Memory], eax
0x999BB6: jz      short loc_999BE3
0x999BB8: push    edi; lpUsedDefaultChar
0x999BB9: push    edi; lpDefaultChar
0x999BBA: push    esi; cbMultiByte
0x999BBB: push    eax; lpMultiByteStr
0x999BBC: push    esi; cchWideChar
0x999BBD: push    [ebp+lpWideCharStr]; lpWideCharStr
0x999BC0: push    edi; dwFlags
0x999BC1: push    [ebp+arg_4]; CodePage
0x999BC4: call    ebx ; WideCharToMultiByte
0x999BC6: cmp     eax, edi
0x999BC8: jnz     short loc_999BD8
0x999BCA: push    [ebp+Memory]; Memory
0x999BCD: call    _free
0x999BD2: pop     ecx
0x999BD3: mov     [ebp+Memory], edi
0x999BD6: jmp     short loc_999BE3
0x999BD8: cmp     [ebp+cbMultiByte], 0FFFFFFFFh
0x999BDC: jz      short loc_999BE3
0x999BDE: mov     ecx, [ebp+var_30]
0x999BE1: mov     [ecx], eax
0x999BE3: push    [ebp+lpWideCharStr]; Memory
0x999BE6: call    __freea
0x999BEB: pop     ecx
0x999BEC: mov     eax, [ebp+Memory]
0x999BEF: lea     esp, [ebp-40h]
0x999BF2: pop     edi
0x999BF3: pop     esi
0x999BF4: pop     ebx
0x999BF5: mov     ecx, [ebp+var_4]
0x999BF8: xor     ecx, ebp
0x999BFA: call    @__security_check_cookie@4
0x999BFF: leave
0x999C00: retn
