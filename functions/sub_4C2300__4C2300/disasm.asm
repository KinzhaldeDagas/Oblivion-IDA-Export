0x4C2300: sub     esp, 54h
0x4C2303: push    ebx; int
0x4C2304: push    ebp; int
0x4C2305: push    esi; int
0x4C2306: mov     esi, ecx
0x4C2308: mov     ecx, ds:0B333A0h
0x4C230E: xor     ebx, ebx
0x4C2310: push    edi
0x4C2311: mov     [esp+64h+var_54], esi; int
0x4C2315: mov     [esp+64h+var_50], ebx
0x4C2319: call    TES__GetCurrentWorldspace
0x4C231E: test    eax, eax
0x4C2320: jz      loc_4C23F4
0x4C2326: mov     ecx, ds:0B333A0h
0x4C232C: call    TES__GetCurrentWorldspace
0x4C2331: mov     ecx, eax
0x4C2333: call    sub_4EF7E0
0x4C2338: test    eax, eax
0x4C233A: jz      loc_4C23F4
0x4C2340: mov     eax, ds:0B3F9A8h
0x4C2345: mov     ecx, ds:0B3F9ACh
0x4C234B: mov     edx, ds:0B3F9B0h
0x4C2351: mov     dword ptr [esp+64h+var_1C], eax
0x4C2355: mov     eax, [esi+24h]
0x4C2358: mov     dword ptr [esp+64h+var_1C+4], ecx
0x4C235C: mov     ecx, ds:0B333A0h
0x4C2362: mov     [esp+64h+var_14], edx
0x4C2366: fild    dword ptr [eax+98h]
0x4C236C: fld     qword ptr ds:0A2FAA0h
0x4C2372: push    ebx
0x4C2373: fadd    st(1), st
0x4C2375: fld     qword ptr ds:0A37650h
0x4C237B: fmul    st(2), st
0x4C237D: fxch    st(2)
0x4C237F: fstp    dword ptr [esp+68h+var_1C]
0x4C2383: fiadd   dword ptr [eax+9Ch]
0x4C2389: lea     eax, [esp+68h+var_1C]
0x4C238D: push    eax
0x4C238E: fmulp   st(1), st
0x4C2390: fstp    dword ptr [esp+6Ch+var_1C+4]
0x4C2394: call    TES__GetCurrentWorldspace
0x4C2399: mov     ecx, eax
0x4C239B: call    sub_4EF7E0
0x4C23A0: mov     ecx, eax
0x4C23A2: call    sub_4EA670
0x4C23A7: cmp     eax, ebx
0x4C23A9: jz      short loc_4C23F4
0x4C23AB: mov     eax, [eax]
0x4C23AD: lea     ecx, [esp+64h+var_4C]
0x4C23B1: push    ecx
0x4C23B2: mov     ecx, eax
0x4C23B4: mov     [esp+68h+var_50], eax; int
0x4C23B8: call    sub_4BFD90
0x4C23BD: mov     edi, [eax]
0x4C23BF: mov     eax, [esp+64h+var_4C]
0x4C23C3: test    eax, eax
0x4C23C5: jz      short loc_4C23E5
0x4C23C7: mov     esi, eax
0x4C23C9: add     eax, 4
0x4C23CC: push    eax; lpAddend
0x4C23CD: call    dword ptr ds:0A2807Ch
0x4C23D3: test    eax, eax
0x4C23D5: jnz     short loc_4C23E5
0x4C23D7: test    esi, esi
0x4C23D9: jz      short loc_4C23E5
0x4C23DB: mov     edx, [esi]
0x4C23DD: mov     eax, [edx]
0x4C23DF: push    1
0x4C23E1: mov     ecx, esi
0x4C23E3: call    eax
0x4C23E5: test    edi, edi
0x4C23E7: jz      short loc_4C23F4
0x4C23E9: push    4
0x4C23EB: mov     ecx, edi
0x4C23ED: call    NiNode_GetNiPropertyByID
0x4C23F2: mov     ebx, eax
0x4C23F4: xor     ebp, ebp
0x4C23F6: mov     ecx, [esp+68h+var_58]
0x4C23FA: mov     eax, [ecx+24h]
0x4C23FD: test    eax, eax
0x4C23FF: jz      loc_4C2600
0x4C2405: cmp     dword ptr [eax], 0
0x4C2408: jz      loc_4C2600
0x4C240E: mov     edx, [eax]
0x4C2410: cmp     dword ptr [edx+ebp*4], 0
0x4C2414: lea     eax, [edx+ebp*4]
0x4C2417: jz      loc_4C2600
0x4C241D: mov     eax, [eax]
0x4C241F: cmp     word ptr [eax+0B6h], 0
0x4C2427: jbe     loc_4C2600
0x4C242D: mov     ecx, [eax+0B0h]
0x4C2433: cmp     dword ptr [ecx], 0
0x4C2436: jz      loc_4C2600
0x4C243C: cmp     word ptr [eax+0B6h], 0
0x4C2444: ja      short loc_4C244A
0x4C2446: xor     ecx, ecx
0x4C2448: jmp     short loc_4C244E
0x4C244A: mov     edx, ecx
0x4C244C: mov     ecx, [edx]
0x4C244E: push    4
0x4C2450: call    NiNode_GetNiPropertyByID
0x4C2455: mov     edi, eax
0x4C2457: test    edi, edi
0x4C2459: jz      short loc_4C247E
0x4C245B: mov     eax, [edi]
0x4C245D: mov     edx, [eax+54h]
0x4C2460: mov     ecx, edi
0x4C2462: call    edx
0x4C2464: cmp     eax, 5
0x4C2467: jl      short loc_4C247E
0x4C2469: mov     eax, [edi]
0x4C246B: mov     edx, [eax+54h]
0x4C246E: mov     ecx, edi
0x4C2470: call    edx
0x4C2472: cmp     eax, 0Ah
0x4C2475: jg      short loc_4C247E
0x4C2477: mov     esi, 1
0x4C247C: jmp     short loc_4C2480
0x4C247E: xor     esi, esi
0x4C2480: neg     esi
0x4C2482: sbb     esi, esi
0x4C2484: and     esi, edi
0x4C2486: jz      loc_4C2600
0x4C248C: test    ebx, ebx
0x4C248E: jz      loc_4C2600
0x4C2494: mov     eax, [ebx]
0x4C2496: mov     edi, [esi]
0x4C2498: mov     edx, [eax+88h]
0x4C249E: push    0; int
0x4C24A0: mov     ecx, ebx
0x4C24A2: add     edi, 80h ; '€'
0x4C24A8: call    edx
0x4C24AA: push    eax; int
0x4C24AB: mov     eax, [edi]
0x4C24AD: push    9; int
0x4C24AF: mov     ecx, esi
0x4C24B1: call    eax
0x4C24B3: mov     edx, [ebx]
0x4C24B5: mov     edi, [esi]
0x4C24B7: mov     eax, [edx+8Ch]
0x4C24BD: push    0; int
0x4C24BF: mov     ecx, ebx
0x4C24C1: add     edi, 84h ; '„'
0x4C24C7: call    eax
0x4C24C9: mov     edx, [edi]
0x4C24CB: push    eax; int
0x4C24CC: push    9
0x4C24CE: mov     ecx, esi
0x4C24D0: call    edx
0x4C24D2: cmp     ebp, 3; switch 4 cases
0x4C24D5: mov     eax, ds:0B3FC80h
0x4C24DA: mov     ecx, ds:0B3FC84h
0x4C24E0: mov     [esp+80h+var_68], eax; float
0x4C24E4: mov     [esp+80h+var_64], ecx; float
0x4C24E8: ja      def_4C24EE
0x4C24EE: jmp     ds:jpt_4C24EE[ebp*4]; switch jump
0x4C24F5: fldz; jumptable 004C24EE case 0
0x4C24F7: fst     [esp+80h+var_60]
0x4C24FB: mov     edx, [esp+80h+var_60]
0x4C24FF: fst     [esp+80h+var_5C]
0x4C2503: mov     eax, [esp+80h+var_5C]
0x4C2507: mov     [esp+80h+var_68], edx
0x4C250B: mov     [esp+80h+var_64], eax
0x4C250F: jmp     short loc_4C2575
0x4C2511: fld     dword ptr ds:0A3D65Ch; jumptable 004C24EE case 1
0x4C2517: fstp    [esp+80h+var_58]
0x4C251B: mov     ecx, [esp+80h+var_58]
0x4C251F: fldz
0x4C2521: mov     [esp+80h+var_68], ecx
0x4C2525: fst     [esp+80h+var_54]
0x4C2529: mov     edx, [esp+80h+var_54]
0x4C252D: mov     [esp+80h+var_64], edx
0x4C2531: jmp     short loc_4C2575
0x4C2533: fldz; jumptable 004C24EE case 2
0x4C2535: fst     [esp+80h+var_50]
0x4C2539: fld     dword ptr ds:0A3D65Ch
0x4C253F: mov     eax, [esp+80h+var_50]
0x4C2543: fstp    [esp+80h+var_4C]
0x4C2547: mov     [esp+80h+var_68], eax
0x4C254B: mov     ecx, [esp+80h+var_4C]
0x4C254F: mov     [esp+80h+var_64], ecx
0x4C2553: jmp     short loc_4C2575
0x4C2555: fld     dword ptr ds:0A3D65Ch; jumptable 004C24EE case 3
0x4C255B: fst     [esp+80h+var_48]
0x4C255F: mov     edx, [esp+80h+var_48]
0x4C2563: fstp    [esp+80h+var_44]
0x4C2567: mov     eax, [esp+80h+var_44]
0x4C256B: mov     [esp+80h+var_68], edx
0x4C256F: mov     [esp+80h+var_64], eax
