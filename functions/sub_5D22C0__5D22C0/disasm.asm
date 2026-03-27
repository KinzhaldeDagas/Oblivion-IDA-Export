0x5D22C0: push    0FFFFFFFFh
0x5D22C2: push    offset SEH_5D22C0
0x5D22C7: mov     eax, large fs:0
0x5D22CD: push    eax
0x5D22CE: sub     esp, 288h
0x5D22D4: mov     eax, ds:0B30AACh
0x5D22D9: xor     eax, esp
0x5D22DB: mov     [esp+294h+var_10], eax
0x5D22E2: push    ebx
0x5D22E3: push    ebp
0x5D22E4: push    esi
0x5D22E5: push    edi
0x5D22E6: mov     eax, ds:0B30AACh
0x5D22EB: xor     eax, esp
0x5D22ED: push    eax
0x5D22EE: lea     eax, [esp+2A8h+var_C]
0x5D22F5: mov     large fs:0, eax
0x5D22FB: mov     ebx, [esp+2A8h+arg_4]
0x5D2302: mov     ebp, ecx; char
0x5D2304: cmp     byte ptr [ebp+64h], 0
0x5D2308: mov     [esp+2A8h+var_27C], ebp
0x5D230C: mov     [esp+2A8h+var_278], ebx
0x5D2310: jnz     loc_5D2A08
0x5D2316: mov     edi, [esp+2A8h+arg_0]
0x5D231D: lea     eax, [edi-2]; switch 16 cases
0x5D2320: cmp     eax, 0Fh
0x5D2323: ja      def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D2329: movzx   eax, ds:byte_5D2C30[eax]
0x5D2330: jmp     ds:jpt_5D2330[eax*4]; switch jump
0x5D2337: push    2; jumptable 005D2330 case 2
0x5D2339: call    sub_57DE50
0x5D233E: add     esp, 4
0x5D2341: call    sub_5D03B0
0x5D2346: jmp     def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D234B: cmp     dword ptr [ebp+58h], 3; jumptable 005D2330 case 15
0x5D234F: jnz     def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D2355: push    1
0x5D2357: push    0
0x5D2359: call    sub_5D0A20
0x5D235E: jmp     def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D2363: cmp     byte ptr [ebp+65h], 0; jumptable 005D2330 case 17
0x5D2367: push    0FB1h
0x5D236C: setz    cl
0x5D236F: mov     [ebp+65h], cl
0x5D2372: mov     ecx, [ebp+50h]
0x5D2375: call    Tile_GetFloat
0x5D237A: fcomp   dword ptr ds:0A379B4h
0x5D2380: fnstsw  ax
0x5D2382: test    ah, 44h
0x5D2385: jp      short loc_5D2391
0x5D2387: push    1; int
0x5D2389: call    sub_57DE50
0x5D238E: add     esp, 4
0x5D2391: push    1
0x5D2393: mov     ecx, ebp
0x5D2395: call    sub_5D1080
0x5D239A: jmp     def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D239F: call    sub_5D0BE0; jumptable 005D2330 case 16
0x5D23A4: mov     esi, eax
0x5D23A6: test    esi, esi
0x5D23A8: jle     short def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D23AA: mov     ecx, ds:0B333C4h
0x5D23B0: call    sub_5E4420
0x5D23B5: cmp     eax, esi
0x5D23B7: jl      short loc_5D240B
0x5D23B9: mov     edx, ds:0B38D20h
0x5D23BF: mov     eax, ds:0B38850h
0x5D23C4: push    edx
0x5D23C5: push    esi
0x5D23C6: push    eax
0x5D23C7: lea     ecx, [esp+2B4h+var_268]
0x5D23CB: push    offset aSDS?; "%s %d %s?"
0x5D23D0: push    ecx
0x5D23D1: mov     ds:0B3B710h, ebx
0x5D23D7: mov     ds:0B3B714h, esi
0x5D23DD: call    __sprintf
0x5D23E2: mov     edx, ds:0B38D00h
0x5D23E8: mov     eax, ds:0B38CF8h
0x5D23ED: push    0
0x5D23EF: push    edx
0x5D23F0: push    eax
0x5D23F1: push    1
0x5D23F3: lea     ecx, [esp+2CCh+var_268]
0x5D23F7: push    offset sub_5D1FC0
0x5D23FC: push    ecx
0x5D23FD: call    ShowUIMessageBox
0x5D2402: add     esp, 2Ch
0x5D2405: mov     byte ptr [ebp+64h], 1
0x5D2409: jmp     short def_5D2330; jumptable 005D2330 default case, cases 3-14
0x5D240B: mov     edx, ds:0B38CF0h
0x5D2411: mov     eax, ds:0B38DB0h
0x5D2416: push    0
0x5D2418: push    edx
0x5D2419: push    1
0x5D241B: push    0
0x5D241D: push    eax
0x5D241E: call    ShowUIMessageBox
0x5D2423: add     esp, 14h
0x5D2426: mov     ecx, ds:0B333C4h; jumptable 005D2330 default case, cases 3-14
0x5D242C: add     ecx, 44h ; 'D'; this
0x5D242F: call    ExtraDataList_GetContainerChanges
0x5D2434: cmp     edi, 33h ; '3'
0x5D2437: mov     [esp+2A8h+var_270], eax
0x5D243B: jl      loc_5D2A08
0x5D2441: push    0FAAh
0x5D2446: mov     ecx, ebx
0x5D2448: call    Tile_GetFloat
0x5D244D: call    Double_To_SInt32
0x5D2452: xor     edi, edi
0x5D2454: push    edi; a3
0x5D2455: push    0FB9h
0x5D245A: mov     ecx, ebx
0x5D245C: mov     ds:0B3B718h, eax
0x5D2461: call    Tile_GetFloat
0x5D2466: call    Double_To_SInt32
0x5D246B: mov     ecx, ds:0B333C4h; this
0x5D2471: push    eax; a2
0x5D2472: call    GetInventoryEntryOfItem
0x5D2477: mov     ecx, ds:0B333C4h
0x5D247D: push    0Ch
0x5D247F: mov     esi, eax
0x5D2481: call    Actor_GetSkillMasteryLevel
0x5D2486: cmp     esi, edi
0x5D2488: mov     [esp+2A8h+var_290], eax
0x5D248C: mov     byte ptr [esp+2A8h+var_274], 0
0x5D2491: mov     [esp+2A8h+var_291], 1
0x5D2496: jz      loc_5D2A08
0x5D249C: mov     eax, [ebp+58h]
0x5D249F: add     eax, 0FFFFFFFFh; switch 6 cases
0x5D24A2: cmp     eax, 5
0x5D24A5: ja      def_5D24AB
0x5D24AB: jmp     ds:jpt_5D24AB[eax*4]; switch jump
0x5D24B2: push    0FAEh; jumptable 005D24AB case 1
0x5D24B7: mov     ecx, ebx
0x5D24B9: call    Tile_GetFloat
0x5D24BE: fcomp   dword ptr ds:0A379B4h
0x5D24C4: fnstsw  ax
0x5D24C6: test    ah, 44h
0x5D24C9: jp      short loc_5D24EA
0x5D24CB: mov     ecx, ds:0B38CF0h
0x5D24D1: mov     edx, ds:0B38880h
0x5D24D7: push    edi
0x5D24D8: push    ecx
0x5D24D9: push    1
0x5D24DB: push    edi
0x5D24DC: push    edx
0x5D24DD: call    ShowUIMessageBox
0x5D24E2: add     esp, 14h
0x5D24E5: jmp     loc_5D29F8
0x5D24EA: cmp     [ebp+54h], edi
0x5D24ED: jle     loc_5D290D
0x5D24F3: fld1
0x5D24F5: push    ecx
0x5D24F6: mov     ecx, ds:0B333C4h
0x5D24FC: fstp    [esp+2ACh+var_2AC]
0x5D24FF: mov     eax, [ecx]
0x5D2501: mov     edx, [eax+284h]
0x5D2507: push    edi
0x5D2508: call    edx
0x5D250A: mov     ecx, ds:0B333C4h
0x5D2510: push    eax; float
0x5D2511: mov     eax, [ecx]
0x5D2513: mov     edx, [eax+284h]
0x5D2519: push    0Ch; int
0x5D251B: call    edx
0x5D251D: push    eax; int
0x5D251E: call    sub_5482F0
0x5D2523: mov     [esp+2BCh+var_274], eax
0x5D2527: mov     eax, [esi]
0x5D2529: add     esp, 0Ch
0x5D252C: cmp     eax, edi
0x5D252E: mov     [esp+2B0h+var_290], edi
0x5D2532: jz      short loc_5D2546
0x5D2534: cmp     [eax], edi
0x5D2536: jz      short loc_5D2546
0x5D2538: mov     ecx, [eax]
0x5D253A: call    ExtraDataList_GetExtraCount
0x5D253F: movsx   eax, ax
0x5D2542: mov     [esp+2B0h+var_290], eax
0x5D2546: mov     eax, [esi]
0x5D2548: cmp     eax, edi
0x5D254A: jz      short loc_5D2564
0x5D254C: cmp     [eax], edi
0x5D254E: jz      short loc_5D2564
0x5D2550: mov     ecx, [eax]
0x5D2552: call    sub_41DF40
0x5D2557: test    al, al
0x5D2559: jz      short loc_5D2564
0x5D255B: mov     eax, [esi]
0x5D255D: mov     ecx, [eax]
0x5D255F: call    sub_41F6D0
0x5D2564: mov     eax, [esi+8]
0x5D2567: push    eax
0x5D2568: call    TESHealthForm_GetHealthForForm
0x5D256D: mov     ebx, [esi+8]
0x5D2570: mov     [esp+20h], eax
0x5D2574: mov     eax, [esi]
0x5D2576: add     esp, 4
0x5D2579: cmp     eax, edi
0x5D257B: jz      short loc_5D2583
0x5D257D: mov     ebp, [eax]
0x5D257F: cmp     ebp, edi
0x5D2581: jnz     short loc_5D25F2
0x5D2583: push    14h; Size
0x5D2585: call    FormHeapAlloc
0x5D258A: add     esp, 4
0x5D258D: mov     [esp+2B0h+var_28C], eax
0x5D2591: cmp     eax, edi
0x5D2593: mov     [esp+2B0h+var_C], edi
0x5D259A: jz      short loc_5D25A7
0x5D259C: mov     ecx, eax
0x5D259E: call    ExtraDataList_constr
0x5D25A3: mov     edi, eax
0x5D25A5: jmp     short loc_5D25A9
0x5D25A7: xor     edi, edi
0x5D25A9: cmp     dword ptr [esi], 0
0x5D25AC: mov     [esp+2B0h+var_C], 0FFFFFFFFh
0x5D25B7: mov     ebp, edi
0x5D25B9: jnz     short loc_5D25DC
0x5D25BB: push    8; Size
0x5D25BD: call    FormHeapAlloc
0x5D25C2: add     esp, 4
0x5D25C5: test    eax, eax
0x5D25C7: jz      short loc_5D25D8
0x5D25C9: mov     dword ptr [eax], 0
0x5D25CF: mov     dword ptr [eax+4], 0
0x5D25D6: jmp     short loc_5D25DA
0x5D25D8: xor     eax, eax
0x5D25DA: mov     [esi], eax
0x5D25DC: push    0
0x5D25DE: mov     ecx, esi
0x5D25E0: call    sub_60D020
0x5D25E5: mov     ecx, [esi]
0x5D25E7: push    edi
0x5D25E8: call    BSSimpleList_PushFront
0x5D25ED: mov     [esp+2B0h+var_299], 0
0x5D25F2: mov     ecx, [esp+2B0h+var_278]
0x5D25F6: push    0
0x5D25F8: push    1
0x5D25FA: push    ebx
0x5D25FB: call    ContainerExtraData_GetEntryForForm
0x5D2600: test    eax, eax
0x5D2602: mov     [esp+2B8h+var_290], eax
0x5D2606: jnz     short loc_5D2618
0x5D2608: cmp     byte ptr [esp+2B8h+var_2A4+3], 0
0x5D260D: jz      loc_5D2A08
0x5D2613: jmp     loc_5D29F8
0x5D2618: mov     ecx, ebp
0x5D261A: call    ExtraDataList_GetExtraCount
0x5D261F: cmp     ax, 1
0x5D2623: jnz     short loc_5D2629
0x5D2625: mov     ebx, ebp
0x5D2627: jmp     short loc_5D2675
0x5D2629: push    14h; Size
0x5D262B: call    FormHeapAlloc
0x5D2630: add     esp, 4
0x5D2633: mov     [esp+24h], eax
0x5D2637: test    eax, eax
0x5D2639: mov     [esp+2B8h+var_14], 1
0x5D2644: jz      short loc_5D2651
0x5D2646: mov     ecx, eax
0x5D2648: call    ExtraDataList_constr
0x5D264D: mov     edi, eax
0x5D264F: jmp     short loc_5D2653
0x5D2651: xor     edi, edi
0x5D2653: mov     ecx, [esi]
0x5D2655: mov     edx, [ecx]
0x5D2657: push    edx
0x5D2658: mov     ecx, edi
0x5D265A: mov     [esp+2BCh+var_14], 0FFFFFFFFh
0x5D2665: mov     ebx, edi
0x5D2667: call    BaseExtraList_Copy
0x5D266C: push    1
0x5D266E: mov     ecx, edi
0x5D2670: call    ExtraDataList_SetExtraCount
0x5D2675: cmp     byte ptr [esp+2B8h+var_2A4+3], 0
0x5D267A: jz      short loc_5D2698
0x5D267C: mov     ecx, ebp
0x5D267E: call    ExtraDataList_GetExtraCount
0x5D2683: cmp     ax, 1
0x5D2687: jle     short loc_5D2698
0x5D2689: mov     eax, [esp+2B8h+var_298]
0x5D268D: add     eax, 0FFFFFFFFh
0x5D2690: push    eax
0x5D2691: mov     ecx, ebp
0x5D2693: call    ExtraDataList_SetExtraCount
0x5D2698: mov     ecx, ebx
0x5D269A: call    ExtraDataList_GetHealthData
0x5D269F: call    Double_To_SInt32
0x5D26A4: cmp     eax, 0FFFFFFFFh
0x5D26A7: mov     [esp+24h], eax
0x5D26AB: jnz     short loc_5D26B5
0x5D26AD: mov     eax, [esp+1Ch]
0x5D26B1: mov     [esp+24h], eax
0x5D26B5: mov     ecx, [esp+2B8h+var_27C]
0x5D26B9: add     eax, ecx
0x5D26BB: cmp     [esp+1Ch], eax
0x5D26BF: mov     [esp+2B8h+var_298], eax
0x5D26C3: jg      short loc_5D2709
0x5D26C5: cmp     [esp+2B8h+var_2A0], 3
0x5D26CA: jl      short loc_5D2703
0x5D26CC: fild    [esp+2B8h+var_298]
0x5D26D0: fstp    [esp+2B8h+var_2A0]
0x5D26D4: fild    dword ptr [esp+1Ch]
0x5D26D8: fmul    qword ptr ds:0A3FA98h
0x5D26DE: fld     [esp+2B8h+var_2A0]
0x5D26E2: fcom    st(1)
0x5D26E4: fnstsw  ax
0x5D26E6: test    ah, 5
0x5D26E9: jp      short loc_5D26F7
0x5D26EB: fstp    st(1)
0x5D26ED: fstp    [esp+2B8h+var_2A0]
0x5D26F1: fld     [esp+2B8h+var_2A0]
0x5D26F5: jmp     short loc_5D270D
0x5D26F7: fstp    st
0x5D26F9: fstp    [esp+2B8h+var_2A0]
0x5D26FD: fld     [esp+2B8h+var_2A0]
0x5D2701: jmp     short loc_5D270D
0x5D2703: fild    dword ptr [esp+1Ch]
0x5D2707: jmp     short loc_5D270D
0x5D2709: fild    [esp+2B8h+var_298]
0x5D270D: push    ecx
0x5D270E: mov     ecx, ebx
0x5D2710: fstp    dword ptr [esp+2BCh+var_2BC]; float
0x5D2713: call    ExtraDataList_SetHealthValue
0x5D2718: mov     ecx, ds:0B333C4h
0x5D271E: mov     edx, [ecx]
0x5D2720: mov     eax, [edx+284h]
0x5D2726: push    7
0x5D2728: call    eax
0x5D272A: mov     ecx, ds:0B333C4h
0x5D2730: mov     edx, [ecx]
0x5D2732: push    eax
0x5D2733: mov     eax, [edx+284h]
0x5D2739: push    0Ch
0x5D273B: call    eax
0x5D273D: push    eax
0x5D273E: call    sub_548330
0x5D2743: mov     edi, [esp+34h]
0x5D2747: add     esp, 8
0x5D274A: test    al, al
0x5D274C: jz      short loc_5D27A3
0x5D274E: add     dword ptr [edi+54h], 0FFFFFFFFh
0x5D2752: push    21h ; '!'; int
0x5D2754: call    sub_57DE50
0x5D2759: mov     ecx, ds:0B333C4h
0x5D275F: mov     edx, [ecx]
0x5D2761: mov     eax, ds:0B35ED0h
0x5D2766: mov     edx, [edx+100h]
0x5D276C: add     esp, 4
0x5D276F: push    1
0x5D2771: push    1
0x5D2773: push    0
0x5D2775: push    0
0x5D2777: push    0
0x5D2779: push    0
0x5D277B: push    0
0x5D277D: push    1
0x5D277F: push    0
0x5D2781: push    eax; a3
0x5D2782: call    edx
0x5D2784: cmp     dword ptr [edi+54h], 0
0x5D2788: jg      short loc_5D278F
0x5D278A: call    sub_5C1900
0x5D278F: fild    dword ptr [edi+54h]
0x5D2792: push    ecx
0x5D2793: mov     ecx, [edi+34h]; this
0x5D2796: fstp    [esp+2ECh+a2]; a3
0x5D2799: push    0FAEh; a2
0x5D279E: call    Tile_SetFloat
0x5D27A3: push    1
0x5D27A5: mov     ecx, esi
0x5D27A7: call    ContainerEntryExtraData_GetHealth
0x5D27AC: fcomp   qword ptr ds:0A309F0h
0x5D27B2: fnstsw  ax
0x5D27B4: test    ah, 1
0x5D27B7: jnz     short loc_5D27BE
0x5D27B9: mov     byte ptr [esp+2E8h+var_2B4], 1
0x5D27BE: test    ebx, ebx
0x5D27C0: jz      loc_5D28CF
0x5D27C6: mov     eax, [esp+2E8h+var_2C0]
0x5D27CA: mov     ebp, [eax]
0x5D27CC: test    ebp, ebp
0x5D27CE: jz      short loc_5D27EA
0x5D27D0: mov     edi, [ebp+0]
0x5D27D3: test    edi, edi
0x5D27D5: jz      short loc_5D27EA
0x5D27D7: push    ebx
0x5D27D8: mov     ecx, edi
0x5D27DA: call    ExtraDataList_CompareList
0x5D27DF: test    al, al
0x5D27E1: jz      short loc_5D281B
0x5D27E3: mov     ebp, [ebp+4]
0x5D27E6: test    ebp, ebp
0x5D27E8: jnz     short loc_5D27D0
0x5D27EA: mov     ecx, [esp+2E8h+var_2C0]
0x5D27EE: cmp     dword ptr [ecx], 0
0x5D27F1: jnz     loc_5D28BC
0x5D27F7: push    8; Size
0x5D27F9: call    FormHeapAlloc
0x5D27FE: add     esp, 4
0x5D2801: test    eax, eax
0x5D2803: jz      loc_5D28B4
0x5D2809: mov     dword ptr [eax], 0
0x5D280F: mov     dword ptr [eax+4], 0
0x5D2816: jmp     loc_5D28B6
0x5D281B: cmp     edi, ebx
0x5D281D: jz      short loc_5D283A
0x5D281F: mov     ecx, edi
0x5D2821: call    ExtraDataList_GetExtraCount
0x5D2826: add     ax, 1
0x5D282A: mov     ecx, edi
0x5D282C: push    eax
0x5D282D: call    ExtraDataList_SetExtraCount
0x5D2832: push    ebx
0x5D2833: mov     ecx, ebp
0x5D2835: call    BSSimpleList_Remove
0x5D283A: mov     eax, [esp+1Ch]
0x5D283E: sub     eax, [esp+24h]
0x5D2842: mov     byte ptr [esp+17h], 1
0x5D2847: cmp     [esp+2E8h+var_2AC], eax
0x5D284B: jle     short loc_5D2852
0x5D284D: mov     byte ptr [esp+2E8h+var_2B4], 1
0x5D2852: push    0
0x5D2854: push    0FDDh
0x5D2859: push    0
0x5D285B: push    1; arg1
0x5D285D: push    0; canCreate
0x5D285F: call    InterfaceManager_GetSingleton
0x5D2864: add     esp, 8
0x5D2867: mov     ecx, eax
0x5D2869: call    sub_57F9F0
0x5D286E: mov     edi, dword ptr [esp+2E8h+var_2BC]
0x5D2872: mov     ecx, ds:0B333C4h
0x5D2878: fldz
0x5D287A: mov     edx, [ecx]
0x5D287C: mov     eax, [edx+39Ch]
0x5D2882: push    ecx
0x5D2883: fstp    [esp+2ECh+a2]
0x5D2886: push    0
0x5D2888: push    0Ch
0x5D288A: call    eax
0x5D288C: mov     ecx, ds:0B333C4h
0x5D2892: mov     edx, [ecx]
0x5D2894: mov     eax, [edx+2C0h]
0x5D289A: call    eax
0x5D289C: mov     ecx, [esp+2F4h+var_2C0]
0x5D28A0: push    ecx
0x5D28A1: mov     ecx, edi
0x5D28A3: call    sub_5D1080
0x5D28A8: mov     ecx, edi
0x5D28AA: call    sub_5D0B80
0x5D28AF: jmp     loc_5D2608
0x5D28B4: xor     eax, eax
0x5D28B6: mov     edx, [esp+2E8h+var_2C0]
0x5D28BA: mov     [edx], eax
0x5D28BC: mov     eax, [esp+2E8h+var_2C0]
0x5D28C0: mov     ecx, [eax]
0x5D28C2: push    ebx
0x5D28C3: call    BSSimpleList_PushFront
0x5D28C8: mov     byte ptr [esp+17h], 1
0x5D28CD: jmp     short loc_5D2852
0x5D28CF: cmp     byte ptr [esp+17h], 0
0x5D28D4: jnz     loc_5D2852
0x5D28DA: mov     ecx, [esp+2E8h+var_2B0]
0x5D28DE: push    1
0x5D28E0: push    esi
0x5D28E1: call    ContainerExtraData_AddEntry
0x5D28E6: push    1; arg1
0x5D28E8: push    0; canCreate
0x5D28EA: call    InterfaceManager_GetSingleton
0x5D28EF: push    1
0x5D28F1: call    sub_5966F0
0x5D28F6: mov     ecx, [esp+2E0h+var_2A4]
0x5D28FA: add     esp, 0Ch
0x5D28FD: push    eax
0x5D28FE: push    0FF0h
0x5D2903: call    sub_57D300
0x5D2908: jmp     loc_5D2872
0x5D290D: mov     edx, ds:0B38CF0h
0x5D2913: mov     eax, ds:0B38860h
0x5D2918: push    edi
0x5D2919: push    edx
0x5D291A: push    1
0x5D291C: push    edi
0x5D291D: push    eax
0x5D291E: call    ShowUIMessageBox
0x5D2923: add     esp, 14h
0x5D2926: jmp     loc_5D29F8
0x5D292B: mov     eax, [esi+8]; jumptable 005D24AB case 2
0x5D292E: push    eax
0x5D292F: call    TESHealthForm_GetHealthForForm
0x5D2934: mov     [esp+2ACh+var_290], eax
0x5D2938: mov     eax, [esi+8]
0x5D293B: push    eax
0x5D293C: call    sub_470520
0x5D2941: mov     [esp+2B0h+var_278], eax
0x5D2945: fild    [esp+2B0h+var_278]
0x5D2949: add     esp, 4
0x5D294C: mov     ecx, esi
0x5D294E: fstp    [esp+2ACh+var_2AC]; float
0x5D2951: push    0
0x5D2953: call    ContainerEntryExtraData_GetHealth
0x5D2958: sub     esp, 8
0x5D295B: fstp    [esp+2B4h+var_2B0]; float
0x5D295F: fild    [esp+2B4h+var_290]
0x5D2963: fstp    [esp+2B4h+var_2B4]; float
0x5D2966: call    sub_5483C0
0x5D296B: mov     edi, eax
0x5D296D: add     esp, 0Ch
0x5D2970: cmp     edi, 1
0x5D2973: jg      short loc_5D297A
0x5D2975: mov     edi, 1
0x5D297A: mov     ecx, ds:0B333C4h
0x5D2980: call    sub_5E4420
0x5D2985: cmp     eax, edi
0x5D2987: jl      loc_5D2A32
0x5D298D: mov     ecx, ds:0B38D20h
0x5D2993: mov     edx, ds:0B38840h
0x5D2999: push    ecx
0x5D299A: push    edi
0x5D299B: push    edx
0x5D299C: lea     eax, [esp+2B4h+var_13C]
0x5D29A3: push    offset aSDS?; "%s %d %s?"
0x5D29A8: push    eax
0x5D29A9: mov     ds:0B3B710h, ebx
0x5D29AF: mov     ds:0B3B714h, edi
0x5D29B5: call    __sprintf
0x5D29BA: mov     ecx, ds:0B38D00h
0x5D29C0: mov     edx, ds:0B38CF8h
0x5D29C6: push    0
0x5D29C8: push    ecx
0x5D29C9: push    edx
0x5D29CA: push    1
0x5D29CC: lea     eax, [esp+2CCh+var_13C]
0x5D29D3: push    offset sub_5D1E50
0x5D29D8: push    eax
0x5D29D9: call    ShowUIMessageBox
0x5D29DE: add     esp, 2Ch
0x5D29E1: mov     byte ptr [ebp+64h], 1
