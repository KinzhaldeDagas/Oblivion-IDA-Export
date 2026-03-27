0x986F32: push    ebp
0x986F33: mov     ebp, esp
0x986F35: sub     esp, 14h
0x986F38: push    ebx
0x986F39: push    esi
0x986F3A: push    edi
0x986F3B: mov     edi, [ebp+Str]
0x986F3E: xor     ebx, ebx
0x986F40: cmp     edi, ebx
0x986F42: jz      short loc_986F65
0x986F44: cmp     [ebp+MaxCount], ebx
0x986F47: jbe     short loc_986F6A
0x986F49: cmp     edi, ebx
0x986F4B: jz      loc_987009
0x986F51: push    [ebp+MaxCount]; MaxCount
0x986F54: push    edi; Str
0x986F55: call    _strnlen
0x986F5A: cmp     eax, [ebp+MaxCount]
0x986F5D: pop     ecx
0x986F5E: pop     ecx
0x986F5F: jb      short loc_986F88
0x986F61: mov     [edi], bl
0x986F63: jmp     short loc_986F6A
0x986F65: cmp     [ebp+MaxCount], ebx
0x986F68: jz      short loc_986F49
0x986F6A: call    __errno
0x986F6F: push    16h
0x986F71: pop     esi
0x986F72: push    ebx
0x986F73: push    ebx
0x986F74: push    ebx
0x986F75: push    ebx
0x986F76: push    ebx
0x986F77: mov     [eax], esi
0x986F79: call    __invalid_parameter
0x986F7E: add     esp, 14h
0x986F81: mov     eax, esi
0x986F83: jmp     loc_98700B
0x986F88: push    [ebp+arg_8]; struct localeinfo_struct *
0x986F8B: lea     ecx, [ebp+var_14]; this
0x986F8E: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986F93: mov     esi, edi
0x986F95: cmp     [esi], bl
0x986F97: jz      short loc_986FFB
0x986F99: mov     cl, [edi]
0x986F9B: mov     edx, [ebp+var_14.mbcinfo]
0x986F9E: movzx   eax, cl
0x986FA1: add     eax, edx
0x986FA3: mov     dl, [eax+1Dh]
0x986FA6: test    dl, 4
0x986FA9: jz      short loc_986FE4
0x986FAB: mov     eax, [ebp+var_14.mbcinfo]
0x986FAE: push    1; int
0x986FB0: push    dword ptr [eax+4]; int
0x986FB3: lea     ecx, [ebp+var_4]
0x986FB6: push    2; int
0x986FB8: push    ecx; int
0x986FB9: push    2; cchSrc
0x986FBB: push    edi; int
0x986FBC: push    100h; dwMapFlags
0x986FC1: push    dword ptr [eax+0Ch]; Locale
0x986FC4: lea     eax, [ebp+var_14]
0x986FC7: push    eax; struct localeinfo_struct *
0x986FC8: call    ___crtLCMapStringA
0x986FCD: add     esp, 24h
0x986FD0: cmp     eax, ebx
0x986FD2: jz      short loc_987010
0x986FD4: mov     ecx, [ebp+var_4]
0x986FD7: mov     [esi], cl
0x986FD9: inc     esi
0x986FDA: inc     edi
0x986FDB: cmp     eax, 1
0x986FDE: jle     short loc_986FF6
0x986FE0: mov     [esi], ch
0x986FE2: jmp     short loc_986FF5
0x986FE4: test    dl, 10h
0x986FE7: jz      short loc_986FF1
0x986FE9: mov     al, [eax+11Dh]
0x986FEF: jmp     short loc_986FF3
0x986FF1: mov     al, cl
0x986FF3: mov     [esi], al
0x986FF5: inc     esi
0x986FF6: inc     edi
0x986FF7: cmp     [edi], bl
0x986FF9: jnz     short loc_986F99
0x986FFB: cmp     [ebp+var_8], bl
0x986FFE: mov     [esi], bl
0x987000: jz      short loc_987009
0x987002: mov     eax, [ebp+var_C]
0x987005: and     dword ptr [eax+70h], 0FFFFFFFDh
0x987009: xor     eax, eax
0x98700B: pop     edi
0x98700C: pop     esi
0x98700D: pop     ebx
0x98700E: leave
0x98700F: retn
0x987010: call    __errno
0x987015: mov     dword ptr [eax], 2Ah ; '*'
0x98701B: mov     eax, [ebp+Str]
0x98701E: mov     [eax], bl
0x987020: call    __errno
0x987025: cmp     [ebp+var_8], bl
0x987028: mov     eax, [eax]
0x98702A: jz      short loc_98700B
0x98702C: mov     ecx, [ebp+var_C]
0x98702F: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x987033: jmp     short loc_98700B
