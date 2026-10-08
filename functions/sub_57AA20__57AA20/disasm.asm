0x57AA20: push    1; arg1
0x57AA22: push    0; canCreate
0x57AA24: call    InterfaceManager_GetSingleton
0x57AA29: add     esp, 8
0x57AA2C: test    eax, eax
0x57AA2E: jz      short loc_57AA81
0x57AA30: push    1; arg1
0x57AA32: push    0; canCreate
0x57AA34: call    InterfaceManager_GetSingleton
0x57AA39: add     esp, 8
0x57AA3C: cmp     dword ptr [eax+1Ch], 0
0x57AA40: jz      short loc_57AA81
0x57AA42: push    1; arg1
0x57AA44: push    0; canCreate
0x57AA46: call    InterfaceManager_GetSingleton
0x57AA4B: add     esp, 8
0x57AA4E: cmp     dword ptr [eax+68h], 0
0x57AA52: jz      short loc_57AA81
0x57AA54: push    1; arg1
0x57AA56: push    0; canCreate
0x57AA58: call    InterfaceManager_GetSingleton
0x57AA5D: mov     eax, [eax+68h]
0x57AA60: add     esp, 8
0x57AA63: push    0FAEh
0x57AA68: mov     ecx, eax
0x57AA6A: call    Tile_GetFloat
0x57AA6F: fcomp   dword ptr ds:0A379B4h
0x57AA75: fnstsw  ax
0x57AA77: test    ah, 44h
0x57AA7A: jp      short loc_57AA81
0x57AA7C: jmp     loc_597540
0x57AA81: xor     eax, eax
0x57AA83: retn
0x597540: push    ecx
0x597541: push    406h
0x597546: call    Menu_GetOpenMenuTile
0x59754B: add     esp, 4
0x59754E: test    eax, eax
0x597550: jz      short loc_59755C
0x597552: mov     edx, [eax]
0x597554: mov     ecx, eax
0x597556: mov     eax, [edx]
0x597558: push    1
0x59755A: call    eax
0x59755C: push    ebx
0x59755D: push    esi
0x59755E: push    1; arg1
0x597560: push    0; canCreate
0x597562: call    InterfaceManager_GetSingleton
0x597567: add     esp, 8
0x59756A: mov     esi, eax
0x59756C: call    InterfaceManager_GetDepth
0x597571: fstp    [esp+0Ch+var_4]
0x597575: mov     ecx, [esi+68h]; this
0x597578: push    offset aDataMenusCha_1; "Data\\Menus\\Chargen\\class_menu.xml"
0x59757D: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x597582: mov     ebx, eax
0x597584: mov     ecx, ebx
0x597586: call    Tile_GetParentMenu
0x59758B: mov     esi, eax
0x59758D: test    esi, esi
0x59758F: jz      loc_5976A7
0x597595: mov     edx, [esi]
0x597597: mov     eax, [edx+34h]
0x59759A: mov     ecx, esi
0x59759C: call    eax
0x59759E: cmp     eax, 406h
0x5975A3: jnz     loc_597697
0x5975A9: push    edi; a3
0x5975AA: push    0; int
0x5975AC: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5975B1: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5975B6: push    0; int
0x5975B8: push    ebx; void *
0x5975B9: call    OblivionDynamicCast
0x5975BE: add     esp, 14h
0x5975C1: push    eax
0x5975C2: mov     ecx, esi
0x5975C4: call    Menu_SetTileMenu
0x5975C9: push    0; int
0x5975CB: push    offset ??_R0?AVClassMenu@@@8; struct TypeDescriptor *
0x5975D0: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5975D5: push    0; int
0x5975D7: push    esi; void *
0x5975D8: call    OblivionDynamicCast
0x5975DD: mov     edi, eax
0x5975DF: add     esp, 14h
0x5975E2: cmp     dword ptr [edi+28h], 0
0x5975E6: jz      short loc_5975F4
0x5975E8: cmp     dword ptr [edi+2Ch], 0
0x5975EC: jz      short loc_5975F4
0x5975EE: cmp     dword ptr [edi+30h], 0
0x5975F2: jnz     short loc_597608
0x5975F4: push    offset aClassMenuCreat; "Class Menu Creation Failed... Are your "...
0x5975F9: call    PrintError
0x5975FE: add     esp, 4
0x597601: pop     edi
0x597602: pop     esi
0x597603: xor     eax, eax
0x597605: pop     ebx
0x597606: pop     ecx
0x597607: retn
0x597608: push    0FA5h
0x59760D: mov     ecx, ebx
0x59760F: call    Tile_GetFloat
0x597614: fcomp   dword ptr ds:0A69770h
0x59761A: fnstsw  ax
0x59761C: test    ah, 44h
0x59761F: jnp     short loc_59763A
0x597621: push    0FA5h
0x597626: mov     ecx, ebx
0x597628: call    Tile_GetFloat
0x59762D: fcomp   qword ptr ds:0A69778h
0x597633: fnstsw  ax
0x597635: test    ah, 44h
0x597638: jp      short loc_59764E
0x59763A: fld     [esp+10h+var_4]
0x59763E: push    ecx
0x59763F: fstp    [esp+14h+a3]; value
0x597642: push    0FABh; propertyCode
0x597647: mov     ecx, ebx; this
0x597649: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59764E: mov     ecx, [edi+40h]
0x597651: call    TESClass_IsPlayable; TESClass_IsPlayable reads classFlags at +0x60 bit 0.
0x597656: test    al, al
0x597658: jnz     short loc_59766E
0x59765A: mov     ecx, ds:0B38628h
0x597660: push    0; a3
0x597662: push    ecx; a2
0x597663: mov     ecx, [edi+40h]
0x597666: add     ecx, 1Ch; this
0x597669: call    BSStringT_Set
0x59766E: mov     edx, [esp+10h+arg_0]
0x597672: push    1
0x597674: mov     ecx, edi
0x597676: mov     [edi+3Ch], edx
0x597679: call    ClassMenu_RebuildClassList; Rebuilds the ClassMenu list from TESDataHandler classes, includes only playable classes, sorts/displays them by name, and optionally activates the current class row.
0x59767E: push    0
0x597680: mov     ecx, edi
0x597682: call    ClassMenu_RefreshClassDetails; Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after class menu selection update.
0x597687: push    0; char
0x597689: mov     ecx, esi; int
0x59768B: call    EnableMenu
0x597690: pop     edi
0x597691: pop     esi
0x597692: mov     eax, ebx
0x597694: pop     ebx
0x597695: pop     ecx
0x597696: retn
0x597697: cmp     dword ptr [esi+4], 0
0x59769B: jz      short loc_5976A7
0x59769D: mov     eax, [esi]
0x59769F: mov     edx, [eax]
0x5976A1: push    1
0x5976A3: mov     ecx, esi
0x5976A5: call    edx
0x5976A7: pop     esi
0x5976A8: xor     eax, eax
0x5976AA: pop     ebx
0x5976AB: pop     ecx
0x5976AC: retn
