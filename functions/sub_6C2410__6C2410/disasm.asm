0x6C2410: push    0FFFFFFFFh
0x6C2412: push    offset SEH_6CED50
0x6C2417: mov     eax, large fs:0
0x6C241D: push    eax
0x6C241E: sub     esp, 8
0x6C2421: push    ebx
0x6C2422: push    ebp
0x6C2423: push    esi
0x6C2424: push    edi
0x6C2425: mov     eax, ds:0B30AACh
0x6C242A: xor     eax, esp
0x6C242C: push    eax
0x6C242D: lea     eax, [esp+28h+var_C]
0x6C2431: mov     large fs:0, eax
0x6C2437: mov     edi, [esp+28h+arg_8]
0x6C243B: fld     [esp+28h+arg_0]
0x6C243F: mov     eax, [esp+28h+arg_4]
0x6C2443: mov     edx, [edi]
0x6C2445: mov     ebp, [eax]
0x6C2447: push    8; char
0x6C2449: lea     ecx, [esp+2Ch+var_14]
0x6C244D: push    ecx; int
0x6C244E: push    edx; int
0x6C244F: push    ebp; int
0x6C2450: push    ecx
0x6C2451: fstp    [esp+3Ch+var_3C]; float
0x6C2454: call    sub_6D31B0
0x6C2459: add     esp, 14h
0x6C245C: test    al, al
0x6C245E: jz      loc_6C2571
0x6C2464: mov     esi, [edi]
0x6C2466: add     esi, 1
0x6C2469: xor     ecx, ecx
0x6C246B: mov     eax, esi
0x6C246D: mov     edx, 8
0x6C2472: mul     edx
0x6C2474: seto    cl
0x6C2477: neg     ecx
0x6C2479: or      ecx, eax
0x6C247B: xor     eax, eax
0x6C247D: add     ecx, 4
0x6C2480: setb    al
0x6C2483: neg     eax
0x6C2485: or      eax, ecx
0x6C2487: push    eax; Size
0x6C2488: call    FormHeapAlloc
0x6C248D: add     esp, 4
0x6C2490: mov     [esp+28h+var_10], eax
0x6C2494: test    eax, eax
0x6C2496: mov     [esp+28h+var_4], 0
0x6C249E: jz      short loc_6C24BC
0x6C24A0: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C24A5: push    offset sub_7616D0; a4
0x6C24AA: push    esi; size
0x6C24AB: lea     ebx, [eax+4]
0x6C24AE: push    8; a2
0x6C24B0: push    ebx; a1
0x6C24B1: mov     [eax], esi
0x6C24B3: call    ArrayConstructor
0x6C24B8: mov     esi, ebx
0x6C24BA: jmp     short loc_6C24BE
0x6C24BC: xor     esi, esi
0x6C24BE: mov     ecx, [esp+28h+var_14]
0x6C24C2: lea     edx, ds:0[ecx*8]
0x6C24C9: push    edx; Size
0x6C24CA: push    ebp; Src
0x6C24CB: push    esi; Dst
0x6C24CC: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6C24D4: call    _memcpy
0x6C24D9: mov     eax, [edi]
0x6C24DB: mov     ecx, [esp+34h+var_14]
0x6C24DF: add     esp, 0Ch
0x6C24E2: cmp     eax, ecx
0x6C24E4: jbe     short loc_6C2501
0x6C24E6: sub     eax, ecx
0x6C24E8: add     eax, eax
0x6C24EA: add     eax, eax
0x6C24EC: add     eax, eax
0x6C24EE: push    eax; Size
0x6C24EF: lea     eax, [ebp+ecx*8+0]
0x6C24F3: push    eax; Src
0x6C24F4: lea     ecx, [esi+ecx*8+8]
0x6C24F8: push    ecx; Dst
0x6C24F9: call    _memcpy
0x6C24FE: add     esp, 0Ch
0x6C2501: mov     edx, [edi]
0x6C2503: fld     [esp+28h+arg_0]
0x6C2507: push    8; char
0x6C2509: push    edx; int
0x6C250A: push    5; int
0x6C250C: push    ebp; int
0x6C250D: push    ecx
0x6C250E: fstp    [esp+3Ch+var_3C]; float
0x6C2511: call    sub_6BB4D0
0x6C2516: mov     eax, [esp+3Ch+var_14]
0x6C251A: fstp    [esp+3Ch+var_10]
0x6C251E: fld     [esp+3Ch+arg_0]
0x6C2522: lea     eax, [esi+eax*8]
0x6C2525: fstp    dword ptr [eax]
0x6C2527: add     esp, 14h
0x6C252A: fld     [esp+28h+var_10]
0x6C252E: fstp    dword ptr [eax+4]
0x6C2531: add     dword ptr [edi], 1
0x6C2534: test    ebp, ebp
0x6C2536: jz      short loc_6C2555
0x6C2538: mov     ecx, [ebp-4]
0x6C253B: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C2540: lea     edi, [ebp-4]
0x6C2543: push    ecx; int
0x6C2544: push    8; unsigned int
0x6C2546: push    ebp; void *
0x6C2547: call    $LN21
0x6C254C: push    edi
0x6C254D: call    FormHeapFree
0x6C2552: add     esp, 4
0x6C2555: mov     edx, [esp+28h+arg_4]
0x6C2559: mov     [edx], esi
0x6C255B: mov     al, 1
0x6C255D: mov     ecx, [esp+28h+var_C]
0x6C2561: mov     large fs:0, ecx
0x6C2568: pop     ecx
0x6C2569: pop     edi
0x6C256A: pop     esi
0x6C256B: pop     ebp
0x6C256C: pop     ebx
0x6C256D: add     esp, 14h
0x6C2570: retn
0x6C2571: xor     al, al
0x6C2573: mov     ecx, [esp+28h+var_C]
0x6C2577: mov     large fs:0, ecx
0x6C257E: pop     ecx
0x6C257F: pop     edi
0x6C2580: pop     esi
0x6C2581: pop     ebp
0x6C2582: pop     ebx
0x6C2583: add     esp, 14h
0x6C2586: retn
