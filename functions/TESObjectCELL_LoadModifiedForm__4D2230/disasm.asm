0x4D2230: push    0FFFFFFFFh
0x4D2232: push    offset TESObjectCELL_LoadModifiedForm_SEH
0x4D2237: mov     eax, large fs:0
0x4D223D: push    eax
0x4D223E: sub     esp, 11Ch
0x4D2244: mov     eax, ds:0B30AACh
0x4D2249: xor     eax, esp
0x4D224B: mov     [esp+128h+var_10], eax
0x4D2252: push    ebx
0x4D2253: push    ebp
0x4D2254: push    esi
0x4D2255: push    edi
0x4D2256: mov     eax, ds:0B30AACh
0x4D225B: xor     eax, esp
0x4D225D: push    eax
0x4D225E: lea     eax, [esp+13Ch+var_C]
0x4D2265: mov     large fs:0, eax
0x4D226B: mov     eax, ds:0B33B00h
0x4D2270: mov     al, [eax+7Ch]
0x4D2273: cmp     al, 5Ah ; 'Z'
0x4D2275: mov     esi, ecx
0x4D2277: jb      short loc_4D22A1
0x4D2279: test    [esp+13Ch+Dst], 8000000h
0x4D2284: jz      short loc_4D22A1
0x4D2286: push    4; a2
0x4D2288: lea     ecx, [esp+140h+a1.member.pad]
0x4D228C: push    ecx; a1
0x4D228D: mov     ecx, esi
0x4D228F: call    TESForm_LoadDataFromCurrentSaveGame
0x4D2294: mov     edx, dword ptr [esp+13Ch+a1.member.pad]
0x4D2298: push    edx
0x4D2299: lea     ecx, [esi+28h]
0x4D229C: call    ExtraDataList?_SetDetachTime
0x4D22A1: mov     eax, [esp+13Ch+a3]
0x4D22A8: mov     ecx, [esp+13Ch+Dst]
0x4D22AF: push    eax; a3
0x4D22B0: push    ecx; Dst
0x4D22B1: mov     ecx, esi; this
0x4D22B3: call    TESForm_LoadModifiedForm
0x4D22B8: mov     ecx, ds:0B33B00h
0x4D22BE: xor     ebx, ebx
0x4D22C0: mov     [esp+13Ch+a1.vtbl+1], ebx
0x4D22C4: call    sub_45A170
0x4D22C9: test    al, al
0x4D22CB: jz      loc_4D236A
0x4D22D1: mov     ecx, ds:0B33B00h
0x4D22D7: push    4; Size
0x4D22D9: lea     edx, [esp+140h+a1.member.pad]
0x4D22DD: push    edx; Dst
0x4D22DE: call    SaveLoad_LoadData
0x4D22E3: cmp     dword ptr [esp+13Ch+a1.member.pad], 4B4F4C42h
0x4D22EB: jz      short loc_4D2355
0x4D22ED: mov     eax, ds:0B33B00h
0x4D22F2: mov     edi, [eax+80h]
0x4D22F8: cmp     edi, ebx
0x4D22FA: jz      short loc_4D2339
0x4D22FC: mov     eax, [edi]
0x4D22FE: push    eax; a1
0x4D22FF: call    TESForm_LookupByFormID
0x4D2304: mov     ecx, [edi+5]
0x4D2307: movzx   edx, byte ptr [edi+9]
0x4D230B: add     esp, 4
0x4D230E: push    ecx
0x4D230F: push    edx
0x4D2310: mov     edx, [eax]
0x4D2312: mov     ecx, eax
0x4D2314: mov     eax, [edx+0D4h]
0x4D231A: call    eax
0x4D231C: mov     ecx, [edi]
0x4D231E: push    eax
0x4D231F: push    ecx
0x4D2320: push    318Bh
0x4D2325: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D232A: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x4D232F: call    PrintError
0x4D2334: add     esp, 1Ch
0x4D2337: jmp     short loc_4D2355
0x4D2339: movzx   edx, byte ptr [eax+7Ch]
0x4D233D: push    edx
0x4D233E: push    318Bh
0x4D2343: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D2348: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x4D234D: call    PrintError
0x4D2352: add     esp, 10h
0x4D2355: mov     ecx, ds:0B33B00h
0x4D235B: mov     ebx, [ecx+14h]
0x4D235E: push    2; Size
0x4D2360: lea     eax, [esp+140h+a1.vtbl+1]
0x4D2364: push    eax; Dst
0x4D2365: call    SaveLoad_LoadData
0x4D236A: test    byte ptr [esp+13Ch+Dst], 8
0x4D2372: jz      short loc_4D2396
0x4D2374: push    1; a2
0x4D2376: lea     ecx, [esp+140h+a1]
0x4D237A: push    ecx; a1
0x4D237B: mov     ecx, esi
0x4D237D: call    TESForm_LoadDataFromCurrentSaveGame
0x4D2382: mov     dl, [esi+24h]
0x4D2385: mov     al, byte ptr [esp+13Ch+a1.vtbl]
0x4D2389: xor     dl, al
0x4D238B: and     dl, 60h
0x4D238E: xor     [esi+24h], dl
0x4D2391: and     al, 9Fh
0x4D2393: mov     [esi+25h], al
0x4D2396: test    [esp+13Ch+Dst], 10000000h
0x4D23A1: jz      loc_4D242C
0x4D23A7: lea     ebp, [esi+28h]
0x4D23AA: mov     ecx, ebp
0x4D23AC: call    sub_420B50
0x4D23B1: mov     edi, eax
0x4D23B3: test    edi, edi
0x4D23B5: jnz     short loc_4D241E
0x4D23B7: test    byte ptr [esi+24h], 1
0x4D23BB: jz      short loc_4D23E1
0x4D23BD: push    2Ch ; ','; Size
0x4D23BF: call    FormHeapAlloc
0x4D23C4: add     esp, 4
0x4D23C7: mov     [esp+13Ch+a1.member.flags+1], eax
0x4D23CB: test    eax, eax
0x4D23CD: mov     [esp+13Ch+var_4], edi
0x4D23D4: jz      short loc_4D2407
0x4D23D6: push    edi
0x4D23D7: push    edi
0x4D23D8: mov     ecx, eax
0x4D23DA: call    sub_411F60
0x4D23DF: jmp     short loc_4D2409
0x4D23E1: push    24h ; '$'; Size
0x4D23E3: call    FormHeapAlloc
0x4D23E8: add     esp, 4
0x4D23EB: mov     [esp+13Ch+a1.member.flags+1], eax
0x4D23EF: test    eax, eax
0x4D23F1: mov     [esp+13Ch+var_4], 1
0x4D23FC: jz      short loc_4D2407
0x4D23FE: mov     ecx, eax
0x4D2400: call    SeenData__SeenData__
0x4D2405: jmp     short loc_4D2409
0x4D2407: xor     eax, eax
0x4D2409: mov     edi, eax
0x4D240B: push    edi
0x4D240C: mov     ecx, ebp
0x4D240E: mov     [esp+140h+var_4], 0FFFFFFFFh
0x4D2419: call    sub_420B70
0x4D241E: mov     eax, [edi]
0x4D2420: mov     edx, [eax+10h]
0x4D2423: push    0FFFFh
0x4D2428: mov     ecx, edi
0x4D242A: call    edx
0x4D242C: mov     eax, ds:0B33B00h
0x4D2431: cmp     byte ptr [eax+7Ch], 5Ah ; 'Z'
0x4D2435: jnb     short loc_4D245F
0x4D2437: test    [esp+13Ch+Dst], 8000000h
0x4D2442: jz      short loc_4D245F
0x4D2444: push    4; a2
0x4D2446: lea     ecx, [esp+140h+a1.member.refID+1]
0x4D244A: push    ecx; a1
0x4D244B: mov     ecx, esi
0x4D244D: call    TESForm_LoadDataFromCurrentSaveGame
0x4D2452: mov     edx, [esp+13Ch+a1.member.refID+1]
0x4D2456: push    edx
0x4D2457: lea     ecx, [esi+28h]
0x4D245A: call    ExtraDataList?_SetDetachTime
0x4D245F: test    byte ptr [esp+13Ch+Dst], 10h
0x4D2467: jz      short loc_4D24B2
0x4D2469: push    104h
0x4D246E: lea     eax, [esp+140h+a1.member.modlist.data+1]
0x4D2472: push    0
0x4D2474: push    eax
0x4D2475: call    __memset
0x4D247A: add     esp, 0Ch
0x4D247D: push    1; a2
0x4D247F: lea     ecx, [esp+140h+a1]
0x4D2483: push    ecx; a1
0x4D2484: mov     ecx, esi
0x4D2486: call    TESForm_LoadDataFromCurrentSaveGame
0x4D248B: mov     al, byte ptr [esp+13Ch+a1.vtbl]
0x4D248F: test    al, al
0x4D2491: jz      short loc_4D24A3
0x4D2493: movzx   edx, al
0x4D2496: push    edx; a2
0x4D2497: lea     eax, [esp+140h+a1.member.modlist.data+1]
0x4D249B: push    eax; a1
0x4D249C: mov     ecx, esi
0x4D249E: call    TESForm_LoadDataFromCurrentSaveGame
0x4D24A3: push    0; a3
0x4D24A5: lea     ecx, [esp+140h+a1.member.modlist.data+1]
0x4D24A9: push    ecx; a2
0x4D24AA: lea     ecx, [esi+1Ch]; this
0x4D24AD: call    BSStringT_Set
0x4D24B2: test    byte ptr [esp+13Ch+Dst], 20h
0x4D24BA: jz      short loc_4D24E2
0x4D24BC: push    4; a2
0x4D24BE: lea     edx, [esp+140h+a1.member.flags+1]
0x4D24C2: push    edx; a1
0x4D24C3: mov     ecx, esi
0x4D24C5: call    TESForm_LoadFormIDFromCurrentSaveGame
0x4D24CA: mov     eax, [esp+144h+a1.vtbl+1]
0x4D24CE: push    eax
0x4D24CF: lea     ecx, [esi+28h]
0x4D24D2: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4D24D7: mov     edx, [esi]
0x4D24D9: mov     eax, [edx+40h]
0x4D24DC: push    20h ; ' '
0x4D24DE: mov     ecx, esi
0x4D24E0: call    eax
0x4D24E2: test    [esp+13Ch+Dst], 1000000h
0x4D24ED: jz      short loc_4D2551
0x4D24EF: mov     ecx, [esi+44h]
0x4D24F2: test    ecx, ecx
0x4D24F4: jz      short loc_4D24FD
0x4D24F6: call    sub_4E5CC0
0x4D24FB: jmp     short loc_4D2551
0x4D24FD: push    54h ; 'T'; Size
0x4D24FF: call    FormHeapAlloc
0x4D2504: add     esp, 4
0x4D2507: mov     [esp+13Ch+a1.member.refID+1], eax
0x4D250B: test    eax, eax
0x4D250D: mov     [esp+13Ch+var_4], 2
0x4D2518: jz      short loc_4D2523
0x4D251A: mov     ecx, eax; this
0x4D251C: call    ??0TESPathGrid@@QAE@XZ; TESPathGrid::TESPathGrid(void)
0x4D2521: jmp     short loc_4D2525
0x4D2523: xor     eax, eax
0x4D2525: mov     ecx, eax
0x4D2527: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x4D2532: mov     [esi+44h], eax
0x4D2535: call    sub_4E5CC0
0x4D253A: mov     ecx, [esi+44h]
0x4D253D: test    ecx, ecx
0x4D253F: jz      short loc_4D254A
0x4D2541: mov     edx, [ecx]
0x4D2543: mov     eax, [edx+10h]
0x4D2546: push    1
0x4D2548: call    eax
0x4D254A: mov     dword ptr [esi+44h], 0
0x4D2551: mov     ecx, ds:0B33B00h
0x4D2557: call    sub_45A170
0x4D255C: test    al, al
0x4D255E: jz      loc_4D265B
0x4D2564: mov     ecx, ds:0B33B00h
0x4D256A: mov     edi, [ecx+80h]
0x4D2570: test    edi, edi
0x4D2572: mov     esi, [ecx+14h]
0x4D2575: jz      loc_4D2611
0x4D257B: mov     ecx, [edi]
0x4D257D: push    ecx; a1
0x4D257E: call    TESForm_LookupByFormID
0x4D2583: movzx   edx, word ptr [esp+140h+a1.vtbl+1]
0x4D2588: mov     ecx, eax
0x4D258A: lea     eax, [edx+ebx]
0x4D258D: add     esp, 4
0x4D2590: cmp     esi, eax
0x4D2592: jbe     short loc_4D25D1
0x4D2594: mov     eax, [edi+5]
0x4D2597: movzx   edx, byte ptr [edi+9]
0x4D259B: push    eax
0x4D259C: mov     eax, [ecx]
0x4D259E: push    edx
0x4D259F: mov     edx, [eax+0D4h]
0x4D25A5: call    edx
0x4D25A7: movzx   ecx, word ptr [esp+144h+a1.vtbl+1]
0x4D25AC: push    eax
0x4D25AD: mov     eax, [edi]
0x4D25AF: push    eax
0x4D25B0: push    31D1h
0x4D25B5: sub     esi, ecx
0x4D25B7: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D25BC: sub     esi, ebx
0x4D25BE: push    esi; ArgList
0x4D25BF: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x4D25C4: call    PrintError
0x4D25C9: add     esp, 20h
0x4D25CC: jmp     loc_4D265B
0x4D25D1: jnb     loc_4D265B
0x4D25D7: mov     edx, [edi+5]
0x4D25DA: movzx   eax, byte ptr [edi+9]
0x4D25DE: push    edx
0x4D25DF: mov     edx, [ecx]
0x4D25E1: push    eax
0x4D25E2: mov     eax, [edx+0D4h]
0x4D25E8: call    eax
0x4D25EA: mov     ecx, [edi]
0x4D25EC: movzx   edx, word ptr [esp+144h+a1.vtbl+1]
0x4D25F1: push    eax
0x4D25F2: push    ecx
0x4D25F3: push    31D1h
0x4D25F8: sub     edx, esi
0x4D25FA: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D25FF: add     edx, ebx
0x4D2601: push    edx; ArgList
0x4D2602: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x4D2607: call    PrintError
0x4D260C: add     esp, 20h
0x4D260F: jmp     short loc_4D265B
0x4D2611: movzx   eax, word ptr [esp+13Ch+a1.vtbl+1]
0x4D2616: lea     edx, [eax+ebx]
0x4D2619: cmp     esi, edx
0x4D261B: jbe     short loc_4D2638
0x4D261D: movzx   ecx, byte ptr [ecx+7Ch]
0x4D2621: push    ecx
0x4D2622: push    31D1h
0x4D2627: sub     esi, eax
0x4D2629: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D262E: sub     esi, ebx
0x4D2630: push    esi
0x4D2631: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4D2636: jmp     short loc_4D2653
0x4D2638: jnb     short loc_4D265B
0x4D263A: movzx   edx, byte ptr [ecx+7Ch]
0x4D263E: push    edx
0x4D263F: push    31D1h
0x4D2644: sub     eax, esi
0x4D2646: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D264B: add     eax, ebx
0x4D264D: push    eax; ArgList
0x4D264E: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4D2653: call    PrintError
0x4D2658: add     esp, 14h
0x4D265B: mov     ecx, [esp+13Ch+var_C]
0x4D2662: mov     large fs:0, ecx
0x4D2669: pop     ecx
0x4D266A: pop     edi
0x4D266B: pop     esi
0x4D266C: pop     ebp
0x4D266D: pop     ebx
0x4D266E: mov     ecx, [esp+128h+var_10]
0x4D2675: xor     ecx, esp
0x4D2677: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D267C: add     esp, 128h
0x4D2682: retn    8
