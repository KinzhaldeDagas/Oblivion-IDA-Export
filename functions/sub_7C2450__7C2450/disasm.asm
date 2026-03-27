0x7C2450: sub     esp, 38h
0x7C2453: push    ebx
0x7C2454: push    esi
0x7C2455: xor     ebx, ebx
0x7C2457: cmp     ds:0B43070h, bl
0x7C245D: push    edi
0x7C245E: mov     esi, ecx
0x7C2460: jz      loc_7C2563
0x7C2466: mov     eax, ds:0B43104h
0x7C246B: push    ebx; a7
0x7C246C: push    71h ; 'q'; a6
0x7C246E: push    24h ; '$'; a5
0x7C2470: push    1; a4
0x7C2472: push    1; a3
0x7C2474: push    eax; a2
0x7C2475: call    NiRenderer_GetRenderedSurface
0x7C247A: mov     ecx, ds:0B43104h
0x7C2480: push    ebx; a7
0x7C2481: push    71h ; 'q'; a6
0x7C2483: push    24h ; '$'; a5
0x7C2485: push    1; a4
0x7C2487: push    1; a3
0x7C2489: push    ecx; a2
0x7C248A: mov     ecx, esi; this
0x7C248C: mov     [esp+5Ch+a2], eax
0x7C2490: call    NiRenderer_GetRenderedSurface
0x7C2495: mov     edx, ds:0B43104h
0x7C249B: push    ebx; a7
0x7C249C: push    71h ; 'q'; a6
0x7C249E: push    24h ; '$'; a5
0x7C24A0: push    1; a4
0x7C24A2: push    1; a3
0x7C24A4: push    edx; a2
0x7C24A5: mov     ecx, esi; this
0x7C24A7: mov     [esp+5Ch+var_30], eax
0x7C24AB: call    NiRenderer_GetRenderedSurface
0x7C24B0: push    ebx; a7
0x7C24B1: push    71h ; 'q'; a6
0x7C24B3: push    26h ; '&'; a5
0x7C24B5: push    4; a4
0x7C24B7: mov     [esp+54h+var_2C], eax
0x7C24BB: mov     eax, ds:0B43104h
0x7C24C0: push    4; a3
0x7C24C2: push    eax; a2
0x7C24C3: mov     ecx, esi; this
0x7C24C5: call    NiRenderer_GetRenderedSurface
0x7C24CA: mov     ecx, ds:0B43104h
0x7C24D0: push    ebx; a7
0x7C24D1: push    71h ; 'q'; a6
0x7C24D3: push    26h ; '&'; a5
0x7C24D5: push    10h; a4
0x7C24D7: push    10h; a3
0x7C24D9: push    ecx; a2
0x7C24DA: mov     ecx, esi; this
0x7C24DC: mov     [esp+5Ch+var_28], eax
0x7C24E0: call    NiRenderer_GetRenderedSurface
0x7C24E5: mov     edx, ds:0B43104h
0x7C24EB: push    ebx; a7
0x7C24EC: push    71h ; 'q'; a6
0x7C24EE: push    26h ; '&'; a5
0x7C24F0: push    40h ; '@'; a4
0x7C24F2: push    40h ; '@'; a3
0x7C24F4: push    edx; a2
0x7C24F5: mov     ecx, esi; this
0x7C24F7: mov     [esp+5Ch+var_24], eax
0x7C24FB: call    NiRenderer_GetRenderedSurface
0x7C2500: mov     [esp+44h+var_20], eax
0x7C2504: mov     eax, ds:0B43104h
0x7C2509: push    2; a3
0x7C250B: push    eax; a2
0x7C250C: mov     ecx, esi; this
0x7C250E: call    BSTextureManager_GetDefaultRenderTarget
0x7C2513: mov     ecx, ds:0B43104h
0x7C2519: push    ebx; a3
0x7C251A: push    ecx; a2
0x7C251B: mov     ecx, esi; this
0x7C251D: mov     [esp+4Ch+var_1C], eax
0x7C2521: call    BSTextureManager_GetDefaultRenderTarget
0x7C2526: mov     edx, ds:0B43104h
0x7C252C: push    4; a3
0x7C252E: push    edx; a2
0x7C252F: mov     ecx, esi; this
0x7C2531: mov     [esp+4Ch+var_18], eax
0x7C2535: call    BSTextureManager_GetDefaultRenderTarget
0x7C253A: cmp     ds:0B43071h, bl
0x7C2540: mov     [esp+44h+var_14], eax
0x7C2544: jz      short loc_7C2587
0x7C2546: cmp     ds:0B43072h, bl
0x7C254C: jz      short loc_7C2587
0x7C254E: mov     eax, ds:0B43104h
0x7C2553: push    1; a3
0x7C2555: push    eax; a2
0x7C2556: mov     ecx, esi; this
0x7C2558: call    BSTextureManager_GetDefaultRenderTarget
0x7C255D: mov     [esp+44h+var_10], eax
0x7C2561: jmp     short loc_7C258B
0x7C2563: mov     [esp+44h+a2], ebx
0x7C2567: mov     [esp+44h+var_30], ebx
0x7C256B: mov     [esp+44h+var_2C], ebx
0x7C256F: mov     [esp+44h+var_28], ebx
0x7C2573: mov     [esp+44h+var_24], ebx
0x7C2577: mov     [esp+44h+var_20], ebx
0x7C257B: mov     [esp+44h+var_1C], ebx
0x7C257F: mov     [esp+44h+var_18], ebx
0x7C2583: mov     [esp+44h+var_14], ebx
0x7C2587: mov     [esp+44h+var_10], ebx
0x7C258B: cmp     ds:0B42F3Eh, bl
0x7C2591: push    ebp
0x7C2592: jz      short loc_7C25D6
0x7C2594: mov     ecx, ds:0B43104h
0x7C259A: mov     edx, [ecx]
0x7C259C: mov     eax, [edx+7Ch]
0x7C259F: mov     edi, ecx
0x7C25A1: call    eax
0x7C25A3: mov     edx, [eax]
0x7C25A5: mov     ecx, eax
0x7C25A7: mov     eax, [edx+4Ch]
0x7C25AA: push    ebx
0x7C25AB: call    eax
0x7C25AD: mov     edx, [edi]
0x7C25AF: mov     ebp, eax
0x7C25B1: mov     eax, [edx+7Ch]
0x7C25B4: mov     ecx, edi
0x7C25B6: call    eax
0x7C25B8: mov     edx, [eax]
0x7C25BA: mov     ecx, eax
0x7C25BC: mov     eax, [edx+50h]
0x7C25BF: push    ebx
0x7C25C0: call    eax
0x7C25C2: push    ebx; a7
0x7C25C3: push    ebx; a6
0x7C25C4: push    26h ; '&'; a5
0x7C25C6: push    eax; a4
0x7C25C7: push    ebp; a3
0x7C25C8: push    edi; a2
0x7C25C9: mov     ecx, esi; this
0x7C25CB: call    NiRenderer_GetRenderedSurface
0x7C25D0: mov     [esp+48h+var_C], eax
0x7C25D4: jmp     short loc_7C25DA
0x7C25D6: mov     [esp+48h+var_C], ebx
0x7C25DA: mov     ecx, ds:0B43104h
0x7C25E0: mov     edx, [ecx]
0x7C25E2: mov     eax, [edx+7Ch]
0x7C25E5: mov     edi, ecx
0x7C25E7: call    eax
0x7C25E9: mov     edx, [eax]
0x7C25EB: mov     ecx, eax
0x7C25ED: mov     eax, [edx+4Ch]
0x7C25F0: push    ebx
0x7C25F1: call    eax
0x7C25F3: test    eax, eax
0x7C25F5: mov     [esp+44h+a2], eax
0x7C25F9: fild    [esp+44h+a2]
0x7C25FD: jge     short loc_7C2605
0x7C25FF: fadd    dword ptr ds:0A2FC78h
0x7C2605: call    Double_To_SInt32
0x7C260A: mov     edx, [edi]
0x7C260C: mov     ebp, eax
0x7C260E: mov     eax, [edx+7Ch]
0x7C2611: mov     ecx, edi
0x7C2613: call    eax
0x7C2615: mov     edx, [eax]
0x7C2617: mov     ecx, eax
0x7C2619: mov     eax, [edx+50h]
0x7C261C: push    ebx
0x7C261D: call    eax
0x7C261F: test    eax, eax
0x7C2621: mov     [esp+44h+a2], eax
0x7C2625: fild    [esp+44h+a2]
0x7C2629: jge     short loc_7C2631
0x7C262B: fadd    dword ptr ds:0A2FC78h
0x7C2631: call    Double_To_SInt32
0x7C2636: xor     ecx, ecx
0x7C2638: cmp     ds:0B42F3Eh, bl
0x7C263E: push    ebx; a7
0x7C263F: setnz   cl
0x7C2642: push    ebx; a6
0x7C2643: lea     ecx, ds:22h[ecx*4]
0x7C264A: push    ecx; a5
0x7C264B: push    eax; a4
0x7C264C: push    ebp; a3
0x7C264D: push    edi; a2
0x7C264E: mov     ecx, esi; this
0x7C2650: call    NiRenderer_GetRenderedSurface
0x7C2655: mov     ecx, ds:0B43104h
0x7C265B: mov     edx, [ecx]
0x7C265D: mov     [esp+44h+var_4], eax
0x7C2661: mov     eax, [edx+7Ch]
0x7C2664: mov     edi, ecx
0x7C2666: call    eax
0x7C2668: mov     edx, [eax]
0x7C266A: mov     ecx, eax
0x7C266C: mov     eax, [edx+4Ch]
0x7C266F: push    ebx
0x7C2670: call    eax
0x7C2672: test    eax, eax
0x7C2674: mov     [esp+44h+a2], eax
0x7C2678: fild    [esp+44h+a2]
0x7C267C: jge     short loc_7C2684
0x7C267E: fadd    dword ptr ds:0A2FC78h
0x7C2684: call    Double_To_SInt32
0x7C2689: mov     edx, [edi]
0x7C268B: mov     ebp, eax
0x7C268D: mov     eax, [edx+7Ch]
0x7C2690: mov     ecx, edi
0x7C2692: call    eax
0x7C2694: mov     edx, [eax]
0x7C2696: mov     ecx, eax
0x7C2698: mov     eax, [edx+50h]
0x7C269B: push    ebx
0x7C269C: call    eax
0x7C269E: test    eax, eax
0x7C26A0: mov     [esp+48h+var_38], eax
0x7C26A4: fild    [esp+48h+var_38]
0x7C26A8: jge     short loc_7C26B0
0x7C26AA: fadd    dword ptr ds:0A2FC78h
0x7C26B0: call    Double_To_SInt32
0x7C26B5: xor     ecx, ecx
0x7C26B7: cmp     ds:0B42F3Eh, bl
0x7C26BD: push    ebx; a7
0x7C26BE: setnz   cl
0x7C26C1: push    ebx; a6
0x7C26C2: lea     ecx, ds:22h[ecx*4]
0x7C26C9: push    ecx; a5
0x7C26CA: push    eax; a4
0x7C26CB: push    ebp; a3
0x7C26CC: push    edi; a2
0x7C26CD: mov     ecx, esi; this
0x7C26CF: call    NiRenderer_GetRenderedSurface
0x7C26D4: mov     [esp+48h+var_4], eax
0x7C26D8: xor     edi, edi
0x7C26DA: pop     ebp
0x7C26DB: jmp     short loc_7C26E0
0x7C26DD: align 10h
0x7C26E0: mov     eax, [esp+edi*4+44h+a2]
0x7C26E4: cmp     eax, ebx
0x7C26E6: jz      short loc_7C26F0
0x7C26E8: push    eax; a2
0x7C26E9: mov     ecx, esi; this
0x7C26EB: call    sub_7C1EE0
0x7C26F0: add     edi, 1
0x7C26F3: cmp     edi, 0Dh
0x7C26F6: jl      short loc_7C26E0
0x7C26F8: pop     edi
0x7C26F9: pop     esi
0x7C26FA: pop     ebx
0x7C26FB: add     esp, 38h
0x7C26FE: retn    4
