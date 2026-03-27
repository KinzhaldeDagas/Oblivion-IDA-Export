0x9805EE: push    ebp
0x9805EF: mov     ebp, esp
0x9805F1: sub     esp, 10h
0x9805F4: push    esi
0x9805F5: mov     esi, [ebp+arg_4]
0x9805F8: test    esi, esi
0x9805FA: jnz     short loc_98060E
0x9805FC: call    ____lc_handle_func
0x980601: mov     eax, [eax+8]
0x980604: mov     [ebp+Locale], eax
0x980607: call    ____lc_codepage_func
0x98060C: jmp     short loc_980616
0x98060E: mov     eax, [esi]
0x980610: mov     [ebp+Locale], eax
0x980613: mov     eax, [esi+4]
0x980616: cmp     [ebp+Locale], 0
0x98061A: mov     [ebp+var_10], eax
0x98061D: jnz     short loc_980636
0x98061F: mov     eax, [ebp+C]
0x980622: lea     ecx, [eax-41h]
0x980625: cmp     ecx, 19h
0x980628: ja      loc_9806FA
0x98062E: add     eax, 20h ; ' '
0x980631: jmp     loc_9806FA
0x980636: push    ebx
0x980637: mov     ebx, [ebp+C]
0x98063A: push    edi
0x98063B: mov     edi, 100h
0x980640: cmp     ebx, edi
0x980642: jnb     short loc_980661
0x980644: test    esi, esi
0x980646: jnz     short loc_980658
0x980648: push    ebx; C
0x980649: call    _isupper
0x98064E: test    eax, eax
0x980650: pop     ecx
0x980651: jnz     short loc_980665
0x980653: jmp     loc_9806DE
0x980658: mov     eax, [esi+8]
0x98065B: test    byte ptr [eax+ebx*2], 1
0x98065F: jz      short loc_9806DE
0x980661: test    esi, esi
0x980663: jnz     short loc_980680
0x980665: mov     [ebp+var_8], ebx
0x980668: sar     [ebp+var_8], 8
0x98066C: call    ___pctype_func
0x980671: movzx   ecx, byte ptr [ebp+var_8]
0x980675: movzx   eax, word ptr [eax+ecx*2]
0x980679: and     eax, 8000h
0x98067E: jmp     short loc_98069C
0x980680: mov     ecx, [esi+8]
0x980683: mov     [ebp+var_8], ebx
0x980686: sar     [ebp+var_8], 8
0x98068A: mov     eax, [ebp+var_8]
0x98068D: and     eax, 0FFh
0x980692: movzx   eax, word ptr [ecx+eax*2]
0x980696: shr     eax, 0Fh
0x980699: and     eax, 1
0x98069C: test    eax, eax
0x98069E: jz      short loc_9806B2
0x9806A0: mov     al, byte ptr [ebp+var_8]
0x9806A3: push    2
0x9806A5: mov     byte ptr [ebp+arg_4], al
0x9806A8: mov     byte ptr [ebp+arg_4+1], bl
0x9806AB: mov     byte ptr [ebp+arg_4+2], 0
0x9806AF: pop     eax
0x9806B0: jmp     short loc_9806BC
0x9806B2: xor     eax, eax
0x9806B4: mov     byte ptr [ebp+arg_4], bl
0x9806B7: mov     byte ptr [ebp+arg_4+1], 0
0x9806BB: inc     eax
0x9806BC: push    1; int
0x9806BE: push    [ebp+var_10]; int
0x9806C1: lea     ecx, [ebp+var_4]
0x9806C4: push    3; int
0x9806C6: push    ecx; int
0x9806C7: push    eax; cchSrc
0x9806C8: lea     eax, [ebp+arg_4]
0x9806CB: push    eax; int
0x9806CC: push    edi; dwMapFlags
0x9806CD: push    [ebp+Locale]; Locale
0x9806D0: push    0; struct localeinfo_struct *
0x9806D2: call    ___crtLCMapStringA
0x9806D7: add     esp, 24h
0x9806DA: test    eax, eax
0x9806DC: jnz     short loc_9806E2
0x9806DE: mov     eax, ebx
0x9806E0: jmp     short loc_9806F8
0x9806E2: cmp     eax, 1
0x9806E5: jnz     short loc_9806ED
0x9806E7: movzx   eax, byte ptr [ebp+var_4]
0x9806EB: jmp     short loc_9806F8
0x9806ED: movzx   ecx, byte ptr [ebp+var_4+1]
0x9806F1: xor     eax, eax
0x9806F3: mov     ah, byte ptr [ebp+var_4]
0x9806F6: or      eax, ecx
0x9806F8: pop     edi
0x9806F9: pop     ebx
0x9806FA: pop     esi
0x9806FB: leave
0x9806FC: retn
