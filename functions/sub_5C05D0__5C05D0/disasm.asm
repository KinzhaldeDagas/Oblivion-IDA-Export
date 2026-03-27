0x5C05D0: sub     esp, 8
0x5C05D3: push    3F8h
0x5C05D8: call    Menu_GetOpenMenuTile
0x5C05DD: add     esp, 4
0x5C05E0: test    eax, eax
0x5C05E2: jz      short loc_5C05EE
0x5C05E4: mov     edx, [eax]
0x5C05E6: mov     ecx, eax
0x5C05E8: mov     eax, [edx]
0x5C05EA: push    1; a3
0x5C05EC: call    eax
0x5C05EE: push    ebx; a3
0x5C05EF: push    esi; a3
0x5C05F0: push    edi; a3
0x5C05F1: push    1; arg1
0x5C05F3: push    0; canCreate
0x5C05F5: call    InterfaceManager_GetSingleton
0x5C05FA: add     esp, 8
0x5C05FD: mov     esi, eax
0x5C05FF: call    InterfaceManager_GetDepth
0x5C0604: fstp    [esp+14h+var_4]; a3
0x5C0608: mov     ecx, [esi+68h]; TileWindow *
0x5C060B: push    offset aDataMenusQuant; "Data\\Menus\\quantity_menu.xml"
0x5C0610: call    Menu_LoadXML
0x5C0615: mov     ebx, eax
0x5C0617: mov     ecx, ebx
0x5C0619: call    Tile_GetParentMenu
0x5C061E: mov     edi, eax
0x5C0620: test    edi, edi
0x5C0622: jz      loc_5C07BE
0x5C0628: mov     edx, [edi]
0x5C062A: mov     eax, [edx+34h]
0x5C062D: mov     ecx, edi
0x5C062F: call    eax
0x5C0631: cmp     eax, 3F8h
0x5C0636: jnz     loc_5C07AE
0x5C063C: push    0; int
0x5C063E: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5C0643: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5C0648: push    0; int
0x5C064A: push    ebx; void *
0x5C064B: call    OblivionDynamicCast
0x5C0650: add     esp, 14h
0x5C0653: push    eax
0x5C0654: mov     ecx, edi
0x5C0656: call    Menu_SetTileMenu
0x5C065B: push    0; int
0x5C065D: push    offset ??_R0?AVQuantityMenu@@@8; struct TypeDescriptor *
0x5C0662: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C0667: push    0; int
0x5C0669: push    edi; void *
0x5C066A: call    OblivionDynamicCast
0x5C066F: mov     esi, eax
0x5C0671: add     esp, 14h
0x5C0674: cmp     dword ptr [esi+2Ch], 0
0x5C0678: jz      short loc_5C0698
0x5C067A: cmp     dword ptr [esi+28h], 0
0x5C067E: jz      short loc_5C0698
0x5C0680: cmp     dword ptr [esi+30h], 0
0x5C0684: jz      short loc_5C0698
0x5C0686: cmp     dword ptr [esi+34h], 0
0x5C068A: jz      short loc_5C0698
0x5C068C: cmp     dword ptr [esi+38h], 0
0x5C0690: jz      short loc_5C0698
0x5C0692: cmp     dword ptr [esi+3Ch], 0
0x5C0696: jnz     short loc_5C06AE
0x5C0698: push    offset aQuantityMenuCr; "Quantity Menu Creation Failed... Are yo"...
0x5C069D: call    PrintError
0x5C06A2: add     esp, 4
0x5C06A5: pop     edi
0x5C06A6: pop     esi
0x5C06A7: xor     al, al
0x5C06A9: pop     ebx
0x5C06AA: add     esp, 8
0x5C06AD: retn
0x5C06AE: push    0FA5h
0x5C06B3: mov     ecx, ebx
0x5C06B5: call    Tile_GetFloat
0x5C06BA: fcomp   dword ptr ds:0A69770h
0x5C06C0: fnstsw  ax
0x5C06C2: test    ah, 44h
0x5C06C5: jnp     short loc_5C06E0
0x5C06C7: push    0FA5h
0x5C06CC: mov     ecx, ebx
0x5C06CE: call    Tile_GetFloat
0x5C06D3: fcomp   qword ptr ds:0A69778h
0x5C06D9: fnstsw  ax
0x5C06DB: test    ah, 44h
0x5C06DE: jp      short loc_5C06F4
0x5C06E0: fld     [esp+14h+var_4]
0x5C06E4: push    ecx
0x5C06E5: fstp    [esp+18h+var_18]; a3
0x5C06E8: push    0FABh; a2
0x5C06ED: mov     ecx, ebx; this
0x5C06EF: call    Tile_SetFloat
0x5C06F4: mov     ecx, [esp+14h+arg_4]
0x5C06F8: fld1
0x5C06FA: mov     ebx, [esp+14h+arg_C]
0x5C06FE: mov     edx, [esp+14h+arg_8]
0x5C0702: mov     eax, [esp+14h+arg_10]
0x5C0706: push    ecx
0x5C0707: fstp    [esp+18h+var_18]; a3
0x5C070A: mov     [esi+44h], ecx
0x5C070D: mov     ecx, [esi+30h]; this
0x5C0710: push    0FAFh; a2
0x5C0715: mov     [esi+40h], ebx
0x5C0718: mov     [esi+4Ch], edx
0x5C071B: mov     [esi+48h], ebx
0x5C071E: mov     [esi+50h], eax
0x5C0721: call    Tile_SetFloat
0x5C0726: fild    [esp+14h+arg_C]
0x5C072A: push    ecx
0x5C072B: mov     ecx, [esi+30h]; this
0x5C072E: fstp    [esp+18h+var_4]
0x5C0732: fld     [esp+18h+var_4]
0x5C0736: fstp    [esp+18h+var_18]; a3
0x5C0739: push    0FB0h; a2
0x5C073E: call    Tile_SetFloat
0x5C0743: mov     eax, ebx
0x5C0745: cdq
0x5C0746: and     edx, 3
0x5C0749: add     eax, edx
0x5C074B: sar     eax, 2
0x5C074E: cmp     eax, 1
0x5C0751: mov     [esp+14h+a3], eax
0x5C0755: jg      short loc_5C075F
0x5C0757: mov     [esp+14h+a3], 1
0x5C075F: fild    [esp+14h+a3]
0x5C0763: push    ecx
0x5C0764: mov     ecx, [esi+30h]; this
0x5C0767: fstp    [esp+18h+var_18]; a3
0x5C076A: push    0FB2h; a2
0x5C076F: call    Tile_SetFloat
0x5C0774: fld     [esp+14h+var_4]
0x5C0778: push    ecx
0x5C0779: mov     ecx, [esi+30h]; this
0x5C077C: fstp    [esp+18h+var_18]; a3
0x5C077F: push    0FB3h; a2
0x5C0784: call    Tile_SetFloat
0x5C0789: fldz
0x5C078B: push    ecx
0x5C078C: fstp    [esp+18h+var_18]; a3
0x5C078F: mov     ecx, [esi+30h]; this
0x5C0792: push    0FB3h; a2
0x5C0797: call    Tile_SetFloat
0x5C079C: push    0; char
0x5C079E: mov     ecx, edi; int
0x5C07A0: call    EnableMenu
0x5C07A5: pop     edi
0x5C07A6: pop     esi
0x5C07A7: mov     al, 1
0x5C07A9: pop     ebx
0x5C07AA: add     esp, 8
0x5C07AD: retn
0x5C07AE: cmp     dword ptr [edi+4], 0
0x5C07B2: jz      short loc_5C07BE
0x5C07B4: mov     edx, [edi]
0x5C07B6: mov     eax, [edx]
0x5C07B8: push    1
0x5C07BA: mov     ecx, edi
0x5C07BC: call    eax
0x5C07BE: pop     edi
0x5C07BF: pop     esi
0x5C07C0: xor     al, al
0x5C07C2: pop     ebx
0x5C07C3: add     esp, 8
0x5C07C6: retn
