0x5C1F70: sub     esp, 8
0x5C1F73: mov     eax, ds:0B33398h
0x5C1F78: push    ebx
0x5C1F79: push    esi
0x5C1F7A: mov     esi, [eax+20h]
0x5C1F7D: push    edi
0x5C1F7E: call    InterfaceManager_IsMenuMode
0x5C1F83: xor     edi, edi
0x5C1F85: push    edi
0x5C1F86: push    3EAh
0x5C1F8B: mov     bl, al
0x5C1F8D: call    sub_5790E0
0x5C1F92: push    edi
0x5C1F93: push    3FEh
0x5C1F98: mov     [esp+24h+var_6], al
0x5C1F9C: call    sub_5790E0
0x5C1FA1: add     esp, 10h
0x5C1FA4: push    1; a3
0x5C1FA6: push    12h; a2
0x5C1FA8: mov     ecx, esi; this
0x5C1FAA: mov     [esp+1Ch+var_5], al
0x5C1FAE: call    InputGlobals__QueryControlState
0x5C1FB3: test    eax, eax
0x5C1FB5: jnz     loc_5C213E
0x5C1FBB: push    edi; a3
0x5C1FBC: push    12h; a2
0x5C1FBE: mov     ecx, esi; this
0x5C1FC0: call    InputGlobals__QueryControlState
0x5C1FC5: test    eax, eax
0x5C1FC7: jnz     loc_5C213E
0x5C1FCD: push    1; a3
0x5C1FCF: push    13h; a2
0x5C1FD1: mov     ecx, esi; this
0x5C1FD3: call    InputGlobals__QueryControlState
0x5C1FD8: test    eax, eax
0x5C1FDA: jnz     loc_5C2132
0x5C1FE0: push    edi; a3
0x5C1FE1: push    13h; a2
0x5C1FE3: mov     ecx, esi; this
0x5C1FE5: call    InputGlobals__QueryControlState
0x5C1FEA: test    eax, eax
0x5C1FEC: jnz     loc_5C2132
0x5C1FF2: push    1; a3
0x5C1FF4: push    14h; a2
0x5C1FF6: mov     ecx, esi; this
0x5C1FF8: call    InputGlobals__QueryControlState
0x5C1FFD: test    eax, eax
0x5C1FFF: jnz     loc_5C2123
0x5C2005: push    edi; a3
0x5C2006: push    14h; a2
0x5C2008: mov     ecx, esi; this
0x5C200A: call    InputGlobals__QueryControlState
0x5C200F: test    eax, eax
0x5C2011: jnz     loc_5C2123
0x5C2017: push    1; a3
0x5C2019: push    15h; a2
0x5C201B: mov     ecx, esi; this
0x5C201D: call    InputGlobals__QueryControlState
0x5C2022: test    eax, eax
0x5C2024: jnz     loc_5C2114
0x5C202A: push    edi; a3
0x5C202B: push    15h; a2
0x5C202D: mov     ecx, esi; this
0x5C202F: call    InputGlobals__QueryControlState
0x5C2034: test    eax, eax
0x5C2036: jnz     loc_5C2114
0x5C203C: push    1; a3
0x5C203E: push    16h; a2
0x5C2040: mov     ecx, esi; this
0x5C2042: call    InputGlobals__QueryControlState
0x5C2047: test    eax, eax
0x5C2049: jnz     loc_5C2105
0x5C204F: push    edi; a3
0x5C2050: push    16h; a2
0x5C2052: mov     ecx, esi; this
0x5C2054: call    InputGlobals__QueryControlState
0x5C2059: test    eax, eax
0x5C205B: jnz     loc_5C2105
0x5C2061: push    1; a3
0x5C2063: push    17h; a2
0x5C2065: mov     ecx, esi; this
0x5C2067: call    InputGlobals__QueryControlState
0x5C206C: test    eax, eax
0x5C206E: jnz     loc_5C20F6
0x5C2074: push    edi; a3
0x5C2075: push    17h; a2
0x5C2077: mov     ecx, esi; this
0x5C2079: call    InputGlobals__QueryControlState
0x5C207E: test    eax, eax
0x5C2080: jnz     short loc_5C20F6
0x5C2082: push    1; a3
0x5C2084: push    18h; a2
0x5C2086: mov     ecx, esi; this
0x5C2088: call    InputGlobals__QueryControlState
0x5C208D: test    eax, eax
0x5C208F: jnz     short loc_5C20E7
0x5C2091: push    edi; a3
0x5C2092: push    18h; a2
0x5C2094: mov     ecx, esi; this
0x5C2096: call    InputGlobals__QueryControlState
0x5C209B: test    eax, eax
0x5C209D: jnz     short loc_5C20E7
0x5C209F: push    1; a3
0x5C20A1: push    19h; a2
0x5C20A3: mov     ecx, esi; this
0x5C20A5: call    InputGlobals__QueryControlState
0x5C20AA: test    eax, eax
0x5C20AC: jnz     short loc_5C20D8
0x5C20AE: push    edi; a3
0x5C20AF: push    19h; a2
0x5C20B1: mov     ecx, esi; this
0x5C20B3: call    InputGlobals__QueryControlState
0x5C20B8: test    eax, eax
0x5C20BA: jnz     short loc_5C20D8
0x5C20BC: cmp     dword ptr ds:0B3B430h, 0FFFFFFFFh
0x5C20C3: jz      loc_5C21BC
0x5C20C9: push    0FFFFFFFFh
0x5C20CB: call    sub_5C1060
0x5C20D0: add     esp, 4
0x5C20D3: jmp     loc_5C21BC
0x5C20D8: push    7
0x5C20DA: call    sub_5C1060
0x5C20DF: add     esp, 4
0x5C20E2: jmp     loc_5C21BC
0x5C20E7: push    6
0x5C20E9: call    sub_5C1060
0x5C20EE: add     esp, 4
0x5C20F1: jmp     loc_5C21BC
0x5C20F6: push    5
0x5C20F8: call    sub_5C1060
0x5C20FD: add     esp, 4
0x5C2100: jmp     loc_5C21BC
0x5C2105: push    4
0x5C2107: call    sub_5C1060
0x5C210C: add     esp, 4
0x5C210F: jmp     loc_5C21BC
0x5C2114: push    3
0x5C2116: call    sub_5C1060
0x5C211B: add     esp, 4
0x5C211E: jmp     loc_5C21BC
0x5C2123: push    2
0x5C2125: call    sub_5C1060
0x5C212A: add     esp, 4
0x5C212D: jmp     loc_5C21BC
0x5C2132: push    1
0x5C2134: call    sub_5C1060
0x5C2139: add     esp, 4
0x5C213C: jmp     short loc_5C21BC
0x5C213E: mov     eax, ds:0B3B430h
0x5C2143: cmp     eax, edi
0x5C2145: jz      short loc_5C21BC
0x5C2147: mov     byte ptr ds:0B3B420h, 0
0x5C214E: jge     short loc_5C2181
0x5C2150: mov     ecx, ds:0B33EA0h
0x5C2156: xor     eax, eax
0x5C2158: mov     ds:0B3B424h, eax
0x5C215D: mov     ds:0B3B428h, eax
0x5C2162: mov     ds:0B3B42Ch, eax
0x5C2167: or      eax, 0FFFFFFFFh
0x5C216A: mov     ds:0B3B430h, eax
0x5C216F: mov     ds:0B3B434h, eax
0x5C2174: mov     ds:0B3B438h, eax
0x5C2179: mov     ds:0B3B424h, ecx
0x5C217F: jmp     short loc_5C21B6
0x5C2181: mov     edx, ds:0B3B434h
0x5C2187: mov     ecx, ds:0B3B428h
0x5C218D: mov     ds:0B3B434h, eax
0x5C2192: mov     eax, ds:0B33EA0h
0x5C2197: mov     ds:0B3B438h, edx
0x5C219D: mov     edx, eax
0x5C219F: sub     edx, ds:0B3B424h
0x5C21A5: mov     ds:0B3B42Ch, ecx
0x5C21AB: mov     ds:0B3B428h, edx
0x5C21B1: mov     ds:0B3B424h, eax
0x5C21B6: mov     ds:0B3B430h, edi
0x5C21BC: call    sub_5C1100
0x5C21C1: test    eax, eax
0x5C21C3: jl      loc_5C2544
0x5C21C9: cmp     dword ptr ds:0B3B430h, 0FFFFFFFFh
0x5C21D0: jnz     loc_5C2564
0x5C21D6: cmp     byte ptr ds:0B3B420h, 0
0x5C21DD: jnz     loc_5C254D
0x5C21E3: test    bl, bl
0x5C21E5: jnz     loc_5C254D
0x5C21EB: mov     byte ptr ds:0B3B420h, 1
0x5C21F2: call    sub_5C1900
0x5C21F7: call    sub_5C1100
0x5C21FC: shl     eax, 4
0x5C21FF: cmp     ds:dword_B3B44C[eax], edi
0x5C2205: jz      loc_5C252D
0x5C220B: push    ebp
0x5C220C: call    sub_5C1100
0x5C2211: shl     eax, 4
0x5C2214: mov     esi, ds:dword_B3B44C[eax]
0x5C221A: call    sub_5C1100
0x5C221F: shl     eax, 4
0x5C2222: cmp     esi, edi
0x5C2224: mov     ebp, ds:dword_B3B444[eax]
0x5C222A: jbe     loc_5C252C
0x5C2230: mov     ecx, ds:0B333C4h
0x5C2236: mov     [esp+18h+var_4], esi
0x5C223A: lea     ebx, [ebx+0]
0x5C2240: mov     edi, [ebp+8]
0x5C2243: lea     eax, [ebp+8]
0x5C2246: movzx   eax, byte ptr [edi+4]
0x5C224A: cmp     eax, 10h
0x5C224D: mov     ebp, [ebp+0]
0x5C2250: jz      loc_5C24B7
0x5C2256: cmp     eax, 15h
0x5C2259: jnz     short loc_5C229C
0x5C225B: push    0; int
0x5C225D: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5C2262: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C2267: push    0; int
0x5C2269: push    edi; void *
0x5C226A: call    OblivionDynamicCast
0x5C226F: add     esp, 14h
0x5C2272: test    eax, eax
0x5C2274: jz      short loc_5C2296
0x5C2276: test    byte ptr [eax+88h], 1
0x5C227D: jz      short loc_5C2296
0x5C227F: cmp     dword ptr [eax+64h], 0
0x5C2283: jz      short loc_5C2296
0x5C2285: mov     ecx, ds:0B333C4h
0x5C228B: push    eax
0x5C228C: call    sub_664850
0x5C2291: jmp     loc_5C24FB
0x5C2296: mov     ecx, ds:0B333C4h; this
0x5C229C: call    TESObjectREFR_GetContainer
0x5C22A1: push    eax
0x5C22A2: mov     eax, ds:0B333C4h
0x5C22A7: push    eax; a1
0x5C22A8: call    ContainerExtraData_GetContainerExtraDataForRef
0x5C22AD: mov     esi, eax
0x5C22AF: add     esp, 8
0x5C22B2: test    esi, esi
0x5C22B4: jz      loc_5C24FB
0x5C22BA: call    sub_5C1100
0x5C22BF: push    eax
0x5C22C0: push    edi
0x5C22C1: mov     ecx, esi
0x5C22C3: call    sub_4896B0
0x5C22C8: mov     esi, eax
0x5C22CA: test    esi, esi
0x5C22CC: jz      loc_5C24FB
0x5C22D2: push    0
0x5C22D4: mov     ecx, esi
0x5C22D6: call    ContainerEntryExtraData_HasWorn
0x5C22DB: test    al, al
0x5C22DD: mov     ecx, ds:0B333C4h
0x5C22E3: jz      loc_5C23ED
0x5C22E9: mov     ecx, [ecx+58h]
0x5C22EC: mov     edx, [ecx]
0x5C22EE: mov     eax, [edx+0F0h]
0x5C22F4: push    0
0x5C22F6: mov     bl, 1
0x5C22F8: call    eax
0x5C22FA: test    eax, eax
0x5C22FC: jz      short loc_5C2336
0x5C22FE: mov     ecx, ds:0B333C4h
0x5C2304: mov     ecx, [ecx+58h]
0x5C2307: mov     edx, [ecx]
0x5C2309: mov     eax, [edx+0F0h]
0x5C230F: push    0
0x5C2311: call    eax
0x5C2313: mov     ecx, [esi+8]
0x5C2316: cmp     ecx, [eax+8]
0x5C2319: jnz     short loc_5C2336
0x5C231B: mov     edx, ds:0B333C4h
0x5C2321: mov     ecx, [edx+58h]
0x5C2324: mov     eax, [ecx]
0x5C2326: mov     edx, [eax+0F0h]
0x5C232C: push    0
0x5C232E: call    edx
0x5C2330: test    eax, eax
0x5C2332: jnz     short loc_5C2336
0x5C2334: xor     bl, bl
0x5C2336: mov     eax, ds:0B333C4h
0x5C233B: mov     ecx, [eax+58h]
0x5C233E: mov     edx, [ecx]
0x5C2340: mov     eax, [edx+0F8h]
0x5C2346: push    0
0x5C2348: call    eax
0x5C234A: test    eax, eax
0x5C234C: jz      short loc_5C2388
0x5C234E: mov     ecx, ds:0B333C4h
0x5C2354: mov     ecx, [ecx+58h]
0x5C2357: mov     edx, [ecx]
0x5C2359: mov     eax, [edx+0F8h]
0x5C235F: push    0
0x5C2361: call    eax
0x5C2363: mov     ecx, [esi+8]
0x5C2366: cmp     ecx, [eax+8]
0x5C2369: jnz     short loc_5C2388
0x5C236B: mov     edx, ds:0B333C4h
0x5C2371: mov     ecx, [edx+58h]
0x5C2374: mov     eax, [ecx]
0x5C2376: mov     edx, [eax+0F8h]
0x5C237C: push    0
0x5C237E: call    edx
0x5C2380: test    eax, eax
0x5C2382: jz      loc_5C24A5
0x5C2388: test    bl, bl
0x5C238A: jz      loc_5C24A5
0x5C2390: mov     ecx, ds:0B333C4h
0x5C2396: call    Actor_GetCurrentAction
0x5C239B: cmp     eax, 0FFFFFFFFh
0x5C239E: jnz     loc_5C24A5
0x5C23A4: push    0
0x5C23A6: push    1
0x5C23A8: call    sub_5C1100
0x5C23AD: shl     eax, 4
0x5C23B0: mov     eax, ds:dword_B3B444[eax]
0x5C23B6: mov     ecx, [eax+8]
0x5C23B9: push    ecx
0x5C23BA: call    sub_5C16E0
0x5C23BF: mov     edx, [esi]
0x5C23C1: mov     eax, [edx]
0x5C23C3: mov     edi, [esi+8]
0x5C23C6: add     esp, 0Ch
0x5C23C9: push    0
0x5C23CB: push    0
0x5C23CD: push    0
0x5C23CF: push    eax
0x5C23D0: mov     ecx, esi
0x5C23D2: call    TESHealthForm_GetHealth
0x5C23D7: mov     ecx, ds:0B333C4h
0x5C23DD: push    eax
0x5C23DE: push    edi
0x5C23DF: call    Actor_UnequipItem
0x5C23E4: push    0
0x5C23E6: push    0
0x5C23E8: jmp     loc_5C249A
0x5C23ED: call    Actor_GetCurrentAction
0x5C23F2: cmp     eax, 0FFFFFFFFh
0x5C23F5: jz      short loc_5C244A
0x5C23F7: mov     al, [edi+4]
0x5C23FA: cmp     al, 14h
0x5C23FC: jz      short loc_5C2406
0x5C23FE: cmp     al, 21h ; '!'
0x5C2400: jnz     short loc_5C244A
0x5C2402: cmp     al, 14h
0x5C2404: jnz     short loc_5C2427
0x5C2406: fld     dword ptr ds:0A30634h
0x5C240C: mov     eax, ds:0B38A28h
0x5C2411: push    ecx
0x5C2412: fstp    [esp+1Ch+duration]; duration
0x5C2415: push    1; unk2
0x5C2417: push    0; unk1
0x5C2419: push    eax; string
0x5C241A: call    GameUI_QueueMessage
0x5C241F: add     esp, 10h
0x5C2422: jmp     loc_5C24A5
0x5C2427: cmp     al, 21h ; '!'
0x5C2429: jnz     short loc_5C24A5
0x5C242B: fld     dword ptr ds:0A30634h
0x5C2431: push    ecx
0x5C2432: mov     ecx, ds:0B38A20h
0x5C2438: fstp    [esp+1Ch+duration]; duration
0x5C243B: push    1; unk2
0x5C243D: push    0; unk1
0x5C243F: push    ecx; string
0x5C2440: call    GameUI_QueueMessage
0x5C2445: add     esp, 10h
0x5C2448: jmp     short loc_5C24A5
0x5C244A: call    sub_5C1000
0x5C244F: push    1
0x5C2451: push    1
0x5C2453: mov     byte ptr ds:0B3B420h, 1
0x5C245A: call    sub_5C1100
0x5C245F: shl     eax, 4
0x5C2462: mov     edx, ds:dword_B3B444[eax]
0x5C2468: mov     eax, [edx+8]
0x5C246B: push    eax
0x5C246C: call    sub_5C16E0
0x5C2471: mov     ecx, [esi]
0x5C2473: mov     eax, [ecx]
0x5C2475: mov     edi, [esi+8]
0x5C2478: add     esp, 0Ch
0x5C247B: push    0
0x5C247D: push    1
0x5C247F: push    eax
0x5C2480: mov     ecx, esi
0x5C2482: call    TESHealthForm_GetHealth
0x5C2487: mov     ecx, ds:0B333C4h
0x5C248D: push    eax
0x5C248E: push    edi
0x5C248F: call    Actor_EquipItem
0x5C2494: mov     edx, [esi+8]
0x5C2497: push    0
0x5C2499: push    edx
0x5C249A: mov     ecx, ds:0B333C4h
0x5C24A0: call    HideEquipment
0x5C24A5: mov     ecx, esi
0x5C24A7: call    ContainerEntryExtraData_DestroyDataTable
0x5C24AC: push    esi
0x5C24AD: call    FormHeapFree
0x5C24B2: add     esp, 4
0x5C24B5: jmp     short loc_5C24FB
0x5C24B7: call    sub_65D4C0
0x5C24BC: test    eax, eax
0x5C24BE: jz      short loc_5C24CD
0x5C24C0: mov     ecx, ds:0B333C4h
0x5C24C6: push    0
0x5C24C8: call    sub_664850
0x5C24CD: push    0; int
0x5C24CF: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5C24D4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C24D9: push    0; int
0x5C24DB: push    edi; void *
0x5C24DC: call    OblivionDynamicCast
0x5C24E1: add     esp, 14h
0x5C24E4: test    eax, eax
0x5C24E6: jz      short loc_5C24ED
0x5C24E8: add     eax, 18h
0x5C24EB: jmp     short loc_5C24EF
0x5C24ED: xor     eax, eax
0x5C24EF: mov     ecx, ds:0B333C4h
0x5C24F5: push    eax
0x5C24F6: call    PlayerCharacter_SetCurrentMagicItem
0x5C24FB: mov     ecx, ds:0B333C4h
0x5C2501: mov     eax, [ecx+58h]
0x5C2504: test    eax, eax
0x5C2506: jz      short loc_5C2521
0x5C2508: mov     edx, [eax]
0x5C250A: push    0
0x5C250C: push    1
0x5C250E: push    1
0x5C2510: push    ecx
0x5C2511: mov     ecx, eax
0x5C2513: mov     eax, [edx+42Ch]
0x5C2519: call    eax
0x5C251B: mov     ecx, ds:0B333C4h
0x5C2521: sub     [esp+18h+var_4], 1
0x5C2526: jnz     loc_5C2240
0x5C252C: pop     ebp
0x5C252D: cmp     byte ptr ds:0B3B4C0h, 0
0x5C2534: jz      short loc_5C253D
0x5C2536: mov     byte ptr ds:0B3B4C0h, 0
0x5C253D: pop     edi
0x5C253E: pop     esi
0x5C253F: pop     ebx
0x5C2540: add     esp, 8
0x5C2543: retn
0x5C2544: cmp     dword ptr ds:0B3B430h, 0FFFFFFFFh
0x5C254B: jnz     short loc_5C2564
0x5C254D: cmp     byte ptr ds:0B3B43Dh, 0
0x5C2554: jz      short loc_5C255B
0x5C2556: call    sub_5C1000
0x5C255B: mov     byte ptr ds:0B3B420h, 1
0x5C2562: jmp     short loc_5C2596
0x5C2564: call    sub_5C1100
0x5C2569: test    eax, eax
0x5C256B: jl      short loc_5C2596
0x5C256D: call    sub_5C1160
0x5C2572: test    al, al
0x5C2574: jz      short loc_5C257A
0x5C2576: test    bl, bl
0x5C2578: jz      short loc_5C2588
0x5C257A: cmp     [esp+14h+var_6], 0
0x5C257F: jnz     short loc_5C2588
0x5C2581: cmp     [esp+14h+var_5], 0
0x5C2586: jz      short loc_5C2596
0x5C2588: call    sub_5C1100
0x5C258D: push    eax
0x5C258E: call    sub_5C1B80
0x5C2593: add     esp, 4
0x5C2596: test    bl, bl
0x5C2598: jz      short loc_5C252D
0x5C259A: cmp     [esp+14h+var_6], 0
0x5C259F: jnz     short loc_5C253D
0x5C25A1: cmp     [esp+14h+var_5], 0
0x5C25A6: jnz     short loc_5C253D
0x5C25A8: pop     edi
0x5C25A9: pop     esi
0x5C25AA: pop     ebx
0x5C25AB: add     esp, 8
0x5C25AE: jmp     sub_5C1000
