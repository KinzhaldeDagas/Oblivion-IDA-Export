0x7A2620: sub     esp, 0Ch
0x7A2623: push    edi
0x7A2624: mov     edi, ecx
0x7A2626: cmp     byte ptr [edi+21h], 0
0x7A262A: jz      loc_7A2842
0x7A2630: push    ebx
0x7A2631: push    ebp
0x7A2632: push    esi; MaxCount
0x7A2633: mov     esi, [edi+58h]
0x7A2636: xor     ebx, ebx
0x7A2638: cmp     esi, ebx
0x7A263A: jz      short loc_7A264C
0x7A263C: mov     ecx, esi
0x7A263E: call    sub_790D00
0x7A2643: push    esi
0x7A2644: call    FormHeapFree
0x7A2649: add     esp, 4
0x7A264C: cmp     [edi+0C0h], ebx
0x7A2652: mov     [edi+58h], ebx
0x7A2655: mov     [esp+1Ch+var_8], ebx
0x7A2659: jle     loc_7A275C
0x7A265F: mov     [esp+1Ch+var_C], ebx
0x7A2663: cmp     dword ptr [edi+0D4h], 0
0x7A266A: jz      loc_7A273E
0x7A2670: xor     ebp, ebp
0x7A2672: mov     eax, [edi+0D4h]
0x7A2678: mov     ecx, [ebx+eax+4]
0x7A267C: test    ecx, ecx
0x7A267E: lea     esi, [ebx+eax]
0x7A2681: jz      short loc_7A26E6
0x7A2683: mov     eax, [esi+8]
0x7A2686: sub     eax, ecx
0x7A2688: sar     eax, 2
0x7A268B: cmp     ebp, eax
0x7A268D: jnb     short loc_7A26E6
0x7A268F: test    ecx, ecx
0x7A2691: jz      short loc_7A269F
0x7A2693: mov     eax, [esi+8]
0x7A2696: sub     eax, ecx
0x7A2698: sar     eax, 2
0x7A269B: cmp     ebp, eax
0x7A269D: jb      short loc_7A26A4
0x7A269F: call    __invalid_parameter_noinfo
0x7A26A4: mov     ecx, [esi+4]
0x7A26A7: mov     ecx, [ecx+ebp*4]
0x7A26AA: test    ecx, ecx
0x7A26AC: jz      short loc_7A26B6
0x7A26AE: mov     edx, [ecx]
0x7A26B0: mov     eax, [edx]
0x7A26B2: push    1
0x7A26B4: call    eax
0x7A26B6: mov     esi, [edi+0D4h]
0x7A26BC: mov     ecx, [esi+ebx+4]
0x7A26C0: add     esi, ebx
0x7A26C2: test    ecx, ecx
0x7A26C4: jz      short loc_7A26D2
0x7A26C6: mov     eax, [esi+8]
0x7A26C9: sub     eax, ecx
0x7A26CB: sar     eax, 2
0x7A26CE: cmp     ebp, eax
0x7A26D0: jb      short loc_7A26D7
0x7A26D2: call    __invalid_parameter_noinfo
0x7A26D7: mov     ecx, [esi+4]
0x7A26DA: mov     dword ptr [ecx+ebp*4], 0
0x7A26E1: add     ebp, 1
0x7A26E4: jmp     short loc_7A2672
0x7A26E6: mov     esi, [edi+0D4h]
0x7A26EC: mov     ebp, [esi+ebx+8]
0x7A26F0: add     esi, ebx
0x7A26F2: cmp     [esi+4], ebp
0x7A26F5: jbe     short loc_7A26FC
0x7A26F7: call    __invalid_parameter_noinfo
0x7A26FC: mov     ebx, [esi+4]
0x7A26FF: cmp     ebx, [esi+8]
0x7A2702: jbe     short loc_7A2709
0x7A2704: call    __invalid_parameter_noinfo
0x7A2709: cmp     ebx, ebp
0x7A270B: jz      short loc_7A273A
0x7A270D: mov     eax, [esi+8]
0x7A2710: sub     eax, ebp
0x7A2712: sar     eax, 2
0x7A2715: test    eax, eax
0x7A2717: lea     ecx, ds:0[eax*4]
0x7A271E: lea     edx, [ecx+ebx]
0x7A2721: mov     [esp+1Ch+var_4], edx
0x7A2725: jle     short loc_7A2733
0x7A2727: push    ecx; Src
0x7A2728: push    ebp; Src
0x7A2729: push    ecx; DstSize
0x7A272A: push    ebx; Dst
0x7A272B: call    _memmove_s
0x7A2730: add     esp, 10h
0x7A2733: mov     eax, [esp+1Ch+var_4]
0x7A2737: mov     [esi+8], eax
0x7A273A: mov     ebx, [esp+1Ch+var_C]
0x7A273E: mov     eax, [esp+1Ch+var_8]
0x7A2742: add     eax, 1
0x7A2745: add     ebx, 10h
0x7A2748: cmp     eax, [edi+0C0h]
0x7A274E: mov     [esp+1Ch+var_8], eax
0x7A2752: mov     [esp+1Ch+var_C], ebx
0x7A2756: jl      loc_7A2663
0x7A275C: mov     eax, [edi+0D4h]
0x7A2762: test    eax, eax
0x7A2764: jz      short loc_7A2783
0x7A2766: mov     ecx, [eax-4]
0x7A2769: lea     esi, [eax-4]
0x7A276C: push    offset sub_794EB0; void (__thiscall *)(void *)
0x7A2771: push    ecx; int
0x7A2772: push    10h; unsigned int
0x7A2774: push    eax; void *
0x7A2775: call    $LN21
0x7A277A: push    esi
0x7A277B: call    FormHeapFree
0x7A2780: add     esp, 4
0x7A2783: mov     dword ptr [edi+0D4h], 0
0x7A278D: xor     esi, esi
0x7A278F: nop
0x7A2790: mov     ecx, [edi+64h]
0x7A2793: test    ecx, ecx
0x7A2795: jz      short loc_7A27F9
0x7A2797: mov     eax, [edi+68h]
0x7A279A: sub     eax, ecx
0x7A279C: sar     eax, 2
0x7A279F: cmp     esi, eax
0x7A27A1: jnb     short loc_7A27F9
0x7A27A3: test    ecx, ecx
0x7A27A5: jz      short loc_7A27B3
0x7A27A7: mov     eax, [edi+68h]
0x7A27AA: sub     eax, ecx
0x7A27AC: sar     eax, 2
0x7A27AF: cmp     esi, eax
0x7A27B1: jb      short loc_7A27B8
0x7A27B3: call    __invalid_parameter_noinfo
0x7A27B8: mov     edx, [edi+64h]
0x7A27BB: mov     ebx, [edx+esi*4]
0x7A27BE: test    ebx, ebx
0x7A27C0: jz      short loc_7A27D2
0x7A27C2: mov     ecx, ebx
0x7A27C4: call    sub_7A7800
0x7A27C9: push    ebx
0x7A27CA: call    FormHeapFree
0x7A27CF: add     esp, 4
0x7A27D2: mov     ecx, [edi+64h]
0x7A27D5: test    ecx, ecx
0x7A27D7: jz      short loc_7A27E5
0x7A27D9: mov     eax, [edi+68h]
0x7A27DC: sub     eax, ecx
0x7A27DE: sar     eax, 2
0x7A27E1: cmp     esi, eax
0x7A27E3: jb      short loc_7A27EA
0x7A27E5: call    __invalid_parameter_noinfo
0x7A27EA: mov     eax, [edi+64h]
0x7A27ED: mov     dword ptr [eax+esi*4], 0
0x7A27F4: add     esi, 1
0x7A27F7: jmp     short loc_7A2790
0x7A27F9: mov     ebx, [edi+68h]
0x7A27FC: cmp     ecx, ebx
0x7A27FE: jbe     short loc_7A2805
0x7A2800: call    __invalid_parameter_noinfo
0x7A2805: mov     esi, [edi+64h]
0x7A2808: cmp     esi, [edi+68h]
0x7A280B: jbe     short loc_7A2812
0x7A280D: call    __invalid_parameter_noinfo
0x7A2812: cmp     esi, ebx
0x7A2814: jz      short loc_7A283B
0x7A2816: mov     eax, [edi+68h]
0x7A2819: sub     eax, ebx
0x7A281B: sar     eax, 2
0x7A281E: test    eax, eax
0x7A2820: lea     ecx, ds:0[eax*4]
0x7A2827: lea     ebp, [ecx+esi]
0x7A282A: jle     short loc_7A2838
0x7A282C: push    ecx; Src
0x7A282D: push    ebx; Src
0x7A282E: push    ecx; DstSize
0x7A282F: push    esi; Dst
0x7A2830: call    _memmove_s
0x7A2835: add     esp, 10h
0x7A2838: mov     [edi+68h], ebp
0x7A283B: pop     esi
0x7A283C: pop     ebp
0x7A283D: mov     byte ptr [edi+21h], 0
0x7A2841: pop     ebx
0x7A2842: pop     edi
0x7A2843: add     esp, 0Ch
0x7A2846: retn
