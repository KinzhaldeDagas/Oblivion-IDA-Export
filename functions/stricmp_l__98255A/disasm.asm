0x98255A: push    ebp
0x98255B: mov     ebp, esp
0x98255D: sub     esp, 10h
0x982560: push    ebx
0x982561: push    [ebp+Locale]; struct localeinfo_struct *
0x982564: lea     ecx, [ebp+var_10]; this
0x982567: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98256C: xor     ebx, ebx
0x98256E: cmp     [ebp+Str1], ebx
0x982571: jnz     short loc_9825A1
0x982573: call    __errno
0x982578: push    ebx
0x982579: push    ebx
0x98257A: push    ebx
0x98257B: push    ebx
0x98257C: push    ebx
0x98257D: mov     dword ptr [eax], 16h
0x982583: call    __invalid_parameter
0x982588: add     esp, 14h
0x98258B: cmp     [ebp+var_4], bl
0x98258E: jz      short loc_982597
0x982590: mov     eax, [ebp+var_8]
0x982593: and     dword ptr [eax+70h], 0FFFFFFFDh
0x982597: mov     eax, 7FFFFFFFh
0x98259C: jmp     loc_98262A
0x9825A1: push    edi
0x9825A2: mov     edi, [ebp+Str2]
0x9825A5: cmp     edi, ebx
0x9825A7: jnz     short loc_9825D4
0x9825A9: call    __errno
0x9825AE: push    ebx
0x9825AF: push    ebx
0x9825B0: push    ebx
0x9825B1: push    ebx
0x9825B2: push    ebx
0x9825B3: mov     dword ptr [eax], 16h
0x9825B9: call    __invalid_parameter
0x9825BE: add     esp, 14h
0x9825C1: cmp     [ebp+var_4], bl
0x9825C4: jz      short loc_9825CD
0x9825C6: mov     eax, [ebp+var_8]
0x9825C9: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9825CD: mov     eax, 7FFFFFFFh
0x9825D2: jmp     short loc_982629
0x9825D4: mov     eax, [ebp+var_10.locinfo]
0x9825D7: cmp     [eax+14h], ebx
0x9825DA: jnz     short loc_9825E9
0x9825DC: push    edi
0x9825DD: push    [ebp+Str1]
0x9825E0: call    ___ascii_stricmp
0x9825E5: pop     ecx
0x9825E6: pop     ecx
0x9825E7: jmp     short loc_98261D
0x9825E9: push    esi
0x9825EA: mov     eax, [ebp+Str1]
0x9825ED: movzx   eax, byte ptr [eax]
0x9825F0: lea     ecx, [ebp+var_10]
0x9825F3: push    ecx; Locale
0x9825F4: push    eax; C
0x9825F5: call    __tolower_l
0x9825FA: inc     [ebp+Str1]
0x9825FD: mov     esi, eax
0x9825FF: movzx   eax, byte ptr [edi]
0x982602: lea     ecx, [ebp+var_10]
0x982605: push    ecx; Locale
0x982606: push    eax; C
0x982607: call    __tolower_l
0x98260C: add     esp, 10h
0x98260F: inc     edi
0x982610: cmp     esi, ebx
0x982612: jz      short loc_982618
0x982614: cmp     esi, eax
0x982616: jz      short loc_9825EA
0x982618: sub     esi, eax
0x98261A: mov     eax, esi
0x98261C: pop     esi
0x98261D: cmp     [ebp+var_4], bl
0x982620: jz      short loc_982629
0x982622: mov     ecx, [ebp+var_8]
0x982625: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x982629: pop     edi
0x98262A: pop     ebx
0x98262B: leave
0x98262C: retn
