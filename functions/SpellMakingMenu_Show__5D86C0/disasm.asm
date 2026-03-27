0x5D86C0: push    ecx
0x5D86C1: push    411h
0x5D86C6: call    Menu_GetOpenMenuTile
0x5D86CB: add     esp, 4
0x5D86CE: test    eax, eax
0x5D86D0: jz      short loc_5D86DC
0x5D86D2: mov     edx, [eax]
0x5D86D4: mov     ecx, eax
0x5D86D6: mov     eax, [edx]
0x5D86D8: push    1
0x5D86DA: call    eax
0x5D86DC: push    ebp
0x5D86DD: push    esi
0x5D86DE: push    1; arg1
0x5D86E0: push    0; canCreate
0x5D86E2: call    InterfaceManager_GetSingleton
0x5D86E7: add     esp, 8
0x5D86EA: mov     esi, eax
0x5D86EC: call    InterfaceManager_GetDepth
0x5D86F1: fstp    [esp+0Ch+var_4]
0x5D86F5: mov     ecx, [esi+68h]; TileWindow *
0x5D86F8: push    offset aDataMenusDia_7; "Data\\Menus\\dialog\\Spellmaking.xml"
0x5D86FD: call    Menu_LoadXML
0x5D8702: mov     ebp, eax
0x5D8704: mov     ecx, ebp
0x5D8706: call    Tile_GetParentMenu
0x5D870B: mov     esi, eax
0x5D870D: test    esi, esi
0x5D870F: jz      loc_5D884B
0x5D8715: mov     edx, [esi]
0x5D8717: mov     eax, [edx+34h]
0x5D871A: mov     ecx, esi
0x5D871C: call    eax
0x5D871E: cmp     eax, 411h
0x5D8723: jnz     loc_5D883B
0x5D8729: push    ebx
0x5D872A: push    edi; a3
0x5D872B: push    0Fh; int
0x5D872D: call    sub_57DE50
0x5D8732: push    0; int
0x5D8734: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D8739: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D873E: push    0; int
0x5D8740: push    ebp; void *
0x5D8741: call    OblivionDynamicCast
0x5D8746: add     esp, 18h
0x5D8749: push    eax
0x5D874A: mov     ecx, esi
0x5D874C: call    Menu_SetTileMenu
0x5D8751: push    0; int
0x5D8753: push    offset ??_R0?AVSpellMakingMenu@@@8; struct TypeDescriptor *
0x5D8758: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D875D: push    0; int
0x5D875F: push    esi; void *
0x5D8760: call    OblivionDynamicCast
0x5D8765: add     esp, 14h
0x5D8768: push    0FA5h
0x5D876D: mov     ecx, ebp
0x5D876F: mov     ebx, eax
0x5D8771: call    Tile_GetFloat
0x5D8776: fcomp   dword ptr ds:0A69770h
0x5D877C: fnstsw  ax
0x5D877E: test    ah, 44h
0x5D8781: jnp     short loc_5D879C
0x5D8783: push    0FA5h
0x5D8788: mov     ecx, ebp
0x5D878A: call    Tile_GetFloat
0x5D878F: fcomp   qword ptr ds:0A69778h
0x5D8795: fnstsw  ax
0x5D8797: test    ah, 44h
0x5D879A: jp      short loc_5D87B0
0x5D879C: fld     [esp+14h+var_4]
0x5D87A0: push    ecx
0x5D87A1: fstp    [esp+18h+a3]; a3
0x5D87A4: push    0FABh; a2
0x5D87A9: mov     ecx, ebp; this
0x5D87AB: call    Tile_SetFloat
0x5D87B0: call    EffectSetting_Create
0x5D87B5: mov     edi, eax
0x5D87B7: or      dword ptr [edi+58h], 200800h
0x5D87BE: mov     ecx, [ebx+58h]
0x5D87C1: test    ecx, ecx
0x5D87C3: jz      short loc_5D87D6
0x5D87C5: call    BSSimpleList_Clear
0x5D87CA: mov     ecx, [ebx+58h]
0x5D87CD: push    ecx
0x5D87CE: call    FormHeapFree
0x5D87D3: add     esp, 4
0x5D87D6: push    1
0x5D87D8: push    0
0x5D87DA: push    0
0x5D87DC: push    edi
0x5D87DD: call    EffectSettingCollection_FilteredEffectList
0x5D87E2: add     esp, 10h
0x5D87E5: mov     [ebx+58h], eax
0x5D87E8: mov     ecx, ds:0B333C4h
0x5D87EE: push    eax
0x5D87EF: call    sub_663AA0
0x5D87F4: mov     edx, [edi]
0x5D87F6: mov     eax, [edx+10h]
0x5D87F9: push    1; a3
0x5D87FB: mov     ecx, edi
0x5D87FD: call    eax
0x5D87FF: mov     ecx, ds:0B333C4h
0x5D8805: call    sub_5E4420
0x5D880A: mov     [esp+14h+var_4], eax
0x5D880E: fild    [esp+14h+var_4]
0x5D8812: push    ecx
0x5D8813: mov     ecx, [ebx+4]; this
0x5D8816: fstp    [esp+18h+a3]; a3
0x5D8819: push    0FB5h; a2
0x5D881E: call    Tile_SetFloat
0x5D8823: mov     ecx, ebx
0x5D8825: call    sub_5D8180
0x5D882A: push    0; char
0x5D882C: mov     ecx, esi; int
0x5D882E: call    EnableMenu
0x5D8833: pop     edi
0x5D8834: pop     ebx
0x5D8835: pop     esi
0x5D8836: mov     eax, ebp
0x5D8838: pop     ebp
0x5D8839: pop     ecx
0x5D883A: retn
0x5D883B: cmp     dword ptr [esi+4], 0
0x5D883F: jz      short loc_5D884B
0x5D8841: mov     edx, [esi]
0x5D8843: mov     eax, [edx]
0x5D8845: push    1
0x5D8847: mov     ecx, esi
0x5D8849: call    eax
0x5D884B: pop     esi
0x5D884C: xor     eax, eax
0x5D884E: pop     ebp
0x5D884F: pop     ecx
0x5D8850: retn
