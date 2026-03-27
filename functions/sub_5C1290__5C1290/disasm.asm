0x5C1290: push    ecx
0x5C1291: push    416h
0x5C1296: call    Menu_GetOpenMenuTile
0x5C129B: add     esp, 4
0x5C129E: test    eax, eax
0x5C12A0: jz      short loc_5C12A6
0x5C12A2: mov     al, 1
0x5C12A4: pop     ecx
0x5C12A5: retn
0x5C12A6: push    ebp; a3
0x5C12A7: push    esi; a3
0x5C12A8: push    edi; a3
0x5C12A9: push    1; arg1
0x5C12AB: push    0; canCreate
0x5C12AD: call    InterfaceManager_GetSingleton
0x5C12B2: add     esp, 8
0x5C12B5: mov     ebp, eax
0x5C12B7: call    InterfaceManager_GetDepth
0x5C12BC: fstp    [esp+10h+var_4]
0x5C12C0: mov     ecx, [ebp+68h]; TileWindow *
0x5C12C3: push    offset aDataMenusMainQ; "Data\\Menus\\Main\\quickkeys_menu.xml"
0x5C12C8: call    Menu_LoadXML
0x5C12CD: mov     edi, eax
0x5C12CF: mov     ecx, edi
0x5C12D1: call    Tile_GetParentMenu
0x5C12D6: mov     esi, eax
0x5C12D8: test    esi, esi
0x5C12DA: jz      loc_5C140A
0x5C12E0: mov     eax, [esi]
0x5C12E2: mov     edx, [eax+34h]
0x5C12E5: mov     ecx, esi
0x5C12E7: call    edx
0x5C12E9: cmp     eax, 416h
0x5C12EE: jnz     loc_5C13FA
0x5C12F4: push    ebx; a3
0x5C12F5: push    0; int
0x5C12F7: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5C12FC: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1301: push    0; int
0x5C1303: push    edi; void *
0x5C1304: call    OblivionDynamicCast
0x5C1309: add     esp, 14h
0x5C130C: push    eax
0x5C130D: mov     ecx, esi
0x5C130F: call    Menu_SetTileMenu
0x5C1314: push    0; int
0x5C1316: push    offset ??_R0?AVQuickKeysMenu@@@8; struct TypeDescriptor *
0x5C131B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1320: push    0; int
0x5C1322: push    esi; void *
0x5C1323: call    OblivionDynamicCast
0x5C1328: mov     ebx, eax
0x5C132A: add     esp, 14h
0x5C132D: mov     ecx, ebx
0x5C132F: call    sub_5A46B0
0x5C1334: test    al, al
0x5C1336: jnz     short loc_5C1357
0x5C1338: push    offset aQuickKeysMenuC; "Quick Keys Menu Creation Failed... Are "...
0x5C133D: call    PrintError
0x5C1342: mov     eax, [esi]
0x5C1344: mov     edx, [eax]
0x5C1346: add     esp, 4
0x5C1349: push    1
0x5C134B: mov     ecx, esi
0x5C134D: call    edx
0x5C134F: pop     ebx
0x5C1350: pop     edi
0x5C1351: pop     esi
0x5C1352: xor     al, al
0x5C1354: pop     ebp
0x5C1355: pop     ecx
0x5C1356: retn
0x5C1357: push    0FA5h
0x5C135C: mov     ecx, edi
0x5C135E: call    Tile_GetFloat
0x5C1363: fcomp   dword ptr ds:0A69770h
0x5C1369: fnstsw  ax
0x5C136B: test    ah, 44h
0x5C136E: jnp     short loc_5C1389
0x5C1370: push    0FA5h
0x5C1375: mov     ecx, edi
0x5C1377: call    Tile_GetFloat
0x5C137C: fcomp   qword ptr ds:0A69778h
0x5C1382: fnstsw  ax
0x5C1384: test    ah, 44h
0x5C1387: jp      short loc_5C139D
0x5C1389: fld     [esp+14h+var_4]
0x5C138D: push    ecx
0x5C138E: fstp    [esp+18h+a2]; a3
0x5C1391: push    0FABh; a2
0x5C1396: mov     ecx, edi; this
0x5C1398: call    Tile_SetFloat
0x5C139D: xor     eax, eax
0x5C139F: cmp     byte ptr [ebp+8], 1
0x5C13A3: push    ecx
0x5C13A4: setnz   al
0x5C13A7: mov     ecx, edi; this
0x5C13A9: mov     [esp+18h+var_4], eax
0x5C13AD: fild    [esp+18h+var_4]
0x5C13B1: fstp    [esp+18h+a2]; a3
0x5C13B4: push    0FAEh; a2
0x5C13B9: call    Tile_SetFloat
0x5C13BE: fldz
0x5C13C0: push    ecx
0x5C13C1: fstp    [esp+18h+a2]; a3
0x5C13C4: mov     ecx, [ebx+2Ch]; this
0x5C13C7: push    0FAFh; a2
0x5C13CC: call    Tile_SetFloat
0x5C13D1: fld1
0x5C13D3: push    ecx
0x5C13D4: fstp    [esp+18h+a2]; a3
0x5C13D7: mov     ecx, [ebx+2Ch]; this
0x5C13DA: push    0FA1h; a2
0x5C13DF: call    Tile_SetFloat
0x5C13E4: call    sub_5C1000
0x5C13E9: push    0; char
0x5C13EB: mov     ecx, esi; int
0x5C13ED: call    EnableMenu
0x5C13F2: pop     ebx
0x5C13F3: pop     edi
0x5C13F4: pop     esi
0x5C13F5: mov     al, 1
0x5C13F7: pop     ebp
0x5C13F8: pop     ecx
0x5C13F9: retn
0x5C13FA: cmp     dword ptr [esi+4], 0
0x5C13FE: jz      short loc_5C140A
0x5C1400: mov     edx, [esi]
0x5C1402: mov     eax, [edx]
0x5C1404: push    1
0x5C1406: mov     ecx, esi
0x5C1408: call    eax
0x5C140A: pop     edi
0x5C140B: pop     esi
0x5C140C: xor     al, al
0x5C140E: pop     ebp
0x5C140F: pop     ecx
0x5C1410: retn
