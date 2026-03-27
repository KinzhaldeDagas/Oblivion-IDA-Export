0x5D6390: sub     esp, 10h
0x5D6393: push    ebx
0x5D6394: push    ebp; a3
0x5D6395: push    esi; a3
0x5D6396: push    edi; a3
0x5D6397: push    408h
0x5D639C: call    Menu_GetOpenMenuTile
0x5D63A1: xor     ebp, ebp
0x5D63A3: add     esp, 4
0x5D63A6: cmp     eax, ebp
0x5D63A8: jz      short loc_5D63B4
0x5D63AA: mov     edx, [eax]
0x5D63AC: mov     ecx, eax
0x5D63AE: mov     eax, [edx]
0x5D63B0: push    1; a3
0x5D63B2: call    eax
0x5D63B4: push    1; arg1
0x5D63B6: push    ebp; canCreate
0x5D63B7: call    InterfaceManager_GetSingleton
0x5D63BC: add     esp, 8
0x5D63BF: mov     esi, eax
0x5D63C1: call    InterfaceManager_GetDepth
0x5D63C6: fstp    [esp+24h+var_C]
0x5D63CA: mov     ecx, [esi+68h]; TileWindow *
0x5D63CD: push    offset aDataMenusCha_0; "Data\\Menus\\CharGen\\skills_menu.xml"
0x5D63D2: call    Menu_LoadXML
0x5D63D7: mov     ebx, eax
0x5D63D9: mov     ecx, ebx
0x5D63DB: mov     [esp+24h+var_14], ebx
0x5D63DF: call    Tile_GetParentMenu
0x5D63E4: mov     edi, eax
0x5D63E6: cmp     edi, ebp
0x5D63E8: mov     [esp+24h+var_10], edi
0x5D63EC: jz      loc_5D685C
0x5D63F2: mov     edx, [edi]
0x5D63F4: mov     eax, [edx+34h]
0x5D63F7: mov     ecx, edi
0x5D63F9: call    eax
0x5D63FB: cmp     eax, 408h
0x5D6400: jnz     loc_5D684D
0x5D6406: push    ebp; int
0x5D6407: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D640C: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D6411: push    ebp; int
0x5D6412: push    ebx; void *
0x5D6413: call    OblivionDynamicCast
0x5D6418: add     esp, 14h
0x5D641B: push    eax
0x5D641C: mov     ecx, edi
0x5D641E: call    Menu_SetTileMenu
0x5D6423: push    ebp; int
0x5D6424: push    offset ??_R0?AVSkillsMenu@@@8; struct TypeDescriptor *
0x5D6429: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D642E: push    ebp; int
0x5D642F: push    edi; void *
0x5D6430: call    OblivionDynamicCast
0x5D6435: mov     esi, eax
0x5D6437: add     esp, 14h
0x5D643A: cmp     [esi+28h], ebp
0x5D643D: jz      short loc_5D6453
0x5D643F: cmp     [esi+2Ch], ebp
0x5D6442: jz      short loc_5D6453
0x5D6444: cmp     [esi+30h], ebp
0x5D6447: jz      short loc_5D6453
0x5D6449: cmp     [esi+34h], ebp
0x5D644C: jz      short loc_5D6453
0x5D644E: cmp     [esi+38h], ebp
0x5D6451: jnz     short loc_5D646A
0x5D6453: push    offset aAttributeMenuC; "Attribute Menu Creation Failed... Are y"...
0x5D6458: call    PrintError
0x5D645D: add     esp, 4
0x5D6460: pop     edi
0x5D6461: pop     esi
0x5D6462: pop     ebp
0x5D6463: xor     eax, eax
0x5D6465: pop     ebx
0x5D6466: add     esp, 10h
0x5D6469: retn
0x5D646A: push    0FA5h
0x5D646F: mov     ecx, ebx
0x5D6471: call    Tile_GetFloat
0x5D6476: fcomp   dword ptr ds:0A69770h
0x5D647C: fnstsw  ax
0x5D647E: test    ah, 44h
0x5D6481: jnp     short loc_5D649C
0x5D6483: push    0FA5h
0x5D6488: mov     ecx, ebx
0x5D648A: call    Tile_GetFloat
0x5D648F: fcomp   qword ptr ds:0A69778h
0x5D6495: fnstsw  ax
0x5D6497: test    ah, 44h
0x5D649A: jp      short loc_5D64B0
0x5D649C: fld     [esp+24h+var_C]
0x5D64A0: push    ecx
0x5D64A1: fstp    [esp+28h+a2]; a3
0x5D64A4: push    0FABh; a2
0x5D64A9: mov     ecx, ebx; this
0x5D64AB: call    Tile_SetFloat
0x5D64B0: push    406h
0x5D64B5: call    Menu_GetOpenMenuTile
0x5D64BA: add     esp, 4
0x5D64BD: cmp     eax, ebp
0x5D64BF: jz      short loc_5D64DF
0x5D64C1: push    ebp; int
0x5D64C2: push    offset ??_R0?AVClassMenu@@@8; struct TypeDescriptor *
0x5D64C7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D64CC: push    ebp; int
0x5D64CD: mov     ecx, eax
0x5D64CF: call    Tile_GetParentMenu
0x5D64D4: push    eax; void *
0x5D64D5: call    OblivionDynamicCast
0x5D64DA: add     esp, 14h
0x5D64DD: jmp     short loc_5D64E1
0x5D64DF: xor     eax, eax
0x5D64E1: cmp     eax, ebp
0x5D64E3: push    ecx
0x5D64E4: mov     [esi+4Ch], eax
0x5D64E7: mov     ecx, ebx; this
0x5D64E9: jz      short loc_5D6507
0x5D64EB: fld     dword ptr ds:0A379B4h
0x5D64F1: fstp    [esp+28h+a2]; a3
0x5D64F4: push    0FB6h; a2
0x5D64F9: call    Tile_SetFloat
0x5D64FE: mov     ecx, ds:0B38CF0h
0x5D6504: push    ecx
0x5D6505: jmp     short loc_5D651D
0x5D6507: fld1
0x5D6509: fstp    [esp+28h+a2]; a3
0x5D650C: push    0FB6h; a2
0x5D6511: call    Tile_SetFloat
0x5D6516: mov     edx, ds:0B38D38h
0x5D651C: push    edx
0x5D651D: mov     ecx, [esi+34h]
0x5D6520: push    0FAEh
0x5D6525: call    Tile_SetString
0x5D652A: mov     eax, [esp+24h]
0x5D652E: mov     [esi+40h], eax
0x5D6531: mov     eax, [esp+24h+arg_0]
0x5D6535: cmp     eax, ebp
0x5D6537: mov     [esi+3Ch], eax
0x5D653A: jnz     loc_5D6646
0x5D6540: fldz
0x5D6542: push    ecx
0x5D6543: fstp    [esp+28h+a2]; a3
0x5D6546: mov     ecx, ebx; this
0x5D6548: push    0FB1h; a2
0x5D654D: call    Tile_SetFloat
0x5D6552: cmp     [esi+4Ch], ebp
0x5D6555: jz      short sub_5D6573
0x5D6557: mov     ecx, ds:0B38630h
0x5D655D: push    ecx
0x5D655E: push    0FB3h
0x5D6563: mov     ecx, ebx
0x5D6565: call    Tile_SetString
0x5D656A: mov     dword ptr [esi+44h], 7
0x5D6571: jmp     short loc_5D6585
