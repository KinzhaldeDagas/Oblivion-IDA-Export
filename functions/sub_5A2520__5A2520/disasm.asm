0x5A2520: push    0FFFFFFFFh
0x5A2522: push    offset SEH_5A2520
0x5A2527: mov     eax, large fs:0
0x5A252D: push    eax
0x5A252E: sub     esp, 12Ch
0x5A2534: mov     eax, ds:0B30AACh
0x5A2539: xor     eax, esp
0x5A253B: mov     [esp+138h+var_10], eax
0x5A2542: push    ebx
0x5A2543: push    ebp
0x5A2544: push    esi
0x5A2545: push    edi
0x5A2546: mov     eax, ds:0B30AACh
0x5A254B: xor     eax, esp
0x5A254D: push    eax
0x5A254E: lea     eax, [esp+14Ch+var_C]
0x5A2555: mov     large fs:0, eax
0x5A255B: mov     esi, ecx
0x5A255D: mov     eax, [esi+58h]
0x5A2560: mov     edi, [eax+34h]
0x5A2563: xor     ebx, ebx
0x5A2565: cmp     edi, ebx
0x5A2567: mov     [esp+14Ch+var_138], eax
0x5A256B: jz      short loc_5A2588
0x5A256D: lea     ecx, [ecx+0]
0x5A2570: mov     ecx, [edi+8]
0x5A2573: cmp     ecx, ebx
0x5A2575: lea     eax, [edi+8]
0x5A2578: mov     edi, [edi]
0x5A257A: jz      short loc_5A2584
0x5A257C: mov     eax, [ecx]
0x5A257E: mov     edx, [eax]
0x5A2580: push    1
0x5A2582: call    edx
0x5A2584: cmp     edi, ebx
0x5A2586: jnz     short loc_5A2570
0x5A2588: mov     ecx, [esi+58h]
0x5A258B: add     ecx, 30h ; '0'
0x5A258E: call    NiTPointerList__FreeAllNodes
0x5A2593: push    ebx; a3
0x5A2594: push    offset aAdded_effect_t; "added_effect_template"
0x5A2599: lea     ecx, [esp+158h+var_130]; this
0x5A259D: mov     [esp+158h+var_130.m_data], ebx
0x5A25A1: mov     [esp+158h+var_130.m_dataLen], bx
0x5A25A6: mov     [esp+158h+var_130.m_bufLen], bx
0x5A25AB: call    BSStringT_Set
0x5A25B0: mov     eax, [esi+28h]
0x5A25B3: cmp     eax, ebx
0x5A25B5: mov     [esp+150h+var_8], ebx
0x5A25BC: jz      loc_5A2AEB
0x5A25C2: lea     ecx, [eax+24h]
0x5A25C5: cmp     ecx, ebx
0x5A25C7: mov     [esp+150h+a3], ecx
0x5A25CB: jz      short loc_5A25EA
0x5A25CD: lea     eax, [ecx+4]
0x5A25D0: xor     edx, edx
0x5A25D2: cmp     eax, ebx
0x5A25D4: jz      short loc_5A25E4
0x5A25D6: cmp     [eax], ebx
0x5A25D8: jz      short loc_5A25DD
0x5A25DA: add     edx, 1
0x5A25DD: mov     eax, [eax+4]
0x5A25E0: cmp     eax, ebx
0x5A25E2: jnz     short loc_5A25D6
0x5A25E4: mov     [esp+150h+var_138], edx
0x5A25E8: jmp     short loc_5A25EE
0x5A25EA: mov     [esp+150h+var_138], ebx
0x5A25EE: cmp     [esp+150h+var_138], ebx
0x5A25F2: jbe     loc_5A27FB
0x5A25F8: jmp     short loc_5A2604
0x5A25FA: align 10h
0x5A2600: mov     ecx, [esp+12Ch+var_FC]
0x5A2604: push    ebx
0x5A2605: call    EffectItemList_GetItemByIndex2
0x5A260A: cmp     dword ptr [esi+2Ch], 0
0x5A260E: mov     ebp, eax
0x5A2610: jz      short loc_5A2685
0x5A2612: mov     ecx, [esi+34h]
0x5A2615: test    ecx, ecx
0x5A2617: jz      short loc_5A2685
0x5A2619: mov     eax, [ecx]
0x5A261B: mov     edx, [eax+10h]
0x5A261E: call    edx
0x5A2620: cmp     eax, 3
0x5A2623: jnz     short loc_5A2685
0x5A2625: mov     eax, [esi+34h]
0x5A2628: movzx   ecx, word ptr [eax+8]
0x5A262C: mov     eax, [ebp+1Ch]
0x5A262F: push    ecx
0x5A2630: movzx   ecx, cx
0x5A2633: fld     dword ptr [eax+90h]
0x5A2639: fstp    [esp+154h+var_11C]
0x5A263D: fld     dword ptr [eax+5Ch]
0x5A2640: fstp    [esp+154h+var_134]
0x5A2644: fld1
0x5A2646: fstp    [esp+154h+a2]; float
0x5A2649: push    ecx
0x5A264A: mov     ecx, [esi+2Ch]
0x5A264D: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A2652: fld     [esp+158h+var_11C]
0x5A2656: push    eax; int
0x5A2657: sub     esp, 8
0x5A265A: fstp    [esp+164h+var_160]; float
0x5A265E: fld     [esp+164h+var_134]
0x5A2662: fstp    [esp+164h+var_164]; float
0x5A2665: call    Calc_ConstantEffectEnchantmentMagnitude
0x5A266A: add     esp, 0Ch
0x5A266D: fstp    [esp+158h+var_158]; float
0x5A2670: call    Round_Float
0x5A2675: add     esp, 8
0x5A2678: call    Double_To_SInt32
0x5A267D: push    eax
0x5A267E: mov     ecx, ebp
0x5A2680: call    EffectItem_SetMagnitude
0x5A2685: mov     edx, [esp+150h+var_130.m_data]
0x5A2689: mov     eax, [esp+150h+anonymous_4]
0x5A268D: push    0
0x5A268F: push    edx
0x5A2690: push    eax
0x5A2691: mov     ecx, esi
0x5A2693: call    Menu_CreateTileFromTemplate
0x5A2698: mov     edi, eax
0x5A269A: test    edi, edi
0x5A269C: jz      loc_5A27EC
0x5A26A2: test    ebp, ebp
0x5A26A4: jz      loc_5A27EC
0x5A26AA: mov     ecx, ebx
0x5A26AC: test    ecx, ecx
0x5A26AE: mov     [esp+150h+var_134], ecx
0x5A26B2: fild    [esp+150h+var_134]
0x5A26B6: jge     short loc_5A26BE
0x5A26B8: fadd    dword ptr ds:0A2FC78h
0x5A26BE: push    ecx
0x5A26BF: fstp    [esp+154h+a2]; a3
0x5A26C2: push    0FAEh; a2
0x5A26C7: mov     ecx, edi; this
0x5A26C9: call    Tile_SetFloat
0x5A26CE: lea     edx, [ebx+0BB8h]
0x5A26D4: test    edx, edx
0x5A26D6: mov     [esp+150h+var_134], edx
0x5A26DA: fild    [esp+150h+var_134]
0x5A26DE: jge     short loc_5A26E6
0x5A26E0: fadd    dword ptr ds:0A2FC78h
0x5A26E6: push    ecx
0x5A26E7: fstp    [esp+154h+a2]; a3
0x5A26EA: push    0FA8h; a2
0x5A26EF: mov     ecx, edi; this
0x5A26F1: call    Tile_SetFloat
0x5A26F6: mov     eax, [esi+28h]
0x5A26F9: test    eax, eax
0x5A26FB: jz      short loc_5A2702
0x5A26FD: add     eax, 18h
0x5A2700: jmp     short loc_5A2704
0x5A2702: xor     eax, eax
0x5A2704: fld1
0x5A2706: push    ecx
0x5A2707: fstp    [esp+154h+a2]; float
0x5A270A: mov     ecx, ebp
0x5A270C: push    eax; int
0x5A270D: lea     eax, [esp+158h+var_128]
0x5A2711: push    eax; int
0x5A2712: call    EffectItem_GetDisplayText
0x5A2717: mov     eax, [eax]
0x5A2719: push    eax
0x5A271A: push    0FB0h
0x5A271F: mov     ecx, edi
0x5A2721: mov     byte ptr [esp+158h+var_8], 1
0x5A2729: call    Tile_SetString
0x5A272E: mov     ecx, [esp+150h+var_128]
0x5A2732: push    ecx; a3
0x5A2733: mov     byte ptr [esp+154h+var_8], 0
0x5A273B: call    FormHeapFree
0x5A2740: push    ecx; a3
0x5A2741: xor     eax, eax
0x5A2743: mov     edx, esp
0x5A2745: mov     [esp+158h+var_134], esp
0x5A2749: push    edx
0x5A274A: mov     ecx, ebp
0x5A274C: mov     [esp+15Ch+var_128], eax; a3
0x5A2750: mov     word ptr [esp+15Ch+var_124+2], ax
0x5A2755: mov     word ptr [esp+15Ch+var_124], ax; a3
0x5A275A: call    EffectItem_GetName
0x5A275F: mov     ecx, edi
0x5A2761: call    sub_58A020
0x5A2766: mov     eax, [ebp+1Ch]
0x5A2769: mov     eax, [eax+48h]
0x5A276C: test    eax, eax
0x5A276E: jnz     short loc_5A2775
0x5A2770: mov     eax, offset EmptyString
0x5A2775: push    eax
0x5A2776: push    offset aIcons; "Icons"
0x5A277B: lea     eax, [esp+134h+var_F4]
0x5A277F: push    offset aSS_2; "%s\\%s"
0x5A2784: push    eax
0x5A2785: call    __sprintf
0x5A278A: add     esp, 10h
0x5A278D: lea     ecx, [esp+12Ch+var_F4]
0x5A2791: push    ecx
0x5A2792: push    0FAFh
0x5A2797: mov     ecx, edi
0x5A2799: call    Tile_SetString
0x5A279E: mov     edx, [ebp+0]
0x5A27A1: mov     [esp+12Ch+var_110], edx; a3
0x5A27A5: fild    [esp+12Ch+var_110]
0x5A27A9: push    ecx
0x5A27AA: mov     ecx, edi; this
0x5A27AC: fstp    [esp+130h+var_130.m_data]; a3
0x5A27AF: push    0FB2h; a2
0x5A27B4: call    Tile_SetFloat
0x5A27B9: fld     dword ptr ds:0A6BC94h
0x5A27BF: push    ecx
0x5A27C0: fstp    [esp+130h+var_130.m_data]; a3
0x5A27C3: push    0FB4h; a2
0x5A27C8: mov     ecx, edi; this
0x5A27CA: call    Tile_SetFloat
0x5A27CF: mov     ecx, [esi+68h]
0x5A27D2: push    0FB5h
0x5A27D7: call    Tile_GetFloat
0x5A27DC: push    ecx
0x5A27DD: fstp    [esp+130h+var_130.m_data]; a3
0x5A27E0: push    0FB6h; a2
0x5A27E5: mov     ecx, edi; this
0x5A27E7: call    Tile_SetFloat
0x5A27EC: add     ebx, 1
0x5A27EF: cmp     ebx, [esp+12Ch+var_114]
0x5A27F3: jb      loc_5A2600
0x5A27F9: xor     ebx, ebx
0x5A27FB: mov     ecx, [esi+34h]
0x5A27FE: cmp     ecx, ebx
0x5A2800: jz      loc_5A2B4A
0x5A2806: mov     eax, [ecx]
0x5A2808: mov     edx, [eax+10h]
0x5A280B: call    edx
0x5A280D: cmp     eax, 3
0x5A2810: jnz     loc_5A2B4A
0x5A2816: mov     ecx, [esi+50h]; this
0x5A2819: fld     dword ptr ds:0A379B4h
0x5A281F: push    ecx
0x5A2820: fstp    [esp+130h+var_130.m_data]; a3
0x5A2823: push    0FA1h; a2
0x5A2828: call    Tile_SetFloat
0x5A282D: fldz
0x5A282F: push    ecx
0x5A2830: fstp    [esp+130h+var_130.m_data]; a3
0x5A2833: mov     ecx, [esi+50h]; this
0x5A2836: push    0FAEh; a2
0x5A283B: call    Tile_SetFloat
0x5A2840: mov     eax, ds:0B38BD8h
0x5A2845: mov     ecx, [esi+50h]
0x5A2848: push    eax
0x5A2849: push    0FAEh
0x5A284E: call    Tile_SetString
0x5A2853: fld1
0x5A2855: mov     ecx, [esi+44h]; this
0x5A2858: push    ecx
0x5A2859: fstp    [esp+130h+var_130.m_data]; a3
0x5A285C: push    0FA1h; a2
0x5A2861: call    Tile_SetFloat
0x5A2866: fld1
0x5A2868: mov     ecx, [esi+50h]; this
0x5A286B: push    ecx
0x5A286C: fstp    [esp+130h+var_130.m_data]; a3
0x5A286F: push    0FAFh; a2
0x5A2874: call    Tile_SetFloat
0x5A2879: mov     eax, [esi+28h]
0x5A287C: cmp     eax, ebx
0x5A287E: mov     byte ptr [esi+9Dh], 0
0x5A2885: mov     [esi+38h], ebx
0x5A2888: jz      loc_5A293F
0x5A288E: lea     ebp, [eax+24h]
0x5A2891: test    ebp, ebp
0x5A2893: jz      loc_5A293D
0x5A2899: mov     ecx, [ebp+4]
0x5A289C: test    ecx, ecx
0x5A289E: jz      loc_5A293D
0x5A28A4: mov     eax, [esi+2Ch]
0x5A28A7: test    eax, eax
0x5A28A9: jz      loc_5A293D
0x5A28AF: mov     edi, [ecx+1Ch]
0x5A28B2: mov     edx, [edi+58h]
0x5A28B5: shr     edx, 8
0x5A28B8: test    dl, 1
0x5A28BB: jz      short loc_5A28FD
0x5A28BD: mov     ecx, [esi+34h]
0x5A28C0: fld     dword ptr [edi+90h]
0x5A28C6: movzx   ecx, word ptr [ecx+8]
0x5A28CA: fstp    [esp+12Ch+var_118]
0x5A28CE: fld     dword ptr [edi+5Ch]
0x5A28D1: movzx   edx, cx
0x5A28D4: fstp    [esp+12Ch+var_110]
0x5A28D8: push    edx
0x5A28D9: mov     ecx, eax
0x5A28DB: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A28E0: push    eax; int
0x5A28E1: fld     [esp+134h+var_118]
0x5A28E5: sub     esp, 8
0x5A28E8: fstp    [esp+13Ch+var_138]; float
0x5A28EC: fld     [esp+13Ch+var_110]
0x5A28F0: fstp    [esp+13Ch+anonymous_4]; float
0x5A28F3: call    Calc_ConstantEffectEnchantmentMagnitude
0x5A28F8: add     esp, 10h
0x5A28FB: jmp     short loc_5A290A
0x5A28FD: call    EffectItem_GetMagnitude
0x5A2902: mov     [esp+12Ch+var_118], eax
0x5A2906: fild    [esp+12Ch+var_118]
0x5A290A: fstp    [esp+12Ch+var_114]
0x5A290E: fld     dword ptr [edi+94h]
0x5A2914: fstp    [esp+12Ch+var_118]
0x5A2918: fld     [esp+12Ch+var_114]
0x5A291C: fmul    [esp+12Ch+var_118]
0x5A2920: fiadd   dword ptr [esi+38h]
0x5A2923: call    Double_To_SInt32
0x5A2928: mov     [esi+38h], eax
0x5A292B: mov     eax, [ebp+8]
0x5A292E: test    eax, eax
0x5A2930: jz      short loc_5A293D
0x5A2932: lea     ebp, [eax-4]
0x5A2935: test    ebp, ebp
0x5A2937: jnz     loc_5A2899
0x5A293D: xor     ebx, ebx
0x5A293F: mov     ecx, [esi+38h]
0x5A2942: push    ecx
0x5A2943: lea     edx, [esp+130h+var_F4]
0x5A2947: push    offset aD_0; "%d"
0x5A294C: push    edx
0x5A294D: call    __sprintf
0x5A2952: mov     ecx, [esi+48h]
0x5A2955: add     esp, 0Ch
0x5A2958: lea     eax, [esp+12Ch+var_F4]
0x5A295C: push    eax
0x5A295D: push    0FDEh
0x5A2962: call    Tile_SetString
0x5A2967: mov     ecx, ds:0B333C4h
0x5A296D: call    sub_5E4420
0x5A2972: xor     ecx, ecx
0x5A2974: cmp     [esi+38h], eax
0x5A2977: setnle  cl
0x5A297A: add     ecx, 1
0x5A297D: mov     [esp+12Ch+var_118], ecx
0x5A2981: mov     ecx, [esi+48h]; this
0x5A2984: fild    [esp+12Ch+var_118]
0x5A2988: push    ecx
0x5A2989: fstp    [esp+130h+var_130.m_data]; a3
0x5A298C: push    0FAEh; a2
0x5A2991: call    Tile_SetFloat
0x5A2996: mov     ecx, ds:0B333C4h
0x5A299C: call    sub_5E4420
0x5A29A1: push    eax
0x5A29A2: lea     edx, [esp+130h+var_F4]
0x5A29A6: push    offset aD_0; "%d"
0x5A29AB: push    edx
0x5A29AC: call    __sprintf
0x5A29B1: mov     ecx, [esi+4Ch]
0x5A29B4: add     esp, 0Ch
0x5A29B7: lea     eax, [esp+12Ch+var_F4]
0x5A29BB: push    eax
0x5A29BC: push    0FDEh
0x5A29C1: call    Tile_SetString
0x5A29C6: mov     ecx, ds:0B333C4h
0x5A29CC: call    sub_5E4420
0x5A29D1: xor     ecx, ecx
0x5A29D3: cmp     [esi+38h], eax
0x5A29D6: setnle  cl
0x5A29D9: add     ecx, 1
0x5A29DC: mov     [esp+12Ch+var_118], ecx
0x5A29E0: mov     ecx, [esi+4Ch]; this
0x5A29E3: fild    [esp+12Ch+var_118]
0x5A29E7: push    ecx
0x5A29E8: fstp    [esp+130h+var_130.m_data]; a3
0x5A29EB: push    0FAEh; a2
0x5A29F0: call    Tile_SetFloat
0x5A29F5: mov     ecx, [esi+30h]
0x5A29F8: cmp     ecx, ebx
0x5A29FA: jz      short loc_5A2A6F
0x5A29FC: mov     edx, ds:0B333C4h
0x5A2A02: push    edx
0x5A2A03: call    sub_4851B0
0x5A2A08: push    eax
0x5A2A09: push    offset aIcons; "Icons"
0x5A2A0E: lea     eax, [esp+134h+var_F4]
0x5A2A12: push    offset aSS_2; "%s\\%s"
0x5A2A17: push    eax
0x5A2A18: call    __sprintf
0x5A2A1D: mov     ecx, [esi+30h]
0x5A2A20: add     esp, 10h
0x5A2A23: call    sub_488DF0
0x5A2A28: mov     ecx, [esi+80h]
0x5A2A2E: push    eax
0x5A2A2F: push    0FAEh
0x5A2A34: call    Tile_SetString
0x5A2A39: lea     ecx, [esp+12Ch+var_F4]
0x5A2A3D: push    ecx
0x5A2A3E: mov     ecx, [esi+80h]
0x5A2A44: push    0FAFh
0x5A2A49: call    Tile_SetString
0x5A2A4E: mov     ecx, [esi+8Ch]
0x5A2A54: lea     edx, [esp+12Ch+var_F4]
0x5A2A58: push    edx
0x5A2A59: push    0FE6h
0x5A2A5E: call    Tile_SetString
0x5A2A63: mov     ecx, [esi+80h]
0x5A2A69: push    ebx; float
0x5A2A6A: call    sub_58FBA0
0x5A2A6F: mov     ecx, [esi+2Ch]
0x5A2A72: cmp     ecx, ebx
0x5A2A74: jz      short loc_5A2AEB
0x5A2A76: mov     eax, ds:0B333C4h
0x5A2A7B: push    eax
0x5A2A7C: call    sub_4851B0
0x5A2A81: push    eax
0x5A2A82: push    offset aIcons; "Icons"
0x5A2A87: lea     ecx, [esp+134h+var_F4]
0x5A2A8B: push    offset aSS_2; "%s\\%s"
0x5A2A90: push    ecx
0x5A2A91: call    __sprintf
0x5A2A96: mov     ecx, [esi+2Ch]
0x5A2A99: add     esp, 10h
0x5A2A9C: call    sub_488DF0
0x5A2AA1: mov     ecx, [esi+84h]
0x5A2AA7: push    eax
0x5A2AA8: push    0FAEh
0x5A2AAD: call    Tile_SetString
0x5A2AB2: mov     ecx, [esi+2Ch]
0x5A2AB5: call    sub_484D70
0x5A2ABA: mov     ecx, [esi+84h]; this
0x5A2AC0: mov     [esp+12Ch+var_118], eax
0x5A2AC4: fild    [esp+12Ch+var_118]
0x5A2AC8: push    ecx
0x5A2AC9: fstp    [esp+130h+var_130.m_data]; a3
0x5A2ACC: push    0FAFh; a2
0x5A2AD1: call    Tile_SetFloat
0x5A2AD6: mov     ecx, [esi+88h]
0x5A2ADC: lea     edx, [esp+12Ch+var_F4]
0x5A2AE0: push    edx
0x5A2AE1: push    0FE6h
0x5A2AE6: call    Tile_SetString
0x5A2AEB: mov     ecx, [esi+6Ch]; this
0x5A2AEE: fld     dword ptr ds:0A6BC04h
0x5A2AF4: push    ecx
0x5A2AF5: fstp    [esp+130h+var_130.m_data]; a3
0x5A2AF8: push    0FB7h; a2
0x5A2AFD: call    Tile_SetFloat
0x5A2B02: fldz
0x5A2B04: mov     ecx, [esi+6Ch]; this
0x5A2B07: push    ecx
0x5A2B08: fstp    [esp+130h+var_130.m_data]; a3
0x5A2B0B: push    0FB7h; a2
0x5A2B10: call    Tile_SetFloat
0x5A2B15: mov     eax, [esp+12Ch+var_10C]
0x5A2B19: push    eax
0x5A2B1A: call    FormHeapFree
0x5A2B1F: add     esp, 4
0x5A2B22: mov     ecx, [esp+12Ch+arg_10]
0x5A2B29: mov     large fs:0, ecx
0x5A2B30: pop     ecx
0x5A2B31: pop     edi
0x5A2B32: pop     esi
0x5A2B33: pop     ebp
0x5A2B34: pop     ebx
0x5A2B35: mov     ecx, [esp+118h+arg_C]
0x5A2B3C: xor     ecx, esp
0x5A2B3E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5A2B43: add     esp, 138h
0x5A2B49: retn
0x5A2B4A: mov     eax, [esi+28h]
0x5A2B4D: lea     ecx, [eax+24h]
0x5A2B50: mov     eax, [ecx]
0x5A2B52: mov     edx, [eax]
0x5A2B54: push    ebx; a3
0x5A2B55: call    edx
0x5A2B57: call    Double_To_SInt32
0x5A2B5C: mov     edi, eax
0x5A2B5E: cmp     edi, ebx
0x5A2B60: mov     [esp+130h+var_11C], edi
0x5A2B64: jz      loc_5A2C7A
0x5A2B6A: mov     ecx, [esi+50h]; this
0x5A2B6D: fld     dword ptr ds:0A379B4h
0x5A2B73: push    ecx
0x5A2B74: fstp    [esp+134h+var_134]; a3
0x5A2B77: push    0FA1h; a2
0x5A2B7C: call    Tile_SetFloat
0x5A2B81: fild    [esp+130h+var_11C]
0x5A2B85: mov     ecx, [esi+50h]; this
0x5A2B88: push    ecx
0x5A2B89: fstp    [esp+134h+var_134]; a3
0x5A2B8C: push    0FAEh; a2
0x5A2B91: call    Tile_SetFloat
0x5A2B96: mov     ecx, [esi+2Ch]
0x5A2B99: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A2B9E: mov     eax, ds:0B39530h[eax*4]
0x5A2BA5: cmp     eax, ebx
0x5A2BA7: jz      short loc_5A2BAD
0x5A2BA9: mov     ebp, eax
0x5A2BAB: jmp     short loc_5A2BBA
0x5A2BAD: fldz
0x5A2BAF: mov     ebp, offset dword_B35464
0x5A2BB4: fstp    dword ptr ds:0B35464h
0x5A2BBA: mov     ecx, [esi+2Ch]
0x5A2BBD: call    sub_484D70
0x5A2BC2: mov     ecx, [esi+2Ch]
0x5A2BC5: mov     [esp+130h+var_11C], eax
0x5A2BC9: fild    [esp+130h+var_11C]
0x5A2BCD: fld     dword ptr [ebp+0]
0x5A2BD0: fcompp
0x5A2BD2: fnstsw  ax
0x5A2BD4: test    ah, 41h
0x5A2BD7: jnz     short loc_5A2BE8
0x5A2BD9: call    sub_484D70
0x5A2BDE: mov     [esp+130h+var_11C], eax
0x5A2BE2: fild    [esp+130h+var_11C]
0x5A2BE6: jmp     short loc_5A2C07
0x5A2BE8: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A2BED: mov     eax, ds:0B39530h[eax*4]
0x5A2BF4: cmp     eax, ebx
0x5A2BF6: jnz     short loc_5A2C05
0x5A2BF8: fldz
0x5A2BFA: mov     eax, offset dword_B35464
0x5A2BFF: fstp    dword ptr ds:0B35464h
0x5A2C05: fld     dword ptr [eax]
0x5A2C07: fstp    [esp+130h+var_118]
0x5A2C0B: fld     [esp+130h+var_118]
0x5A2C0F: call    Double_To_SInt32
0x5A2C14: cmp     edi, eax
0x5A2C16: setnle  al
0x5A2C19: xor     ecx, ecx
0x5A2C1B: test    al, al
0x5A2C1D: setnz   cl
0x5A2C20: mov     [esi+9Dh], al
0x5A2C26: add     ecx, 1
0x5A2C29: mov     [esp+130h+var_11C], ecx
0x5A2C2D: mov     ecx, [esi+50h]; this
0x5A2C30: fild    [esp+130h+var_11C]
0x5A2C34: push    ecx
0x5A2C35: fstp    [esp+134h+var_134]; a3
0x5A2C38: push    0FAFh; a2
0x5A2C3D: call    Tile_SetFloat
0x5A2C42: fld     dword ptr ds:0A379B4h
0x5A2C48: mov     ecx, [esi+44h]; this
0x5A2C4B: push    ecx
0x5A2C4C: fstp    [esp+134h+var_134]; a3
0x5A2C4F: push    0FA1h; a2
0x5A2C54: call    Tile_SetFloat
0x5A2C59: mov     ecx, [esi+2Ch]
0x5A2C5C: call    sub_484D70
0x5A2C61: cdq
0x5A2C62: idiv    edi
0x5A2C64: mov     ecx, [esi+44h]
0x5A2C67: push    ecx; a2
0x5A2C68: mov     [esp+134h+var_11C], eax
0x5A2C6C: fild    [esp+134h+var_11C]
0x5A2C70: fstp    [esp+134h+var_134]
0x5A2C73: push    0FAEh
0x5A2C78: jmp     short loc_5A2C9B
0x5A2C7A: mov     ecx, [esi+44h]; this
0x5A2C7D: fld1
0x5A2C7F: push    ecx
0x5A2C80: fstp    [esp+134h+var_134]; a3
0x5A2C83: push    0FA1h; a2
0x5A2C88: call    Tile_SetFloat
0x5A2C8D: fld1
0x5A2C8F: mov     ecx, [esi+50h]; this
0x5A2C92: push    ecx
0x5A2C93: fstp    [esp+134h+var_134]; a3
0x5A2C96: push    0FA1h; a2
0x5A2C9B: call    Tile_SetFloat
0x5A2CA0: mov     ecx, [esi+28h]
0x5A2CA3: mov     edx, [ecx+24h]
0x5A2CA6: mov     eax, [edx]
0x5A2CA8: add     ecx, 24h ; '$'
0x5A2CAB: push    ebx
0x5A2CAC: call    eax
0x5A2CAE: fmul    dword ptr ds:0B37FE8h
0x5A2CB4: call    Double_To_SInt32
0x5A2CB9: mov     [esi+38h], eax
0x5A2CBC: jmp     loc_5A293F
