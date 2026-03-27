0x997AAE: push    ecx
0x997AAF: push    ecx
0x997AB0: mov     eax, dword_BAA758
0x997AB5: push    ebx
0x997AB6: push    ebp
0x997AB7: push    esi
0x997AB8: push    edi
0x997AB9: mov     edi, ds:GetEnvironmentStringsW
0x997ABF: xor     ebx, ebx
0x997AC1: xor     esi, esi
0x997AC3: cmp     eax, ebx
0x997AC5: push    2
0x997AC7: pop     ebp
0x997AC8: jnz     short loc_997AF7
0x997ACA: call    edi ; GetEnvironmentStringsW
0x997ACC: mov     esi, eax
0x997ACE: cmp     esi, ebx
0x997AD0: jz      short loc_997ADE
0x997AD2: mov     dword_BAA758, 1
0x997ADC: jmp     short loc_997B00
0x997ADE: call    ds:GetLastError
0x997AE4: cmp     eax, 78h ; 'x'
0x997AE7: jnz     short loc_997AF2
0x997AE9: mov     eax, ebp
0x997AEB: mov     dword_BAA758, eax
0x997AF0: jmp     short loc_997AF7
0x997AF2: mov     eax, dword_BAA758
0x997AF7: cmp     eax, 1
0x997AFA: jnz     loc_997B84
0x997B00: cmp     esi, ebx
0x997B02: jnz     short loc_997B13
0x997B04: call    edi ; GetEnvironmentStringsW
0x997B06: mov     esi, eax
0x997B08: cmp     esi, ebx
0x997B0A: jnz     short loc_997B13
0x997B0C: xor     eax, eax
0x997B0E: jmp     loc_997BDC
0x997B13: cmp     [esi], bx
0x997B16: mov     eax, esi
0x997B18: jz      short loc_997B28
0x997B1A: add     eax, ebp
0x997B1C: cmp     [eax], bx
0x997B1F: jnz     short loc_997B1A
0x997B21: add     eax, ebp
0x997B23: cmp     [eax], bx
0x997B26: jnz     short loc_997B1A
0x997B28: mov     edi, ds:WideCharToMultiByte
0x997B2E: push    ebx; lpUsedDefaultChar
0x997B2F: push    ebx; lpDefaultChar
0x997B30: push    ebx; cbMultiByte
0x997B31: sub     eax, esi
0x997B33: push    ebx; lpMultiByteStr
0x997B34: sar     eax, 1
0x997B36: inc     eax
0x997B37: push    eax; cchWideChar
0x997B38: push    esi; lpWideCharStr
0x997B39: push    ebx; dwFlags
0x997B3A: push    ebx; CodePage
0x997B3B: mov     [esp+38h+cchWideChar], eax
0x997B3F: call    edi ; WideCharToMultiByte
0x997B41: mov     ebp, eax
0x997B43: cmp     ebp, ebx
0x997B45: jz      short loc_997B79
0x997B47: push    ebp
0x997B48: call    unknown_libname_72
0x997B4D: cmp     eax, ebx
0x997B4F: pop     ecx
0x997B50: mov     [esp+18h+Memory], eax
0x997B54: jz      short loc_997B79
0x997B56: push    ebx; lpUsedDefaultChar
0x997B57: push    ebx; lpDefaultChar
0x997B58: push    ebp; cbMultiByte
0x997B59: push    eax; lpMultiByteStr
0x997B5A: push    [esp+28h+cchWideChar]; cchWideChar
0x997B5E: push    esi; lpWideCharStr
0x997B5F: push    ebx; dwFlags
0x997B60: push    ebx; CodePage
0x997B61: call    edi ; WideCharToMultiByte
0x997B63: test    eax, eax
0x997B65: jnz     short loc_997B75
0x997B67: push    [esp+18h+Memory]; Memory
0x997B6B: call    _free
0x997B70: pop     ecx
0x997B71: mov     [esp+18h+Memory], ebx
0x997B75: mov     ebx, [esp+18h+Memory]
0x997B79: push    esi; LPWCH
0x997B7A: call    ds:FreeEnvironmentStringsW
0x997B80: mov     eax, ebx
0x997B82: jmp     short loc_997BDC
0x997B84: cmp     eax, ebp
0x997B86: jz      short loc_997B8C
0x997B88: cmp     eax, ebx
0x997B8A: jnz     short loc_997B0C
0x997B8C: call    ds:GetEnvironmentStrings
0x997B92: mov     esi, eax
0x997B94: cmp     esi, ebx
0x997B96: jz      loc_997B0C
0x997B9C: cmp     [esi], bl
0x997B9E: jz      short loc_997BAA
0x997BA0: inc     eax
0x997BA1: cmp     [eax], bl
0x997BA3: jnz     short loc_997BA0
0x997BA5: inc     eax
0x997BA6: cmp     [eax], bl
0x997BA8: jnz     short loc_997BA0
0x997BAA: sub     eax, esi
0x997BAC: inc     eax
0x997BAD: mov     ebp, eax
0x997BAF: push    ebp
0x997BB0: call    unknown_libname_72
0x997BB5: mov     edi, eax
0x997BB7: cmp     edi, ebx
0x997BB9: pop     ecx
0x997BBA: jnz     short loc_997BC8
0x997BBC: push    esi; LPCH
0x997BBD: call    ds:FreeEnvironmentStringsA
0x997BC3: jmp     loc_997B0C
0x997BC8: push    ebp; Size
0x997BC9: push    esi; Src
0x997BCA: push    edi; Dst
0x997BCB: call    _memcpy
0x997BD0: add     esp, 0Ch
0x997BD3: push    esi; LPCH
0x997BD4: call    ds:FreeEnvironmentStringsA
0x997BDA: mov     eax, edi
0x997BDC: pop     edi
0x997BDD: pop     esi
0x997BDE: pop     ebp
0x997BDF: pop     ebx
0x997BE0: pop     ecx
0x997BE1: pop     ecx
0x997BE2: retn
