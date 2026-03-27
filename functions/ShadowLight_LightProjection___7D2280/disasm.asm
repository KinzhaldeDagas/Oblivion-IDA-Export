0x7D2280: push    0FFFFFFFFh
0x7D2282: push    offset ShadowLight_LightProjection?_SEH
0x7D2287: mov     eax, large fs:0
0x7D228D: push    eax
0x7D228E: sub     esp, 0D4h
0x7D2294: push    ebx
0x7D2295: push    ebp
0x7D2296: push    esi
0x7D2297: push    edi
0x7D2298: mov     eax, ds:0B30AACh
0x7D229D: xor     eax, esp
0x7D229F: push    eax
0x7D22A0: lea     eax, [esp+0F4h+var_C]
0x7D22A7: mov     large fs:0, eax
0x7D22AD: mov     esi, ecx
0x7D22AF: mov     [esp+0F4h+var_AC], esi
0x7D22B3: xor     ebx, ebx
0x7D22B5: mov     [esp+0F4h+var_DC], ebx
0x7D22B9: mov     ecx, [esi+130h]
0x7D22BF: push    offset off_A7D2CC
0x7D22C4: call    NiObjectNET_GetExtraData
0x7D22C9: mov     ecx, [esi+130h]
0x7D22CF: fld     dword ptr [ecx+88h]
0x7D22D5: mov     edx, [eax+1Ch]
0x7D22D8: fadd    dword ptr [eax+0Ch]
0x7D22DB: mov     [esp+0F4h+var_98], edx
0x7D22DF: fstp    [esp+0F4h+var_54]
0x7D22E6: fld     dword ptr [eax+10h]
0x7D22E9: fadd    dword ptr [ecx+8Ch]
0x7D22EF: fstp    [esp+0F4h+var_5C]
0x7D22F6: fld     dword ptr [eax+14h]
0x7D22F9: fadd    dword ptr [ecx+90h]
0x7D22FF: mov     ecx, [eax+18h]
0x7D2302: mov     eax, [eax+20h]
0x7D2305: mov     [esp+0F4h+var_9C], ecx
0x7D2309: fstp    [esp+0F4h+var_64]
0x7D2310: mov     [esp+0F4h+var_94], eax
0x7D2314: fld     [esp+0F4h+var_9C]
0x7D2318: fld     [esp+0F4h+var_98]
0x7D231C: fcom    st(1)
0x7D231E: fnstsw  ax
0x7D2320: test    ah, 5
0x7D2323: jp      short loc_7D232D
0x7D2325: fxch    st(1)
0x7D2327: fst     [esp+0F4h+var_D8]
0x7D232B: jmp     short loc_7D2333
0x7D232D: fst     [esp+0F4h+var_D8]
0x7D2331: fxch    st(1)
0x7D2333: fld     [esp+0F4h+var_D8]
0x7D2337: fld     [esp+0F4h+var_94]
0x7D233B: fcom    st(1)
0x7D233D: fnstsw  ax
0x7D233F: fstp    st(1)
0x7D2341: test    ah, 5
0x7D2344: jp      short loc_7D2355
0x7D2346: fstp    st
0x7D2348: fcom    st(1)
0x7D234A: fnstsw  ax
0x7D234C: test    ah, 41h
0x7D234F: jz      short loc_7D2357
0x7D2351: fstp    st
0x7D2353: jmp     short loc_7D2359
0x7D2355: fstp    st(1)
0x7D2357: fstp    st(1)
0x7D2359: mov     ebp, [esp+0F4h+arg_0]
0x7D2360: fstp    [esp+0F4h+var_D0]
0x7D2364: xor     edi, edi
0x7D2366: cmp     ebp, ebx
0x7D2368: mov     [esp+0F4h+var_C0], ebx
0x7D236C: mov     [esp+0F4h+var_BC], edi
0x7D2370: jz      short loc_7D238B
0x7D2372: mov     ecx, ebp
0x7D2374: call    sub_7ED1A0
0x7D2379: mov     ecx, ebp
0x7D237B: mov     esi, eax
0x7D237D: call    sub_7ED5D0
0x7D2382: movzx   edi, ax
0x7D2385: mov     [esp+0F4h+var_BC], edi
0x7D2389: jmp     short loc_7D23DB
0x7D238B: push    ebx
0x7D238C: push    ebx
0x7D238D: call    GetShadowSceneNode
0x7D2392: add     esp, 4
0x7D2395: mov     ecx, eax
0x7D2397: call    sub_7C62D0
0x7D239C: cmp     eax, ebx
0x7D239E: jz      short loc_7D23C4
0x7D23A0: cmp     [eax+0F4h], bl
0x7D23A6: jnz     short loc_7D23AB
0x7D23A8: add     edi, 1
0x7D23AB: push    edi
0x7D23AC: push    ebx
0x7D23AD: call    GetShadowSceneNode
0x7D23B2: add     esp, 4
0x7D23B5: mov     ecx, eax
0x7D23B7: call    sub_7C62D0
0x7D23BC: cmp     eax, ebx
0x7D23BE: jnz     short loc_7D23A0
0x7D23C0: mov     [esp+0F4h+var_BC], edi
0x7D23C4: push    ebx
0x7D23C5: push    ebx
0x7D23C6: mov     [esp+0FCh+var_C0], ebx
0x7D23CA: call    GetShadowSceneNode
0x7D23CF: add     esp, 4
0x7D23D2: mov     ecx, eax
0x7D23D4: call    sub_7C62D0
0x7D23D9: mov     esi, eax
0x7D23DB: cmp     edi, 28h ; '('
0x7D23DE: jl      short loc_7D23E9
0x7D23E0: mov     edi, 28h ; '('
0x7D23E5: mov     [esp+0F4h+var_BC], edi
0x7D23E9: test    edi, edi
0x7D23EB: fldz
0x7D23ED: mov     ebp, ds:0A2807Ch
0x7D23F3: fstp    [esp+0F4h+var_90]
0x7D23F7: mov     [esp+0F4h+var_D8], ebx
0x7D23FB: jle     loc_7D272D
0x7D2401: test    esi, esi
0x7D2403: jz      loc_7D26E3
0x7D2409: lea     ecx, [esp+0F4h+var_14]
0x7D2410: push    ecx
0x7D2411: mov     ecx, esi
0x7D2413: call    sub_405AD0
0x7D2418: mov     eax, [eax]
0x7D241A: fld     dword ptr [eax+88h]
0x7D2420: fsub    [esp+0F4h+var_54]
0x7D2427: fstp    [esp+0F4h+var_DC]
0x7D242B: fld     dword ptr [eax+8Ch]
0x7D2431: fsub    [esp+0F4h+var_5C]
0x7D2438: fstp    [esp+0F4h+var_10]
0x7D243F: fld     dword ptr [eax+90h]
0x7D2445: mov     eax, [esp+0F4h+var_14]
0x7D244C: test    eax, eax
0x7D244E: fsub    [esp+0F4h+var_64]
0x7D2455: fstp    [esp+0F4h+var_E0]
0x7D2459: jz      short loc_7D2475
0x7D245B: mov     edi, eax
0x7D245D: add     eax, 4
0x7D2460: push    eax; lpAddend
0x7D2461: call    ebp ; InterlockedDecrement
0x7D2463: test    eax, eax
0x7D2465: jnz     short loc_7D2475
0x7D2467: test    edi, edi
0x7D2469: jz      short loc_7D2475
0x7D246B: mov     edx, [edi]
0x7D246D: mov     eax, [edx]
0x7D246F: push    1
0x7D2471: mov     ecx, edi
0x7D2473: call    eax
0x7D2475: lea     ecx, [esp+0F4h+var_60]
0x7D247C: push    ecx
0x7D247D: mov     ecx, esi
0x7D247F: call    sub_405AD0
0x7D2484: mov     edi, eax
0x7D2486: fld     [esp+0F4h+var_DC]
0x7D248A: fld     [esp+0F4h+var_10]
0x7D2491: mov     [esp+0F4h+var_4], 0
0x7D249C: fld     [esp+0F4h+var_E0]
0x7D24A0: fld     st(1)
0x7D24A2: fmulp   st(2), st
0x7D24A4: fld     st(2)
0x7D24A6: fmulp   st(3), st
0x7D24A8: fxch    st(1)
0x7D24AA: faddp   st(2), st
0x7D24AC: fmul    st, st
0x7D24AE: faddp   st(1), st
0x7D24B0: fstp    [esp+0F4h+var_DC]
0x7D24B4: fld     [esp+0F4h+var_DC]
0x7D24B8: fstp    [esp+0F4h+var_E0]
0x7D24BC: fld     [esp+0F4h+var_E0]
0x7D24C0: call    __CIsqrt
0x7D24C5: fstp    [esp+0F4h+var_E0]
0x7D24C9: fld     [esp+0F4h+var_E0]
0x7D24CD: mov     edi, [edi]
0x7D24CF: fstp    [esp+0F4h+var_E0]
0x7D24D3: fld     [esp+0F4h+var_E0]
0x7D24D7: fsub    [esp+0F4h+var_D0]
0x7D24DB: fdiv    dword ptr [edi+0F8h]
0x7D24E1: fld1
0x7D24E3: fsubrp  st(1), st
0x7D24E5: fcomp   qword ptr ds:0A2FC68h
0x7D24EB: fnstsw  ax
0x7D24ED: test    ah, 5
0x7D24F0: jnp     short loc_7D254F
0x7D24F2: lea     edx, [esp+0F4h+var_80]
0x7D24F6: push    edx
0x7D24F7: mov     ecx, esi
0x7D24F9: call    sub_405AD0
0x7D24FE: mov     edi, eax
0x7D2500: fld     [esp+0F4h+var_DC]
0x7D2504: fstp    [esp+0F4h+var_E0]
0x7D2508: mov     byte ptr [esp+0F4h+var_4], 1
0x7D2510: fld     [esp+0F4h+var_E0]
0x7D2514: or      ebx, 1
0x7D2517: call    __CIsqrt
0x7D251C: fstp    [esp+0F4h+var_E0]
0x7D2520: fld     [esp+0F4h+var_E0]
0x7D2524: mov     edi, [edi]
0x7D2526: fstp    [esp+0F4h+var_E0]
0x7D252A: fld     [esp+0F4h+var_E0]
0x7D252E: fsub    [esp+0F4h+var_D0]
0x7D2532: fdiv    dword ptr [edi+0F8h]
0x7D2538: fld1
0x7D253A: fld     st
0x7D253C: fsubrp  st(2), st
0x7D253E: fcom    st(1)
0x7D2540: fnstsw  ax
0x7D2542: fstp    st(1)
0x7D2544: test    ah, 5
0x7D2547: jnp     loc_7D25F0
0x7D254D: fstp    st
0x7D254F: lea     eax, [esp+0F4h+var_58]
0x7D2556: push    eax
0x7D2557: mov     ecx, esi
0x7D2559: call    sub_405AD0
0x7D255E: mov     edi, eax
0x7D2560: fld     [esp+0F4h+var_DC]
0x7D2564: fstp    [esp+0F4h+var_E0]
0x7D2568: mov     [esp+0F4h+var_4], 2
0x7D2573: fld     [esp+0F4h+var_E0]
0x7D2577: or      ebx, 2
0x7D257A: call    __CIsqrt
0x7D257F: fstp    [esp+0F4h+var_E0]
0x7D2583: fld     [esp+0F4h+var_E0]
0x7D2587: mov     edi, [edi]
0x7D2589: fstp    [esp+0F4h+var_E0]
0x7D258D: fld     [esp+0F4h+var_E0]
0x7D2591: fsub    [esp+0F4h+var_D0]
0x7D2595: fdiv    dword ptr [edi+0F8h]
0x7D259B: fld1
0x7D259D: fsubrp  st(1), st
0x7D259F: fldz
0x7D25A1: fcom    st(1)
0x7D25A3: fnstsw  ax
0x7D25A5: fstp    st(1)
0x7D25A7: test    ah, 41h
0x7D25AA: jz      short loc_7D25F0
0x7D25AC: lea     ecx, [esp+0F4h+var_D4]
0x7D25B0: fstp    st
0x7D25B2: push    ecx
0x7D25B3: mov     ecx, esi
0x7D25B5: call    sub_405AD0
0x7D25BA: fld     [esp+0F4h+var_DC]
0x7D25BE: fstp    [esp+0F4h+var_E0]
0x7D25C2: mov     esi, eax
0x7D25C4: fld     [esp+0F4h+var_E0]
0x7D25C8: or      ebx, 4
0x7D25CB: call    __CIsqrt
0x7D25D0: fstp    [esp+0F4h+var_E0]
0x7D25D4: fld     [esp+0F4h+var_E0]
0x7D25D8: mov     esi, [esi]
0x7D25DA: fstp    [esp+0F4h+var_E0]
0x7D25DE: fld     [esp+0F4h+var_E0]
0x7D25E2: fsub    [esp+0F4h+var_D0]
0x7D25E6: fdiv    dword ptr [esi+0F8h]
0x7D25EC: fld1
0x7D25EE: fsubrp  st(1), st
0x7D25F0: test    bl, 4
0x7D25F3: fstp    [esp+0F4h+var_E0]
0x7D25F7: jz      short loc_7D2622
0x7D25F9: mov     eax, [esp+0F4h+var_D4]
0x7D25FD: and     ebx, 0FFFFFFFBh
0x7D2600: test    eax, eax
0x7D2602: mov     [esp+0F4h+var_DC], ebx
0x7D2606: jz      short loc_7D2622
0x7D2608: mov     esi, eax
0x7D260A: add     eax, 4
0x7D260D: push    eax; lpAddend
0x7D260E: call    ebp ; InterlockedDecrement
0x7D2610: test    eax, eax
0x7D2612: jnz     short loc_7D2622
0x7D2614: test    esi, esi
0x7D2616: jz      short loc_7D2622
0x7D2618: mov     edx, [esi]
0x7D261A: mov     eax, [edx]
0x7D261C: push    1
0x7D261E: mov     ecx, esi
0x7D2620: call    eax
0x7D2622: test    bl, 2
0x7D2625: mov     [esp+0F4h+var_4], 1
0x7D2630: jz      short loc_7D265E
0x7D2632: mov     eax, [esp+0F4h+var_58]
0x7D2639: and     ebx, 0FFFFFFFDh
0x7D263C: test    eax, eax
0x7D263E: mov     [esp+0F4h+var_DC], ebx
0x7D2642: jz      short loc_7D265E
0x7D2644: mov     esi, eax
0x7D2646: add     eax, 4
0x7D2649: push    eax; lpAddend
0x7D264A: call    ebp ; InterlockedDecrement
0x7D264C: test    eax, eax
0x7D264E: jnz     short loc_7D265E
0x7D2650: test    esi, esi
0x7D2652: jz      short loc_7D265E
0x7D2654: mov     edx, [esi]
0x7D2656: mov     eax, [edx]
0x7D2658: push    1
0x7D265A: mov     ecx, esi
0x7D265C: call    eax
0x7D265E: test    bl, 1
0x7D2661: mov     [esp+0F4h+var_4], 0
0x7D266C: jz      short loc_7D2693
0x7D266E: mov     eax, [esp+0F4h+var_80]
0x7D2672: and     ebx, 0FFFFFFFEh
0x7D2675: test    eax, eax
0x7D2677: jz      short loc_7D2693
0x7D2679: mov     esi, eax
0x7D267B: add     eax, 4
0x7D267E: push    eax; lpAddend
0x7D267F: call    ebp ; InterlockedDecrement
0x7D2681: test    eax, eax
0x7D2683: jnz     short loc_7D2693
0x7D2685: test    esi, esi
0x7D2687: jz      short loc_7D2693
0x7D2689: mov     edx, [esi]
0x7D268B: mov     eax, [edx]
0x7D268D: push    1
0x7D268F: mov     ecx, esi
0x7D2691: call    eax
0x7D2693: mov     esi, [esp+0F4h+var_60]
0x7D269A: test    esi, esi
0x7D269C: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x7D26A7: jz      short loc_7D26C1
0x7D26A9: lea     ecx, [esi+4]
0x7D26AC: push    ecx; lpAddend
0x7D26AD: call    ebp ; InterlockedDecrement
0x7D26AF: test    eax, eax
0x7D26B1: jnz     short loc_7D26C1
0x7D26B3: test    esi, esi
0x7D26B5: jz      short loc_7D26C1
0x7D26B7: mov     edx, [esi]
0x7D26B9: mov     eax, [edx]
0x7D26BB: push    1
0x7D26BD: mov     ecx, esi
0x7D26BF: call    eax
0x7D26C1: fld     [esp+0F4h+var_E0]
0x7D26C5: mov     eax, [esp+0F4h+var_D8]
0x7D26C9: mov     edi, [esp+0F4h+var_BC]
0x7D26CD: fst     dword ptr ds:0B45CD0h[eax*4]
0x7D26D4: fst     dword ptr ds:0B45C30h[eax*4]
0x7D26DB: fadd    [esp+0F4h+var_90]
0x7D26DF: fstp    [esp+0F4h+var_90]
0x7D26E3: cmp     [esp+0F4h+arg_0], 0
0x7D26EB: jz      short loc_7D26FB
0x7D26ED: mov     ecx, [esp+0F4h+arg_0]
0x7D26F4: call    sub_7ED3B0
0x7D26F9: jmp     short loc_7D2718
0x7D26FB: mov     eax, [esp+0F4h+var_C0]
0x7D26FF: add     eax, 1
0x7D2702: push    eax
0x7D2703: push    0
0x7D2705: mov     [esp+0FCh+var_C0], eax
0x7D2709: call    GetShadowSceneNode
0x7D270E: add     esp, 4
0x7D2711: mov     ecx, eax
0x7D2713: call    sub_7C62D0
0x7D2718: mov     esi, eax
0x7D271A: mov     eax, [esp+0F4h+var_D8]
0x7D271E: add     eax, 1
0x7D2721: cmp     eax, edi
0x7D2723: mov     [esp+0F4h+var_D8], eax
0x7D2727: jl      loc_7D2401
0x7D272D: cmp     [esp+0F4h+arg_0], 0
0x7D2735: fldz
0x7D2737: mov     ecx, ds:0B3F9A8h
0x7D273D: fstp    [esp+0F4h+var_D8]
0x7D2741: mov     edx, ds:0B3F9ACh
0x7D2747: mov     eax, ds:0B3F9B0h
0x7D274C: mov     dword ptr [esp+0F4h+var_B8], ecx
0x7D2750: mov     ecx, ds:0B3FA90h
0x7D2756: mov     dword ptr [esp+0F4h+var_B8+4], edx
0x7D275A: mov     edx, ds:0B3FA94h
0x7D2760: mov     [esp+0F4h+var_B0], eax
0x7D2764: mov     eax, ds:0B3FA98h
0x7D2769: mov     [esp+0F4h+var_A8], ecx
0x7D276D: mov     [esp+0F4h+var_A4], edx
0x7D2771: mov     [esp+0F4h+var_A0], eax
0x7D2775: jz      short loc_7D2785
0x7D2777: mov     ecx, [esp+0F4h+arg_0]
0x7D277E: call    sub_7ED1A0
0x7D2783: jmp     short loc_7D27A0
0x7D2785: push    0
0x7D2787: push    0
0x7D2789: mov     [esp+0FCh+var_C0], 0
0x7D2791: call    GetShadowSceneNode
0x7D2796: add     esp, 4
0x7D2799: mov     ecx, eax
0x7D279B: call    sub_7C62D0
0x7D27A0: push    0
0x7D27A2: mov     edi, eax
0x7D27A4: call    GetShadowSceneNode
0x7D27A9: add     esp, 4
0x7D27AC: lea     ecx, [esp+0F4h+var_60]
0x7D27B3: push    ecx
0x7D27B4: mov     ecx, [eax+118h]
0x7D27BA: call    sub_405AD0
0x7D27BF: mov     ebx, [eax]
0x7D27C1: mov     eax, [esp+0F4h+var_60]
0x7D27C8: test    eax, eax
0x7D27CA: jz      short loc_7D27E6
0x7D27CC: mov     esi, eax
0x7D27CE: add     eax, 4
0x7D27D1: push    eax; lpAddend
0x7D27D2: call    ebp ; InterlockedDecrement
0x7D27D4: test    eax, eax
0x7D27D6: jnz     short loc_7D27E6
0x7D27D8: test    esi, esi
0x7D27DA: jz      short loc_7D27E6
0x7D27DC: mov     edx, [esi]
0x7D27DE: mov     eax, [edx]
0x7D27E0: push    1
0x7D27E2: mov     ecx, esi
0x7D27E4: call    eax
0x7D27E6: fld     dword ptr [ebx+108h]
0x7D27EC: lea     ecx, [esp+0F4h+var_38]
0x7D27F3: fchs
0x7D27F5: fstp    dword ptr [esp+0F4h+var_38]
0x7D27FC: fld     dword ptr [ebx+10Ch]
0x7D2802: fchs
0x7D2804: fstp    dword ptr [esp+0F4h+var_38+4]
0x7D280B: fld     dword ptr [ebx+110h]
0x7D2811: fchs
0x7D2813: fstp    [esp+0F4h+var_30]
0x7D281A: call    sub_43F350
0x7D281F: fstp    st
0x7D2821: fldz
0x7D2823: fcomp   [esp+0F4h+var_90]
0x7D2827: fnstsw  ax
0x7D2829: test    ah, 44h
0x7D282C: jp      short loc_7D2872
0x7D282E: mov     ecx, dword ptr [esp+0F4h+var_38]
0x7D2835: mov     edx, dword ptr [esp+0F4h+var_38+4]
0x7D283C: mov     eax, [esp+0F4h+var_30]
0x7D2843: mov     dword ptr [esp+0F4h+var_B8], ecx
0x7D2847: mov     ecx, [ebx+0ECh]
0x7D284D: mov     dword ptr [esp+0F4h+var_B8+4], edx
0x7D2851: mov     edx, [ebx+0F0h]
0x7D2857: mov     [esp+0F4h+var_B0], eax
0x7D285B: mov     eax, [ebx+0F4h]
0x7D2861: mov     [esp+0F4h+var_A8], ecx
0x7D2865: mov     [esp+0F4h+var_A4], edx
0x7D2869: mov     [esp+0F4h+var_A0], eax
0x7D286D: jmp     loc_7D2CA5
0x7D2872: xor     esi, esi
0x7D2874: cmp     [esp+0F4h+var_BC], esi
0x7D2878: jle     loc_7D2CA5
0x7D287E: test    edi, edi
0x7D2880: jz      loc_7D2C67
0x7D2886: fld     dword ptr ds:0B45C30h[esi*4]
0x7D288D: fdiv    [esp+0F4h+var_90]
0x7D2891: fstp    [esp+0F4h+var_DC]
0x7D2895: fldz
0x7D2897: fcomp   [esp+0F4h+var_DC]
0x7D289B: fnstsw  ax
0x7D289D: test    ah, 5
0x7D28A0: jp      loc_7D2C67
0x7D28A6: lea     ecx, [esp+0F4h+var_80]
0x7D28AA: push    ecx
0x7D28AB: mov     ecx, edi
0x7D28AD: call    sub_405AD0
0x7D28B2: mov     edx, [eax]
0x7D28B4: fld     dword ptr [edx+0F8h]
0x7D28BA: mov     eax, [esp+0F4h+var_80]
0x7D28BE: test    eax, eax
0x7D28C0: fmul    dword ptr ds:0B45C30h[esi*4]
0x7D28C7: fld     dword ptr ds:0B45C30h[esi*4]
0x7D28CE: fld1
0x7D28D0: fsubrp  st(1), st
0x7D28D2: fmul    qword ptr ds:0A2FC70h
0x7D28D8: faddp   st(1), st
0x7D28DA: fmul    [esp+0F4h+var_DC]
0x7D28DE: fadd    [esp+0F4h+var_D8]
0x7D28E2: fstp    [esp+0F4h+var_D8]
0x7D28E6: jz      short loc_7D2907
0x7D28E8: mov     ebp, eax
0x7D28EA: add     eax, 4
0x7D28ED: push    eax; lpAddend
0x7D28EE: call    dword ptr ds:0A2807Ch
0x7D28F4: test    eax, eax
0x7D28F6: jnz     short loc_7D2907
0x7D28F8: test    ebp, ebp
0x7D28FA: jz      short loc_7D2907
0x7D28FC: mov     eax, [ebp+0]
0x7D28FF: mov     edx, [eax]
0x7D2901: push    1
0x7D2903: mov     ecx, ebp
0x7D2905: call    edx
0x7D2907: lea     eax, [esp+0F4h+var_58]
0x7D290E: push    eax
0x7D290F: mov     ecx, edi
0x7D2911: call    sub_405AD0
0x7D2916: mov     eax, [eax]
0x7D2918: fld     dword ptr [eax+88h]
0x7D291E: add     eax, 88h ; 'ˆ'
0x7D2923: fsub    [esp+0F4h+var_54]
0x7D292A: fstp    [esp+0F4h+var_2C]
0x7D2931: fld     dword ptr [eax+4]
0x7D2934: fsub    [esp+0F4h+var_5C]
0x7D293B: fstp    [esp+0F4h+var_28]
0x7D2942: fld     dword ptr [eax+8]
0x7D2945: mov     eax, [esp+0F4h+var_58]
0x7D294C: test    eax, eax
0x7D294E: fsub    [esp+0F4h+var_64]
0x7D2955: fstp    [esp+0F4h+var_24]
0x7D295C: jz      short loc_7D297D
0x7D295E: mov     ebp, eax
0x7D2960: add     eax, 4
0x7D2963: push    eax; lpAddend
0x7D2964: call    dword ptr ds:0A2807Ch
0x7D296A: test    eax, eax
0x7D296C: jnz     short loc_7D297D
0x7D296E: test    ebp, ebp
0x7D2970: jz      short loc_7D297D
0x7D2972: mov     edx, [ebp+0]
0x7D2975: mov     eax, [edx]
0x7D2977: push    1
0x7D2979: mov     ecx, ebp
0x7D297B: call    eax
0x7D297D: lea     ecx, [esp+0F4h+var_2C]
0x7D2984: call    sub_43F350
0x7D2989: fstp    st
0x7D298B: fld     dword ptr ds:0B45C30h[esi*4]
0x7D2992: fld1
0x7D2994: fsubrp  st(1), st
0x7D2996: fstp    [esp+0F4h+var_D4]
0x7D299A: fld     [esp+0F4h+var_D4]
0x7D299E: fld     st
0x7D29A0: fmul    dword ptr [esp+0F4h+var_38]
0x7D29A7: fstp    [esp+0F4h+var_50]
0x7D29AE: fld     dword ptr [esp+0F4h+var_38+4]
0x7D29B5: fmul    st, st(1)
0x7D29B7: fstp    [esp+0F4h+var_4C]
0x7D29BE: fmul    [esp+0F4h+var_30]
0x7D29C5: fstp    [esp+0F4h+var_48]
0x7D29CC: fld     dword ptr ds:0B45C30h[esi*4]
0x7D29D3: fstp    [esp+0F4h+var_D4]
0x7D29D7: fld     [esp+0F4h+var_D4]
0x7D29DB: fld     st
0x7D29DD: fmul    [esp+0F4h+var_2C]
0x7D29E4: fstp    [esp+0F4h+var_20]
0x7D29EB: fld     [esp+0F4h+var_28]
0x7D29F2: fmul    st, st(1)
0x7D29F4: fstp    [esp+0F4h+var_1C]
0x7D29FB: fmul    [esp+0F4h+var_24]
0x7D2A02: fstp    [esp+0F4h+var_18]
0x7D2A09: fld     [esp+0F4h+var_20]
0x7D2A10: fadd    [esp+0F4h+var_50]
0x7D2A17: fstp    [esp+0F4h+var_9C]
0x7D2A1B: mov     ecx, [esp+0F4h+var_9C]
0x7D2A1F: fld     [esp+0F4h+var_1C]
0x7D2A26: mov     [esp+0F4h+var_2C], ecx
0x7D2A2D: fadd    [esp+0F4h+var_4C]
0x7D2A34: lea     ecx, [esp+0F4h+var_E0]
0x7D2A38: push    ecx
0x7D2A39: mov     ecx, edi
0x7D2A3B: fstp    [esp+0F8h+var_98]
0x7D2A3F: mov     edx, [esp+0F8h+var_98]
0x7D2A43: fld     [esp+0F8h+var_18]
0x7D2A4A: mov     [esp+0F8h+var_28], edx
0x7D2A51: fadd    [esp+0F8h+var_48]
0x7D2A58: fstp    [esp+0F8h+var_94]
0x7D2A5C: mov     eax, [esp+0F8h+var_94]
0x7D2A60: fld     [esp+0F8h+var_9C]
0x7D2A64: mov     [esp+0F8h+var_24], eax
0x7D2A6B: fld     [esp+0F8h+var_DC]
0x7D2A6F: fld     st
0x7D2A71: fmulp   st(2), st
0x7D2A73: fxch    st(1)
0x7D2A75: fstp    [esp+0F8h+var_CC]
0x7D2A79: fld     [esp+0F8h+var_98]
0x7D2A7D: fmul    st, st(1)
0x7D2A7F: fstp    [esp+0F8h+var_C8]
0x7D2A83: fmul    [esp+0F8h+var_94]
0x7D2A87: fstp    [esp+0F8h+var_C4]
0x7D2A8B: fld     [esp+0F8h+var_CC]
0x7D2A8F: fadd    dword ptr [esp+0F8h+var_B8]
0x7D2A93: fstp    dword ptr [esp+0F8h+var_B8]
0x7D2A97: fld     dword ptr [esp+0F8h+var_B8+4]
0x7D2A9B: fadd    [esp+0F8h+var_C8]
0x7D2A9F: fstp    dword ptr [esp+0F8h+var_B8+4]
0x7D2AA3: fld     [esp+0F8h+var_C4]
0x7D2AA7: fadd    [esp+0F8h+var_B0]
0x7D2AAB: fstp    [esp+0F8h+var_B0]
0x7D2AAF: call    sub_405AD0
0x7D2AB4: fld     dword ptr ds:0B45C30h[esi*4]
0x7D2ABB: mov     edx, [ebx+0ECh]
0x7D2AC1: fld1
0x7D2AC3: mov     ecx, [ebx+0F0h]
0x7D2AC9: fsubrp  st(1), st
0x7D2ACB: mov     [esp+0F4h+var_70], edx
0x7D2AD2: mov     edx, [ebx+0F4h]
0x7D2AD8: mov     [esp+0F4h+var_6C], ecx
0x7D2ADF: mov     [esp+0F4h+var_68], edx
0x7D2AE6: fstp    [esp+0F4h+var_D4]
0x7D2AEA: fld     [esp+0F4h+var_70]
0x7D2AF1: fld     [esp+0F4h+var_D4]
0x7D2AF5: fld     st
0x7D2AF7: fmulp   st(2), st
0x7D2AF9: fxch    st(1)
0x7D2AFB: fstp    [esp+0F4h+var_70]
0x7D2B02: mov     eax, [eax]
0x7D2B04: fld     [esp+0F4h+var_6C]
0x7D2B0B: mov     ecx, [eax+0ECh]
0x7D2B11: fmul    st, st(1)
0x7D2B13: mov     edx, [eax+0F0h]
0x7D2B19: mov     eax, [eax+0F4h]
0x7D2B1F: mov     [esp+0F4h+var_8C], ecx
0x7D2B23: fstp    [esp+0F4h+var_6C]
0x7D2B2A: mov     [esp+0F4h+var_88], edx
0x7D2B2E: mov     [esp+0F4h+var_84], eax
0x7D2B32: fmul    [esp+0F4h+var_68]
0x7D2B39: fstp    [esp+0F4h+var_68]
0x7D2B40: fld     dword ptr ds:0B45C30h[esi*4]
0x7D2B47: fstp    [esp+0F4h+var_D4]
0x7D2B4B: fld     [esp+0F4h+var_8C]
0x7D2B4F: fld     [esp+0F4h+var_D4]
0x7D2B53: fld     st
0x7D2B55: fmulp   st(2), st
0x7D2B57: fxch    st(1)
0x7D2B59: fstp    [esp+0F4h+var_8C]
0x7D2B5D: mov     ecx, [esp+0F4h+var_8C]
0x7D2B61: fld     [esp+0F4h+var_88]
0x7D2B65: mov     [esp+0F4h+var_7C], ecx
0x7D2B69: fmul    st, st(1)
0x7D2B6B: fstp    [esp+0F4h+var_88]
0x7D2B6F: mov     edx, [esp+0F4h+var_88]
0x7D2B73: mov     [esp+0F4h+var_78], edx
0x7D2B77: fmul    [esp+0F4h+var_84]
0x7D2B7B: fstp    [esp+0F4h+var_84]
0x7D2B7F: mov     eax, [esp+0F4h+var_84]
0x7D2B83: fld     [esp+0F4h+var_8C]
0x7D2B87: mov     [esp+0F4h+var_74], eax
0x7D2B8E: fadd    [esp+0F4h+var_70]
0x7D2B95: fstp    [esp+0F4h+var_7C]
0x7D2B99: mov     ecx, [esp+0F4h+var_7C]
0x7D2B9D: fld     [esp+0F4h+var_78]
0x7D2BA1: mov     [esp+0F4h+var_44], ecx
0x7D2BA8: fadd    [esp+0F4h+var_6C]
0x7D2BAF: fstp    [esp+0F4h+var_78]
0x7D2BB3: mov     edx, [esp+0F4h+var_78]
0x7D2BB7: fld     [esp+0F4h+var_74]
0x7D2BBE: mov     [esp+0F4h+var_40], edx
0x7D2BC5: fadd    [esp+0F4h+var_68]
0x7D2BCC: fstp    [esp+0F4h+var_74]
0x7D2BD3: mov     eax, [esp+0F4h+var_74]
0x7D2BDA: fld     [esp+0F4h+var_7C]
0x7D2BDE: mov     [esp+0F4h+var_3C], eax
0x7D2BE5: fld     [esp+0F4h+var_DC]
0x7D2BE9: mov     eax, [esp+0F4h+var_E0]
0x7D2BED: test    eax, eax
0x7D2BEF: fld     st
0x7D2BF1: fmulp   st(2), st
0x7D2BF3: fxch    st(1)
0x7D2BF5: fstp    [esp+0F4h+var_44]
0x7D2BFC: fld     [esp+0F4h+var_40]
0x7D2C03: fmul    st, st(1)
0x7D2C05: fstp    [esp+0F4h+var_40]
0x7D2C0C: fmul    [esp+0F4h+var_3C]
0x7D2C13: fstp    [esp+0F4h+var_3C]
0x7D2C1A: fld     [esp+0F4h+var_44]
0x7D2C21: fadd    [esp+0F4h+var_A8]
0x7D2C25: fstp    [esp+0F4h+var_A8]
0x7D2C29: fld     [esp+0F4h+var_40]
0x7D2C30: fadd    [esp+0F4h+var_A4]
0x7D2C34: fstp    [esp+0F4h+var_A4]
0x7D2C38: fld     [esp+0F4h+var_3C]
0x7D2C3F: fadd    [esp+0F4h+var_A0]
0x7D2C43: fstp    [esp+0F4h+var_A0]
0x7D2C47: jz      short loc_7D2C67
0x7D2C49: mov     edi, eax
0x7D2C4B: add     eax, 4
0x7D2C4E: push    eax; lpAddend
0x7D2C4F: call    dword ptr ds:0A2807Ch
0x7D2C55: test    eax, eax
0x7D2C57: jnz     short loc_7D2C67
0x7D2C59: test    edi, edi
0x7D2C5B: jz      short loc_7D2C67
0x7D2C5D: mov     edx, [edi]
0x7D2C5F: mov     eax, [edx]
0x7D2C61: push    1
0x7D2C63: mov     ecx, edi
0x7D2C65: call    eax
0x7D2C67: mov     ecx, [esp+0F4h+arg_0]
0x7D2C6E: test    ecx, ecx
0x7D2C70: jz      short loc_7D2C79
0x7D2C72: call    sub_7ED3B0
0x7D2C77: jmp     short loc_7D2C96
0x7D2C79: mov     eax, [esp+0F4h+var_C0]
0x7D2C7D: add     eax, 1
0x7D2C80: push    eax
0x7D2C81: push    0
0x7D2C83: mov     [esp+0FCh+var_C0], eax
0x7D2C87: call    GetShadowSceneNode
0x7D2C8C: add     esp, 4
0x7D2C8F: mov     ecx, eax
0x7D2C91: call    sub_7C62D0
0x7D2C96: add     esi, 1
0x7D2C99: cmp     esi, [esp+0F4h+var_BC]
0x7D2C9D: mov     edi, eax
0x7D2C9F: jl      loc_7D287E
0x7D2CA5: lea     ecx, [esp+0F4h+var_B8]
0x7D2CA9: call    sub_43F350
0x7D2CAE: fstp    st
0x7D2CB0: fld     [esp+0F4h+var_B0]
0x7D2CB4: fld     qword ptr ds:0A31C70h
0x7D2CBA: fcom    st(1)
0x7D2CBC: fnstsw  ax
0x7D2CBE: test    ah, 41h
0x7D2CC1: jnz     short loc_7D2CC7
0x7D2CC3: fstp    st(1)
0x7D2CC5: jmp     short loc_7D2CC9
0x7D2CC7: fstp    st
0x7D2CC9: lea     ecx, [esp+0F4h+var_B8]
0x7D2CCD: fstp    [esp+0F4h+var_B0]
0x7D2CD1: call    sub_43F350
0x7D2CD6: fstp    st
0x7D2CD8: mov     esi, [esp+0F4h+var_AC]
0x7D2CDC: mov     ecx, [esi+130h]
0x7D2CE2: fld     dword ptr [ecx+94h]
0x7D2CE8: fmul    [esp+0F4h+var_D0]
0x7D2CEC: fld     qword ptr ds:0A3B1B8h
0x7D2CF2: fcom    st(1)
0x7D2CF4: fnstsw  ax
0x7D2CF6: test    ah, 5
0x7D2CF9: jp      short loc_7D2CFF
0x7D2CFB: fstp    st(1)
0x7D2CFD: jmp     short loc_7D2D01
0x7D2CFF: fstp    st
0x7D2D01: fmul    qword ptr ds:0A38618h
0x7D2D07: mov     eax, [esi+100h]
0x7D2D0D: add     eax, 54h ; 'T'
0x7D2D10: mov     edi, 1
0x7D2D15: fstp    [esp+0F4h+var_AC]
0x7D2D19: push    edi; a3
0x7D2D1A: fld     dword ptr [esp+0F8h+var_B8]
0x7D2D1E: fld     [esp+0F8h+var_AC]
0x7D2D22: fld     st
0x7D2D24: fmulp   st(2), st
0x7D2D26: fxch    st(1)
0x7D2D28: fstp    [esp+0F8h+var_CC]
0x7D2D2C: fld     dword ptr [esp+0F8h+var_B8+4]
0x7D2D30: fmul    st, st(1)
0x7D2D32: fstp    [esp+0F8h+var_C8]
0x7D2D36: fld     st
0x7D2D38: fmul    [esp+0F8h+var_B0]
0x7D2D3C: fstp    [esp+0F8h+var_C4]
0x7D2D40: fld     [esp+0F8h+var_CC]
0x7D2D44: fadd    [esp+0F8h+var_54]
0x7D2D4B: fstp    [esp+0F8h+var_50]
0x7D2D52: mov     edx, [esp+0F8h+var_50]
0x7D2D59: fld     [esp+0F8h+var_C8]
0x7D2D5D: mov     [eax], edx
0x7D2D5F: fadd    [esp+0F8h+var_5C]
0x7D2D66: fstp    [esp+0F8h+var_4C]
0x7D2D6D: mov     ecx, [esp+0F8h+var_4C]
0x7D2D74: fld     [esp+0F8h+var_C4]
0x7D2D78: mov     [eax+4], ecx
0x7D2D7B: fadd    [esp+0F8h+var_64]
0x7D2D82: push    ecx
0x7D2D83: fstp    [esp+0FCh+var_48]
0x7D2D8A: mov     edx, [esp+0FCh+var_48]
0x7D2D91: mov     [eax+8], edx
0x7D2D94: fmul    qword ptr ds:0A3F3A0h
0x7D2D9A: mov     ecx, [esi+100h]; this
0x7D2DA0: fstp    [esp+0FCh+var_D8]
0x7D2DA4: fldz
0x7D2DA6: fstp    [esp+0FCh+a2]; a2
0x7D2DA9: call    NiAVObject_UpdateNiAVObject
0x7D2DAE: fld     [esp+0F4h+var_A4]
0x7D2DB2: fld     qword ptr ds:0A91270h
0x7D2DB8: fmul    st(1), st
0x7D2DBA: fld     [esp+0F4h+var_A8]
0x7D2DBE: fmul    st, st(1)
0x7D2DC0: faddp   st(2), st
0x7D2DC2: fmul    [esp+0F4h+var_A0]
0x7D2DC6: faddp   st(1), st
0x7D2DC8: fld     qword ptr ds:0A91268h
0x7D2DCE: fcom    st(1)
0x7D2DD0: fnstsw  ax
0x7D2DD2: test    ah, 41h
0x7D2DD5: jz      loc_7D2E8A
0x7D2DDB: fld     st(1)
0x7D2DDD: fld1
0x7D2DDF: fcom    st(1)
0x7D2DE1: fnstsw  ax
0x7D2DE3: fstp    st(1)
0x7D2DE5: test    ah, 5
0x7D2DE8: jp      loc_7D2E88
0x7D2DEE: fstp    st(2)
0x7D2DF0: fstp    st
0x7D2DF2: mov     eax, [esi+100h]
0x7D2DF8: fstp    [esp+0F4h+var_AC]
0x7D2DFC: fld     [esp+0F4h+var_AC]
0x7D2E00: add     [eax+0B8h], edi
0x7D2E06: fst     [esp+0F4h+var_CC]
0x7D2E0A: mov     ecx, [esp+0F4h+var_CC]
0x7D2E0E: fst     [esp+0F4h+var_C8]
0x7D2E12: mov     edx, [esp+0F4h+var_C8]
0x7D2E16: mov     [eax+0ECh], ecx
0x7D2E1C: fstp    [esp+0F4h+var_C4]
0x7D2E20: mov     ecx, [esp+0F4h+var_C4]
0x7D2E24: fld     [esp+0F4h+var_D8]
0x7D2E28: mov     [eax+0F0h], edx
0x7D2E2E: fstp    [esp+0F4h+var_CC]
0x7D2E32: fldz
0x7D2E34: mov     edx, [esp+0F4h+var_CC]
0x7D2E38: mov     [eax+0F4h], ecx
0x7D2E3E: fst     [esp+0F4h+var_C8]
0x7D2E42: mov     eax, [esi+100h]
0x7D2E48: fstp    [esp+0F4h+var_C4]
0x7D2E4C: mov     ecx, [esp+0F4h+var_C8]
0x7D2E50: add     [eax+0B8h], edi
0x7D2E56: mov     [eax+0F8h], edx
0x7D2E5C: mov     edx, [esp+0F4h+var_C4]
0x7D2E60: mov     [eax+0FCh], ecx
0x7D2E66: mov     [eax+100h], edx
0x7D2E6C: mov     ecx, [esp+0F4h+var_C]
0x7D2E73: mov     large fs:0, ecx
0x7D2E7A: pop     ecx
0x7D2E7B: pop     edi
0x7D2E7C: pop     esi
0x7D2E7D: pop     ebp
0x7D2E7E: pop     ebx
0x7D2E7F: add     esp, 0E0h
0x7D2E85: retn    10h
0x7D2E88: fstp    st
0x7D2E8A: fcom    st(1)
0x7D2E8C: fnstsw  ax
0x7D2E8E: test    ah, 41h
0x7D2E91: jnz     loc_7D2DF0
0x7D2E97: fstp    st(1)
0x7D2E99: jmp     loc_7D2DF2
