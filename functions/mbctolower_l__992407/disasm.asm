0x992407: push    ebp
0x992408: mov     ebp, esp
0x99240A: sub     esp, 18h
0x99240D: push    ebx
0x99240E: push    [ebp+arg_4]; struct localeinfo_struct *
0x992411: lea     ecx, [ebp+var_18]; this
0x992414: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x992419: mov     ebx, [ebp+arg_0]
0x99241C: cmp     ebx, 0FFh
0x992422: jbe     short loc_992485
0x992424: mov     eax, ebx
0x992426: shr     eax, 8
0x992429: movzx   ecx, al
0x99242C: mov     byte ptr [ebp+var_4], al
0x99242F: mov     eax, [ebp+var_18.mbcinfo]
0x992432: mov     byte ptr [ebp+var_4+1], bl
0x992435: test    byte ptr [ecx+eax+1Dh], 4
0x99243A: jnz     short loc_99244D
0x99243C: cmp     [ebp+var_C], 0
0x992440: jz      short loc_992449
0x992442: mov     eax, [ebp+var_10]
0x992445: and     dword ptr [eax+70h], 0FFFFFFFDh
0x992449: mov     eax, ebx
0x99244B: jmp     short loc_9924A8
0x99244D: push    1; int
0x99244F: push    dword ptr [eax+4]; int
0x992452: lea     ecx, [ebp+var_8]
0x992455: push    2; int
0x992457: push    ecx; int
0x992458: push    2; cchSrc
0x99245A: lea     ecx, [ebp+var_4]
0x99245D: push    ecx; int
0x99245E: push    100h; dwMapFlags
0x992463: push    dword ptr [eax+0Ch]; Locale
0x992466: lea     eax, [ebp+var_18]
0x992469: push    eax; struct localeinfo_struct *
0x99246A: call    ___crtLCMapStringA
0x99246F: add     esp, 24h
0x992472: test    eax, eax
0x992474: jz      short loc_99243C
0x992476: movzx   eax, byte ptr [ebp+var_8]
0x99247A: movzx   ecx, byte ptr [ebp+var_8+1]
0x99247E: shl     eax, 8
0x992481: add     eax, ecx
0x992483: jmp     short loc_99249B
0x992485: mov     eax, [ebp+var_18.mbcinfo]
0x992488: add     eax, ebx
0x99248A: test    byte ptr [eax+1Dh], 10h
0x99248E: jz      short loc_992499
0x992490: movzx   eax, byte ptr [eax+11Dh]
0x992497: jmp     short loc_99249B
0x992499: mov     eax, ebx
0x99249B: cmp     [ebp+var_C], 0
0x99249F: jz      short loc_9924A8
0x9924A1: mov     ecx, [ebp+var_10]
0x9924A4: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9924A8: pop     ebx
0x9924A9: leave
0x9924AA: retn
