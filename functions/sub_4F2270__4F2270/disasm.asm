0x4F2270: push    ebp
0x4F2271: mov     ebp, esp
0x4F2273: and     esp, 0FFFFFFF8h
0x4F2276: sub     esp, 1Ch
0x4F2279: push    ebx
0x4F227A: push    esi
0x4F227B: mov     esi, ecx
0x4F227D: xor     ebx, ebx
0x4F227F: test    byte ptr ds:0B360C8h, 1
0x4F2286: push    edi
0x4F2287: mov     [esp+28h+var_C], esi
0x4F228B: jnz     short loc_4F22B5
0x4F228D: or      dword ptr ds:0B360C8h, 1
0x4F2294: push    offset sub_A1C070; void (__cdecl *)()
0x4F2299: mov     ds:0B360C0h, ebx
0x4F229F: mov     ds:0B360C4h, bx
0x4F22A6: mov     ds:0B360C6h, bx
0x4F22AD: call    _atexit
0x4F22B2: add     esp, 4
0x4F22B5: mov     eax, 2
0x4F22BA: test    ds:0B360C8h, al
0x4F22C0: jnz     short loc_4F22C8
0x4F22C2: or      ds:0B360C8h, eax
0x4F22C8: cmp     ds:0B33A98h, ebx
0x4F22CE: jz      short loc_4F231D
0x4F22D0: cmp     ds:0B360BCh, esi
0x4F22D6: jnz     short loc_4F2328
0x4F22D8: fld     dword ptr ds:0B360B0h
0x4F22DE: fld     [ebp+arg_4]
0x4F22E1: fucompp
0x4F22E3: fnstsw  ax
0x4F22E5: test    ah, 44h
0x4F22E8: jp      short loc_4F2338
0x4F22EA: fld     dword ptr ds:0B360B4h
0x4F22F0: fld     [ebp+arg_8]
0x4F22F3: fucompp
0x4F22F5: fnstsw  ax
0x4F22F7: test    ah, 44h
0x4F22FA: jp      short loc_4F2338
0x4F22FC: fld     dword ptr ds:0B360B8h
0x4F2302: fld     [ebp+arg_C]
0x4F2305: fucompp
0x4F2307: fnstsw  ax
0x4F2309: test    ah, 44h
0x4F230C: jp      short loc_4F2338
0x4F230E: mov     eax, ds:0B360C0h
0x4F2313: mov     ecx, [ebp+arg_0]; this
0x4F2316: push    ebx; a3
0x4F2317: push    eax; a2
0x4F2318: call    BSStringT_Set
0x4F231D: xor     al, al
0x4F231F: pop     edi
0x4F2320: pop     esi
0x4F2321: pop     ebx
0x4F2322: mov     esp, ebp
0x4F2324: pop     ebp
0x4F2325: retn    10h
0x4F2328: push    ebx; a3
0x4F2329: push    offset EmptyString; a2
0x4F232E: mov     ecx, offset stru_B360C0; this
0x4F2333: call    BSStringT_Set
0x4F2338: mov     ecx, [ebp+arg_4]
0x4F233B: mov     edx, [ebp+arg_8]
0x4F233E: mov     eax, [ebp+arg_C]
0x4F2341: mov     edi, [ebp+arg_0]
0x4F2344: push    ebx; a3
0x4F2345: mov     ds:0B360B0h, ecx
0x4F234B: push    offset EmptyString; a2
0x4F2350: mov     ecx, edi; this
0x4F2352: mov     ds:0B360BCh, esi
0x4F2358: mov     ds:0B360B4h, edx
0x4F235E: mov     ds:0B360B8h, eax
0x4F2363: call    BSStringT_Set
0x4F2368: fld     [ebp+arg_8]
0x4F236B: mov     ecx, ds:0B33A98h
0x4F2371: push    ebx; int
0x4F2372: push    esi; int
0x4F2373: sub     esp, 8
0x4F2376: fstp    [esp+38h+var_34]; float
0x4F237A: fld     [ebp+arg_4]
0x4F237D: fstp    [esp+38h+var_38]; float
0x4F2380: call    sub_44A270
0x4F2385: mov     ebx, eax
0x4F2387: test    ebx, ebx
0x4F2389: jz      loc_4F2415
0x4F238F: push    1
0x4F2391: mov     ecx, ebx
0x4F2393: call    sub_4C9B40
0x4F2398: test    eax, eax
0x4F239A: jz      short loc_4F23FA
0x4F239C: mov     edx, [esp+28h+var_C]
0x4F23A0: mov     ecx, ds:0B33A98h
0x4F23A6: mov     edi, [ecx+0CD8h]
0x4F23AC: mov     ecx, [ebp+arg_4]
0x4F23AF: mov     esi, [edi]
0x4F23B1: push    edx; int
0x4F23B2: mov     edx, [ebp+arg_8]
0x4F23B5: sub     esp, 0Ch
0x4F23B8: mov     eax, esp
0x4F23BA: mov     [eax], ecx
0x4F23BC: mov     ecx, [ebp+arg_C]
0x4F23BF: mov     [eax+4], edx
0x4F23C2: push    4; int
0x4F23C4: mov     [eax+8], ecx
0x4F23C7: push    1
0x4F23C9: mov     ecx, ebx
0x4F23CB: add     esi, 10h
0x4F23CE: call    sub_4C9B40
0x4F23D3: mov     ecx, eax
0x4F23D5: call    sub_4A67B0
0x4F23DA: mov     edx, [esi]
0x4F23DC: push    eax
0x4F23DD: mov     ecx, edi
0x4F23DF: call    edx
0x4F23E1: test    eax, eax
0x4F23E3: jz      short loc_4F23F7
0x4F23E5: mov     ecx, [ebp+arg_0]
0x4F23E8: mov     edx, [eax]
0x4F23EA: mov     edx, [edx+24h]
0x4F23ED: push    ecx
0x4F23EE: mov     ecx, eax
0x4F23F0: call    edx
0x4F23F2: jmp     loc_4F2576
0x4F23F7: mov     edi, [ebp+arg_0]
0x4F23FA: mov     ebx, [ebx+1Ch]
0x4F23FD: test    ebx, ebx
0x4F23FF: jnz     short loc_4F2406
0x4F2401: mov     ebx, offset EmptyString
0x4F2406: push    0; a3
0x4F2408: push    ebx; a2
0x4F2409: mov     ecx, edi; this
0x4F240B: call    BSStringT_Set
0x4F2410: jmp     loc_4F2579
0x4F2415: mov     eax, ds:0B33A98h
0x4F241A: mov     eax, [eax+0BCh]
0x4F2420: test    eax, eax
0x4F2422: jz      short loc_4F242D
0x4F2424: lea     esi, [eax+4]
0x4F2427: mov     [esp+28h+var_14], esi
0x4F242B: jmp     short loc_4F2439
0x4F242D: mov     [esp+28h+var_14], 0
0x4F2435: mov     esi, [esp+28h+var_14]
0x4F2439: lea     ecx, [ebp+arg_4]
0x4F243C: push    ecx
0x4F243D: lea     ecx, [esp+2Ch+var_8]
0x4F2441: call    sub_4A6950
0x4F2446: test    esi, esi
0x4F2448: mov     [esp+28h+var_10], 0FFFFFFFFh
0x4F2450: mov     [esp+28h+var_15], 0
0x4F2455: jz      loc_4F2579
0x4F245B: jmp     short loc_4F2464
0x4F245D: align 10h
0x4F2460: mov     esi, [esp+28h+var_14]
0x4F2464: mov     ebx, [esi]
0x4F2466: test    ebx, ebx
0x4F2468: jz      loc_4F2576
0x4F246E: mov     edx, [ebx+8]
0x4F2471: shr     edx, 5
0x4F2474: test    dl, 1
0x4F2477: jnz     loc_4F2564
0x4F247D: mov     eax, [esp+28h+var_C]
0x4F2481: cmp     [ebx+20h], eax
0x4F2484: jnz     loc_4F2564
0x4F248A: mov     eax, [ebx+1Ch]
0x4F248D: test    eax, eax
0x4F248F: jz      loc_4F2564
0x4F2495: cmp     dword ptr [eax+4], 0
0x4F2499: jnz     short loc_4F24A4
0x4F249B: cmp     dword ptr [eax], 0
0x4F249E: jz      loc_4F2564
0x4F24A4: mov     ecx, ds:0B33A98h
0x4F24AA: mov     edi, [ecx+0CD8h]
0x4F24B0: mov     esi, [edi]
0x4F24B2: mov     ecx, [ebx+18h]
0x4F24B5: push    4
0x4F24B7: add     esi, 10h
0x4F24BA: call    sub_4A4460
0x4F24BF: mov     edx, [esi]
0x4F24C1: push    eax
0x4F24C2: mov     ecx, edi
0x4F24C4: call    edx
0x4F24C6: mov     esi, eax
0x4F24C8: test    esi, esi
0x4F24CA: jnz     short loc_4F24D8
0x4F24CC: mov     eax, [esp+28h+var_14]
0x4F24D0: mov     ecx, [eax+4]
0x4F24D3: jmp     loc_4F2567
0x4F24D8: mov     edi, [ebx+1Ch]
0x4F24DB: test    edi, edi
0x4F24DD: jz      short loc_4F24FA
0x4F24DF: mov     ecx, [edi]
0x4F24E1: test    ecx, ecx
0x4F24E3: jz      short loc_4F24FA
0x4F24E5: lea     edx, [esp+28h+var_8]
0x4F24E9: push    edx
0x4F24EA: call    sub_4A7330
0x4F24EF: test    al, al
0x4F24F1: jnz     short loc_4F2503
0x4F24F3: mov     edi, [edi+4]
0x4F24F6: test    edi, edi
0x4F24F8: jnz     short loc_4F24DF
0x4F24FA: mov     eax, [esp+28h+var_14]
0x4F24FE: mov     ecx, [eax+4]
0x4F2501: jmp     short loc_4F2567
0x4F2503: mov     al, [esi+4]
0x4F2506: test    al, al
0x4F2508: jz      short loc_4F2524
0x4F250A: cmp     [esp+28h+var_15], 0
0x4F250F: jz      short loc_4F2535
0x4F2511: movzx   edx, byte ptr [esi+6]
0x4F2515: cmp     edx, [esp+28h+var_10]
0x4F2519: jg      short loc_4F2535
0x4F251B: mov     eax, [esp+28h+var_14]
0x4F251F: mov     ecx, [eax+4]
0x4F2522: jmp     short loc_4F2567
0x4F2524: cmp     [esp+28h+var_15], 0
0x4F2529: jnz     short loc_4F2557
0x4F252B: movzx   edx, byte ptr [esi+6]
0x4F252F: cmp     edx, [esp+28h+var_10]
0x4F2533: jle     short loc_4F2557
0x4F2535: mov     edx, [esi]
0x4F2537: mov     edx, [edx+24h]
0x4F253A: mov     [esp+28h+var_15], al
0x4F253E: movzx   eax, byte ptr [esi+6]
0x4F2542: mov     [esp+28h+var_10], eax
0x4F2546: mov     eax, [ebp+arg_0]
0x4F2549: push    eax
0x4F254A: mov     ecx, esi
0x4F254C: call    edx
0x4F254E: mov     eax, [esp+28h+var_14]
0x4F2552: mov     ecx, [eax+4]
0x4F2555: jmp     short loc_4F2567
0x4F2557: mov     edx, [esp+28h+var_14]
0x4F255B: mov     eax, [edx+4]
0x4F255E: mov     [esp+28h+var_14], eax
0x4F2562: jmp     short loc_4F256B
0x4F2564: mov     ecx, [esi+4]
0x4F2567: mov     [esp+28h+var_14], ecx
0x4F256B: cmp     [esp+28h+var_14], 0
0x4F2570: jnz     loc_4F2460
0x4F2576: mov     edi, [ebp+arg_0]
0x4F2579: movzx   eax, word ptr [edi+4]
0x4F257D: cmp     ax, 0FFFFh
0x4F2581: jnz     short loc_4F2595
0x4F2583: mov     eax, [edi]
0x4F2585: lea     edx, [eax+1]
0x4F2588: mov     cl, [eax]
0x4F258A: add     eax, 1
0x4F258D: test    cl, cl
0x4F258F: jnz     short loc_4F2588
0x4F2591: sub     eax, edx
0x4F2593: jmp     short loc_4F2598
0x4F2595: movzx   eax, ax
0x4F2598: test    eax, eax
0x4F259A: jnz     short loc_4F25B6
0x4F259C: mov     edx, [esp+28h+var_C]
0x4F25A0: mov     eax, [edx+1Ch]
0x4F25A3: test    eax, eax
0x4F25A5: jnz     short loc_4F25AC
0x4F25A7: mov     eax, offset EmptyString
0x4F25AC: push    0; a3
0x4F25AE: push    eax; a2
0x4F25AF: mov     ecx, edi; this
0x4F25B1: call    BSStringT_Set
0x4F25B6: movzx   eax, word ptr [edi+4]
0x4F25BA: cmp     ax, 0FFFFh
0x4F25BE: jnz     short loc_4F25D2
0x4F25C0: mov     eax, [edi]
0x4F25C2: lea     edx, [eax+1]
0x4F25C5: mov     cl, [eax]
0x4F25C7: add     eax, 1
0x4F25CA: test    cl, cl
0x4F25CC: jnz     short loc_4F25C5
0x4F25CE: sub     eax, edx
0x4F25D0: jmp     short loc_4F25D5
0x4F25D2: movzx   eax, ax
0x4F25D5: test    eax, eax
0x4F25D7: jnz     short loc_4F25E7
0x4F25D9: push    eax; a3
0x4F25DA: mov     eax, ds:0B35C0Ch
0x4F25DF: push    eax; a2
0x4F25E0: mov     ecx, edi; this
0x4F25E2: call    BSStringT_Set
0x4F25E7: mov     ecx, ds:0B360C0h
0x4F25ED: test    ecx, ecx
0x4F25EF: jz      short loc_4F2603
0x4F25F1: mov     eax, [edi]
0x4F25F3: test    eax, eax
0x4F25F5: jz      short loc_4F2603
0x4F25F7: push    ecx; Str2
0x4F25F8: push    eax; Str1
0x4F25F9: call    __strcmp
0x4F25FE: add     esp, 8
0x4F2601: jmp     short loc_4F260E
0x4F2603: xor     eax, eax
0x4F2605: test    ecx, ecx
0x4F2607: setz    al
0x4F260A: lea     eax, [eax+eax-1]
0x4F260E: test    eax, eax
0x4F2610: jz      loc_4F231D
0x4F2616: mov     ecx, [edi]
0x4F2618: push    0; a3
0x4F261A: push    ecx; a2
0x4F261B: mov     ecx, offset stru_B360C0; this
0x4F2620: call    BSStringT_Set
0x4F2625: pop     edi
0x4F2626: pop     esi
0x4F2627: mov     al, 1
0x4F2629: pop     ebx
0x4F262A: mov     esp, ebp
0x4F262C: pop     ebp
0x4F262D: retn    10h
