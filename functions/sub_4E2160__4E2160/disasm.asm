0x4E2160: push    ebp
0x4E2161: mov     ebp, esp
0x4E2163: and     esp, 0FFFFFFC0h
0x4E2166: sub     esp, 74h
0x4E2169: mov     ecx, [ebp+arg_0]
0x4E216C: push    ebx
0x4E216D: push    esi
0x4E216E: push    edi
0x4E216F: call    sub_452A60
0x4E2174: mov     esi, eax
0x4E2176: push    esi
0x4E2177: mov     [esp+84h+var_24], esi
0x4E217B: call    sub_4DC270
0x4E2180: mov     ebx, eax
0x4E2182: add     esp, 4
0x4E2185: test    ebx, ebx
0x4E2187: jz      loc_4E26E9
0x4E218D: test    [ebp+arg_4], 1
0x4E2191: jz      loc_4E2686
0x4E2197: mov     edi, [ebx+40h]
0x4E219A: test    edi, edi
0x4E219C: mov     [esp+80h+var_20], edi
0x4E21A0: jz      loc_4E249C
0x4E21A6: mov     eax, [esi+88h]
0x4E21AC: mov     ecx, [esi+8Ch]
0x4E21B2: mov     edx, [esi+90h]
0x4E21B8: mov     [esp+80h+var_3C+4], eax
0x4E21BC: fld     [esp+80h+var_3C+4]
0x4E21C0: sub     esp, 8
0x4E21C3: fstp    qword ptr [esp+88h+X]; X
0x4E21C6: mov     [esp+88h+var_3C+8], ecx
0x4E21CA: mov     [esp+88h+var_3C+0Ch], edx
0x4E21CE: call    __finite
0x4E21D3: add     esp, 8
0x4E21D6: test    eax, eax
0x4E21D8: jz      loc_4E23BB
0x4E21DE: fld     [esp+80h+var_3C+8]
0x4E21E2: sub     esp, 8
0x4E21E5: fstp    qword ptr [esp+88h+X]; X
0x4E21E8: call    __finite
0x4E21ED: add     esp, 8
0x4E21F0: test    eax, eax
0x4E21F2: jz      loc_4E23BB
0x4E21F8: fld     [esp+80h+var_3C+0Ch]
0x4E21FC: sub     esp, 8
0x4E21FF: fstp    qword ptr [esp+88h+X]; X
0x4E2202: call    __finite
0x4E2207: add     esp, 8
0x4E220A: test    eax, eax
0x4E220C: jz      loc_4E23BB
0x4E2212: fld     [esp+80h+var_3C+4]
0x4E2216: sub     esp, 8
0x4E2219: fstp    qword ptr [esp+88h+X]; X
0x4E221C: call    __isnan
0x4E2221: add     esp, 8
0x4E2224: test    eax, eax
0x4E2226: jnz     loc_4E23BB
0x4E222C: fld     [esp+80h+var_3C+8]
0x4E2230: sub     esp, 8
0x4E2233: fstp    qword ptr [esp+88h+X]; X
0x4E2236: call    __isnan
0x4E223B: add     esp, 8
0x4E223E: test    eax, eax
0x4E2240: jnz     loc_4E23BB
0x4E2246: fld     [esp+80h+var_3C+0Ch]
0x4E224A: sub     esp, 8
0x4E224D: fstp    qword ptr [esp+88h+X]; X
0x4E2250: call    __isnan
0x4E2255: add     esp, 8
0x4E2258: test    eax, eax
0x4E225A: jnz     loc_4E23BB
0x4E2260: mov     ecx, edi; this
0x4E2262: call    TESObjectCELL_IsInterior
0x4E2267: test    al, al
0x4E2269: jz      loc_4E2300
0x4E226F: push    ebx; TESObjectREFR *
0x4E2270: call    sub_4C9BE0
0x4E2275: add     esp, 4
0x4E2278: push    2
0x4E227A: push    eax
0x4E227B: mov     ecx, edi
0x4E227D: call    sub_441800
0x4E2282: test    eax, eax
0x4E2284: jz      loc_4E249C
0x4E228A: mov     ecx, [eax+20h]
0x4E228D: mov     edx, [eax+24h]
0x4E2290: mov     [esp+80h+var_10], ecx
0x4E2294: mov     ecx, [eax+28h]
0x4E2297: mov     [esp+80h+var_C], edx
0x4E229B: mov     edx, [eax+2Ch]
0x4E229E: mov     [esp+80h+var_8], ecx
0x4E22A2: push    offset Vector3_InitValue?
0x4E22A7: lea     ecx, [esp+84h+var_10]
0x4E22AB: mov     [esp+84h+var_4], edx
0x4E22B2: call    sub_8AA390
0x4E22B7: test    al, al
0x4E22B9: jz      loc_4E249C
0x4E22BF: fld     [esp+80h+var_8]
0x4E22C3: fld     st
0x4E22C5: fsub    dword ptr [esi+90h]
0x4E22CB: fld     [esp+80h+var_4]
0x4E22CF: fcompp
0x4E22D1: fnstsw  ax
0x4E22D3: test    ah, 5
0x4E22D6: jp      loc_4E249A
0x4E22DC: mov     eax, [ebx]
0x4E22DE: fstp    qword ptr [esp+80h+var_3C+4]
0x4E22E2: mov     edx, [eax+0F4h]
0x4E22E8: lea     ecx, [esp+80h+var_1C]
0x4E22EC: push    ecx
0x4E22ED: mov     ecx, ebx
0x4E22EF: call    edx
0x4E22F1: fld     dword ptr [eax+8]
0x4E22F4: fsubr   qword ptr [esp+80h+var_3C+4]
0x4E22F8: fld     [esp+80h+var_4]
0x4E22FC: fcompp
0x4E22FE: jmp     short loc_4E2361
0x4E2300: mov     ecx, edi; this
0x4E2302: call    sub_4CE3C0
0x4E2307: test    eax, eax
0x4E2309: jz      loc_4E249C
0x4E230F: lea     eax, [esp+80h+var_3C+4]
0x4E2313: push    eax
0x4E2314: mov     ecx, edi; this
0x4E2316: call    sub_4CE3C0
0x4E231B: mov     ecx, eax
0x4E231D: call    sub_4C46B0
0x4E2322: fld     dword ptr [eax]
0x4E2324: fsub    qword ptr ds:0A3F428h
0x4E232A: fstp    [esp+80h+var_3C+4]
0x4E232E: fld     [esp+80h+var_3C+4]
0x4E2332: fld     dword ptr [esi+90h]
0x4E2338: fcomp   st(1)
0x4E233A: fnstsw  ax
0x4E233C: test    ah, 5
0x4E233F: jp      loc_4E249A
0x4E2345: mov     edx, [ebx]
0x4E2347: fstp    qword ptr [esp+80h+var_3C+4]
0x4E234B: mov     edx, [edx+0F4h]
0x4E2351: lea     eax, [esp+80h+var_1C]
0x4E2355: push    eax
0x4E2356: mov     ecx, ebx
0x4E2358: call    edx
0x4E235A: fld     dword ptr [eax+8]
0x4E235D: fcomp   qword ptr [esp+80h+var_3C+4]
0x4E2361: fnstsw  ax
0x4E2363: test    ah, 5
0x4E2366: jp      short loc_4E23BB
0x4E2368: mov     eax, ds:0B3F9A8h
0x4E236D: mov     ecx, ds:0B3F9ACh
0x4E2373: mov     edx, ds:0B3F9B0h
0x4E2379: mov     [esp+80h+var_3C+4], eax
0x4E237D: mov     [esp+80h+var_3C+8], ecx
0x4E2381: lea     eax, [esp+80h+var_1C]
0x4E2385: push    eax
0x4E2386: lea     ecx, [esp+84h+var_3C+4]
0x4E238A: push    ecx
0x4E238B: mov     ecx, edi
0x4E238D: mov     [esp+88h+var_3C+0Ch], edx
0x4E2391: call    sub_4D5D70
0x4E2396: mov     ecx, [esp+80h+var_3C+4]
0x4E239A: mov     edx, [ebx]
0x4E239C: mov     edx, [edx+0F8h]
0x4E23A2: sub     esp, 0Ch
0x4E23A5: mov     eax, esp
0x4E23A7: mov     [eax], ecx
0x4E23A9: mov     ecx, [esp+8Ch+var_3C+8]
0x4E23AD: mov     [eax+4], ecx
0x4E23B0: mov     ecx, [esp+8Ch+var_3C+0Ch]
0x4E23B4: mov     [eax+8], ecx
0x4E23B7: mov     ecx, ebx
0x4E23B9: call    edx
0x4E23BB: mov     eax, [ebx]
0x4E23BD: mov     edx, [eax+154h]
0x4E23C3: mov     ecx, ebx
0x4E23C5: call    edx
0x4E23C7: mov     edi, eax
0x4E23C9: test    edi, edi
0x4E23CB: mov     [esp+80h+var_3C+4], edi
0x4E23CF: jz      short loc_4E240A
0x4E23D1: mov     eax, [ebx]
0x4E23D3: mov     edx, [eax+0F4h]
0x4E23D9: lea     ecx, [esp+80h+var_1C]
0x4E23DD: push    ecx
0x4E23DE: mov     ecx, ebx
0x4E23E0: call    edx
0x4E23E2: mov     ecx, [eax]
0x4E23E4: mov     [edi+54h], ecx
0x4E23E7: mov     edx, [eax+4]
0x4E23EA: mov     [edi+58h], edx
0x4E23ED: mov     eax, [eax+8]
0x4E23F0: mov     [edi+5Ch], eax
0x4E23F3: add     edi, 30h ; '0'
0x4E23F6: mov     ecx, 9
0x4E23FB: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4E2400: rep movsd
0x4E2402: mov     edi, [esp+80h+var_3C+4]
0x4E2406: mov     esi, [esp+80h+var_24]
0x4E240A: push    1
0x4E240C: push    edi
0x4E240D: call    sub_897A20
0x4E2412: fldz
0x4E2414: add     esp, 8
0x4E2417: push    1; a3
0x4E2419: push    ecx
0x4E241A: mov     ecx, edi; this
0x4E241C: fstp    [esp+88h+X]; a2
0x4E241F: call    NiAVObject_UpdateNiAVObject
0x4E2424: mov     edi, [ebp+arg_0]
0x4E2427: mov     ecx, [edi+10h]
0x4E242A: test    ecx, ecx
0x4E242C: mov     [esp+80h+var_3C+4], ecx
0x4E2430: jz      short loc_4E249C
0x4E2432: call    sub_4D6A70
0x4E2437: fmul    qword ptr ds:0A3C770h
0x4E243D: fstp    [esp+80h+var_24]
0x4E2441: fld     dword ptr ds:0A31E2Ch
0x4E2447: fld     [esp+80h+var_24]
0x4E244B: fcom    st(1)
0x4E244D: fnstsw  ax
0x4E244F: fstp    st(1)
0x4E2451: test    ah, 41h
0x4E2454: jnz     short loc_4E2465
0x4E2456: push    ecx
0x4E2457: mov     ecx, [esp+84h+var_3C+4]
0x4E245B: fstp    [esp+84h+X+4]; float
0x4E245E: call    sub_4D6B70
0x4E2463: jmp     short loc_4E249C
0x4E2465: mov     edx, [edi]
0x4E2467: fstp    st
0x4E2469: mov     eax, [edx+70h]
0x4E246C: push    0
0x4E246E: push    6
0x4E2470: mov     ecx, edi
0x4E2472: call    eax
0x4E2474: and     word ptr [edi+0Ch], 0FFFBh
0x4E247A: mov     eax, [ebx+0Ch]
0x4E247D: mov     edx, [ebx]
0x4E247F: push    eax
0x4E2480: mov     eax, [edx+0D4h]
0x4E2486: mov     ecx, ebx
0x4E2488: call    eax
0x4E248A: push    eax; ArgList
0x4E248B: push    offset aDisablingColli; "Disabling collision on ref '%s' (%08X)."
0x4E2490: call    PrintError
0x4E2495: add     esp, 0Ch
0x4E2498: jmp     short loc_4E249C
0x4E249A: fstp    st
0x4E249C: mov     edx, [ebx]
0x4E249E: mov     eax, [edx+174h]
0x4E24A4: mov     ecx, ebx
0x4E24A6: call    eax
0x4E24A8: mov     ecx, [eax+4]
0x4E24AB: mov     edx, [eax+8]
0x4E24AE: mov     edi, [eax]
0x4E24B0: push    0
0x4E24B2: mov     dword ptr [esp+84h+var_18], ecx
0x4E24B6: mov     dword ptr [esp+84h+var_18+4], edx
0x4E24BA: call    sub_46B5C0
0x4E24BF: mov     ecx, [esi+8Ch]
0x4E24C5: mov     edx, [esi+90h]
0x4E24CB: mov     byte ptr [esp+84h+var_24], al
0x4E24CF: mov     eax, [esi+88h]
0x4E24D5: mov     [ebx+2Ch], eax
0x4E24D8: mov     eax, [ebx]
0x4E24DA: mov     [ebx+30h], ecx
0x4E24DD: add     esp, 4
0x4E24E0: mov     [ebx+34h], edx
0x4E24E3: mov     edx, [eax+40h]
0x4E24E6: push    4
0x4E24E8: mov     ecx, ebx
0x4E24EA: call    edx
0x4E24EC: mov     eax, [esp+80h+var_24]
0x4E24F0: push    eax
0x4E24F1: call    sub_46B5C0
0x4E24F6: mov     edx, [ebx]
0x4E24F8: mov     eax, [edx+40h]
0x4E24FB: add     esp, 4
0x4E24FE: push    8
0x4E2500: mov     ecx, ebx
0x4E2502: call    eax
0x4E2504: mov     edx, [ebx]
0x4E2506: mov     eax, [edx+170h]
0x4E250C: mov     ecx, ebx
0x4E250E: call    eax
0x4E2510: cmp     byte ptr [eax+4], 1Ah
0x4E2514: jnz     short loc_4E2591
0x4E2516: mov     ecx, [ebx+8]
0x4E2519: shr     ecx, 7
0x4E251C: test    cl, 1
0x4E251F: jnz     short loc_4E2591
0x4E2521: mov     edx, [ebx+40h]
0x4E2524: mov     eax, [ebx]
0x4E2526: mov     [esp+80h+var_24], edx
0x4E252A: mov     edx, [eax+174h]
0x4E2530: mov     ecx, ebx
0x4E2532: call    edx
0x4E2534: fld     dword ptr [eax+8]
0x4E2537: mov     ecx, [esp+80h+var_24]
0x4E253B: fstp    qword ptr [esp+80h+var_3C+4]
0x4E253F: call    TESObjectCELL_GetWaterHeight
0x4E2544: fcomp   qword ptr [esp+80h+var_3C+4]
0x4E2548: fnstsw  ax
0x4E254A: test    ah, 41h
0x4E254D: jnz     short loc_4E2591
0x4E254F: push    1
0x4E2551: mov     ecx, ebx
0x4E2553: call    sub_46AB60
0x4E2558: mov     eax, [ebx]
0x4E255A: mov     edx, [eax+154h]
0x4E2560: mov     ecx, ebx
0x4E2562: call    edx
0x4E2564: push    eax
0x4E2565: call    sub_4DE1C0
0x4E256A: add     esp, 4
0x4E256D: lea     ecx, [ebx+44h]
0x4E2570: call    sub_41E650
0x4E2575: test    eax, eax
0x4E2577: jz      short loc_4E2591
0x4E2579: mov     eax, [eax]
0x4E257B: test    eax, eax
0x4E257D: jz      short loc_4E2591
0x4E257F: push    eax
0x4E2580: push    0
0x4E2582: call    GetShadowSceneNode
0x4E2587: add     esp, 4
0x4E258A: mov     ecx, eax
0x4E258C: call    sub_7C7DC0
0x4E2591: mov     ecx, ds:0B333A0h
0x4E2597: cmp     dword ptr [ecx+34h], 0
0x4E259B: jnz     loc_4E2686
0x4E25A1: call    TES__GetCurrentWorldspace
0x4E25A6: mov     [esp+80h+var_3C+4], eax
0x4E25AA: mov     eax, [ebx]
0x4E25AC: mov     edx, [eax+190h]
0x4E25B2: mov     ecx, ebx
0x4E25B4: call    edx
0x4E25B6: test    al, al
0x4E25B8: jz      short loc_4E25C3
0x4E25BA: push    0
0x4E25BC: mov     ecx, ebx
0x4E25BE: call    sub_5E1360
0x4E25C3: mov     eax, [ebx]
0x4E25C5: mov     edx, [eax+174h]
0x4E25CB: mov     ecx, ebx
0x4E25CD: call    edx
0x4E25CF: mov     edx, [ebx]
0x4E25D1: mov     [esp+80h+var_24], eax
0x4E25D5: mov     eax, [esp+80h+var_3C+4]
0x4E25D9: push    0; int
0x4E25DB: push    eax; a3
0x4E25DC: mov     eax, [edx+174h]
0x4E25E2: mov     ecx, ebx
0x4E25E4: call    eax
0x4E25E6: fld     dword ptr [eax+4]
0x4E25E9: mov     ecx, [esp+88h+var_24]
0x4E25ED: sub     esp, 8
0x4E25F0: fstp    [esp+90h+a2]; a2
0x4E25F4: fld     dword ptr [ecx]
0x4E25F6: mov     ecx, ds:0B33A98h
0x4E25FC: fstp    [esp+90h+var_90]; float
0x4E25FF: call    sub_44A270
0x4E2604: cmp     eax, [esp+80h+var_20]
0x4E2608: jz      short loc_4E2686
0x4E260A: test    eax, eax
0x4E260C: push    0; a4
0x4E260E: jnz     short loc_4E2663
0x4E2610: call    sub_46B5C0
0x4E2615: mov     edx, dword ptr [esp+84h+var_18]
0x4E2619: mov     ecx, dword ptr [esp+84h+var_18+4]
0x4E261D: sub     esp, 8
0x4E2620: mov     byte ptr [esp+8Ch+var_20], al
0x4E2624: mov     eax, esp
0x4E2626: mov     [eax], edi
0x4E2628: mov     [eax+4], edx
0x4E262B: mov     [eax+8], ecx
0x4E262E: mov     ecx, ebx; this
0x4E2630: call    TESObjectREFR_SetPosition
0x4E2635: mov     edx, [esp+80h+var_20]
0x4E2639: push    edx
0x4E263A: call    sub_46B5C0
0x4E263F: mov     eax, dword ptr [esp+84h+var_18]
0x4E2643: mov     ecx, dword ptr [esp+84h+var_18+4]
0x4E2647: mov     [esi+54h], edi
0x4E264A: mov     [esi+58h], eax
0x4E264D: mov     [esi+5Ch], ecx
0x4E2650: mov     ecx, [ebp+arg_0]
0x4E2653: mov     edx, [ecx]
0x4E2655: mov     eax, [edx+70h]
0x4E2658: add     esp, 4
0x4E265B: push    0
0x4E265D: push    6
0x4E265F: call    eax
0x4E2661: jmp     short loc_4E2686
0x4E2663: call    sub_46B5C0
0x4E2668: mov     ecx, [esp+84h+var_3C+4]
0x4E266C: push    ecx; int
0x4E266D: push    0; int
0x4E266F: push    ebx; Concurrency::details::SchedulerBase *
0x4E2670: mov     byte ptr [esp+90h+var_20], al
0x4E2674: call    sub_4DD4B0
0x4E2679: mov     edx, [esp+90h+var_20]
0x4E267D: push    edx
0x4E267E: call    sub_46B5C0
0x4E2683: add     esp, 14h
0x4E2686: test    [ebp+arg_4], 2
0x4E268A: jz      short loc_4E26E9
0x4E268C: lea     eax, [esp+80h+var_18+4]
0x4E2690: push    eax
0x4E2691: lea     ecx, [esp+84h+var_18]
0x4E2695: push    ecx
0x4E2696: lea     edx, [esp+88h+var_1C]
0x4E269A: push    edx
0x4E269B: lea     ecx, [esi+64h]
0x4E269E: call    sub_711300
0x4E26A3: push    0
0x4E26A5: call    sub_46B5C0
0x4E26AA: mov     ecx, dword ptr [esp+84h+var_18]
0x4E26AE: mov     edx, dword ptr [esp+84h+var_18+4]
0x4E26B2: mov     byte ptr [esp+84h+var_20], al
0x4E26B6: mov     eax, [esp+84h+var_1C]
0x4E26BA: mov     [ebx+20h], eax
0x4E26BD: mov     eax, [ebx]
0x4E26BF: mov     [ebx+24h], ecx
0x4E26C2: add     esp, 4
0x4E26C5: mov     [ebx+28h], edx
0x4E26C8: mov     edx, [eax+40h]
0x4E26CB: push    4
0x4E26CD: mov     ecx, ebx
0x4E26CF: call    edx
0x4E26D1: mov     eax, [esp+80h+var_20]
0x4E26D5: push    eax
0x4E26D6: call    sub_46B5C0
0x4E26DB: mov     edx, [ebx]
0x4E26DD: mov     eax, [edx+40h]
0x4E26E0: add     esp, 4
0x4E26E3: push    8
0x4E26E5: mov     ecx, ebx
0x4E26E7: call    eax
0x4E26E9: pop     edi
0x4E26EA: pop     esi
0x4E26EB: pop     ebx
0x4E26EC: mov     esp, ebp
0x4E26EE: pop     ebp
0x4E26EF: retn
