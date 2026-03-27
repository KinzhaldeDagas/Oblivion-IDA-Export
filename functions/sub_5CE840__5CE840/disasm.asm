0x5CE840: push    ecx
0x5CE841: push    419h
0x5CE846: call    Menu_GetOpenMenuTile
0x5CE84B: add     esp, 4
0x5CE84E: test    eax, eax
0x5CE850: jz      short loc_5CE85C
0x5CE852: mov     edx, [eax]
0x5CE854: mov     ecx, eax
0x5CE856: mov     eax, [edx]
0x5CE858: push    1
0x5CE85A: call    eax
0x5CE85C: push    esi; a3
0x5CE85D: push    edi; a3
0x5CE85E: push    1; arg1
0x5CE860: push    0; canCreate
0x5CE862: call    InterfaceManager_GetSingleton
0x5CE867: add     esp, 8
0x5CE86A: mov     esi, eax
0x5CE86C: call    InterfaceManager_GetDepth
0x5CE871: fstp    [esp+0Ch+var_4]; a3
0x5CE875: mov     ecx, [esi+68h]; TileWindow *
0x5CE878: push    offset aDataMenusRecha; "Data\\Menus\\recharge_menu.xml"
0x5CE87D: call    Menu_LoadXML
0x5CE882: mov     edi, eax
0x5CE884: mov     ecx, edi
0x5CE886: call    Tile_GetParentMenu
0x5CE88B: mov     esi, eax
0x5CE88D: test    esi, esi
0x5CE88F: jz      loc_5CE9A1
0x5CE895: mov     edx, [esi]
0x5CE897: mov     eax, [edx+34h]
0x5CE89A: mov     ecx, esi
0x5CE89C: call    eax
0x5CE89E: cmp     eax, 419h
0x5CE8A3: jnz     loc_5CE991
0x5CE8A9: push    0; int
0x5CE8AB: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5CE8B0: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5CE8B5: push    0; int
0x5CE8B7: push    edi; void *
0x5CE8B8: call    OblivionDynamicCast
0x5CE8BD: add     esp, 14h
0x5CE8C0: push    eax
0x5CE8C1: mov     ecx, esi
0x5CE8C3: call    Menu_SetTileMenu
0x5CE8C8: push    0; int
0x5CE8CA: push    offset ??_R0?AVRechargeMenu@@@8; struct TypeDescriptor *
0x5CE8CF: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5CE8D4: push    0; int
0x5CE8D6: push    esi; void *
0x5CE8D7: call    OblivionDynamicCast
0x5CE8DC: mov     esi, eax
0x5CE8DE: add     esp, 14h
0x5CE8E1: cmp     dword ptr [esi+28h], 0
0x5CE8E5: jz      short loc_5CE8FF
0x5CE8E7: cmp     dword ptr [esi+2Ch], 0
0x5CE8EB: jz      short loc_5CE8FF
0x5CE8ED: cmp     dword ptr [esi+30h], 0
0x5CE8F1: jz      short loc_5CE8FF
0x5CE8F3: cmp     dword ptr [esi+34h], 0
0x5CE8F7: jz      short loc_5CE8FF
0x5CE8F9: cmp     dword ptr [esi+38h], 0
0x5CE8FD: jnz     short loc_5CE912
0x5CE8FF: push    offset aRechargeMenuCr; "Recharge Menu Creation Failed... Are yo"...
0x5CE904: call    PrintError
0x5CE909: add     esp, 4
0x5CE90C: pop     edi
0x5CE90D: xor     eax, eax
0x5CE90F: pop     esi
0x5CE910: pop     ecx
0x5CE911: retn
0x5CE912: push    0FA5h
0x5CE917: mov     ecx, edi
0x5CE919: call    Tile_GetFloat
0x5CE91E: fcomp   dword ptr ds:0A69770h
0x5CE924: fnstsw  ax
0x5CE926: test    ah, 44h
0x5CE929: jnp     short loc_5CE944
0x5CE92B: push    0FA5h
0x5CE930: mov     ecx, edi
0x5CE932: call    Tile_GetFloat
0x5CE937: fcomp   qword ptr ds:0A69778h
0x5CE93D: fnstsw  ax
0x5CE93F: test    ah, 44h
0x5CE942: jp      short loc_5CE958
0x5CE944: fld     [esp+0Ch+var_4]
0x5CE948: push    ecx
0x5CE949: fstp    [esp+10h+var_10]; a3
0x5CE94C: push    0FABh; a2
0x5CE951: mov     ecx, edi; this
0x5CE953: call    Tile_SetFloat
0x5CE958: fld     dword ptr ds:0A6906Ch
0x5CE95E: push    ecx
0x5CE95F: mov     ecx, [esi+30h]; this
0x5CE962: fstp    [esp+10h+var_10]; a3
0x5CE965: push    0FB7h; a2
0x5CE96A: call    Tile_SetFloat
0x5CE96F: fldz
0x5CE971: push    ecx
0x5CE972: fstp    [esp+10h+var_10]; a3
0x5CE975: mov     ecx, [esi+30h]; this
0x5CE978: push    0FB7h; a2
0x5CE97D: call    Tile_SetFloat
0x5CE982: push    0; char
0x5CE984: mov     ecx, esi; int
0x5CE986: call    EnableMenu
0x5CE98B: mov     eax, edi
0x5CE98D: pop     edi
0x5CE98E: pop     esi
0x5CE98F: pop     ecx
0x5CE990: retn
0x5CE991: cmp     dword ptr [esi+4], 0
0x5CE995: jz      short loc_5CE9A1
0x5CE997: mov     edx, [esi]
0x5CE999: mov     eax, [edx]
0x5CE99B: push    1
0x5CE99D: mov     ecx, esi
0x5CE99F: call    eax
0x5CE9A1: pop     edi
0x5CE9A2: xor     eax, eax
0x5CE9A4: pop     esi
0x5CE9A5: pop     ecx
0x5CE9A6: retn
