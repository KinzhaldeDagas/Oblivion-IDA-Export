0x8A27B0: push    0FFFFFFFFh
0x8A27B2: push    offset SEH_8A27B0
0x8A27B7: mov     eax, large fs:0
0x8A27BD: push    eax
0x8A27BE: sub     esp, 14h
0x8A27C1: push    ebx
0x8A27C2: push    ebp
0x8A27C3: push    esi
0x8A27C4: push    edi
0x8A27C5: mov     eax, ds:0B30AACh
0x8A27CA: xor     eax, esp
0x8A27CC: push    eax
0x8A27CD: lea     eax, [esp+34h+var_C]
0x8A27D1: mov     large fs:0, eax
0x8A27D7: mov     [esp+34h+var_10], ecx
0x8A27DB: mov     ebp, [esp+34h+arg_4]
0x8A27DF: test    ebp, ebp
0x8A27E1: jz      loc_8A2934
0x8A27E7: mov     ebx, [ebp+4]
0x8A27EA: test    ebx, ebx
0x8A27EC: mov     eax, [ebp+10h]
0x8A27EF: mov     [esp+34h+var_14], ebx
0x8A27F3: mov     [esp+34h+arg_4], eax
0x8A27F7: jz      loc_8A2934
0x8A27FD: test    eax, eax
0x8A27FF: jz      loc_8A2934
0x8A2805: xor     ecx, ecx
0x8A2807: mov     eax, ebx
0x8A2809: mov     edx, 0Ch
0x8A280E: mul     edx
0x8A2810: seto    cl
0x8A2813: neg     ecx
0x8A2815: or      ecx, eax
0x8A2817: push    ecx; Size
0x8A2818: call    FormHeapAlloc
0x8A281D: mov     [esp+38h+var_18], eax
0x8A2821: mov     eax, [esp+38h+arg_4]
0x8A2825: xor     ecx, ecx
0x8A2827: lea     eax, [eax+eax*2]
0x8A282A: mov     edx, 2
0x8A282F: mul     edx
0x8A2831: seto    cl
0x8A2834: neg     ecx
0x8A2836: or      ecx, eax
0x8A2838: push    ecx; Size
0x8A2839: call    FormHeapAlloc
0x8A283E: add     esp, 8
0x8A2841: test    ebx, ebx
0x8A2843: mov     [esp+34h+var_1C], eax
0x8A2847: jbe     short loc_8A286F
0x8A2849: mov     edi, [esp+34h+var_18]
0x8A284D: xor     esi, esi
0x8A284F: mov     [esp+34h+var_20], ebx
0x8A2853: mov     eax, [ebp+0]
0x8A2856: add     eax, esi
0x8A2858: push    eax
0x8A2859: push    edi
0x8A285A: call    sub_43F3E0
0x8A285F: add     esp, 8
0x8A2862: add     esi, 10h
0x8A2865: add     edi, 0Ch
0x8A2868: sub     [esp+34h+var_20], 1
0x8A286D: jnz     short loc_8A2853
0x8A286F: mov     esi, [esp+34h+arg_4]
0x8A2873: test    esi, esi
0x8A2875: jbe     short loc_8A28AF
0x8A2877: mov     ecx, [esp+34h+var_1C]
0x8A287B: xor     edx, edx
0x8A287D: add     ecx, 4
0x8A2880: mov     ebx, esi
0x8A2882: mov     eax, [ebp+0Ch]
0x8A2885: mov     esi, [eax+edx]
0x8A2888: mov     edi, [eax+edx+4]
0x8A288C: add     eax, edx
0x8A288E: mov     eax, [eax+8]
0x8A2891: mov     [ecx-4], si
0x8A2895: mov     [ecx-2], di
0x8A2899: mov     [ecx], ax
0x8A289C: add     edx, 0Ch
0x8A289F: add     ecx, 6
0x8A28A2: sub     ebx, 1
0x8A28A5: jnz     short loc_8A2882
0x8A28A7: mov     ebx, [esp+34h+var_14]
0x8A28AB: mov     esi, [esp+34h+arg_4]
0x8A28AF: push    0C0h ; 'À'; Size
0x8A28B4: call    FormHeapAlloc
0x8A28B9: add     esp, 4
0x8A28BC: mov     [esp+34h+arg_4], eax
0x8A28C0: test    eax, eax
0x8A28C2: mov     [esp+34h+var_4], 0
0x8A28CA: jz      short loc_8A28ED
0x8A28CC: mov     ecx, [esp+34h+var_1C]
0x8A28D0: mov     edx, [esp+34h+var_18]
0x8A28D4: push    ecx
0x8A28D5: push    esi
0x8A28D6: push    0
0x8A28D8: push    0
0x8A28DA: push    0
0x8A28DC: push    0
0x8A28DE: push    0
0x8A28E0: push    edx
0x8A28E1: push    ebx
0x8A28E2: mov     ecx, eax
0x8A28E4: call    sub_7174B0
0x8A28E9: mov     esi, eax
0x8A28EB: jmp     short loc_8A28EF
0x8A28ED: xor     esi, esi
0x8A28EF: mov     eax, [esp+34h+Src]
0x8A28F3: test    eax, eax
0x8A28F5: mov     [esp+34h+var_4], 0FFFFFFFFh
0x8A28FD: jz      short loc_8A2907
0x8A28FF: push    eax; Src
0x8A2900: mov     ecx, esi
0x8A2902: call    NiObjectNET_SetName
0x8A2907: mov     ecx, [esi+0B4h]
0x8A290D: push    1
0x8A290F: call    sub_728280
0x8A2914: mov     ecx, [esp+34h+var_10]
0x8A2918: mov     eax, [ecx]
0x8A291A: mov     edx, [eax+98h]
0x8A2920: push    esi
0x8A2921: call    edx
0x8A2923: mov     ecx, [esp+34h+arg_0]
0x8A2927: mov     eax, [ecx]
0x8A2929: mov     edx, [eax+84h]
0x8A292F: push    0
0x8A2931: push    esi
0x8A2932: call    edx
0x8A2934: mov     ecx, dword ptr [esp+34h+var_C]
0x8A2938: mov     large fs:0, ecx
0x8A293F: pop     ecx
0x8A2940: pop     edi
0x8A2941: pop     esi
0x8A2942: pop     ebp
0x8A2943: pop     ebx
0x8A2944: add     esp, 20h
0x8A2947: retn    0Ch
