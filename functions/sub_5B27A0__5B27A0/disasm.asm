0x5B27A0: push    ebp
0x5B27A1: mov     ebp, esp
0x5B27A3: sub     esp, 0Ch
0x5B27A6: mov     eax, ds:0B30AACh
0x5B27AB: xor     eax, ebp
0x5B27AD: mov     [ebp+var_4], eax
0x5B27B0: push    ebx
0x5B27B1: push    esi
0x5B27B2: mov     esi, ecx
0x5B27B4: xor     ebx, ebx
0x5B27B6: test    esi, esi
0x5B27B8: push    edi
0x5B27B9: mov     eax, esi
0x5B27BB: jz      short loc_5B27CF
0x5B27BD: lea     ecx, [ecx+0]
0x5B27C0: cmp     dword ptr [eax], 0
0x5B27C3: jz      short loc_5B27C8
0x5B27C5: add     ebx, 1
0x5B27C8: mov     eax, [eax+4]
0x5B27CB: test    eax, eax
0x5B27CD: jnz     short loc_5B27C0
0x5B27CF: lea     eax, ds:4[ebx*4]
0x5B27D6: call    __alloca?
0x5B27DB: mov     edx, esp
0x5B27DD: test    edx, edx
0x5B27DF: mov     [ebp+var_8], edx
0x5B27E2: mov     ecx, esi
0x5B27E4: jnz     short loc_5B27F4
0x5B27E6: mov     eax, [ebp+arg_0]
0x5B27E9: push    eax
0x5B27EA: call    sub_5B1E70
0x5B27EF: jmp     loc_5B2891
0x5B27F4: xor     eax, eax
0x5B27F6: test    ebx, ebx
0x5B27F8: jle     short loc_5B280F
0x5B27FA: lea     ebx, [ebx+0]
0x5B2800: mov     edi, [ecx]
0x5B2802: mov     [edx+eax*4], edi
0x5B2805: mov     ecx, [ecx+4]
0x5B2808: add     eax, 1
0x5B280B: cmp     eax, ebx
0x5B280D: jl      short loc_5B2800
0x5B280F: mov     ecx, [ebp+arg_0]
0x5B2812: push    ebx
0x5B2813: push    ecx
0x5B2814: push    edx
0x5B2815: mov     ecx, esi
0x5B2817: call    sub_506F00
0x5B281C: cmp     dword ptr [esi+4], 0
0x5B2820: jz      short loc_5B2838
0x5B2822: mov     eax, [esi+4]
0x5B2825: mov     edi, [eax+4]
0x5B2828: push    eax
0x5B2829: call    FormHeapFree
0x5B282E: add     esp, 4
0x5B2831: test    edi, edi
0x5B2833: mov     [esi+4], edi
0x5B2836: jnz     short loc_5B2822
0x5B2838: xor     edi, edi
0x5B283A: test    ebx, ebx
0x5B283C: mov     [esi], edi
0x5B283E: mov     [ebp+var_C], edi
0x5B2841: jle     short loc_5B2891
0x5B2843: test    edi, edi
0x5B2845: jle     short loc_5B286E
0x5B2847: push    8; Size
0x5B2849: call    FormHeapAlloc
0x5B284E: add     esp, 4
0x5B2851: test    eax, eax
0x5B2853: jz      short loc_5B2868
0x5B2855: mov     edx, [ebp+var_8]
0x5B2858: mov     ecx, [edx+edi*4]
0x5B285B: mov     [eax], ecx
0x5B285D: mov     dword ptr [eax+4], 0
0x5B2864: mov     esi, eax
0x5B2866: jmp     short loc_5B287D
0x5B2868: xor     eax, eax
0x5B286A: mov     esi, eax
0x5B286C: jmp     short loc_5B287D
0x5B286E: mov     edx, [ebp+var_8]
0x5B2871: mov     eax, [edx+edi*4]
0x5B2874: mov     [esi], eax
0x5B2876: mov     dword ptr [esi+4], 0
0x5B287D: mov     eax, [ebp+var_C]
0x5B2880: test    eax, eax
0x5B2882: jz      short loc_5B2887
0x5B2884: mov     [eax+4], esi
0x5B2887: add     edi, 1
0x5B288A: cmp     edi, ebx
0x5B288C: mov     [ebp+var_C], esi
0x5B288F: jl      short loc_5B2843
0x5B2891: lea     esp, [ebp-18h]
0x5B2894: pop     edi
0x5B2895: pop     esi
0x5B2896: pop     ebx
0x5B2897: mov     ecx, [ebp+var_4]
0x5B289A: xor     ecx, ebp
0x5B289C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B28A1: mov     esp, ebp
0x5B28A3: pop     ebp
0x5B28A4: retn    4
