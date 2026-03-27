0x5D5200: sub     esp, 110h
0x5D5206: mov     eax, ds:0B30AACh
0x5D520B: xor     eax, esp
0x5D520D: mov     [esp+110h+var_4], eax
0x5D5214: push    ebx
0x5D5215: push    ebp
0x5D5216: mov     ebp, [esp+118h+arg_0]
0x5D521D: push    esi
0x5D521E: push    edi; a3
0x5D521F: push    418h
0x5D5224: mov     [esp+124h+var_110], ebp
0x5D5228: call    Menu_GetOpenMenuTile
0x5D522D: add     esp, 4
0x5D5230: test    eax, eax
0x5D5232: jz      short loc_5D523E
0x5D5234: mov     edx, [eax]
0x5D5236: mov     ecx, eax
0x5D5238: mov     eax, [edx]
0x5D523A: push    1; a3
0x5D523C: call    eax
0x5D523E: push    1; arg1
0x5D5240: push    0; canCreate
0x5D5242: call    InterfaceManager_GetSingleton
0x5D5247: add     esp, 8
0x5D524A: mov     esi, eax
0x5D524C: call    InterfaceManager_GetDepth
0x5D5251: fstp    [esp+120h+var_10C]
0x5D5255: mov     ecx, [esi+68h]; TileWindow *
0x5D5258: push    offset aDataMenusDialo; "Data\\Menus\\dialog\\SigilStone.xml"
0x5D525D: call    Menu_LoadXML
0x5D5262: mov     ebx, eax
0x5D5264: mov     ecx, ebx
0x5D5266: call    Tile_GetParentMenu
0x5D526B: push    1; arg1
0x5D526D: push    0; canCreate
0x5D526F: mov     edi, eax
0x5D5271: call    InterfaceManager_GetSingleton
0x5D5276: mov     cl, [eax+8]
0x5D5279: add     esp, 8
0x5D527C: test    edi, edi
0x5D527E: mov     ds:0B3B720h, cl
0x5D5284: jz      loc_5D5448
0x5D528A: mov     edx, [edi]
0x5D528C: mov     eax, [edx+34h]
0x5D528F: mov     ecx, edi
0x5D5291: call    eax
0x5D5293: cmp     eax, 418h
0x5D5298: jnz     loc_5D5438
0x5D529E: push    0; int
0x5D52A0: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D52A5: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D52AA: push    0; int
0x5D52AC: push    ebx; void *
0x5D52AD: call    OblivionDynamicCast
0x5D52B2: add     esp, 14h
0x5D52B5: push    eax
0x5D52B6: mov     ecx, edi
0x5D52B8: call    Menu_SetTileMenu
0x5D52BD: push    0; int
0x5D52BF: push    offset ??_R0?AVSigilStoneMenu@@@8; struct TypeDescriptor *
0x5D52C4: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D52C9: push    0; int
0x5D52CB: push    edi; void *
0x5D52CC: call    OblivionDynamicCast
0x5D52D1: mov     esi, eax
0x5D52D3: add     esp, 14h
0x5D52D6: mov     ecx, esi
0x5D52D8: mov     [esi+28h], ebp
0x5D52DB: call    sub_5D3F70
0x5D52E0: test    al, al
0x5D52E2: jnz     short loc_5D52F6
0x5D52E4: push    offset aSigilstoneMenu; "SigilStone Menu Creation Failed... Are "...
0x5D52E9: call    PrintError
0x5D52EE: add     esp, 4
0x5D52F1: jmp     loc_5D5448
0x5D52F6: push    0FA5h
0x5D52FB: mov     ecx, ebx
0x5D52FD: call    Tile_GetFloat
0x5D5302: fcomp   dword ptr ds:0A69770h
0x5D5308: fnstsw  ax
0x5D530A: test    ah, 44h
0x5D530D: jnp     short loc_5D5328
0x5D530F: push    0FA5h
0x5D5314: mov     ecx, ebx
0x5D5316: call    Tile_GetFloat
0x5D531B: fcomp   qword ptr ds:0A69778h
0x5D5321: fnstsw  ax
0x5D5323: test    ah, 44h
0x5D5326: jp      short loc_5D533C
0x5D5328: fld     [esp+120h+var_10C]
0x5D532C: push    ecx
0x5D532D: fstp    [esp+124h+var_124]; a3
0x5D5330: push    0FABh; a2
0x5D5335: mov     ecx, ebx; this
0x5D5337: call    Tile_SetFloat
0x5D533C: mov     dword ptr ds:0B3B718h, 0
0x5D5346: call    EffectSetting_Create
0x5D534B: mov     ebp, eax
0x5D534D: or      dword ptr [ebp+58h], 201000h
0x5D5354: mov     ecx, [esi+6Ch]
0x5D5357: test    ecx, ecx
0x5D5359: jz      short loc_5D536C
0x5D535B: call    BSSimpleList_Clear
0x5D5360: mov     ecx, [esi+6Ch]
0x5D5363: push    ecx
0x5D5364: call    FormHeapFree
0x5D5369: add     esp, 4
0x5D536C: push    1
0x5D536E: push    0
0x5D5370: push    0
0x5D5372: push    0
0x5D5374: call    EffectSettingCollection_FilteredEffectList
0x5D5379: add     esp, 10h
0x5D537C: mov     [esi+6Ch], eax
0x5D537F: mov     ecx, ds:0B333C4h
0x5D5385: push    eax
0x5D5386: call    sub_663AA0
0x5D538B: mov     edx, [esp+120h+var_110]
0x5D538F: mov     eax, [edx+28h]
0x5D5392: test    eax, eax
0x5D5394: jnz     short loc_5D539B
0x5D5396: mov     eax, offset EmptyString
0x5D539B: mov     ecx, [esi+60h]
0x5D539E: push    eax
0x5D539F: push    0FAEh
0x5D53A4: call    Tile_SetString
0x5D53A9: mov     ecx, [esi+28h]
0x5D53AC: push    0
0x5D53AE: push    3
0x5D53B0: add     ecx, 78h ; 'x'
0x5D53B3: call    EffectItemList_GetStrongestItem
0x5D53B8: test    eax, eax
0x5D53BA: jz      short loc_5D5405
0x5D53BC: mov     eax, [esi+28h]
0x5D53BF: add     eax, 48h ; 'H'
0x5D53C2: mov     eax, [eax+4]
0x5D53C5: test    eax, eax
0x5D53C7: jnz     short loc_5D53CE
0x5D53C9: mov     eax, offset EmptyString
0x5D53CE: push    eax
0x5D53CF: push    offset aIcons; "Icons"
0x5D53D4: push    offset aMenus_1; "Menus"
0x5D53D9: lea     eax, [esp+12Ch+var_108]
0x5D53DD: push    offset aSSS_1; "%s\\%s\\%s"
0x5D53E2: push    eax
0x5D53E3: call    __sprintf
0x5D53E8: add     esp, 14h
0x5D53EB: lea     ecx, [esp+120h+var_108]
0x5D53EF: push    ecx
0x5D53F0: mov     ecx, [esi+64h]
0x5D53F3: push    0FE6h
0x5D53F8: call    Tile_SetString
0x5D53FD: fld     dword ptr ds:0A379B4h
0x5D5403: jmp     short loc_5D5407
0x5D5405: fld1
0x5D5407: push    ecx
0x5D5408: mov     ecx, [esi+64h]; this
0x5D540B: fstp    [esp+124h+var_124]; a3
0x5D540E: push    0FA1h; a2
0x5D5413: call    Tile_SetFloat
0x5D5418: mov     edx, [ebp+0]
0x5D541B: mov     eax, [edx+10h]
0x5D541E: push    1
0x5D5420: mov     ecx, ebp
0x5D5422: call    eax
0x5D5424: mov     ecx, esi
0x5D5426: call    sub_5D4900
0x5D542B: push    0; char
0x5D542D: mov     ecx, edi; int
0x5D542F: call    EnableMenu
0x5D5434: mov     eax, ebx
0x5D5436: jmp     short loc_5D544A
0x5D5438: cmp     dword ptr [edi+4], 0
0x5D543C: jz      short loc_5D5448
0x5D543E: mov     edx, [edi]
0x5D5440: mov     eax, [edx]
0x5D5442: push    1
0x5D5444: mov     ecx, edi
0x5D5446: call    eax
0x5D5448: xor     eax, eax
0x5D544A: mov     ecx, [esp+120h+var_4]
0x5D5451: pop     edi
0x5D5452: pop     esi
0x5D5453: pop     ebp
0x5D5454: pop     ebx
0x5D5455: xor     ecx, esp
0x5D5457: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D545C: add     esp, 110h
0x5D5462: retn
