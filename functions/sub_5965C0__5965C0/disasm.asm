0x5965C0: push    415h
0x5965C5: call    Menu_GetOpenMenuTile
0x5965CA: add     esp, 4
0x5965CD: test    eax, eax
0x5965CF: jz      short loc_5965DB
0x5965D1: mov     edx, [eax]
0x5965D3: mov     ecx, eax
0x5965D5: mov     eax, [edx]
0x5965D7: push    1
0x5965D9: call    eax
0x5965DB: push    esi
0x5965DC: push    edi; ArgList
0x5965DD: push    1; arg1
0x5965DF: push    0; canCreate
0x5965E1: call    InterfaceManager_GetSingleton
0x5965E6: mov     eax, [eax+68h]
0x5965E9: add     esp, 8
0x5965EC: push    offset aDataMenusBreat; "Data\\Menus\\breath_meter_menu.xml"
0x5965F1: mov     ecx, eax; TileWindow *
0x5965F3: call    Menu_LoadXML
0x5965F8: mov     edi, eax
0x5965FA: mov     ecx, edi
0x5965FC: call    Tile_GetParentMenu
0x596601: mov     esi, eax
0x596603: test    esi, esi
0x596605: jz      loc_59669F
0x59660B: mov     edx, [esi]
0x59660D: mov     eax, [edx+34h]
0x596610: mov     ecx, esi
0x596612: call    eax
0x596614: cmp     eax, 415h
0x596619: jnz     short loc_59668F
0x59661B: push    0; int
0x59661D: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x596622: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x596627: push    0; int
0x596629: push    edi; void *
0x59662A: call    OblivionDynamicCast
0x59662F: add     esp, 14h
0x596632: push    eax
0x596633: mov     ecx, esi
0x596635: call    Menu_SetTileMenu
0x59663A: push    0; int
0x59663C: push    offset ??_R0?AVBreathMenu@@@8; struct TypeDescriptor *
0x596641: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x596646: push    0; int
0x596648: push    esi; void *
0x596649: call    OblivionDynamicCast
0x59664E: add     esp, 14h
0x596651: cmp     dword ptr [eax+2Ch], 0
0x596655: jnz     short loc_596673
0x596657: push    offset aBreathMeterMen; "Breath Meter Menu Creation Failed... Ar"...
0x59665C: call    PrintError
0x596661: mov     edx, [esi]
0x596663: mov     eax, [edx]
0x596665: add     esp, 4
0x596668: push    1
0x59666A: mov     ecx, esi
0x59666C: call    eax
0x59666E: pop     edi
0x59666F: xor     eax, eax
0x596671: pop     esi
0x596672: retn
0x596673: fld1
0x596675: push    ecx
0x596676: fstp    [esp+0Ch+var_C]; float
0x596679: call    sub_596550
0x59667E: add     esp, 4
0x596681: push    0; float
0x596683: mov     ecx, edi
0x596685: call    sub_58FBA0
0x59668A: mov     eax, edi
0x59668C: pop     edi
0x59668D: pop     esi
0x59668E: retn
0x59668F: cmp     dword ptr [esi+4], 0
0x596693: jz      short loc_59669F
0x596695: mov     edx, [esi]
0x596697: mov     eax, [edx]
0x596699: push    1
0x59669B: mov     ecx, esi
0x59669D: call    eax
0x59669F: pop     edi
0x5966A0: xor     eax, eax
0x5966A2: pop     esi
0x5966A3: retn
