0x99CD31: push    ebp
0x99CD32: mov     ebp, esp
0x99CD34: push    ecx
0x99CD35: push    ecx
0x99CD36: mov     eax, ___security_cookie
0x99CD3B: xor     eax, ebp
0x99CD3D: mov     [ebp+var_4], eax
0x99CD40: mov     eax, dword_BAA774
0x99CD45: push    ebx
0x99CD46: push    esi
0x99CD47: mov     esi, ds:GetLocaleInfoW
0x99CD4D: push    edi
0x99CD4E: xor     edi, edi
0x99CD50: cmp     eax, edi
0x99CD52: jnz     short loc_99CD83
0x99CD54: push    edi; cchData
0x99CD55: push    edi; lpLCData
0x99CD56: xor     ebx, ebx
0x99CD58: inc     ebx
0x99CD59: push    ebx; LCType
0x99CD5A: push    edi; Locale
0x99CD5B: call    esi ; GetLocaleInfoW
0x99CD5D: test    eax, eax
0x99CD5F: jz      short loc_99CD69
0x99CD61: mov     dword_BAA774, ebx
0x99CD67: jmp     short loc_99CD88
0x99CD69: call    ds:GetLastError
0x99CD6F: cmp     eax, 78h ; 'x'
0x99CD72: jnz     short loc_99CD7E
0x99CD74: push    2
0x99CD76: pop     eax
0x99CD77: mov     dword_BAA774, eax
0x99CD7C: jmp     short loc_99CD83
0x99CD7E: mov     eax, dword_BAA774
0x99CD83: cmp     eax, 1
0x99CD86: jnz     short loc_99CD9B
0x99CD88: push    [ebp+cchData]; cchData
0x99CD8B: push    [ebp+lpLCData]; lpLCData
0x99CD8E: push    [ebp+LCType]; LCType
0x99CD91: push    [ebp+Locale]; Locale
0x99CD94: call    esi ; GetLocaleInfoW
0x99CD96: jmp     loc_99CE5A
0x99CD9B: cmp     eax, 2
0x99CD9E: jz      short loc_99CDA4
0x99CDA0: cmp     eax, edi
0x99CDA2: jnz     short loc_99CDCD
0x99CDA4: cmp     [ebp+CodePage], edi
0x99CDA7: mov     [ebp+var_8], edi
0x99CDAA: jnz     short loc_99CDB7
0x99CDAC: mov     eax, [ebp+arg_0]
0x99CDAF: mov     eax, [eax]
0x99CDB1: mov     eax, [eax+4]
0x99CDB4: mov     [ebp+CodePage], eax
0x99CDB7: push    edi; cchData
0x99CDB8: push    edi; lpLCData
0x99CDB9: push    [ebp+LCType]; LCType
0x99CDBC: mov     edi, ds:GetLocaleInfoA
0x99CDC2: push    [ebp+Locale]; Locale
0x99CDC5: call    edi ; GetLocaleInfoA
0x99CDC7: mov     ebx, eax
0x99CDC9: test    ebx, ebx
0x99CDCB: jnz     short loc_99CDD4
0x99CDCD: xor     eax, eax
0x99CDCF: jmp     loc_99CE5A
0x99CDD4: jle     short loc_99CE1A
0x99CDD6: push    0FFFFFFE0h
0x99CDD8: xor     edx, edx
0x99CDDA: pop     eax
0x99CDDB: div     ebx
0x99CDDD: cmp     eax, 1
0x99CDE0: jb      short loc_99CE1A
0x99CDE2: lea     eax, [ebx+8]
0x99CDE5: cmp     eax, 400h
0x99CDEA: ja      short loc_99CE02
0x99CDEC: call    __alloca?
0x99CDF1: mov     esi, esp
0x99CDF3: test    esi, esi
0x99CDF5: jz      short loc_99CDCD
0x99CDF7: mov     dword ptr [esi], 0CCCCh
0x99CDFD: add     esi, 8
0x99CE00: jmp     short loc_99CE1C
0x99CE02: push    eax; Size
0x99CE03: call    _malloc
0x99CE08: test    eax, eax
0x99CE0A: pop     ecx
0x99CE0B: jz      short loc_99CE16
0x99CE0D: mov     dword ptr [eax], 0DDDDh
0x99CE13: add     eax, 8
0x99CE16: mov     esi, eax
0x99CE18: jmp     short loc_99CE1C
0x99CE1A: xor     esi, esi
0x99CE1C: test    esi, esi
0x99CE1E: jz      short loc_99CDCD
0x99CE20: push    ebx; cchData
0x99CE21: push    esi; lpLCData
0x99CE22: push    [ebp+LCType]; LCType
0x99CE25: push    [ebp+Locale]; Locale
0x99CE28: call    edi ; GetLocaleInfoA
0x99CE2A: test    eax, eax
0x99CE2C: jz      short unknown_libname_196___unknown_libname_197
0x99CE2E: xor     eax, eax
0x99CE30: cmp     [ebp+cchData], eax
0x99CE33: jnz     short loc_99CE39
0x99CE35: push    eax
0x99CE36: push    eax
0x99CE37: jmp     short loc_99CE3F
0x99CE39: push    [ebp+cchData]; cchWideChar
0x99CE3C: push    [ebp+lpLCData]; lpWideCharStr
0x99CE3F: push    0FFFFFFFFh; cbMultiByte
0x99CE41: push    esi; lpMultiByteStr
0x99CE42: push    1; dwFlags
0x99CE44: push    [ebp+CodePage]; CodePage
0x99CE47: call    ds:MultiByteToWideChar
0x99CE4D: mov     [ebp+var_8], eax
