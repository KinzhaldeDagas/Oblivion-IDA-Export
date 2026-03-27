0x4A25F0: push    ebp
0x4A25F1: mov     ebp, esp
0x4A25F3: and     esp, 0FFFFFFF8h
0x4A25F6: push    0FFFFFFFFh
0x4A25F8: push    offset SEH_4A25F0
0x4A25FD: mov     eax, large fs:0
0x4A2603: push    eax
0x4A2604: sub     esp, 230h
0x4A260A: mov     eax, ds:0B30AACh
0x4A260F: xor     eax, esp
0x4A2611: mov     [esp+23Ch+var_14], eax
0x4A2618: push    ebx
0x4A2619: push    esi
0x4A261A: push    edi
0x4A261B: mov     eax, ds:0B30AACh
0x4A2620: xor     eax, esp
0x4A2622: push    eax
0x4A2623: lea     eax, [esp+24Ch+var_C]
0x4A262A: mov     large fs:0, eax
0x4A2630: mov     edi, ecx
0x4A2632: push    3
0x4A2634: mov     [esp+250h+var_23C], edi
0x4A2638: call    nullsub_returnTrue_0arg
0x4A263D: add     esp, 4
0x4A2640: push    offset CriticalSection; lpCriticalSection
0x4A2645: call    dword ptr ds:0A2806Ch
0x4A264B: call    dword ptr ds:0A2808Ch
0x4A2651: add     dword ptr ds:0B353FCh, 1
0x4A2658: mov     ecx, edi
0x4A265A: mov     ds:0B353F8h, eax
0x4A265F: call    sub_4A23B0
0x4A2664: mov     ecx, [edi+0Ch]
0x4A2667: xor     ebx, ebx
0x4A2669: cmp     [ecx+0Ch], ebx
0x4A266C: jz      loc_4A2802
0x4A2672: mov     esi, [ecx+4]
0x4A2675: xor     eax, eax
0x4A2677: cmp     esi, ebx
0x4A2679: jbe     short loc_4A268E
0x4A267B: mov     ecx, [ecx+8]
0x4A267E: mov     edx, ecx
0x4A2680: cmp     [edx], ebx
0x4A2682: jnz     short loc_4A269E
0x4A2684: add     eax, 1
0x4A2687: add     edx, 4
0x4A268A: cmp     eax, esi
0x4A268C: jb      short loc_4A2680
0x4A268E: xor     eax, eax
0x4A2690: cmp     eax, ebx
0x4A2692: mov     [esp+24Ch+var_22C], eax
0x4A2696: jz      loc_4A2802
0x4A269C: jmp     short loc_4A26A7
0x4A269E: mov     eax, [ecx+eax*4]
0x4A26A1: jmp     short loc_4A2690
0x4A26A3: mov     edi, [esp+24Ch+var_23C]
0x4A26A7: mov     [esp+24Ch+Str], ebx
0x4A26AB: mov     [esp+24Ch+var_234], ebx
0x4A26AF: lea     eax, [esp+24Ch+var_234]
0x4A26B3: push    eax
0x4A26B4: lea     ecx, [esp+250h+Str]
0x4A26B8: push    ecx
0x4A26B9: mov     ecx, [edi+0Ch]
0x4A26BC: lea     edx, [esp+254h+var_22C]
0x4A26C0: push    edx
0x4A26C1: mov     [esp+258h+var_4], ebx
0x4A26C8: call    sub_7B2600
0x4A26CD: mov     eax, [esp+24Ch+var_234]
0x4A26D1: add     eax, 4
0x4A26D4: cmp     dword ptr [eax], 2
0x4A26D7: jnz     loc_4A27CF
0x4A26DD: xor     edi, edi
0x4A26DF: mov     [esp+24Ch+var_238], edi
0x4A26E3: mov     ebx, [esp+24Ch+Str]
0x4A26E7: push    5Fh ; '_'; Ch
0x4A26E9: push    ebx; Str
0x4A26EA: mov     byte ptr [esp+254h+var_4], 1
0x4A26F2: call    _strrchr
0x4A26F7: mov     esi, eax
0x4A26F9: sub     esi, ebx
0x4A26FB: add     esp, 8
0x4A26FE: test    esi, esi
0x4A2700: jle     loc_4A27A1
0x4A2706: push    esi; Count
0x4A2707: lea     eax, [esp+250h+Dest]
0x4A270B: push    ebx; Source
0x4A270C: push    eax; Dest
0x4A270D: call    _strncpy
0x4A2712: lea     eax, [esp+258h+Dest]
0x4A2716: add     esp, 0Ch
0x4A2719: mov     [esp+esi+24Ch+Dest], 0
0x4A271E: add     eax, 0FFFFFFFFh
0x4A2721: mov     cl, [eax+1]
0x4A2724: add     eax, 1
0x4A2727: test    cl, cl
0x4A2729: jnz     short loc_4A2721
0x4A272B: mov     ecx, ds:0A3D358h
0x4A2731: mov     dl, ds:0A3D35Ch
0x4A2737: mov     [eax], ecx
0x4A2739: mov     [eax+4], dl
0x4A273C: lea     eax, [esp+24Ch+var_228]
0x4A2740: push    eax; int
0x4A2741: lea     ecx, [esp+250h+var_220]
0x4A2745: push    ecx; int
0x4A2746: lea     edx, [esp+254h+Dest]
0x4A274A: push    edx; FullPath
0x4A274B: call    HashFilePAth
0x4A2750: lea     eax, [esp+258h+Dest]
0x4A2754: push    eax
0x4A2755: lea     ecx, [esp+25Ch+var_228]
0x4A2759: push    ecx
0x4A275A: lea     edx, [esp+260h+var_220]
0x4A275E: push    edx
0x4A275F: push    1
0x4A2761: call    ArchiveManager_LazyFileLookup
0x4A2766: mov     edx, [esp+268h+var_23C]
0x4A276A: add     esp, 1Ch
0x4A276D: test    eax, eax
0x4A276F: jz      short loc_4A2781
0x4A2771: lea     ecx, [esp+24Ch+var_238]
0x4A2775: push    ecx
0x4A2776: mov     ecx, [edx+8]
0x4A2779: push    eax
0x4A277A: call    sub_4A1AB0
0x4A277F: jmp     short loc_4A2793
0x4A2781: lea     eax, [esp+24Ch+var_238]
0x4A2785: push    eax
0x4A2786: lea     ecx, [esp+250h+Dest]
0x4A278A: push    ecx
0x4A278B: mov     ecx, [edx+0Ch]
0x4A278E: call    sub_4A1AB0
0x4A2793: mov     edi, [esp+24Ch+var_238]
0x4A2797: test    edi, edi
0x4A2799: jz      short loc_4A27A1
0x4A279B: cmp     dword ptr [edi+4], 2
0x4A279F: jnz     short loc_4A27AB
0x4A27A1: mov     ecx, [esp+24Ch+var_23C]
0x4A27A5: push    ebx; Str1
0x4A27A6: call    sub_4A1A10
0x4A27AB: test    edi, edi
0x4A27AD: mov     byte ptr [esp+24Ch+var_4], 0
0x4A27B5: jz      short loc_4A27CF
0x4A27B7: lea     eax, [edi+4]
0x4A27BA: push    eax; lpAddend
0x4A27BB: call    dword ptr ds:0A2807Ch
0x4A27C1: test    eax, eax
0x4A27C3: jnz     short loc_4A27CF
0x4A27C5: mov     edx, [edi]
0x4A27C7: mov     eax, [edx]
0x4A27C9: push    1
0x4A27CB: mov     ecx, edi
0x4A27CD: call    eax
0x4A27CF: mov     esi, [esp+24Ch+var_234]
0x4A27D3: lea     eax, [esi+4]
0x4A27D6: push    eax; lpAddend
0x4A27D7: mov     [esp+250h+var_4], 0FFFFFFFFh
0x4A27E2: call    dword ptr ds:0A2807Ch
0x4A27E8: test    eax, eax
0x4A27EA: jnz     short loc_4A27F6
0x4A27EC: mov     edx, [esi]
0x4A27EE: mov     eax, [edx]
0x4A27F0: push    1
0x4A27F2: mov     ecx, esi
0x4A27F4: call    eax
0x4A27F6: xor     ebx, ebx
0x4A27F8: cmp     [esp+24Ch+var_22C], ebx
0x4A27FC: jnz     loc_4A26A3
0x4A2802: sub     dword ptr ds:0B353FCh, 1
0x4A2809: jnz     short loc_4A2811
0x4A280B: mov     ds:0B353F8h, ebx
0x4A2811: push    offset CriticalSection; lpCriticalSection
0x4A2816: call    dword ptr ds:0A28074h
0x4A281C: push    2
0x4A281E: call    nullsub_returnTrue_0arg
0x4A2823: add     esp, 4
0x4A2826: mov     ecx, dword ptr [esp+24Ch+var_C]
0x4A282D: mov     large fs:0, ecx
0x4A2834: pop     ecx
0x4A2835: pop     edi
0x4A2836: pop     esi
0x4A2837: pop     ebx
0x4A2838: mov     ecx, [esp+23Ch+var_14]
0x4A283F: xor     ecx, esp
0x4A2841: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A2846: mov     esp, ebp
0x4A2848: pop     ebp
0x4A2849: retn
