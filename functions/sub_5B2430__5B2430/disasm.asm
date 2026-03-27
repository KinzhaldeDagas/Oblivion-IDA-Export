0x5B2430: sub     esp, 84h
0x5B2436: mov     eax, ds:0B30AACh
0x5B243B: xor     eax, esp
0x5B243D: mov     [esp+84h+var_4], eax
0x5B2444: mov     cl, ds:0B3B404h
0x5B244A: mov     al, cl
0x5B244C: push    ebx
0x5B244D: shr     al, 7
0x5B2450: not     al
0x5B2452: and     al, 1
0x5B2454: mov     ebx, 0
0x5B2459: push    ebp
0x5B245A: mov     ebp, [esp+8Ch+arg_4]
0x5B2461: setnz   bl
0x5B2464: push    esi
0x5B2465: push    edi
0x5B2466: mov     edi, [esp+94h+arg_0]
0x5B246D: lea     esi, [edi+18h]
0x5B2470: test    cl, 7Fh
0x5B2473: mov     [esp+94h+var_80], ebp
0x5B2477: lea     ebx, [ebx+ebx-1]
0x5B247B: mov     [esp+94h+var_84], ebx
0x5B247F: mov     ecx, esi
0x5B2481: jnz     loc_5B2670
0x5B2487: test    al, al
0x5B2489: mov     eax, [esi]
0x5B248B: mov     edx, [eax+18h]
0x5B248E: jz      loc_5B256B
0x5B2494: call    edx
0x5B2496: cmp     eax, 2
0x5B2499: jnz     short loc_5B249F
0x5B249B: mov     al, 41h ; 'A'
0x5B249D: jmp     short loc_5B24E1
0x5B249F: mov     eax, [esi]
0x5B24A1: mov     edx, [eax+18h]
0x5B24A4: mov     ecx, esi
0x5B24A6: call    edx
0x5B24A8: cmp     eax, 3
0x5B24AB: jnz     short loc_5B24B1
0x5B24AD: mov     al, 42h ; 'B'
0x5B24AF: jmp     short loc_5B24E1
0x5B24B1: mov     eax, [esi]
0x5B24B3: mov     edx, [eax+18h]
0x5B24B6: mov     ecx, esi
0x5B24B8: call    edx
0x5B24BA: test    eax, eax
0x5B24BC: jz      short loc_5B24DF
0x5B24BE: mov     eax, [esi]
0x5B24C0: mov     edx, [eax+18h]
0x5B24C3: mov     ecx, esi
0x5B24C5: call    edx
0x5B24C7: cmp     eax, 5
0x5B24CA: jz      short loc_5B24DF
0x5B24CC: mov     eax, [esi]
0x5B24CE: mov     edx, [eax+18h]
0x5B24D1: mov     ecx, esi
0x5B24D3: call    edx
0x5B24D5: cmp     eax, 6
0x5B24D8: setnz   al
0x5B24DB: add     al, 44h ; 'D'
0x5B24DD: jmp     short loc_5B24E1
0x5B24DF: mov     al, 43h ; 'C'
0x5B24E1: mov     ecx, [esi+4]
0x5B24E4: test    ecx, ecx
0x5B24E6: jnz     short loc_5B24ED
0x5B24E8: mov     ecx, offset EmptyString
0x5B24ED: push    ecx
0x5B24EE: movsx   eax, al
0x5B24F1: push    eax
0x5B24F2: lea     ecx, [esp+9Ch+var_40]
0x5B24F6: push    offset aC_50s; "%c%.50s"
0x5B24FB: push    ecx
0x5B24FC: call    __sprintf
0x5B2501: mov     edx, [ebp+18h]
0x5B2504: mov     eax, [edx+18h]
0x5B2507: lea     esi, [ebp+18h]
0x5B250A: add     esp, 10h
0x5B250D: mov     ecx, esi
0x5B250F: call    eax
0x5B2511: cmp     eax, 2
0x5B2514: jnz     short loc_5B251D
0x5B2516: mov     al, 41h ; 'A'
0x5B2518: jmp     loc_5B2633
0x5B251D: mov     edx, [esi]
0x5B251F: mov     eax, [edx+18h]
0x5B2522: mov     ecx, esi
0x5B2524: call    eax
0x5B2526: cmp     eax, 3
0x5B2529: jnz     short loc_5B2532
0x5B252B: mov     al, 42h ; 'B'
0x5B252D: jmp     loc_5B2633
0x5B2532: mov     edx, [esi]
0x5B2534: mov     eax, [edx+18h]
0x5B2537: mov     ecx, esi
0x5B2539: call    eax
0x5B253B: test    eax, eax
0x5B253D: jz      loc_5B2631
0x5B2543: mov     edx, [esi]
0x5B2545: mov     eax, [edx+18h]
0x5B2548: mov     ecx, esi
0x5B254A: call    eax
0x5B254C: cmp     eax, 5
0x5B254F: jz      loc_5B2631
0x5B2555: mov     edx, [esi]
0x5B2557: mov     eax, [edx+18h]
0x5B255A: mov     ecx, esi
0x5B255C: call    eax
0x5B255E: cmp     eax, 6
0x5B2561: setnz   al
0x5B2564: add     al, 44h ; 'D'
0x5B2566: jmp     loc_5B2633
0x5B256B: call    edx
0x5B256D: cmp     eax, 2
0x5B2570: jnz     short loc_5B2576
0x5B2572: mov     al, 45h ; 'E'
0x5B2574: jmp     short loc_5B25B8
0x5B2576: mov     eax, [esi]
0x5B2578: mov     edx, [eax+18h]
0x5B257B: mov     ecx, esi
0x5B257D: call    edx
0x5B257F: cmp     eax, 3
0x5B2582: jnz     short loc_5B2588
0x5B2584: mov     al, 44h ; 'D'
0x5B2586: jmp     short loc_5B25B8
0x5B2588: mov     eax, [esi]
0x5B258A: mov     edx, [eax+18h]
0x5B258D: mov     ecx, esi
0x5B258F: call    edx
0x5B2591: test    eax, eax
0x5B2593: jz      short loc_5B25B6
0x5B2595: mov     eax, [esi]
0x5B2597: mov     edx, [eax+18h]
0x5B259A: mov     ecx, esi
0x5B259C: call    edx
0x5B259E: cmp     eax, 5
0x5B25A1: jz      short loc_5B25B6
0x5B25A3: mov     eax, [esi]
0x5B25A5: mov     edx, [eax+18h]
0x5B25A8: mov     ecx, esi
0x5B25AA: call    edx
0x5B25AC: cmp     eax, 6
0x5B25AF: setz    al
0x5B25B2: add     al, 41h ; 'A'
0x5B25B4: jmp     short loc_5B25B8
0x5B25B6: mov     al, 43h ; 'C'
0x5B25B8: mov     ecx, [esi+4]
0x5B25BB: test    ecx, ecx
0x5B25BD: jnz     short loc_5B25C4
0x5B25BF: mov     ecx, offset EmptyString
0x5B25C4: push    ecx
0x5B25C5: movsx   eax, al
0x5B25C8: push    eax
0x5B25C9: lea     ecx, [esp+9Ch+var_40]
0x5B25CD: push    offset aC_50s; "%c%.50s"
0x5B25D2: push    ecx
0x5B25D3: call    __sprintf
0x5B25D8: mov     edx, [ebp+18h]
0x5B25DB: mov     eax, [edx+18h]
0x5B25DE: lea     esi, [ebp+18h]
0x5B25E1: add     esp, 10h
0x5B25E4: mov     ecx, esi
0x5B25E6: call    eax
0x5B25E8: cmp     eax, 2
0x5B25EB: jnz     short loc_5B25F1
0x5B25ED: mov     al, 45h ; 'E'
0x5B25EF: jmp     short loc_5B2633
0x5B25F1: mov     edx, [esi]
0x5B25F3: mov     eax, [edx+18h]
0x5B25F6: mov     ecx, esi
0x5B25F8: call    eax
0x5B25FA: cmp     eax, 3
0x5B25FD: jnz     short loc_5B2603
0x5B25FF: mov     al, 44h ; 'D'
0x5B2601: jmp     short loc_5B2633
0x5B2603: mov     edx, [esi]
0x5B2605: mov     eax, [edx+18h]
0x5B2608: mov     ecx, esi
0x5B260A: call    eax
0x5B260C: test    eax, eax
0x5B260E: jz      short loc_5B2631
0x5B2610: mov     edx, [esi]
0x5B2612: mov     eax, [edx+18h]
0x5B2615: mov     ecx, esi
0x5B2617: call    eax
0x5B2619: cmp     eax, 5
0x5B261C: jz      short loc_5B2631
0x5B261E: mov     edx, [esi]
0x5B2620: mov     eax, [edx+18h]
0x5B2623: mov     ecx, esi
0x5B2625: call    eax
0x5B2627: cmp     eax, 6
0x5B262A: setz    al
0x5B262D: add     al, 41h ; 'A'
0x5B262F: jmp     short loc_5B2633
0x5B2631: mov     al, 43h ; 'C'
0x5B2633: mov     esi, [esi+4]
0x5B2636: test    esi, esi
0x5B2638: jnz     short loc_5B263F
0x5B263A: mov     esi, offset EmptyString
0x5B263F: movsx   ecx, al
0x5B2642: push    esi
0x5B2643: push    ecx
0x5B2644: lea     edx, [esp+9Ch+var_7C]
0x5B2648: push    offset aC_50s; "%c%.50s"
0x5B264D: push    edx
0x5B264E: call    __sprintf
0x5B2653: add     esp, 10h
0x5B2656: lea     eax, [esp+94h+var_7C]
0x5B265A: push    eax; unsigned __int8 *
0x5B265B: lea     ecx, [esp+98h+var_40]
0x5B265F: push    ecx; unsigned __int8 *
0x5B2660: call    __mbsicmp
0x5B2665: add     esp, 8
0x5B2668: imul    eax, ebx
0x5B266B: jmp     loc_5B277D
0x5B2670: mov     edx, [esi]
0x5B2672: mov     eax, [edx+18h]
0x5B2675: xor     ebp, ebp
0x5B2677: call    eax
0x5B2679: cmp     eax, 2
0x5B267C: jnz     short loc_5B2682
0x5B267E: mov     bl, 41h ; 'A'
0x5B2680: jmp     short loc_5B26C5
0x5B2682: mov     edx, [esi]
0x5B2684: mov     eax, [edx+18h]
0x5B2687: mov     ecx, esi
0x5B2689: call    eax
0x5B268B: cmp     eax, 3
0x5B268E: jnz     short loc_5B2694
0x5B2690: mov     bl, 42h ; 'B'
0x5B2692: jmp     short loc_5B26C5
0x5B2694: mov     edx, [esi]
0x5B2696: mov     eax, [edx+18h]
0x5B2699: mov     ecx, esi
0x5B269B: call    eax
0x5B269D: test    eax, eax
0x5B269F: jz      short loc_5B26C3
0x5B26A1: mov     edx, [esi]
0x5B26A3: mov     eax, [edx+18h]
0x5B26A6: mov     ecx, esi
0x5B26A8: call    eax
0x5B26AA: cmp     eax, 5
0x5B26AD: jz      short loc_5B26C3
0x5B26AF: mov     edx, [esi]
0x5B26B1: mov     eax, [edx+18h]
0x5B26B4: mov     ecx, esi
0x5B26B6: call    eax
0x5B26B8: cmp     eax, 6
0x5B26BB: setnz   bl
0x5B26BE: add     bl, 44h ; 'D'
0x5B26C1: jmp     short loc_5B26C5
0x5B26C3: mov     bl, 43h ; 'C'
0x5B26C5: mov     esi, [esp+94h+var_80]
0x5B26C9: mov     edx, [esi+18h]
0x5B26CC: mov     eax, [edx+18h]
0x5B26CF: add     esi, 18h
0x5B26D2: mov     ecx, esi
0x5B26D4: call    eax
0x5B26D6: cmp     eax, 2
0x5B26D9: jnz     short loc_5B26DF
0x5B26DB: mov     al, 41h ; 'A'
0x5B26DD: jmp     short loc_5B2721
0x5B26DF: mov     edx, [esi]
0x5B26E1: mov     eax, [edx+18h]
0x5B26E4: mov     ecx, esi
0x5B26E6: call    eax
0x5B26E8: cmp     eax, 3
0x5B26EB: jnz     short loc_5B26F1
0x5B26ED: mov     al, 42h ; 'B'
0x5B26EF: jmp     short loc_5B2721
0x5B26F1: mov     edx, [esi]
0x5B26F3: mov     eax, [edx+18h]
0x5B26F6: mov     ecx, esi
0x5B26F8: call    eax
0x5B26FA: test    eax, eax
0x5B26FC: jz      short loc_5B271F
0x5B26FE: mov     edx, [esi]
0x5B2700: mov     eax, [edx+18h]
0x5B2703: mov     ecx, esi
0x5B2705: call    eax
0x5B2707: cmp     eax, 5
0x5B270A: jz      short loc_5B271F
0x5B270C: mov     edx, [esi]
0x5B270E: mov     eax, [edx+18h]
0x5B2711: mov     ecx, esi
0x5B2713: call    eax
0x5B2715: cmp     eax, 6
0x5B2718: setnz   al
0x5B271B: add     al, 44h ; 'D'
0x5B271D: jmp     short loc_5B2721
0x5B271F: mov     al, 43h ; 'C'
0x5B2721: cmp     bl, al
0x5B2723: jge     short loc_5B272D
0x5B2725: mov     ebp, [esp+94h+var_84]
0x5B2729: neg     ebp
0x5B272B: jmp     short loc_5B2776
0x5B272D: jle     short loc_5B2735
0x5B272F: mov     ebp, [esp+94h+var_84]
0x5B2733: jmp     short loc_5B2776
0x5B2735: mov     edx, [edi+24h]
0x5B2738: mov     eax, ds:0B333C4h
0x5B273D: mov     edx, [edx]
0x5B273F: lea     ecx, [edi+24h]
0x5B2742: push    eax
0x5B2743: call    edx
0x5B2745: call    Double_To_SInt32
0x5B274A: mov     ecx, [esp+94h+var_80]
0x5B274E: mov     edx, ds:0B333C4h
0x5B2754: mov     esi, eax
0x5B2756: mov     eax, [ecx+24h]
0x5B2759: mov     eax, [eax]
0x5B275B: add     ecx, 24h ; '$'
0x5B275E: push    edx
0x5B275F: call    eax
0x5B2761: call    Double_To_SInt32
0x5B2766: cmp     esi, eax
0x5B2768: jge     short loc_5B276F
0x5B276A: or      ebp, 0FFFFFFFFh
0x5B276D: jmp     short loc_5B2776
0x5B276F: jle     short loc_5B2776
0x5B2771: mov     ebp, 1
0x5B2776: mov     eax, ebp
0x5B2778: imul    eax, [esp+94h+var_84]
0x5B277D: mov     ecx, [esp+94h+var_4]
0x5B2784: pop     edi
0x5B2785: pop     esi
0x5B2786: pop     ebp
0x5B2787: pop     ebx
0x5B2788: xor     ecx, esp
0x5B278A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B278F: add     esp, 84h
0x5B2795: retn
