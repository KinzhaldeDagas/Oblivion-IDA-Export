0x6A25E0: sub     esp, 214h
0x6A25E6: mov     eax, ds:0B30AACh
0x6A25EB: xor     eax, esp
0x6A25ED: mov     [esp+214h+var_4], eax
0x6A25F4: mov     ecx, [esp+214h+arg_0]
0x6A25FB: fld     dword ptr ds:0A342A4h
0x6A2601: push    ebx
0x6A2602: push    esi
0x6A2603: mov     esi, [ecx+0Ch]
0x6A2606: mov     eax, [esi+1Ch]
0x6A2609: mov     eax, [eax+58h]
0x6A260C: mov     edx, eax
0x6A260E: shr     edx, 7
0x6A2611: test    dl, 1
0x6A2614: push    edi
0x6A2615: mov     edi, [esp+220h+arg_4]
0x6A261C: jz      short loc_6A2624
0x6A261E: fst     [esp+220h+var_214]
0x6A2622: jmp     short loc_6A262B
0x6A2624: fld     dword ptr [ecx+1Ch]
0x6A2627: fstp    [esp+220h+var_214]
0x6A262B: shr     eax, 8
0x6A262E: test    al, 1
0x6A2630: jnz     short loc_6A2637
0x6A2632: fstp    st
0x6A2634: fld     dword ptr [ecx+18h]
0x6A2637: mov     ecx, esi
0x6A2639: fstp    [esp+220h+var_210]
0x6A263D: call    EffectItem_GetSchool
0x6A2642: test    eax, eax
0x6A2644: jnz     short loc_6A264A
0x6A2646: mov     bl, 43h ; 'C'
0x6A2648: jmp     short loc_6A26A0
0x6A264A: mov     ecx, esi
0x6A264C: call    EffectItem_GetSchool
0x6A2651: cmp     eax, 1
0x6A2654: jnz     short loc_6A265A
0x6A2656: mov     bl, 45h ; 'E'
0x6A2658: jmp     short loc_6A26A0
0x6A265A: mov     ecx, esi
0x6A265C: call    EffectItem_GetSchool
0x6A2661: cmp     eax, 2
0x6A2664: jnz     short loc_6A266A
0x6A2666: mov     bl, 41h ; 'A'
0x6A2668: jmp     short loc_6A26A0
0x6A266A: mov     ecx, esi
0x6A266C: call    EffectItem_GetSchool
0x6A2671: cmp     eax, 3
0x6A2674: jnz     short loc_6A267A
0x6A2676: mov     bl, 44h ; 'D'
0x6A2678: jmp     short loc_6A26A0
0x6A267A: mov     ecx, esi
0x6A267C: call    EffectItem_GetSchool
0x6A2681: cmp     eax, 4
0x6A2684: jnz     short loc_6A268A
0x6A2686: mov     bl, 46h ; 'F'
0x6A2688: jmp     short loc_6A26A0
0x6A268A: mov     ecx, esi
0x6A268C: call    EffectItem_GetSchool
0x6A2691: mov     ebx, eax
0x6A2693: sub     ebx, 5
0x6A2696: neg     ebx
0x6A2698: sbb     bl, bl
0x6A269A: and     bl, 18h
0x6A269D: add     bl, 42h ; 'B'
0x6A26A0: lea     eax, [esp+220h+var_20C]
0x6A26A4: push    eax
0x6A26A5: mov     ecx, esi
0x6A26A7: call    EffectItem_GetName
0x6A26AC: fld     [esp+220h+var_214]
0x6A26B0: mov     ecx, [eax]
0x6A26B2: sub     esp, 10h
0x6A26B5: fstp    [esp+230h+var_22C+4]
0x6A26B9: movsx   edx, bl
0x6A26BC: fld     [esp+230h+var_210]
0x6A26C0: lea     eax, [esp+230h+var_104]
0x6A26C7: fstp    [esp+230h+var_234+4]
0x6A26CA: push    ecx
0x6A26CB: push    edx
0x6A26CC: push    offset aC_30s_1f_1f; "%c%.30s%.1f%.1f"
0x6A26D1: push    eax
0x6A26D2: call    __sprintf
0x6A26D7: mov     ecx, [esp+240h+var_20C]
0x6A26DB: push    ecx
0x6A26DC: call    FormHeapFree
0x6A26E1: mov     esi, [edi+0Ch]
0x6A26E4: mov     edx, [esi+1Ch]
0x6A26E7: mov     eax, [edx+58h]
0x6A26EA: mov     ecx, eax
0x6A26EC: shr     ecx, 7
0x6A26EF: add     esp, 24h
0x6A26F2: test    cl, 1
0x6A26F5: jz      short loc_6A26FF
0x6A26F7: fld     dword ptr ds:0A342A4h
0x6A26FD: jmp     short loc_6A2702
0x6A26FF: fld     dword ptr [edi+1Ch]
0x6A2702: shr     eax, 8
0x6A2705: fstp    [esp+220h+var_210]
0x6A2709: test    al, 1
0x6A270B: jz      short loc_6A2715
0x6A270D: fld     dword ptr ds:0A342A4h
0x6A2713: jmp     short loc_6A2718
0x6A2715: fld     dword ptr [edi+18h]
0x6A2718: mov     ecx, esi
0x6A271A: fstp    [esp+220h+var_214]
0x6A271E: call    EffectItem_GetSchool
0x6A2723: test    eax, eax
0x6A2725: jnz     short loc_6A272B
0x6A2727: mov     bl, 43h ; 'C'
0x6A2729: jmp     short loc_6A2781
0x6A272B: mov     ecx, esi
0x6A272D: call    EffectItem_GetSchool
0x6A2732: cmp     eax, 1
0x6A2735: jnz     short loc_6A273B
0x6A2737: mov     bl, 45h ; 'E'
0x6A2739: jmp     short loc_6A2781
0x6A273B: mov     ecx, esi
0x6A273D: call    EffectItem_GetSchool
0x6A2742: cmp     eax, 2
0x6A2745: jnz     short loc_6A274B
0x6A2747: mov     bl, 41h ; 'A'
0x6A2749: jmp     short loc_6A2781
0x6A274B: mov     ecx, esi
0x6A274D: call    EffectItem_GetSchool
0x6A2752: cmp     eax, 3
0x6A2755: jnz     short loc_6A275B
0x6A2757: mov     bl, 44h ; 'D'
0x6A2759: jmp     short loc_6A2781
0x6A275B: mov     ecx, esi
0x6A275D: call    EffectItem_GetSchool
0x6A2762: cmp     eax, 4
0x6A2765: jnz     short loc_6A276B
0x6A2767: mov     bl, 46h ; 'F'
0x6A2769: jmp     short loc_6A2781
0x6A276B: mov     ecx, esi
0x6A276D: call    EffectItem_GetSchool
0x6A2772: mov     ebx, eax
0x6A2774: sub     ebx, 5
0x6A2777: neg     ebx
0x6A2779: sbb     bl, bl
0x6A277B: and     bl, 18h
0x6A277E: add     bl, 42h ; 'B'
0x6A2781: lea     edx, [esp+220h+var_20C]
0x6A2785: push    edx
0x6A2786: mov     ecx, esi
0x6A2788: call    EffectItem_GetName
0x6A278D: fld     [esp+220h+var_210]
0x6A2791: mov     eax, [eax]
0x6A2793: sub     esp, 10h
0x6A2796: fstp    [esp+230h+var_22C+4]
0x6A279A: movsx   ecx, bl
0x6A279D: fld     [esp+230h+var_214]
0x6A27A1: lea     edx, [esp+230h+var_204]
0x6A27A5: fstp    [esp+230h+var_234+4]
0x6A27A8: push    eax
0x6A27A9: push    ecx
0x6A27AA: push    offset aC_30s_1f_1f; "%c%.30s%.1f%.1f"
0x6A27AF: push    edx
0x6A27B0: call    __sprintf
0x6A27B5: mov     eax, [esp+240h+var_20C]
0x6A27B9: push    eax
0x6A27BA: call    FormHeapFree
0x6A27BF: lea     ecx, [esp+244h+var_204]
0x6A27C3: push    ecx; unsigned __int8 *
0x6A27C4: lea     edx, [esp+248h+var_104]
0x6A27CB: push    edx; unsigned __int8 *
0x6A27CC: call    __mbsicmp
0x6A27D1: mov     ecx, [esp+24Ch+var_4]
0x6A27D8: add     esp, 2Ch
0x6A27DB: pop     edi
0x6A27DC: pop     esi
0x6A27DD: pop     ebx
0x6A27DE: xor     ecx, esp
0x6A27E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A27E5: add     esp, 214h
0x6A27EB: retn
