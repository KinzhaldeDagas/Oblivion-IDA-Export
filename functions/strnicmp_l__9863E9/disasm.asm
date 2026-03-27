0x9863E9: push    ebp
0x9863EA: mov     ebp, esp
0x9863EC: sub     esp, 10h
0x9863EF: push    ebx
0x9863F0: xor     ebx, ebx
0x9863F2: cmp     [ebp+MaxCount], ebx
0x9863F5: push    esi
0x9863F6: push    edi
0x9863F7: jz      loc_9864D2
0x9863FD: push    [ebp+Locale]; struct localeinfo_struct *
0x986400: lea     ecx, [ebp+var_10]; this
0x986403: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986408: cmp     [ebp+Str1], ebx
0x98640B: jnz     short loc_98643B
0x98640D: call    __errno
0x986412: push    ebx
0x986413: push    ebx
0x986414: push    ebx
0x986415: push    ebx
0x986416: push    ebx
0x986417: mov     dword ptr [eax], 16h
0x98641D: call    __invalid_parameter
0x986422: add     esp, 14h
0x986425: cmp     [ebp+var_4], bl
0x986428: jz      short loc_986431
0x98642A: mov     eax, [ebp+var_8]
0x98642D: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986431: mov     eax, 7FFFFFFFh
0x986436: jmp     loc_9864D4
0x98643B: mov     edi, [ebp+Str2]
0x98643E: cmp     edi, ebx
0x986440: jz      short loc_98640D
0x986442: mov     esi, 7FFFFFFFh
0x986447: cmp     [ebp+MaxCount], esi
0x98644A: jbe     short loc_986474
0x98644C: call    __errno
0x986451: push    ebx
0x986452: push    ebx
0x986453: push    ebx
0x986454: push    ebx
0x986455: push    ebx
0x986456: mov     dword ptr [eax], 16h
0x98645C: call    __invalid_parameter
0x986461: add     esp, 14h
0x986464: cmp     [ebp+var_4], bl
0x986467: jz      short loc_986470
0x986469: mov     eax, [ebp+var_8]
0x98646C: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986470: mov     eax, esi
0x986472: jmp     short loc_9864D4
0x986474: mov     eax, [ebp+var_10.locinfo]
0x986477: cmp     [eax+14h], ebx
0x98647A: jnz     short loc_986499
0x98647C: push    [ebp+MaxCount]
0x98647F: push    edi
0x986480: push    [ebp+Str1]
0x986483: call    ___ascii_strnicmp
0x986488: add     esp, 0Ch
0x98648B: cmp     [ebp+var_4], bl
0x98648E: jz      short loc_9864D4
0x986490: mov     ecx, [ebp+var_8]
0x986493: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x986497: jmp     short loc_9864D4
0x986499: mov     eax, [ebp+Str1]
0x98649C: movzx   eax, byte ptr [eax]
0x98649F: lea     ecx, [ebp+var_10]
0x9864A2: push    ecx; Locale
0x9864A3: push    eax; C
0x9864A4: call    __tolower_l
0x9864A9: inc     [ebp+Str1]
0x9864AC: mov     esi, eax
0x9864AE: movzx   eax, byte ptr [edi]
0x9864B1: lea     ecx, [ebp+var_10]
0x9864B4: push    ecx; Locale
0x9864B5: push    eax; C
0x9864B6: call    __tolower_l
0x9864BB: add     esp, 10h
0x9864BE: inc     edi
0x9864BF: dec     [ebp+MaxCount]
0x9864C2: jz      short loc_9864CC
0x9864C4: cmp     esi, ebx
0x9864C6: jz      short loc_9864CC
0x9864C8: cmp     esi, eax
0x9864CA: jz      short loc_986499
0x9864CC: sub     esi, eax
0x9864CE: mov     eax, esi
0x9864D0: jmp     short loc_98648B
0x9864D2: xor     eax, eax
0x9864D4: pop     edi
0x9864D5: pop     esi
0x9864D6: pop     ebx
0x9864D7: leave
0x9864D8: retn
