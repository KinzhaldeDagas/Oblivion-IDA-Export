0x6F24F0: push    ebp
0x6F24F1: mov     ebp, esp
0x6F24F3: push    0FFFFFFFFh
0x6F24F5: push    offset SEH_6F24F0
0x6F24FA: mov     eax, large fs:0
0x6F2500: push    eax
0x6F2501: sub     esp, 8
0x6F2504: push    ebx
0x6F2505: push    esi
0x6F2506: push    edi
0x6F2507: mov     eax, ds:0B30AACh
0x6F250C: xor     eax, ebp
0x6F250E: push    eax
0x6F250F: lea     eax, [ebp+var_C]
0x6F2512: mov     large fs:0, eax
0x6F2518: mov     [ebp+var_10], esp
0x6F251B: mov     edi, [ebp+arg_0]
0x6F251E: mov     ebx, [ebp+arg_8]
0x6F2521: mov     esi, [ebp+arg_4]
0x6F2524: mov     [ebp+var_14], edi
0x6F2527: mov     [ebp+var_4], 0
0x6F252E: mov     edi, edi
0x6F2530: test    esi, esi
0x6F2532: jbe     short loc_6F256E
0x6F2534: push    ebx
0x6F2535: push    edi
0x6F2536: call    sub_6F1670
0x6F253B: add     esp, 8
0x6F253E: sub     esi, 1
0x6F2541: add     edi, 20h ; ' '
0x6F2544: mov     [ebp+arg_0], edi
0x6F2547: jmp     short loc_6F2530
0x6F2549: mov     esi, [ebp+var_14]
0x6F254C: mov     edi, [ebp+arg_0]
0x6F254F: cmp     esi, edi
0x6F2551: jz      short loc_6F2565
0x6F2553: mov     ebx, [ebp+arg_C]
0x6F2556: push    esi
0x6F2557: mov     ecx, ebx
0x6F2559: call    sub_556F10
0x6F255E: add     esi, 20h ; ' '
0x6F2561: cmp     esi, edi
0x6F2563: jnz     short loc_6F2556
0x6F2565: push    0
0x6F2567: push    0
0x6F2569: call    ThrowException??
0x6F256E: mov     ecx, [ebp+var_C]
0x6F2571: mov     large fs:0, ecx
0x6F2578: pop     ecx
0x6F2579: pop     edi
0x6F257A: pop     esi
0x6F257B: pop     ebx
0x6F257C: mov     esp, ebp
0x6F257E: pop     ebp
0x6F257F: retn
