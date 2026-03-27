0x6F2770: push    esi
0x6F2771: push    edi
0x6F2772: mov     edi, [esp+8+arg_0]
0x6F2776: mov     esi, ecx
0x6F2778: cmp     esi, edi
0x6F277A: jz      loc_6F288E
0x6F2780: push    ebx
0x6F2781: mov     ebx, [edi+4]
0x6F2784: test    ebx, ebx
0x6F2786: push    ebp
0x6F2787: jz      short loc_6F2795
0x6F2789: mov     ebp, [edi+8]
0x6F278C: mov     edx, ebp
0x6F278E: sub     edx, ebx
0x6F2790: sar     edx, 2
0x6F2793: jnz     short loc_6F27A3
0x6F2795: call    sub_784A70
0x6F279A: pop     ebp
0x6F279B: pop     ebx
0x6F279C: pop     edi
0x6F279D: mov     eax, esi
0x6F279F: pop     esi
0x6F27A0: retn    4
0x6F27A3: mov     eax, [esi+4]
0x6F27A6: test    eax, eax
0x6F27A8: jnz     short loc_6F27AE
0x6F27AA: xor     ecx, ecx
0x6F27AC: jmp     short loc_6F27B6
0x6F27AE: mov     ecx, [esi+8]
0x6F27B1: sub     ecx, eax
0x6F27B3: sar     ecx, 2
0x6F27B6: cmp     edx, ecx
0x6F27B8: ja      short loc_6F27FA
0x6F27BA: push    eax; Dst
0x6F27BB: push    ebp; int
0x6F27BC: push    ebx; Src
0x6F27BD: call    sub_790420
0x6F27C2: mov     eax, [edi+4]
0x6F27C5: add     esp, 0Ch
0x6F27C8: test    eax, eax
0x6F27CA: jnz     short loc_6F27E0
0x6F27CC: mov     eax, [esi+4]
0x6F27CF: pop     ebp
0x6F27D0: xor     edi, edi
0x6F27D2: lea     ecx, [eax+edi*4]
0x6F27D5: pop     ebx
0x6F27D6: pop     edi
0x6F27D7: mov     [esi+8], ecx
0x6F27DA: mov     eax, esi
0x6F27DC: pop     esi
0x6F27DD: retn    4
0x6F27E0: mov     edi, [edi+8]
0x6F27E3: sub     edi, eax
0x6F27E5: mov     eax, [esi+4]
0x6F27E8: pop     ebp
0x6F27E9: sar     edi, 2
0x6F27EC: lea     ecx, [eax+edi*4]
0x6F27EF: pop     ebx
0x6F27F0: pop     edi
0x6F27F1: mov     [esi+8], ecx
0x6F27F4: mov     eax, esi
0x6F27F6: pop     esi
0x6F27F7: retn    4
0x6F27FA: test    eax, eax
0x6F27FC: jnz     short loc_6F2802
0x6F27FE: xor     ecx, ecx
0x6F2800: jmp     short loc_6F280A
0x6F2802: mov     ecx, [esi+0Ch]
0x6F2805: sub     ecx, eax
0x6F2807: sar     ecx, 2
0x6F280A: cmp     edx, ecx
0x6F280C: ja      short loc_6F284A
0x6F280E: test    eax, eax
0x6F2810: jnz     short loc_6F2816
0x6F2812: xor     ecx, ecx
0x6F2814: jmp     short loc_6F281E
0x6F2816: mov     ecx, [esi+8]
0x6F2819: sub     ecx, eax
0x6F281B: sar     ecx, 2
0x6F281E: mov     edx, ebx
0x6F2820: push    eax; Dst
0x6F2821: lea     ebx, [edx+ecx*4]
0x6F2824: push    ebx; int
0x6F2825: push    edx; Src
0x6F2826: call    sub_790420
0x6F282B: mov     edx, [esi+8]
0x6F282E: mov     eax, [edi+8]
0x6F2831: add     esp, 0Ch
0x6F2834: push    edx; Dst
0x6F2835: push    eax; int
0x6F2836: push    ebx; Src
0x6F2837: mov     ecx, esi
0x6F2839: call    sub_7A25C0
0x6F283E: pop     ebp
0x6F283F: pop     ebx
0x6F2840: mov     [esi+8], eax
0x6F2843: pop     edi
0x6F2844: mov     eax, esi
0x6F2846: pop     esi
0x6F2847: retn    4
0x6F284A: test    eax, eax
0x6F284C: jz      short loc_6F2857
0x6F284E: push    eax
0x6F284F: call    FormHeapFree
0x6F2854: add     esp, 4
0x6F2857: mov     ecx, [edi+4]
0x6F285A: test    ecx, ecx
0x6F285C: jnz     short loc_6F2862
0x6F285E: xor     eax, eax
0x6F2860: jmp     short loc_6F286A
0x6F2862: mov     eax, [edi+8]
0x6F2865: sub     eax, ecx
0x6F2867: sar     eax, 2
0x6F286A: push    eax
0x6F286B: mov     ecx, esi
0x6F286D: call    sub_6F1BF0
0x6F2872: test    al, al
0x6F2874: jz      short loc_6F288C
0x6F2876: mov     ecx, [esi+4]
0x6F2879: mov     edx, [edi+8]
0x6F287C: mov     eax, [edi+4]
0x6F287F: push    ecx; Dst
0x6F2880: push    edx; int
0x6F2881: push    eax; Src
0x6F2882: mov     ecx, esi
0x6F2884: call    sub_7A25C0
0x6F2889: mov     [esi+8], eax
0x6F288C: pop     ebp
0x6F288D: pop     ebx
0x6F288E: pop     edi
0x6F288F: mov     eax, esi
0x6F2891: pop     esi
0x6F2892: retn    4
