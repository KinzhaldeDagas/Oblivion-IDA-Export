0x5A2160: push    0FFFFFFFFh
0x5A2162: push    offset SEH_5A2160
0x5A2167: mov     eax, large fs:0
0x5A216D: push    eax
0x5A216E: sub     esp, 124h
0x5A2174: mov     eax, ds:0B30AACh
0x5A2179: xor     eax, esp
0x5A217B: mov     [esp+130h+var_10], eax
0x5A2182: push    ebx
0x5A2183: push    ebp
0x5A2184: push    esi
0x5A2185: push    edi
0x5A2186: mov     eax, ds:0B30AACh
0x5A218B: xor     eax, esp
0x5A218D: push    eax
0x5A218E: lea     eax, [esp+144h+var_C]
0x5A2195: mov     large fs:0, eax
0x5A219B: mov     edi, ecx
0x5A219D: mov     ecx, [edi+90h]
0x5A21A3: xor     ebx, ebx
0x5A21A5: cmp     ecx, ebx
0x5A21A7: jz      short loc_5A21C3
0x5A21A9: call    BSSimpleList_Clear
0x5A21AE: mov     eax, [edi+90h]
0x5A21B4: push    eax
0x5A21B5: call    FormHeapFree
0x5A21BA: add     esp, 4
0x5A21BD: mov     [edi+90h], ebx
0x5A21C3: mov     eax, [edi+30h]
0x5A21C6: cmp     eax, ebx
0x5A21C8: jz      short loc_5A21E5
0x5A21CA: mov     eax, [eax+8]
0x5A21CD: push    ebx; int
0x5A21CE: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5A21D3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A21D8: push    ebx; int
0x5A21D9: push    eax; void *
0x5A21DA: call    OblivionDynamicCast
0x5A21DF: add     esp, 14h
0x5A21E2: mov     [edi+34h], eax
0x5A21E5: mov     ecx, [edi+34h]
0x5A21E8: cmp     ecx, ebx
0x5A21EA: jz      short loc_5A222B
0x5A21EC: cmp     [edi+2Ch], ebx
0x5A21EF: jz      short loc_5A222B
0x5A21F1: mov     eax, [ecx]
0x5A21F3: mov     edx, [eax+10h]
0x5A21F6: call    edx
0x5A21F8: cmp     eax, 3
0x5A21FB: jnz     short loc_5A220C
0x5A21FD: mov     eax, [edi+28h]
0x5A2200: add     eax, 28h ; '('
0x5A2203: cmp     [eax+4], ebx
0x5A2206: jnz     short loc_5A222B
0x5A2208: cmp     [eax], ebx
0x5A220A: jnz     short loc_5A222B
0x5A220C: push    1
0x5A220E: push    ebx
0x5A220F: push    ebx
0x5A2210: push    ebx
0x5A2211: call    EffectSettingCollection_FilteredEffectList
0x5A2216: add     esp, 10h
0x5A2219: mov     [edi+90h], eax
0x5A221F: mov     ecx, ds:0B333C4h
0x5A2225: push    eax
0x5A2226: call    sub_663AA0
0x5A222B: mov     esi, [edi+90h]
0x5A2231: xor     ebp, ebp
0x5A2233: cmp     esi, ebx
0x5A2235: jz      short loc_5A22B0
0x5A2237: cmp     [esi+4], ebx
0x5A223A: jnz     short loc_5A2240
0x5A223C: cmp     [esi], ebx
0x5A223E: jz      short loc_5A22B0
0x5A2240: mov     ebx, [esi]
0x5A2242: test    ebx, ebx
0x5A2244: jz      short loc_5A2277
0x5A2246: mov     eax, [ebx+58h]
0x5A2249: shr     eax, 15h
0x5A224C: test    al, 1
0x5A224E: jz      short loc_5A2277
0x5A2250: mov     ecx, [edi+30h]
0x5A2253: push    1
0x5A2255: push    ebx
0x5A2256: push    ecx
0x5A2257: call    sub_4194B0
0x5A225C: add     esp, 0Ch
0x5A225F: test    al, al
0x5A2261: jz      short loc_5A2277
0x5A2263: mov     ecx, [edi+28h]
0x5A2266: push    ebx
0x5A2267: call    sub_419220
0x5A226C: test    al, al
0x5A226E: jz      short loc_5A2277
0x5A2270: mov     ebp, esi
0x5A2272: mov     esi, [esi+4]
0x5A2275: jmp     short loc_5A22AA
0x5A2277: test    ebp, ebp
0x5A2279: jz      short loc_5A2288
0x5A227B: push    ebx
0x5A227C: mov     ecx, ebp
0x5A227E: call    BSSimpleList_Remove
0x5A2283: mov     esi, [ebp+4]
0x5A2286: jmp     short loc_5A22AA
0x5A2288: mov     eax, [esi+4]
0x5A228B: test    eax, eax
0x5A228D: jz      short loc_5A22A4
0x5A228F: mov     edx, [eax+4]
0x5A2292: mov     [esi+4], edx
0x5A2295: mov     ecx, [eax]
0x5A2297: push    eax
0x5A2298: mov     [esi], ecx
0x5A229A: call    FormHeapFree
0x5A229F: add     esp, 4
0x5A22A2: jmp     short loc_5A22AA
0x5A22A4: mov     dword ptr [esi], 0
0x5A22AA: xor     ebx, ebx
0x5A22AC: test    esi, esi
0x5A22AE: jnz     short loc_5A2237
0x5A22B0: mov     ecx, [edi+54h]
0x5A22B3: mov     [esp+144h+var_118], ecx
0x5A22B7: call    sub_5893F0
0x5A22BC: push    ebx; a3
0x5A22BD: push    offset aKnown_effect_t; "known_effect_template"
0x5A22C2: lea     ecx, [esp+14Ch+var_120]; this
0x5A22C6: mov     [esp+14Ch+var_120.m_data], ebx
0x5A22CA: mov     [esp+14Ch+var_120.m_dataLen], bx
0x5A22CF: mov     [esp+14Ch+var_120.m_bufLen], bx
0x5A22D4: call    BSStringT_Set
0x5A22D9: mov     esi, [edi+90h]
0x5A22DF: xor     ebp, ebp
0x5A22E1: mov     [esp+144h+var_4], ebx
0x5A22E8: mov     [esp+144h+var_12C], esi
0x5A22EC: mov     [esp+144h+var_130], ebp
0x5A22F0: mov     [esp+144h+var_128], ebx
0x5A22F4: mov     word ptr [esp+144h+var_124], bx
0x5A22F9: mov     word ptr [esp+144h+var_124+2], bx
0x5A22FE: mov     eax, [edi+28h]
0x5A2301: mov     edx, [eax+24h]
0x5A2304: lea     ecx, [eax+24h]
0x5A2307: mov     eax, [edx]
0x5A2309: push    ebx
0x5A230A: mov     byte ptr [esp+148h+var_4], 1
0x5A2312: call    eax
0x5A2314: fmul    dword ptr ds:0B37FE8h
0x5A231A: call    Double_To_SInt32
0x5A231F: push    eax; ArgList
0x5A2320: lea     ecx, [esp+148h+var_128]
0x5A2324: push    offset aD_0; "%d"
0x5A2329: push    ecx; int
0x5A232A: call    BSStringT_Static_Format
0x5A232F: mov     edx, [esp+150h+var_128]
0x5A2333: mov     ecx, [edi+48h]
0x5A2336: add     esp, 0Ch
0x5A2339: push    edx
0x5A233A: push    0FDEh
0x5A233F: call    Tile_SetString
0x5A2344: mov     ecx, ds:0B333C4h
0x5A234A: call    sub_5E4420
0x5A234F: push    eax; ArgList
0x5A2350: lea     eax, [esp+148h+var_128]
0x5A2354: push    offset aD_0; "%d"
0x5A2359: push    eax; int
0x5A235A: call    BSStringT_Static_Format
0x5A235F: mov     ecx, [esp+150h+var_128]
0x5A2363: add     esp, 0Ch
0x5A2366: push    ecx
0x5A2367: mov     ecx, [edi+4Ch]
0x5A236A: push    0FDEh
0x5A236F: call    Tile_SetString
0x5A2374: cmp     esi, ebx
0x5A2376: jz      loc_5A24E0
0x5A237C: jmp     short loc_5A2384
0x5A237E: align 10h
0x5A2380: mov     esi, [esp+144h+var_12C]
0x5A2384: mov     edx, [esp+144h+var_120.m_data]
0x5A2388: mov     eax, [esp+144h+var_118]
0x5A238C: mov     ebx, [esi]
0x5A238E: push    0
0x5A2390: push    edx
0x5A2391: push    eax
0x5A2392: mov     ecx, edi
0x5A2394: call    Menu_CreateTileFromTemplate
0x5A2399: mov     esi, eax
0x5A239B: test    esi, esi
0x5A239D: jz      loc_5A24CD
0x5A23A3: test    ebx, ebx
0x5A23A5: jz      loc_5A24CD
0x5A23AB: fild    [esp+144h+var_130]
0x5A23AF: push    ecx
0x5A23B0: mov     ecx, esi; this
0x5A23B2: fstp    [esp+148h+var_148]; a3
0x5A23B5: push    0FAEh; a2
0x5A23BA: call    Tile_SetFloat
0x5A23BF: lea     ecx, [ebp+3E8h]
0x5A23C5: mov     [esp+144h+var_130], ecx; a3
0x5A23C9: fild    [esp+144h+var_130]
0x5A23CD: push    ecx
0x5A23CE: mov     ecx, esi; this
0x5A23D0: fstp    [esp+148h+var_148]; a3
0x5A23D3: push    0FA8h; a2
0x5A23D8: call    Tile_SetFloat
0x5A23DD: mov     eax, [ebx+3Ch]
0x5A23E0: test    eax, eax
0x5A23E2: jnz     short loc_5A23E9
0x5A23E4: mov     eax, offset EmptyString
0x5A23E9: push    eax
0x5A23EA: push    0FB0h
0x5A23EF: mov     ecx, esi
0x5A23F1: call    Tile_SetString
0x5A23F6: mov     eax, [ebx+3Ch]
0x5A23F9: test    eax, eax
0x5A23FB: jnz     short loc_5A2402
0x5A23FD: mov     eax, offset EmptyString
0x5A2402: push    0; a3
0x5A2404: lea     ecx, [esi+8]; this
0x5A2407: push    eax; a2
0x5A2408: call    BSStringT_Set
0x5A240D: mov     ecx, [edi+60h]
0x5A2410: push    0FB5h
0x5A2415: call    Tile_GetFloat
0x5A241A: push    ecx
0x5A241B: fstp    [esp+148h+var_148]; a3
0x5A241E: push    0FB1h; a2
0x5A2423: mov     ecx, esi; this
0x5A2425: call    Tile_SetFloat
0x5A242A: mov     eax, [ebx+48h]
0x5A242D: test    eax, eax
0x5A242F: jnz     short loc_5A2436
0x5A2431: mov     eax, offset EmptyString
0x5A2436: push    eax
0x5A2437: push    offset aIcons; "Icons"
0x5A243C: lea     edx, [esp+14Ch+var_114]
0x5A2440: push    offset aSS_2; "%s\\%s"
0x5A2445: push    edx
0x5A2446: call    __sprintf
0x5A244B: add     esp, 10h
0x5A244E: lea     eax, [esp+144h+var_114]
0x5A2452: push    eax
0x5A2453: push    0FAFh
0x5A2458: mov     ecx, esi
0x5A245A: call    Tile_SetString
0x5A245F: mov     ecx, [ebx+98h]
0x5A2465: mov     [esp+144h+var_130], ecx
0x5A2469: fild    [esp+144h+var_130]
0x5A246D: push    ecx
0x5A246E: mov     ecx, esi; this
0x5A2470: fstp    [esp+148h+var_148]; a3
0x5A2473: push    0FB2h; a2
0x5A2478: call    Tile_SetFloat
0x5A247D: fld     dword ptr ds:0A31C80h
0x5A2483: push    ecx
0x5A2484: fstp    [esp+148h+var_148]; a3
0x5A2487: push    0FB4h; a2
0x5A248C: mov     ecx, esi; this
0x5A248E: call    Tile_SetFloat
0x5A2493: fld     dword ptr ds:0A379B4h
0x5A2499: push    ecx
0x5A249A: fstp    [esp+148h+var_148]; a3
0x5A249D: push    0FC9h; a2
0x5A24A2: mov     ecx, esi; this
0x5A24A4: call    Tile_SetFloat
0x5A24A9: mov     ecx, [edi+60h]
0x5A24AC: add     ebp, 1
0x5A24AF: push    0FB5h
0x5A24B4: mov     [esp+148h+var_130], ebp
0x5A24B8: call    Tile_GetFloat
0x5A24BD: push    ecx
0x5A24BE: fstp    [esp+148h+var_148]; a3
0x5A24C1: push    0FB6h; a2
0x5A24C6: mov     ecx, esi; this
0x5A24C8: call    Tile_SetFloat
0x5A24CD: mov     edx, [esp+144h+var_12C]
0x5A24D1: mov     eax, [edx+4]
0x5A24D4: test    eax, eax
0x5A24D6: mov     [esp+144h+var_12C], eax
0x5A24DA: jnz     loc_5A2380
0x5A24E0: mov     eax, [esp+144h+var_128]
0x5A24E4: push    eax
0x5A24E5: call    FormHeapFree
0x5A24EA: mov     ecx, [esp+148h+var_120.m_data]
0x5A24EE: push    ecx
0x5A24EF: call    FormHeapFree
0x5A24F4: add     esp, 8
0x5A24F7: mov     ecx, dword ptr [esp+144h+var_C]
0x5A24FE: mov     large fs:0, ecx
0x5A2505: pop     ecx
0x5A2506: pop     edi
0x5A2507: pop     esi
0x5A2508: pop     ebp
0x5A2509: pop     ebx
0x5A250A: mov     ecx, [esp+130h+var_10]
0x5A2511: xor     ecx, esp
0x5A2513: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5A2518: add     esp, 130h
0x5A251E: retn
