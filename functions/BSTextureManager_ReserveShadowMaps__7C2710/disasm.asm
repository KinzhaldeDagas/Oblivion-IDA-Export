0x7C2710: push    0FFFFFFFFh
0x7C2712: push    offset BSTextureManager_ReserveShadowMaps_SEH
0x7C2717: mov     eax, large fs:0
0x7C271D: push    eax
0x7C271E: push    ecx
0x7C271F: push    ebx
0x7C2720: push    ebp
0x7C2721: push    esi
0x7C2722: push    edi
0x7C2723: mov     eax, ds:0B30AACh
0x7C2728: xor     eax, esp
0x7C272A: push    eax
0x7C272B: lea     eax, [esp+24h+var_C]
0x7C272F: mov     large fs:0, eax
0x7C2735: mov     ebp, ecx
0x7C2737: mov     eax, [ebp+3Ch]
0x7C273A: test    eax, eax
0x7C273C: jnz     loc_7C284A
0x7C2742: mov     eax, [ebp+2Ch]
0x7C2745: mov     ecx, [esp+24h+arg_4]
0x7C2749: cmp     eax, ecx
0x7C274B: jbe     short loc_7C27C0
0x7C274D: sub     eax, ecx
0x7C274F: lea     edi, [ebp+20h]
0x7C2752: mov     ebx, eax
0x7C2754: lea     eax, [esp+24h+arg_4]
0x7C2758: push    eax
0x7C2759: mov     ecx, edi
0x7C275B: call    sub_7C1740
0x7C2760: mov     ecx, [esp+24h+arg_4]
0x7C2764: mov     [esp+24h+var_4], 0
0x7C276C: call    BSRenderedTexture__UseTextureToRender
0x7C2771: mov     edx, [eax]
0x7C2773: mov     ecx, eax
0x7C2775: mov     eax, [edx+6Ch]
0x7C2778: push    0
0x7C277A: call    eax
0x7C277C: mov     ecx, [esp+24h+arg_4]
0x7C2780: push    ecx; a2
0x7C2781: mov     ecx, ebp; this
0x7C2783: call    sub_7C1EE0
0x7C2788: mov     eax, [esp+24h+arg_4]
0x7C278C: test    eax, eax
0x7C278E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C2796: jz      short loc_7C27B6
0x7C2798: mov     esi, eax
0x7C279A: add     eax, 4
0x7C279D: push    eax; lpAddend
0x7C279E: call    dword ptr ds:0A2807Ch
0x7C27A4: test    eax, eax
0x7C27A6: jnz     short loc_7C27B6
0x7C27A8: test    esi, esi
0x7C27AA: jz      short loc_7C27B6
0x7C27AC: mov     edx, [esi]
0x7C27AE: mov     eax, [edx]
0x7C27B0: push    1
0x7C27B2: mov     ecx, esi
0x7C27B4: call    eax
0x7C27B6: sub     ebx, 1
0x7C27B9: jnz     short loc_7C2754
0x7C27BB: jmp     loc_7C284A
0x7C27C0: jnb     loc_7C284A
0x7C27C6: sub     ecx, eax
0x7C27C8: mov     [esp+24h+arg_4], ecx
0x7C27CC: mov     ecx, [esp+24h+a2]
0x7C27D0: push    17h; a3
0x7C27D2: push    ecx; a2
0x7C27D3: mov     ecx, ebp; this
0x7C27D5: call    BSTextureManager_GetDefaultRenderTarget
0x7C27DA: mov     edi, eax
0x7C27DC: test    edi, edi
0x7C27DE: mov     [esp+24h+var_10], edi
0x7C27E2: jz      short loc_7C27EE
0x7C27E4: lea     edx, [edi+4]
0x7C27E7: push    edx; lpAddend
0x7C27E8: call    dword ptr ds:0A28078h
0x7C27EE: mov     ecx, edi
0x7C27F0: mov     [esp+24h+var_4], 1
0x7C27F8: call    BSRenderedTexture__UseTextureToRender
0x7C27FD: mov     ebx, eax
0x7C27FF: mov     esi, [ebx]
0x7C2801: mov     ecx, ebp
0x7C2803: add     esi, 6Ch ; 'l'
0x7C2806: call    sub_7C1360
0x7C280B: push    eax
0x7C280C: mov     eax, [esi]
0x7C280E: mov     ecx, ebx
0x7C2810: call    eax
0x7C2812: lea     ecx, [esp+24h+var_10]
0x7C2816: push    ecx
0x7C2817: lea     ecx, [ebp+20h]
0x7C281A: call    sub_7C16B0
0x7C281F: test    edi, edi
0x7C2821: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C2829: jz      short loc_7C2843
0x7C282B: lea     edx, [edi+4]
0x7C282E: push    edx; lpAddend
0x7C282F: call    dword ptr ds:0A2807Ch
0x7C2835: test    eax, eax
0x7C2837: jnz     short loc_7C2843
0x7C2839: mov     eax, [edi]
0x7C283B: mov     edx, [eax]
0x7C283D: push    1
0x7C283F: mov     ecx, edi
0x7C2841: call    edx
0x7C2843: sub     [esp+24h+arg_4], 1
0x7C2848: jnz     short loc_7C27CC
0x7C284A: mov     ecx, dword ptr [esp+24h+var_C]
0x7C284E: mov     large fs:0, ecx
0x7C2855: pop     ecx
0x7C2856: pop     edi
0x7C2857: pop     esi
0x7C2858: pop     ebp
0x7C2859: pop     ebx
0x7C285A: add     esp, 10h
0x7C285D: retn    8
