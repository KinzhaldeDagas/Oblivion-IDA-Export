0x4F2770: push    0FFFFFFFFh
0x4F2772: push    offset SEH_4F2770
0x4F2777: mov     eax, large fs:0
0x4F277D: push    eax
0x4F277E: sub     esp, 20h
0x4F2781: push    ebx
0x4F2782: push    esi
0x4F2783: push    edi
0x4F2784: mov     eax, ds:0B30AACh
0x4F2789: xor     eax, esp
0x4F278B: push    eax
0x4F278C: lea     eax, [esp+3Ch+var_C]
0x4F2790: mov     large fs:0, eax
0x4F2796: mov     edi, ecx
0x4F2798: xor     ecx, ecx
0x4F279A: mov     eax, 25h ; '%'
0x4F279F: xor     ebx, ebx
0x4F27A1: mov     [esp+3Ch+var_18], eax
0x4F27A5: mov     edx, 4
0x4F27AA: mul     edx
0x4F27AC: seto    cl
0x4F27AF: mov     [esp+3Ch+var_29], bl
0x4F27B3: mov     [esp+3Ch+var_1C], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectCELL@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectCELL *,bool>::`vftable'
0x4F27BB: mov     [esp+3Ch+var_10], ebx
0x4F27BF: neg     ecx
0x4F27C1: or      ecx, eax
0x4F27C3: push    ecx; Size
0x4F27C4: call    FormHeapAlloc
0x4F27C9: mov     ecx, [esp+40h+var_18]
0x4F27CD: lea     edx, ds:0[ecx*4]
0x4F27D4: push    edx
0x4F27D5: push    ebx
0x4F27D6: push    eax
0x4F27D7: mov     [esp+4Ch+var_14], eax
0x4F27DB: call    __memset
0x4F27E0: add     esp, 10h
0x4F27E3: mov     [esp+3Ch+var_1C], offset ??_7?$NiTPointerMap@PAVTESObjectCELL@@_N@@6B@; const NiTPointerMap<TESObjectCELL *,bool>::`vftable'
0x4F27EB: mov     edx, [edi+30h]
0x4F27EE: mov     ecx, [edx+4]
0x4F27F1: xor     eax, eax
0x4F27F3: cmp     ecx, ebx
0x4F27F5: mov     [esp+3Ch+var_4], ebx
0x4F27F9: jbe     short loc_4F2812
0x4F27FB: mov     edx, [edx+8]
0x4F27FE: mov     esi, edx
0x4F2800: cmp     [esi], ebx
0x4F2802: jnz     loc_4F28A6
0x4F2808: add     eax, 1
0x4F280B: add     esi, 4
0x4F280E: cmp     eax, ecx
0x4F2810: jb      short loc_4F2800
0x4F2812: xor     eax, eax
0x4F2814: cmp     eax, ebx
0x4F2816: mov     [esp+3Ch+var_24], eax
0x4F281A: jz      short loc_4F285C
0x4F281C: lea     esp, [esp+0]
0x4F2820: lea     eax, [esp+3Ch+var_28]
0x4F2824: push    eax
0x4F2825: lea     ecx, [esp+40h+var_20]
0x4F2829: push    ecx
0x4F282A: mov     ecx, [edi+30h]
0x4F282D: lea     edx, [esp+44h+var_24]
0x4F2831: push    edx
0x4F2832: mov     [esp+48h+var_28], ebx
0x4F2836: call    sub_452600
0x4F283B: mov     ecx, [esp+3Ch+var_28]
0x4F283F: cmp     ecx, ebx
0x4F2841: jz      short loc_4F2856
0x4F2843: lea     eax, [esp+3Ch+var_1C]
0x4F2847: push    eax
0x4F2848: call    sub_4CC070
0x4F284D: test    al, al
0x4F284F: jz      short loc_4F2856
0x4F2851: mov     [esp+3Ch+var_29], 1
0x4F2856: cmp     [esp+3Ch+var_24], ebx
0x4F285A: jnz     short loc_4F2820
0x4F285C: mov     ecx, [edi+34h]
0x4F285F: cmp     ecx, ebx
0x4F2861: jz      short loc_4F2873
0x4F2863: lea     edx, [esp+3Ch+var_1C]
0x4F2867: push    edx
0x4F2868: call    sub_4CC070
0x4F286D: test    al, al
0x4F286F: mov     bl, 1
0x4F2871: jnz     short loc_4F2877
0x4F2873: mov     bl, [esp+3Ch+var_29]
0x4F2877: lea     ecx, [esp+3Ch+var_1C]
0x4F287B: call    NiTMap_Clear
0x4F2880: lea     ecx, [esp+3Ch+var_1C]
0x4F2884: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4F288C: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x4F2891: mov     al, bl
0x4F2893: mov     ecx, [esp+3Ch+var_C]
0x4F2897: mov     large fs:0, ecx
0x4F289E: pop     ecx
0x4F289F: pop     edi
0x4F28A0: pop     esi
0x4F28A1: pop     ebx
0x4F28A2: add     esp, 2Ch
0x4F28A5: retn
0x4F28A6: mov     eax, [edx+eax*4]
0x4F28A9: jmp     loc_4F2814
