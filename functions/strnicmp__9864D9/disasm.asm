0x9864D9: push    ebp
0x9864DA: mov     ebp, esp
0x9864DC: push    esi; Locale
0x9864DD: xor     esi, esi
0x9864DF: cmp     ds:0BA9E10h, esi
0x9864E5: jnz     short loc_986520
0x9864E7: cmp     [ebp+Str1], esi
0x9864EA: jnz     short loc_98650B
0x9864EC: call    __errno
0x9864F1: push    esi
0x9864F2: push    esi
0x9864F3: push    esi
0x9864F4: push    esi
0x9864F5: push    esi
0x9864F6: mov     dword ptr [eax], 16h
0x9864FC: call    __invalid_parameter
0x986501: add     esp, 14h
0x986504: mov     eax, 7FFFFFFFh
0x986509: jmp     short loc_986532
0x98650B: cmp     [ebp+Str2], esi
0x98650E: jz      short loc_9864EC
0x986510: cmp     [ebp+MaxCount], 7FFFFFFFh
0x986517: ja      short loc_9864EC
0x986519: pop     esi
0x98651A: pop     ebp
0x98651B: jmp     ___ascii_strnicmp
0x986520: push    esi; Locale
0x986521: push    [ebp+MaxCount]; MaxCount
0x986524: push    [ebp+Str2]; Str2
0x986527: push    [ebp+Str1]; Str1
0x98652A: call    __strnicmp_l
0x98652F: add     esp, 10h
0x986532: pop     esi
0x986533: pop     ebp
0x986534: retn
