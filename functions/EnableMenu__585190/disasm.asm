0x585190: push    esi
0x585191: push    edi; a3
0x585192: push    1; arg1
0x585194: push    0; canCreate
0x585196: mov     esi, ecx
0x585198: call    InterfaceManager_GetSingleton
0x58519D: mov     ecx, [esi+4]
0x5851A0: add     esp, 8
0x5851A3: push    0; float
0x5851A5: mov     edi, eax
0x5851A7: call    sub_58FBA0
0x5851AC: fldz
0x5851AE: mov     eax, [esi+4]
0x5851B1: mov     ecx, [eax+24h]
0x5851B4: sub     esp, 8
0x5851B7: fst     [esp+10h+a2]; float
0x5851BB: fstp    [esp+10h+var_10]; float
0x5851BE: push    ecx; int
0x5851BF: mov     ecx, edi
0x5851C1: call    sub_57EA20
0x5851C6: fld1
0x5851C8: push    ecx
0x5851C9: fstp    [esp+0Ch+a2]; value
0x5851CC: mov     ecx, [esi+4]; this
0x5851CF: push    0FA1h; propertyCode
0x5851D4: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5851D9: cmp     [esp+8+arg_0], 0
0x5851DE: jnz     short loc_5851E7
0x5851E0: mov     ecx, esi; int
0x5851E2: call    Menu__StartFadeIn; Oblivion ClassMenu step refresh: derives the active step value from tile traits 0xFDB/0xFDC, updates menu state, sets state 8, and refreshes the interface manager.
0x5851E7: push    0
0x5851E9: push    0FDDh
0x5851EE: push    0
0x5851F0: mov     ecx, edi
0x5851F2: call    InterfaceManager__SetCurrentFocusTarget; AchievementsNative evidence: focused tile with xlist=&xitem drives parent xscroll by pulsing the xscroll target's user5 through -999999, tile xscroll, then 0; do not leave scroll target user5 at the desired scroll value.
0x5851F7: call    InterfaceManager_GetDepthR
0x5851FC: fstp    st
0x5851FE: pop     edi
0x5851FF: pop     esi
0x585200: retn    4
