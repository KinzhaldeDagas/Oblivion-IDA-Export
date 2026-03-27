0x59D680: sub     esp, 10h
0x59D683: push    417h
0x59D688: call    Menu_GetOpenMenuTile
0x59D68D: add     esp, 4
0x59D690: test    eax, eax
0x59D692: jz      short loc_59D69E
0x59D694: mov     edx, [eax]
0x59D696: mov     ecx, eax
0x59D698: mov     eax, [edx]
0x59D69A: push    1
0x59D69C: call    eax
0x59D69E: push    ebx; a3
0x59D69F: push    esi; a3
0x59D6A0: push    edi; a3
0x59D6A1: push    1; arg1
0x59D6A3: push    0; canCreate
0x59D6A5: call    InterfaceManager_GetSingleton
0x59D6AA: add     esp, 8
0x59D6AD: mov     ebx, eax
0x59D6AF: call    InterfaceManager_GetDepth
0x59D6B4: fstp    [esp+1Ch+var_10]
0x59D6B8: mov     ecx, [ebx+68h]; TileWindow *
0x59D6BB: push    offset aDataMenusOpt_8; "Data\\Menus\\Options\\credits_menu.xml"
0x59D6C0: call    Menu_LoadXML
0x59D6C5: mov     edi, eax
0x59D6C7: mov     ecx, edi
0x59D6C9: call    Tile_GetParentMenu
0x59D6CE: mov     esi, eax
0x59D6D0: test    esi, esi
0x59D6D2: jz      loc_59D880
0x59D6D8: mov     edx, [esi]
0x59D6DA: mov     eax, [edx+34h]
0x59D6DD: mov     ecx, esi
0x59D6DF: call    eax
0x59D6E1: cmp     eax, 417h
0x59D6E6: jnz     loc_59D870
0x59D6EC: push    0; int
0x59D6EE: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x59D6F3: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x59D6F8: push    0; int
0x59D6FA: push    edi; void *
0x59D6FB: call    OblivionDynamicCast
0x59D700: add     esp, 14h
0x59D703: push    eax
0x59D704: mov     ecx, esi
0x59D706: call    Menu_SetTileMenu
0x59D70B: push    0; int
0x59D70D: push    offset ??_R0?AVCreditsMenu@@@8; struct TypeDescriptor *
0x59D712: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59D717: push    0; int
0x59D719: push    esi; void *
0x59D71A: call    OblivionDynamicCast
0x59D71F: mov     esi, eax
0x59D721: add     esp, 14h
0x59D724: cmp     dword ptr [esi+28h], 0
0x59D728: jnz     short loc_59D740
0x59D72A: push    offset aCreditsMenuCre; "Credits Menu Creation Failed... Are you"...
0x59D72F: call    PrintError
0x59D734: add     esp, 4
0x59D737: pop     edi
0x59D738: pop     esi
0x59D739: xor     al, al
0x59D73B: pop     ebx
0x59D73C: add     esp, 10h
0x59D73F: retn
0x59D740: cmp     byte ptr ds:0B3B290h, 0
0x59D747: jz      short loc_59D7A5
0x59D749: push    offset aBackground; "background"
0x59D74E: mov     ecx, edi
0x59D750: call    sub_589930
0x59D755: test    eax, eax
0x59D757: jz      short loc_59D76B
0x59D759: fldz
0x59D75B: push    ecx
0x59D75C: fstp    [esp+20h+var_20]; a3
0x59D75F: mov     ecx, eax; this
0x59D761: push    0FA7h; a2
0x59D766: call    Tile_SetFloat
0x59D76B: push    414h
0x59D770: call    Menu_GetOpenMenuTile
0x59D775: add     esp, 4
0x59D778: test    eax, eax
0x59D77A: jz      short loc_59D7A5
0x59D77C: push    0; int
0x59D77E: push    offset ??_R0?AVMainMenu@@@8; struct TypeDescriptor *
0x59D783: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59D788: push    0; int
0x59D78A: mov     ecx, eax
0x59D78C: call    Tile_GetParentMenu
0x59D791: push    eax; void *
0x59D792: call    OblivionDynamicCast
0x59D797: add     esp, 14h
0x59D79A: test    eax, eax
0x59D79C: jz      short loc_59D7A5
0x59D79E: mov     ecx, eax
0x59D7A0: call    sub_5B5A80
0x59D7A5: push    0FA5h
0x59D7AA: mov     ecx, edi
0x59D7AC: call    Tile_GetFloat
0x59D7B1: fcomp   dword ptr ds:0A69770h
0x59D7B7: fnstsw  ax
0x59D7B9: test    ah, 44h
0x59D7BC: jnp     short loc_59D7D7
0x59D7BE: push    0FA5h
0x59D7C3: mov     ecx, edi
0x59D7C5: call    Tile_GetFloat
0x59D7CA: fcomp   qword ptr ds:0A69778h
0x59D7D0: fnstsw  ax
0x59D7D2: test    ah, 44h
0x59D7D5: jp      short loc_59D7EB
0x59D7D7: fld     [esp+1Ch+var_10]
0x59D7DB: push    ecx
0x59D7DC: fstp    [esp+20h+var_20]; a3
0x59D7DF: push    0FABh; a2
0x59D7E4: mov     ecx, edi; this
0x59D7E6: call    Tile_SetFloat
0x59D7EB: xor     ecx, ecx
0x59D7ED: cmp     byte ptr [ebx+8], 1
0x59D7F1: setnz   cl
0x59D7F4: mov     [esp+1Ch+var_10], ecx
0x59D7F8: fild    [esp+1Ch+var_10]
0x59D7FC: push    ecx
0x59D7FD: mov     ecx, edi; this
0x59D7FF: fstp    [esp+20h+var_20]; a3
0x59D802: push    0FAEh; a2
0x59D807: call    Tile_SetFloat
0x59D80C: mov     ecx, esi
0x59D80E: call    sub_59D030
0x59D813: fild    dword ptr ds:0B06C50h
0x59D819: fidiv   dword ptr ds:0B06C4Ch
0x59D81F: fcomp   qword ptr ds:0A31C70h
0x59D825: fnstsw  ax
0x59D827: test    ah, 44h
0x59D82A: jnp     short loc_59D867
0x59D82C: mov     edx, [esi+28h]
0x59D82F: mov     ecx, [edx+24h]; this
0x59D832: mov     eax, [ecx+54h]
0x59D835: mov     edx, [ecx+5Ch]
0x59D838: mov     [esp+1Ch+var_C], eax
0x59D83C: fld     [esp+1Ch+var_C]
0x59D840: fadd    qword ptr ds:0A6B808h
0x59D846: mov     eax, [ecx+58h]
0x59D849: push    0; a3
0x59D84B: push    ecx
0x59D84C: fstp    [esp+24h+var_C]
0x59D850: mov     esi, [esp+24h+var_C]
0x59D854: fldz
0x59D856: mov     [ecx+54h], esi
0x59D859: mov     [ecx+58h], eax
0x59D85C: fstp    [esp+24h+a2]; a2
0x59D85F: mov     [ecx+5Ch], edx
0x59D862: call    NiAVObject_UpdateNiAVObject
0x59D867: pop     edi
0x59D868: pop     esi
0x59D869: mov     al, 1
0x59D86B: pop     ebx
0x59D86C: add     esp, 10h
0x59D86F: retn
0x59D870: cmp     dword ptr [esi+4], 0
0x59D874: jz      short loc_59D880
0x59D876: mov     edx, [esi]
0x59D878: mov     eax, [edx]
0x59D87A: push    1
0x59D87C: mov     ecx, esi
0x59D87E: call    eax
0x59D880: pop     edi
0x59D881: pop     esi
0x59D882: xor     al, al
0x59D884: pop     ebx
0x59D885: add     esp, 10h
0x59D888: retn
