0x7B2600: mov     eax, [esp+arg_0]
0x7B2604: mov     edx, [esp+arg_4]
0x7B2608: push    ebx
0x7B2609: push    ebp
0x7B260A: mov     ebp, [esp+8+arg_8]
0x7B260E: push    esi
0x7B260F: mov     esi, [eax]
0x7B2611: mov     ebx, ecx
0x7B2613: mov     ecx, [esi+4]
0x7B2616: mov     [edx], ecx
0x7B2618: push    edi
0x7B2619: mov     edi, [ebp+0]
0x7B261C: cmp     edi, [esi+8]
0x7B261F: jz      short loc_7B2655
0x7B2621: test    edi, edi
0x7B2623: jz      short loc_7B2641
0x7B2625: lea     eax, [edi+4]
0x7B2628: push    eax; lpAddend
0x7B2629: call    dword ptr ds:0A2807Ch
0x7B262F: test    eax, eax
0x7B2631: jnz     short loc_7B2641
0x7B2633: test    edi, edi
0x7B2635: jz      short loc_7B2641
0x7B2637: mov     edx, [edi]
0x7B2639: mov     eax, [edx]
0x7B263B: push    1
0x7B263D: mov     ecx, edi
0x7B263F: call    eax
0x7B2641: mov     eax, [esi+8]
0x7B2644: test    eax, eax
0x7B2646: mov     [ebp+0], eax
0x7B2649: jz      short loc_7B2655
0x7B264B: add     eax, 4
0x7B264E: push    eax; lpAddend
0x7B264F: call    dword ptr ds:0A28078h
0x7B2655: mov     eax, [esi]
0x7B2657: test    eax, eax
0x7B2659: jz      short loc_7B2668
0x7B265B: mov     ecx, [esp+10h+arg_0]
0x7B265F: pop     edi
0x7B2660: pop     esi
0x7B2661: pop     ebp
0x7B2662: mov     [ecx], eax
0x7B2664: pop     ebx
0x7B2665: retn    0Ch
0x7B2668: mov     edx, [ebx]
0x7B266A: mov     eax, [esi+4]
0x7B266D: mov     edx, [edx+4]
0x7B2670: push    eax
0x7B2671: mov     ecx, ebx
0x7B2673: call    edx
0x7B2675: mov     edx, [ebx+4]
0x7B2678: add     eax, 1
0x7B267B: cmp     eax, edx
0x7B267D: jnb     short loc_7B2695
0x7B267F: mov     ecx, [ebx+8]
0x7B2682: lea     ecx, [ecx+eax*4]
0x7B2685: mov     esi, [ecx]
0x7B2687: test    esi, esi
0x7B2689: jnz     short loc_7B26A6
0x7B268B: add     eax, 1
0x7B268E: add     ecx, 4
0x7B2691: cmp     eax, edx
0x7B2693: jb      short loc_7B2685
0x7B2695: mov     eax, [esp+10h+arg_0]
0x7B2699: pop     edi
0x7B269A: pop     esi
0x7B269B: pop     ebp
0x7B269C: mov     dword ptr [eax], 0
0x7B26A2: pop     ebx
0x7B26A3: retn    0Ch
0x7B26A6: mov     edx, [esp+10h+arg_0]
0x7B26AA: pop     edi
0x7B26AB: mov     [edx], esi
0x7B26AD: pop     esi
0x7B26AE: pop     ebp
0x7B26AF: pop     ebx
0x7B26B0: retn    0Ch
