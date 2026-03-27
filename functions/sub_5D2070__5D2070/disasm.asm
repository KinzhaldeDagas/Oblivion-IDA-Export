0x5D2070: push    ecx; a3
0x5D2071: push    40Bh
0x5D2076: call    Menu_GetOpenMenuTile
0x5D207B: add     esp, 4
0x5D207E: test    eax, eax
0x5D2080: jz      short loc_5D208C
0x5D2082: mov     edx, [eax]
0x5D2084: mov     ecx, eax
0x5D2086: mov     eax, [edx]
0x5D2088: push    1
0x5D208A: call    eax
0x5D208C: push    ebx
0x5D208D: push    esi
0x5D208E: push    edi
0x5D208F: push    1; arg1
0x5D2091: push    0; canCreate
0x5D2093: call    InterfaceManager_GetSingleton
0x5D2098: add     esp, 8
0x5D209B: mov     esi, eax
0x5D209D: call    InterfaceManager_GetDepth
0x5D20A2: fstp    [esp+10h+var_4]; a3
0x5D20A6: mov     ecx, [esi+68h]; TileWindow *
0x5D20A9: push    offset aDataMenusRepai; "Data\\Menus\\repair_menu.xml"
0x5D20AE: call    Menu_LoadXML
0x5D20B3: mov     edi, eax
0x5D20B5: mov     ecx, edi
0x5D20B7: call    Tile_GetParentMenu
0x5D20BC: mov     ebx, eax
0x5D20BE: test    ebx, ebx
0x5D20C0: jz      loc_5D22B2
0x5D20C6: mov     edx, [ebx]
0x5D20C8: mov     eax, [edx+34h]
0x5D20CB: mov     ecx, ebx
0x5D20CD: call    eax
0x5D20CF: cmp     eax, 40Bh
0x5D20D4: jnz     loc_5D22A2
0x5D20DA: push    ebp; a3
0x5D20DB: push    0; int
0x5D20DD: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D20E2: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D20E7: push    0; int
0x5D20E9: push    edi; void *
0x5D20EA: call    OblivionDynamicCast
0x5D20EF: add     esp, 14h
0x5D20F2: push    eax
0x5D20F3: mov     ecx, ebx
0x5D20F5: call    Menu_SetTileMenu
0x5D20FA: push    0; int
0x5D20FC: push    offset ??_R0?AVRepairMenu@@@8; struct TypeDescriptor *
0x5D2101: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D2106: push    0; int
0x5D2108: push    ebx; void *
0x5D2109: call    OblivionDynamicCast
0x5D210E: fild    [esp+28h+arg_0]
0x5D2112: add     esp, 10h
0x5D2115: mov     ecx, edi; this
0x5D2117: fstp    [esp+18h+var_18]; a3
0x5D211A: push    0FAEh; a2
0x5D211F: mov     esi, eax
0x5D2121: call    Tile_SetFloat
0x5D2126: mov     ecx, ds:0B333C4h
0x5D212C: add     ecx, 44h ; 'D'; this
0x5D212F: call    ExtraDataList_GetContainerChanges
0x5D2134: mov     ecx, ds:0B35ED0h
0x5D213A: push    ecx; a2
0x5D213B: mov     ecx, eax; this
0x5D213D: call    ContainerExtraData_GetItemCount
0x5D2142: mov     edx, [esp+14h+arg_0]
0x5D2146: mov     ebp, [esp+14h+arg_C]
0x5D214A: mov     [esi+54h], eax
0x5D214D: mov     eax, [esp+14h+arg_8]
0x5D2151: push    0FA5h
0x5D2156: mov     ecx, edi
0x5D2158: mov     [esi+58h], edx
0x5D215B: mov     [esi+60h], ebp
0x5D215E: mov     [esi+5Ch], eax
0x5D2161: call    Tile_GetFloat
0x5D2166: fcomp   dword ptr ds:0A69770h
0x5D216C: fnstsw  ax
0x5D216E: test    ah, 44h
0x5D2171: jnp     short loc_5D218C
0x5D2173: push    0FA5h
0x5D2178: mov     ecx, edi
0x5D217A: call    Tile_GetFloat
0x5D217F: fcomp   qword ptr ds:0A69778h
0x5D2185: fnstsw  ax
0x5D2187: test    ah, 44h
0x5D218A: jp      short loc_5D21A0
0x5D218C: fld     [esp+14h+var_4]
0x5D2190: push    ecx
0x5D2191: fstp    [esp+18h+var_18]; a3
0x5D2194: push    0FABh; a2
0x5D2199: mov     ecx, edi; this
0x5D219B: call    Tile_SetFloat
0x5D21A0: fild    dword ptr [esi+54h]
0x5D21A3: push    ecx
0x5D21A4: mov     ecx, [esi+34h]; this
0x5D21A7: fstp    [esp+18h+var_18]; a3
0x5D21AA: push    0FAEh; a2
0x5D21AF: call    Tile_SetFloat
0x5D21B4: mov     eax, [esp+14h+arg_0]
0x5D21B8: cmp     eax, 2
0x5D21BB: jnz     short loc_5D221A
0x5D21BD: mov     ecx, ds:0B333C4h
0x5D21C3: call    sub_5E4420
0x5D21C8: mov     [esp+14h+var_4], eax
0x5D21CC: fild    [esp+14h+var_4]
0x5D21D0: push    ecx
0x5D21D1: mov     ecx, [esi+34h]; this
0x5D21D4: fstp    [esp+18h+var_18]; a3
0x5D21D7: push    0FAEh; a2
0x5D21DC: call    Tile_SetFloat
0x5D21E1: mov     ecx, ds:0B33398h
0x5D21E7: mov     ecx, [ecx+24h]
0x5D21EA: call    sub_6AC3D0
0x5D21EF: push    3
0x5D21F1: push    5
0x5D21F3: call    TESTopic__GEtTopic
0x5D21F8: mov     ecx, ds:0B333C4h
0x5D21FE: mov     edx, [ebp+0]
0x5D2201: mov     edx, [edx+0DCh]
0x5D2207: add     esp, 8
0x5D220A: push    0; a3
0x5D220C: push    1
0x5D220E: push    1
0x5D2210: push    ecx
0x5D2211: push    eax
0x5D2212: mov     ecx, ebp
0x5D2214: call    edx
0x5D2216: fstp    st
0x5D2218: jmp     short loc_5D2288
0x5D221A: cmp     eax, 1
0x5D221D: jz      short loc_5D2288
0x5D221F: cmp     eax, 3
0x5D2222: jnz     short loc_5D2288
0x5D2224: push    1; int
0x5D2226: call    sub_57DE50
0x5D222B: add     esp, 4
0x5D222E: push    0; int
0x5D2230: push    offset ??_R0?AVAlchemyMenu@@@8; struct TypeDescriptor *
0x5D2235: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D223A: push    0; int
0x5D223C: push    410h
0x5D2241: call    Menu_GetOpenMenuTile
0x5D2246: add     esp, 4
0x5D2249: mov     ecx, eax
0x5D224B: call    Tile_GetParentMenu
0x5D2250: push    eax; void *
0x5D2251: call    OblivionDynamicCast
0x5D2256: add     esp, 14h
0x5D2259: test    eax, eax
0x5D225B: jz      short loc_5D2284
0x5D225D: mov     ecx, ds:0B3B270h
0x5D2263: cmp     dword ptr [eax+ecx*4+0B0h], 0
0x5D226B: jz      short loc_5D2284
0x5D226D: fld     dword ptr ds:0A379B4h
0x5D2273: push    ecx
0x5D2274: mov     ecx, [esi+4Ch]; this
0x5D2277: fstp    [esp+18h+var_18]; a3
0x5D227A: push    0FA1h; a2
0x5D227F: call    Tile_SetFloat
0x5D2284: mov     byte ptr [esi+65h], 1
0x5D2288: push    1
0x5D228A: mov     ecx, esi
0x5D228C: call    sub_5D1080
0x5D2291: push    0; char
0x5D2293: mov     ecx, ebx; int
0x5D2295: call    EnableMenu
0x5D229A: pop     ebp
0x5D229B: mov     eax, edi
0x5D229D: pop     edi
0x5D229E: pop     esi
0x5D229F: pop     ebx
0x5D22A0: pop     ecx
0x5D22A1: retn
0x5D22A2: cmp     dword ptr [ebx+4], 0
0x5D22A6: jz      short loc_5D22B2
0x5D22A8: mov     edx, [ebx]
0x5D22AA: mov     eax, [edx]
0x5D22AC: push    1
0x5D22AE: mov     ecx, ebx
0x5D22B0: call    eax
0x5D22B2: pop     edi
0x5D22B3: pop     esi
0x5D22B4: xor     eax, eax
0x5D22B6: pop     ebx
0x5D22B7: pop     ecx
0x5D22B8: retn
