0x9834AF: push    ebp
0x9834B0: mov     ebp, esp
0x9834B2: sub     esp, 14h
0x9834B5: push    esi
0x9834B6: push    [ebp+arg_8]; struct localeinfo_struct *
0x9834B9: lea     ecx, [ebp+Locale]; this
0x9834BC: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9834C1: mov     edx, [ebp+Str1]
0x9834C4: xor     esi, esi
0x9834C6: cmp     edx, esi
0x9834C8: jnz     short loc_9834F9
0x9834CA: call    __errno
0x9834CF: push    esi
0x9834D0: push    esi
0x9834D1: push    esi
0x9834D2: push    esi
0x9834D3: push    esi
0x9834D4: mov     dword ptr [eax], 16h
0x9834DA: call    __invalid_parameter
0x9834DF: add     esp, 14h
0x9834E2: cmp     [ebp+var_8], 0
0x9834E6: jz      short loc_9834EF
0x9834E8: mov     eax, [ebp+var_C]
0x9834EB: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9834EF: mov     eax, 7FFFFFFFh
0x9834F4: jmp     loc_9836C6
0x9834F9: push    ebx
0x9834FA: mov     ebx, [ebp+Str2]
0x9834FD: cmp     ebx, esi
0x9834FF: jnz     short loc_983530
0x983501: call    __errno
0x983506: push    esi
0x983507: push    esi
0x983508: push    esi
0x983509: push    esi
0x98350A: push    esi
0x98350B: mov     dword ptr [eax], 16h
0x983511: call    __invalid_parameter
0x983516: add     esp, 14h
0x983519: cmp     [ebp+var_8], 0
0x98351D: jz      short loc_983526
0x98351F: mov     eax, [ebp+var_C]
0x983522: and     dword ptr [eax+70h], 0FFFFFFFDh
0x983526: mov     eax, 7FFFFFFFh
0x98352B: jmp     loc_9836C5
0x983530: mov     eax, [ebp+Locale.mbcinfo]
0x983533: cmp     [eax+8], esi
0x983536: jnz     short loc_98355C
0x983538: lea     eax, [ebp+Locale]
0x98353B: push    eax; Locale
0x98353C: push    ebx; Str2
0x98353D: push    edx; Str1
0x98353E: call    __stricmp_l
0x983543: add     esp, 0Ch
0x983546: cmp     [ebp+var_8], 0
0x98354A: jz      loc_9836C5
0x983550: mov     ecx, [ebp+var_C]
0x983553: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x983557: jmp     loc_9836C5
0x98355C: push    edi
0x98355D: mov     edi, 200h
0x983562: movzx   cx, byte ptr [edx]
0x983566: movzx   ecx, cx
0x983569: movzx   esi, cl
0x98356C: inc     edx
0x98356D: test    byte ptr [esi+eax+1Dh], 4
0x983572: mov     [ebp+Str1], edx
0x983575: jz      short loc_9835D0
0x983577: cmp     byte ptr [edx], 0
0x98357A: jnz     short loc_983580
0x98357C: xor     esi, esi
0x98357E: jmp     short loc_9835EC
0x983580: push    1; int
0x983582: push    dword ptr [eax+4]; int
0x983585: lea     ecx, [ebp+var_4]
0x983588: push    2; int
0x98358A: push    ecx; int
0x98358B: push    2; cchSrc
0x98358D: dec     edx
0x98358E: push    edx; int
0x98358F: push    edi; dwMapFlags
0x983590: push    dword ptr [eax+0Ch]; Locale
0x983593: lea     eax, [ebp+Locale]
0x983596: push    eax; struct localeinfo_struct *
0x983597: call    ___crtLCMapStringA
0x98359C: add     esp, 24h
0x98359F: cmp     eax, 1
0x9835A2: jnz     short loc_9835AB
0x9835A4: movzx   ax, byte ptr [ebp+var_4]
0x9835A9: jmp     short loc_9835C5
0x9835AB: cmp     eax, 2
0x9835AE: jnz     loc_983681
0x9835B4: movzx   ax, byte ptr [ebp+var_4]
0x9835B9: movzx   cx, byte ptr [ebp+var_4+1]
0x9835BE: shl     ax, 8
0x9835C2: add     ax, cx
0x9835C5: inc     [ebp+Str1]
0x9835C8: movzx   esi, ax
0x9835CB: mov     eax, [ebp+Locale.mbcinfo]
0x9835CE: jmp     short loc_9835EC
0x9835D0: movzx   edx, cx
0x9835D3: lea     ecx, [edx+eax]
0x9835D6: test    byte ptr [ecx+1Dh], 10h
0x9835DA: jz      short loc_9835E9
0x9835DC: movzx   cx, byte ptr [ecx+11Dh]
0x9835E4: movzx   esi, cx
0x9835E7: jmp     short loc_9835EC
0x9835E9: movzx   esi, dx
0x9835EC: movzx   cx, byte ptr [ebx]
0x9835F0: movzx   ecx, cx
0x9835F3: movzx   edx, cl
0x9835F6: inc     ebx
0x9835F7: test    byte ptr [edx+eax+1Dh], 4
0x9835FC: jz      short loc_983653
0x9835FE: cmp     byte ptr [ebx], 0
0x983601: jnz     short loc_983607
0x983603: xor     ecx, ecx
0x983605: jmp     short loc_98366F
0x983607: push    1; int
0x983609: push    dword ptr [eax+4]; int
0x98360C: lea     ecx, [ebp+var_4]
0x98360F: push    2; int
0x983611: push    ecx; int
0x983612: push    2; cchSrc
0x983614: lea     ecx, [ebx-1]
0x983617: push    ecx; int
0x983618: push    edi; dwMapFlags
0x983619: push    dword ptr [eax+0Ch]; Locale
0x98361C: lea     eax, [ebp+Locale]
0x98361F: push    eax; struct localeinfo_struct *
0x983620: call    ___crtLCMapStringA
0x983625: add     esp, 24h
0x983628: cmp     eax, 1
0x98362B: jnz     short loc_983634
0x98362D: movzx   ax, byte ptr [ebp+var_4]
0x983632: jmp     short loc_98364A
0x983634: cmp     eax, 2
0x983637: jnz     short loc_983681
0x983639: movzx   ax, byte ptr [ebp+var_4]
0x98363E: movzx   cx, byte ptr [ebp+var_4+1]
0x983643: shl     ax, 8
0x983647: add     ax, cx
0x98364A: movzx   ecx, ax
0x98364D: mov     eax, [ebp+Locale.mbcinfo]
0x983650: inc     ebx
0x983651: jmp     short loc_98366F
0x983653: movzx   edx, cx
0x983656: lea     ecx, [edx+eax]
0x983659: test    byte ptr [ecx+1Dh], 10h
0x98365D: jz      short loc_98366C
0x98365F: movzx   cx, byte ptr [ecx+11Dh]
0x983667: movzx   ecx, cx
0x98366A: jmp     short loc_98366F
0x98366C: movzx   ecx, dx
0x98366F: cmp     cx, si
0x983672: jnz     short loc_9836A0
0x983674: test    si, si
0x983677: jz      short loc_9836B5
0x983679: mov     edx, [ebp+Str1]
0x98367C: jmp     loc_983562
0x983681: call    __errno
0x983686: mov     dword ptr [eax], 16h
0x98368C: cmp     [ebp+var_8], 0
0x983690: jz      short loc_983699
0x983692: mov     eax, [ebp+var_C]
0x983695: and     dword ptr [eax+70h], 0FFFFFFFDh
0x983699: mov     eax, 7FFFFFFFh
0x98369E: jmp     short loc_9836C4
0x9836A0: sbb     eax, eax
0x9836A2: and     eax, 2
0x9836A5: dec     eax
0x9836A6: cmp     [ebp+var_8], 0
0x9836AA: jz      short loc_9836C4
0x9836AC: mov     ecx, [ebp+var_C]
0x9836AF: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9836B3: jmp     short loc_9836C4
0x9836B5: cmp     [ebp+var_8], 0
0x9836B9: jz      short loc_9836C2
0x9836BB: mov     eax, [ebp+var_C]
0x9836BE: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9836C2: xor     eax, eax
0x9836C4: pop     edi
0x9836C5: pop     ebx
0x9836C6: pop     esi
0x9836C7: leave
0x9836C8: retn
