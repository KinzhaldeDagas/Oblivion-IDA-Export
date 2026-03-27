0x92B640: push    ebp
0x92B641: mov     ebp, esp
0x92B643: and     esp, 0FFFFFFF0h
0x92B646: sub     esp, 24h
0x92B649: push    ebx
0x92B64A: push    esi
0x92B64B: mov     esi, [ebp+arg_C]
0x92B64E: push    edi
0x92B64F: nop
0x92B650: mov     eax, [ebp+arg_4]
0x92B653: mov     ebx, [ebp+arg_8]
0x92B656: mov     edi, [ebp+arg_0]
0x92B659: mov     [esp+30h+var_18], eax
0x92B65D: add     eax, ebx
0x92B65F: sar     eax, 1
0x92B661: shl     eax, 4
0x92B664: movaps  xmm0, xmmword ptr [eax+edi]
0x92B668: movaps  [esp+30h+var_10], xmm0
0x92B66D: lea     ecx, [ecx+0]
0x92B670: mov     eax, [esp+30h+var_18]
0x92B674: shl     eax, 4
0x92B677: lea     ecx, [esp+30h+var_10]
0x92B67B: add     eax, edi
0x92B67D: push    ecx
0x92B67E: push    eax
0x92B67F: lea     edx, [esp+38h+var_1A]
0x92B683: push    edx
0x92B684: mov     [esp+3Ch+var_14], eax
0x92B688: call    esi
0x92B68A: mov     cl, [eax]
0x92B68C: add     esp, 0Ch
0x92B68F: test    cl, cl
0x92B691: jz      short loc_92B6BC
0x92B693: mov     edi, [esp+30h+var_14]
0x92B697: mov     ecx, [esp+30h+var_18]
0x92B69B: inc     ecx
0x92B69C: lea     eax, [esp+30h+var_10]
0x92B6A0: push    eax
0x92B6A1: mov     [esp+34h+var_18], ecx
0x92B6A5: add     edi, 10h
0x92B6A8: lea     ecx, [esp+34h+var_1A]
0x92B6AC: push    edi
0x92B6AD: push    ecx
0x92B6AE: call    esi
0x92B6B0: mov     cl, [eax]
0x92B6B2: add     esp, 0Ch
0x92B6B5: test    cl, cl
0x92B6B7: jnz     short loc_92B697
0x92B6B9: mov     edi, [ebp+arg_0]
0x92B6BC: mov     edx, ebx
0x92B6BE: shl     edx, 4
0x92B6C1: lea     eax, [edx+edi]
0x92B6C4: push    eax
0x92B6C5: mov     [esp+34h+var_14], eax
0x92B6C9: lea     eax, [esp+34h+var_10]
0x92B6CD: push    eax
0x92B6CE: lea     ecx, [esp+38h+var_19]
0x92B6D2: push    ecx
0x92B6D3: call    esi
0x92B6D5: mov     cl, [eax]
0x92B6D7: add     esp, 0Ch
0x92B6DA: test    cl, cl
0x92B6DC: jz      short loc_92B6FF
0x92B6DE: mov     edi, [esp+30h+var_14]
0x92B6E2: sub     edi, 10h
0x92B6E5: push    edi
0x92B6E6: lea     edx, [esp+34h+var_10]
0x92B6EA: push    edx
0x92B6EB: lea     eax, [esp+38h+var_19]
0x92B6EF: push    eax
0x92B6F0: dec     ebx
0x92B6F1: call    esi
0x92B6F3: mov     cl, [eax]
0x92B6F5: add     esp, 0Ch
0x92B6F8: test    cl, cl
0x92B6FA: jnz     short loc_92B6E2
0x92B6FC: mov     edi, [ebp+arg_0]
0x92B6FF: mov     edx, [esp+30h+var_18]
0x92B703: cmp     ebx, edx
0x92B705: jl      short loc_92B734
0x92B707: jz      short loc_92B726
0x92B709: mov     ecx, ebx
0x92B70B: shl     ecx, 4
0x92B70E: movaps  xmm0, xmmword ptr [ecx+edi]
0x92B712: lea     eax, [ecx+edi]
0x92B715: mov     ecx, edx
0x92B717: shl     ecx, 4
0x92B71A: movaps  xmm1, xmmword ptr [ecx+edi]
0x92B71E: add     ecx, edi
0x92B720: movaps  xmmword ptr [eax], xmm1
0x92B723: movaps  xmmword ptr [ecx], xmm0
0x92B726: dec     ebx
0x92B727: inc     edx
0x92B728: cmp     edx, ebx
0x92B72A: mov     [esp+30h+var_18], edx
0x92B72E: jle     loc_92B670
0x92B734: mov     eax, [ebp+arg_4]
0x92B737: cmp     eax, ebx
0x92B739: jge     short loc_92B74B
0x92B73B: push    esi
0x92B73C: push    ebx
0x92B73D: push    eax
0x92B73E: push    edi
0x92B73F: call    sub_92B640
0x92B744: mov     edx, [esp+40h+var_18]
0x92B748: add     esp, 10h
0x92B74B: cmp     edx, [ebp+arg_8]
0x92B74E: jge     short loc_92B758
0x92B750: mov     [ebp+arg_4], edx
0x92B753: jmp     loc_92B650
0x92B758: pop     edi
0x92B759: pop     esi
0x92B75A: pop     ebx
0x92B75B: mov     esp, ebp
0x92B75D: pop     ebp
0x92B75E: retn
