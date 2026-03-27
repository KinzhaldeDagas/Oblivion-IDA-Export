0x9A27E0: sub     esp, 8
0x9A27E3: push    ebx
0x9A27E4: mov     ebx, [esp+0Ch+arg_0]
0x9A27E8: mov     eax, [ebx+0Ch]
0x9A27EB: push    esi
0x9A27EC: lea     edx, [eax+1]
0x9A27EF: nop
0x9A27F0: mov     cl, [eax]
0x9A27F2: add     eax, 1
0x9A27F5: test    cl, cl
0x9A27F7: jnz     short loc_9A27F0
0x9A27F9: sub     eax, edx
0x9A27FB: push    edi
0x9A27FC: lea     edi, [eax+1]
0x9A27FF: push    edi; Size
0x9A2800: call    FormHeapAlloc
0x9A2805: mov     esi, eax
0x9A2807: mov     eax, [ebx+0Ch]
0x9A280A: push    eax; Src
0x9A280B: push    edi; SizeInBytes
0x9A280C: push    esi; Dst
0x9A280D: call    _strcpy_s
0x9A2812: push    offset a@@; "@@"
0x9A2817: push    esi; Str
0x9A2818: call    _strstr
0x9A281D: add     esp, 18h
0x9A2820: test    eax, eax
0x9A2822: pop     edi
0x9A2823: jz      short loc_9A288F
0x9A2825: lea     ecx, [esp+10h+arg_0]
0x9A2829: push    ecx; int
0x9A282A: mov     byte ptr [eax], 0
0x9A282D: push    esi; Str1
0x9A282E: mov     [esp+18h+var_8], 0
0x9A2836: call    sub_9A55C0
0x9A283B: add     esp, 8
0x9A283E: test    al, al
0x9A2840: jz      short loc_9A288F
0x9A2842: push    esi
0x9A2843: call    FormHeapFree
0x9A2848: mov     ecx, [esp+14h+arg_0]
0x9A284C: lea     edx, [esp+14h+var_4]
0x9A2850: push    edx
0x9A2851: lea     eax, [esp+18h+var_8]
0x9A2855: push    eax
0x9A2856: push    ecx
0x9A2857: call    sub_9A5610
0x9A285C: movzx   edx, byte_B4294C[eax]
0x9A2863: mov     eax, [ebx+14h]
0x9A2866: and     eax, 0FFFFFF00h
0x9A286B: or      edx, eax
0x9A286D: mov     eax, [esp+20h+arg_0]
0x9A2871: add     esp, 10h
0x9A2874: test    eax, eax
0x9A2876: mov     [ebx+14h], edx
0x9A2879: jz      short loc_9A288F
0x9A287B: mov     ecx, [esp+10h+var_8]
0x9A287F: mov     [ebx+10h], eax
0x9A2882: pop     esi
0x9A2883: mov     [ebx+20h], ecx
0x9A2886: xor     eax, eax
0x9A2888: pop     ebx
0x9A2889: add     esp, 8
0x9A288C: retn    4
0x9A288F: pop     esi
0x9A2890: mov     eax, 80000040h
0x9A2895: pop     ebx
0x9A2896: add     esp, 8
0x9A2899: retn    4
