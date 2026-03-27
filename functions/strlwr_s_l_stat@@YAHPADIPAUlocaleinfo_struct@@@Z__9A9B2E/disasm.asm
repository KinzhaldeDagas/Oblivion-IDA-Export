0x9A9B2E: push    ebp
0x9A9B2F: mov     ebp, esp
0x9A9B31: sub     esp, 0Ch
0x9A9B34: mov     eax, ___security_cookie
0x9A9B39: xor     eax, ebp
0x9A9B3B: mov     [ebp+var_4], eax
0x9A9B3E: push    ebx
0x9A9B3F: push    esi
0x9A9B40: push    edi; Src
0x9A9B41: mov     edi, [ebp+Str]
0x9A9B44: xor     ebx, ebx
0x9A9B46: cmp     edi, ebx
0x9A9B48: jnz     short loc_9A9B66
0x9A9B4A: call    __errno
0x9A9B4F: push    16h
0x9A9B51: pop     esi
0x9A9B52: push    ebx
0x9A9B53: push    ebx
0x9A9B54: push    ebx
0x9A9B55: push    ebx
0x9A9B56: push    ebx
0x9A9B57: mov     [eax], esi
0x9A9B59: call    __invalid_parameter
0x9A9B5E: add     esp, 14h
0x9A9B61: jmp     loc_9A9C9B
0x9A9B66: push    [ebp+MaxCount]; MaxCount
0x9A9B69: push    edi; Str
0x9A9B6A: call    _strnlen
0x9A9B6F: cmp     eax, [ebp+MaxCount]
0x9A9B72: pop     ecx
0x9A9B73: pop     ecx
0x9A9B74: jb      short loc_9A9B7A
0x9A9B76: mov     [edi], bl
0x9A9B78: jmp     short loc_9A9B4A
0x9A9B7A: mov     edx, [ebp+arg_8]
0x9A9B7D: mov     eax, [edx]
0x9A9B7F: mov     ecx, [eax+14h]
0x9A9B82: cmp     ecx, ebx
0x9A9B84: jnz     short loc_9A9BA6
0x9A9B86: cmp     [edi], bl
0x9A9B88: mov     ecx, edi
0x9A9B8A: jz      short loc_9A9B9F
0x9A9B8C: mov     al, [ecx]
0x9A9B8E: cmp     al, 41h ; 'A'
0x9A9B90: jl      short loc_9A9B9A
0x9A9B92: cmp     al, 5Ah ; 'Z'
0x9A9B94: jg      short loc_9A9B9A
0x9A9B96: add     al, 20h ; ' '
0x9A9B98: mov     [ecx], al
0x9A9B9A: inc     ecx
0x9A9B9B: cmp     [ecx], bl
0x9A9B9D: jnz     short loc_9A9B8C
0x9A9B9F: xor     eax, eax
0x9A9BA1: jmp     loc_9A9C9D
0x9A9BA6: push    1; int
0x9A9BA8: push    dword ptr [eax+4]; int
0x9A9BAB: mov     esi, 100h
0x9A9BB0: push    ebx; int
0x9A9BB1: push    ebx; int
0x9A9BB2: push    0FFFFFFFFh; cchSrc
0x9A9BB4: push    edi; int
0x9A9BB5: push    esi; dwMapFlags
0x9A9BB6: push    ecx; Locale
0x9A9BB7: push    edx; struct localeinfo_struct *
0x9A9BB8: call    ___crtLCMapStringA
0x9A9BBD: mov     ecx, eax
0x9A9BBF: add     esp, 24h
0x9A9BC2: cmp     ecx, ebx
0x9A9BC4: mov     [ebp+var_C], ecx
0x9A9BC7: jnz     short loc_9A9BE0
0x9A9BC9: call    __errno
0x9A9BCE: mov     dword ptr [eax], 2Ah ; '*'
0x9A9BD4: call    __errno
0x9A9BD9: mov     eax, [eax]
0x9A9BDB: jmp     loc_9A9C9D
0x9A9BE0: cmp     [ebp+MaxCount], ecx
0x9A9BE3: jnb     short loc_9A9BF3
0x9A9BE5: mov     [edi], bl
0x9A9BE7: call    __errno
0x9A9BEC: push    22h ; '"'
0x9A9BEE: jmp     loc_9A9B51
0x9A9BF3: cmp     ecx, ebx
0x9A9BF5: jle     short loc_9A9C3C
0x9A9BF7: push    0FFFFFFE0h
0x9A9BF9: xor     edx, edx
0x9A9BFB: pop     eax
0x9A9BFC: div     ecx
0x9A9BFE: cmp     eax, 1
0x9A9C01: jb      short loc_9A9C3C
0x9A9C03: lea     eax, [ecx+8]
0x9A9C06: cmp     eax, 400h
0x9A9C0B: ja      short loc_9A9C20
0x9A9C0D: call    __alloca?
0x9A9C12: mov     eax, esp
0x9A9C14: cmp     eax, ebx
0x9A9C16: jz      short loc_9A9C34
0x9A9C18: mov     dword ptr [eax], 0CCCCh
0x9A9C1E: jmp     short loc_9A9C31
0x9A9C20: push    eax; Size
0x9A9C21: call    _malloc
0x9A9C26: cmp     eax, ebx
0x9A9C28: pop     ecx
0x9A9C29: jz      short loc_9A9C34
0x9A9C2B: mov     dword ptr [eax], 0DDDDh
0x9A9C31: add     eax, 8
0x9A9C34: mov     ecx, [ebp+var_C]
0x9A9C37: mov     [ebp+Src], eax
0x9A9C3A: jmp     short loc_9A9C3F
0x9A9C3C: mov     [ebp+Src], ebx
0x9A9C3F: cmp     [ebp+Src], ebx
0x9A9C42: jnz     short loc_9A9C51
0x9A9C44: call    __errno
0x9A9C49: mov     dword ptr [eax], 0Ch
0x9A9C4F: jmp     short loc_9A9BD4
0x9A9C51: mov     edx, [ebp+arg_8]
0x9A9C54: mov     eax, [edx]
0x9A9C56: push    1; int
0x9A9C58: push    dword ptr [eax+4]; int
0x9A9C5B: push    ecx; int
0x9A9C5C: push    [ebp+Src]; int
0x9A9C5F: push    0FFFFFFFFh; cchSrc
0x9A9C61: push    edi; int
0x9A9C62: push    esi; dwMapFlags
0x9A9C63: push    dword ptr [eax+14h]; Locale
0x9A9C66: push    edx; struct localeinfo_struct *
0x9A9C67: call    ___crtLCMapStringA
0x9A9C6C: add     esp, 24h
0x9A9C6F: test    eax, eax
0x9A9C71: jz      short loc_9A9C86
0x9A9C73: push    [ebp+Src]; Src
0x9A9C76: push    [ebp+MaxCount]; SizeInBytes
0x9A9C79: push    edi; Dst
0x9A9C7A: call    _strcpy_s
0x9A9C7F: add     esp, 0Ch
0x9A9C82: mov     esi, eax
0x9A9C84: jmp     short loc_9A9C92
0x9A9C86: call    __errno
0x9A9C8B: push    2Ah ; '*'
0x9A9C8D: pop     ecx
0x9A9C8E: mov     [eax], ecx
0x9A9C90: mov     esi, ecx
0x9A9C92: push    [ebp+Src]; Memory
0x9A9C95: call    __freea
0x9A9C9A: pop     ecx
0x9A9C9B: mov     eax, esi
0x9A9C9D: lea     esp, [ebp-18h]
0x9A9CA0: pop     edi
0x9A9CA1: pop     esi
0x9A9CA2: pop     ebx
0x9A9CA3: mov     ecx, [ebp+var_4]
0x9A9CA6: xor     ecx, ebp
0x9A9CA8: call    @__security_check_cookie@4
0x9A9CAD: leave
0x9A9CAE: retn
