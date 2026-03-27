0x5BDA90: push    ecx
0x5BDA91: push    esi
0x5BDA92: push    edi; a3
0x5BDA93: push    1; arg1
0x5BDA95: push    0; canCreate
0x5BDA97: call    InterfaceManager_GetSingleton
0x5BDA9C: mov     eax, [eax+68h]
0x5BDA9F: mov     esi, [eax+34h]
0x5BDAA2: add     esp, 8
0x5BDAA5: test    esi, esi
0x5BDAA7: jz      short loc_5BDAFB
0x5BDAA9: lea     esp, [esp+0]
0x5BDAB0: mov     edi, [esi+8]
0x5BDAB3: test    edi, edi
0x5BDAB5: lea     eax, [esi+8]
0x5BDAB8: mov     esi, [esi]
0x5BDABA: jz      short loc_5BDAF7
0x5BDABC: mov     ecx, edi
0x5BDABE: call    Tile_GetParentMenu
0x5BDAC3: test    eax, eax
0x5BDAC5: jz      short loc_5BDAF7
0x5BDAC7: cmp     dword ptr [eax+4], 0
0x5BDACB: jz      short loc_5BDAF7
0x5BDACD: mov     eax, [eax+24h]
0x5BDAD0: cmp     eax, 8
0x5BDAD3: jz      short loc_5BDADA
0x5BDAD5: cmp     eax, 2
0x5BDAD8: jnz     short loc_5BDAF7
0x5BDADA: push    0FA5h
0x5BDADF: mov     ecx, edi
0x5BDAE1: call    Tile_GetFloat
0x5BDAE6: fcomp   dword ptr ds:0A6A040h
0x5BDAEC: fnstsw  ax
0x5BDAEE: test    ah, 44h
0x5BDAF1: jp      loc_5BDBD3
0x5BDAF7: test    esi, esi
0x5BDAF9: jnz     short loc_5BDAB0
0x5BDAFB: push    3F5h
0x5BDB00: call    Menu_GetOpenMenuTile
0x5BDB05: add     esp, 4
0x5BDB08: test    eax, eax
0x5BDB0A: jz      short loc_5BDB16
0x5BDB0C: mov     edx, [eax]
0x5BDB0E: mov     ecx, eax
0x5BDB10: mov     eax, [edx]
0x5BDB12: push    1; a3
0x5BDB14: call    eax
0x5BDB16: push    ebx; a3
0x5BDB17: push    1; arg1
0x5BDB19: push    0; canCreate
0x5BDB1B: call    InterfaceManager_GetSingleton
0x5BDB20: add     esp, 8
0x5BDB23: mov     esi, eax
0x5BDB25: call    InterfaceManager_GetDepth
0x5BDB2A: fstp    [esp+10h+var_4]
0x5BDB2E: mov     ecx, [esi+68h]; TileWindow *
0x5BDB31: push    offset aDataMenusOpt_0; "Data\\Menus\\Options\\pause_menu.xml"
0x5BDB36: call    Menu_LoadXML
0x5BDB3B: mov     ebx, eax
0x5BDB3D: mov     ecx, ebx
0x5BDB3F: call    Tile_GetParentMenu
0x5BDB44: mov     esi, eax
0x5BDB46: test    esi, esi
0x5BDB48: jz      loc_5BDCBB
0x5BDB4E: mov     edx, [esi]
0x5BDB50: mov     eax, [edx+34h]
0x5BDB53: mov     ecx, esi
0x5BDB55: call    eax
0x5BDB57: cmp     eax, 3F5h
0x5BDB5C: jnz     loc_5BDCAB
0x5BDB62: push    2; int
0x5BDB64: call    sub_57DE50
0x5BDB69: push    0; int
0x5BDB6B: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5BDB70: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5BDB75: push    0; int
0x5BDB77: push    ebx; void *
0x5BDB78: call    OblivionDynamicCast
0x5BDB7D: add     esp, 18h
0x5BDB80: push    eax
0x5BDB81: mov     ecx, esi
0x5BDB83: call    Menu_SetTileMenu
0x5BDB88: push    0; int
0x5BDB8A: push    offset ??_R0?AVPauseMenu@@@8; struct TypeDescriptor *
0x5BDB8F: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BDB94: push    0; int
0x5BDB96: push    esi; void *
0x5BDB97: call    OblivionDynamicCast
0x5BDB9C: mov     edi, eax
0x5BDB9E: add     esp, 14h
0x5BDBA1: cmp     dword ptr [edi+28h], 0
0x5BDBA5: jz      short loc_5BDBBF
0x5BDBA7: cmp     dword ptr [edi+30h], 0
0x5BDBAB: jz      short loc_5BDBBF
0x5BDBAD: cmp     dword ptr [edi+2Ch], 0
0x5BDBB1: jz      short loc_5BDBBF
0x5BDBB3: cmp     dword ptr [edi+34h], 0
0x5BDBB7: jz      short loc_5BDBBF
0x5BDBB9: cmp     dword ptr [edi+38h], 0
0x5BDBBD: jnz     short loc_5BDBD9
0x5BDBBF: push    offset aPauseMenuCreat; "Pause Menu Creation Failed... Are your "...
0x5BDBC4: call    PrintError
0x5BDBC9: add     esp, 4
0x5BDBCC: pop     ebx
0x5BDBCD: pop     edi
0x5BDBCE: xor     al, al
0x5BDBD0: pop     esi
0x5BDBD1: pop     ecx
0x5BDBD2: retn
0x5BDBD3: pop     edi
0x5BDBD4: xor     al, al
0x5BDBD6: pop     esi
0x5BDBD7: pop     ecx
0x5BDBD8: retn
0x5BDBD9: push    0FA5h
0x5BDBDE: mov     ecx, ebx
0x5BDBE0: call    Tile_GetFloat
0x5BDBE5: fcomp   dword ptr ds:0A69770h
0x5BDBEB: fnstsw  ax
0x5BDBED: test    ah, 44h
0x5BDBF0: jnp     short loc_5BDC0B
0x5BDBF2: push    0FA5h
0x5BDBF7: mov     ecx, ebx
0x5BDBF9: call    Tile_GetFloat
0x5BDBFE: fcomp   qword ptr ds:0A69778h
0x5BDC04: fnstsw  ax
0x5BDC06: test    ah, 44h
0x5BDC09: jp      short loc_5BDC1F
0x5BDC0B: fld     [esp+10h+var_4]
0x5BDC0F: push    ecx
0x5BDC10: fstp    [esp+14h+var_14]; a3
0x5BDC13: push    0FABh; a2
0x5BDC18: mov     ecx, ebx; this
0x5BDC1A: call    Tile_SetFloat
0x5BDC1F: mov     ecx, ds:0B33B00h
0x5BDC25: call    sub_452330
0x5BDC2A: test    al, al
0x5BDC2C: jnz     short loc_5BDC41
0x5BDC2E: fld1
0x5BDC30: push    ecx
0x5BDC31: mov     ecx, [edi+2Ch]; this
0x5BDC34: fstp    [esp+14h+var_14]; a3
0x5BDC37: push    0FC9h; a2
0x5BDC3C: call    Tile_SetFloat
0x5BDC41: call    GetOpenedMenuCode
0x5BDC46: cmp     eax, 40Eh
0x5BDC4B: jnz     short loc_5BDC60
0x5BDC4D: fld1
0x5BDC4F: push    ecx
0x5BDC50: mov     ecx, [edi+30h]; this
0x5BDC53: fstp    [esp+14h+var_14]; a3
0x5BDC56: push    0FC9h; a2
0x5BDC5B: call    Tile_SetFloat
0x5BDC60: mov     ecx, ds:0B333C4h
0x5BDC66: test    ecx, ecx
0x5BDC68: jz      short loc_5BDC7A
0x5BDC6A: mov     edx, [ecx]
0x5BDC6C: mov     eax, [edx+198h]
0x5BDC72: push    0; a3
0x5BDC74: call    eax
0x5BDC76: test    al, al
0x5BDC78: jz      short loc_5BDC8D
0x5BDC7A: fld1
0x5BDC7C: push    ecx
0x5BDC7D: mov     ecx, [edi+28h]; this
0x5BDC80: fstp    [esp+14h+var_14]; a3
0x5BDC83: push    0FAFh; a2
0x5BDC88: call    Tile_SetFloat
0x5BDC8D: cmp     byte ptr ds:0B3B43Dh, 0
0x5BDC94: jz      short loc_5BDC9B
0x5BDC96: call    sub_5C1000
0x5BDC9B: push    0; char
0x5BDC9D: mov     ecx, esi; int
0x5BDC9F: call    EnableMenu
0x5BDCA4: pop     ebx
0x5BDCA5: pop     edi
0x5BDCA6: mov     al, 1
0x5BDCA8: pop     esi
0x5BDCA9: pop     ecx
0x5BDCAA: retn
0x5BDCAB: cmp     dword ptr [esi+4], 0
0x5BDCAF: jz      short loc_5BDCBB
0x5BDCB1: mov     edx, [esi]
0x5BDCB3: mov     eax, [edx]
0x5BDCB5: push    1
0x5BDCB7: mov     ecx, esi
0x5BDCB9: call    eax
0x5BDCBB: pop     ebx
0x5BDCBC: pop     edi
0x5BDCBD: xor     al, al
0x5BDCBF: pop     esi
0x5BDCC0: pop     ecx
0x5BDCC1: retn
