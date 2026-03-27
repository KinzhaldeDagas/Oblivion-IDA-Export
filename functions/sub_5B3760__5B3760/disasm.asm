0x5B3760: push    ecx; a3
0x5B3761: push    3FEh
0x5B3766: call    Menu_GetOpenMenuTile
0x5B376B: add     esp, 4
0x5B376E: test    eax, eax
0x5B3770: jz      short loc_5B377C
0x5B3772: mov     edx, [eax]
0x5B3774: mov     ecx, eax
0x5B3776: mov     eax, [edx]
0x5B3778: push    1
0x5B377A: call    eax
0x5B377C: push    esi; a3
0x5B377D: push    edi; a3
0x5B377E: push    1; arg1
0x5B3780: push    0; canCreate
0x5B3782: call    InterfaceManager_GetSingleton
0x5B3787: add     esp, 8
0x5B378A: mov     esi, eax
0x5B378C: call    InterfaceManager_GetDepth
0x5B3791: fstp    [esp+0Ch+var_4]; a3
0x5B3795: mov     ecx, [esi+68h]; TileWindow *
0x5B3798: push    offset aDataMenusMainM; "Data\\Menus\\Main\\magic_menu.xml"
0x5B379D: call    Menu_LoadXML
0x5B37A2: mov     esi, eax
0x5B37A4: mov     ecx, esi
0x5B37A6: call    Tile_GetParentMenu
0x5B37AB: mov     edi, eax
0x5B37AD: push    edi; int
0x5B37AE: push    offset aDataMenusMainM; "Data\\Menus\\Main\\magic_menu.xml"
0x5B37B3: call    sub_584670
0x5B37B8: add     esp, 8
0x5B37BB: test    edi, edi
0x5B37BD: jz      loc_5B397F
0x5B37C3: mov     edx, [edi]
0x5B37C5: mov     eax, [edx+34h]
0x5B37C8: mov     ecx, edi
0x5B37CA: call    eax
0x5B37CC: cmp     eax, 3FEh
0x5B37D1: jnz     loc_5B396F
0x5B37D7: push    ebx; a3
0x5B37D8: push    0; int
0x5B37DA: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5B37DF: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B37E4: push    0; int
0x5B37E6: push    esi; void *
0x5B37E7: call    OblivionDynamicCast
0x5B37EC: add     esp, 14h
0x5B37EF: push    eax
0x5B37F0: mov     ecx, edi
0x5B37F2: call    Menu_SetTileMenu
0x5B37F7: push    0; int
0x5B37F9: push    offset ??_R0?AVMagicMenu@@@8; struct TypeDescriptor *
0x5B37FE: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3803: push    0; int
0x5B3805: push    edi; void *
0x5B3806: call    OblivionDynamicCast
0x5B380B: mov     ebx, eax
0x5B380D: add     esp, 14h
0x5B3810: cmp     dword ptr [ebx+2Ch], 0
0x5B3814: jz      short loc_5B3828
0x5B3816: cmp     dword ptr [ebx+28h], 0
0x5B381A: jz      short loc_5B3828
0x5B381C: cmp     dword ptr [ebx+30h], 0
0x5B3820: jz      short loc_5B3828
0x5B3822: cmp     dword ptr [ebx+34h], 0
0x5B3826: jnz     short loc_5B383C
0x5B3828: push    offset aMagicMenuCreat; "Magic Menu Creation Failed... Are your "...
0x5B382D: call    PrintError
0x5B3832: add     esp, 4
0x5B3835: pop     ebx
0x5B3836: pop     edi
0x5B3837: xor     eax, eax
0x5B3839: pop     esi
0x5B383A: pop     ecx
0x5B383B: retn
0x5B383C: push    0FA5h
0x5B3841: mov     ecx, esi
0x5B3843: call    Tile_GetFloat
0x5B3848: fcomp   dword ptr ds:0A69770h
0x5B384E: fnstsw  ax
0x5B3850: test    ah, 44h
0x5B3853: jnp     short loc_5B386E
0x5B3855: push    0FA5h
0x5B385A: mov     ecx, esi
0x5B385C: call    Tile_GetFloat
0x5B3861: fcomp   qword ptr ds:0A69778h
0x5B3867: fnstsw  ax
0x5B3869: test    ah, 44h
0x5B386C: jp      short loc_5B3882
0x5B386E: fld     [esp+10h+var_4]
0x5B3872: push    ecx
0x5B3873: fstp    [esp+14h+var_14]; a3
0x5B3876: push    0FABh; a2
0x5B387B: mov     ecx, esi; this
0x5B387D: call    Tile_SetFloat
0x5B3882: fldz
0x5B3884: push    ecx
0x5B3885: mov     ecx, [ebx+30h]; this
0x5B3888: fstp    [esp+14h+var_14]; a3
0x5B388B: push    0FB3h; a2
0x5B3890: call    Tile_SetFloat
0x5B3895: fld     dword ptr ds:0A53954h
0x5B389B: push    ecx
0x5B389C: fstp    [esp+14h+var_14]; a3
0x5B389F: push    0FAFh; a2
0x5B38A4: mov     ecx, esi; this
0x5B38A6: call    Tile_SetFloat
0x5B38AB: fld     dword ptr ds:0A53954h
0x5B38B1: push    ecx
0x5B38B2: fstp    [esp+14h+var_14]; a3
0x5B38B5: push    0FB0h; a2
0x5B38BA: mov     ecx, esi; this
0x5B38BC: call    Tile_SetFloat
0x5B38C1: fld     dword ptr ds:0A53954h
0x5B38C7: push    ecx
0x5B38C8: fstp    [esp+14h+var_14]; a3
0x5B38CB: push    0FB1h; a2
0x5B38D0: mov     ecx, esi; this
0x5B38D2: call    Tile_SetFloat
0x5B38D7: fld     dword ptr ds:0A53954h
0x5B38DD: push    ecx
0x5B38DE: fstp    [esp+14h+var_14]; a3
0x5B38E1: push    0FB2h; a2
0x5B38E6: mov     ecx, esi; this
0x5B38E8: call    Tile_SetFloat
0x5B38ED: fldz
0x5B38EF: push    ecx
0x5B38F0: fstp    [esp+14h+var_14]; a3
0x5B38F3: push    0FB3h; a2
0x5B38F8: mov     ecx, esi; this
0x5B38FA: call    Tile_SetFloat
0x5B38FF: push    offset word_A36430
0x5B3904: push    0FB4h
0x5B3909: mov     ecx, esi
0x5B390B: call    Tile_SetString
0x5B3910: call    sub_5B2B70
0x5B3915: push    1; arg1
0x5B3917: push    0; canCreate
0x5B3919: call    InterfaceManager_GetSingleton
0x5B391E: mov     al, [eax+0Ch]
0x5B3921: add     esp, 8
0x5B3924: cmp     al, 0FFh
0x5B3926: jz      short loc_5B3935
0x5B3928: movsx   ecx, al
0x5B392B: push    0
0x5B392D: push    ecx
0x5B392E: mov     ecx, ebx
0x5B3930: call    sub_5B2060
0x5B3935: fld     dword ptr ds:0A6B328h
0x5B393B: push    ecx
0x5B393C: mov     ecx, [ebx+30h]; this
0x5B393F: fstp    [esp+14h+var_14]; a3
0x5B3942: push    0FB3h; a2
0x5B3947: call    Tile_SetFloat
0x5B394C: fldz
0x5B394E: push    ecx
0x5B394F: fstp    [esp+14h+var_14]; a3
0x5B3952: mov     ecx, [ebx+30h]; this
0x5B3955: push    0FB3h; a2
0x5B395A: call    Tile_SetFloat
0x5B395F: push    1; char
0x5B3961: mov     ecx, edi; int
0x5B3963: call    EnableMenu
0x5B3968: pop     ebx
0x5B3969: pop     edi
0x5B396A: mov     eax, esi
0x5B396C: pop     esi
0x5B396D: pop     ecx
0x5B396E: retn
0x5B396F: cmp     dword ptr [edi+4], 0
0x5B3973: jz      short loc_5B397F
0x5B3975: mov     edx, [edi]
0x5B3977: mov     eax, [edx]
0x5B3979: push    1
0x5B397B: mov     ecx, edi
0x5B397D: call    eax
0x5B397F: pop     edi
0x5B3980: xor     eax, eax
0x5B3982: pop     esi
0x5B3983: pop     ecx
0x5B3984: retn
