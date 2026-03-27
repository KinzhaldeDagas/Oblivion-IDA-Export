0x5A4840: push    ecx
0x5A4841: mov     eax, ds:0B3B33Ch
0x5A4846: test    eax, eax
0x5A4848: jz      short loc_5A4859
0x5A484A: mov     ecx, [eax+4]
0x5A484D: test    ecx, ecx
0x5A484F: jz      short loc_5A4859
0x5A4851: mov     eax, [ecx]
0x5A4853: mov     edx, [eax]
0x5A4855: push    1
0x5A4857: call    edx
0x5A4859: push    ebx
0x5A485A: push    esi
0x5A485B: push    edi; a3
0x5A485C: push    1; arg1
0x5A485E: push    0; canCreate
0x5A4860: call    InterfaceManager_GetSingleton
0x5A4865: add     esp, 8
0x5A4868: mov     ebx, eax
0x5A486A: call    InterfaceManager_GetDepth
0x5A486F: fstp    [esp+10h+var_4]
0x5A4873: mov     ecx, [ebx+68h]; TileWindow *
0x5A4876: push    offset aDataMenusMai_0; "Data\\Menus\\Main\\hud_info_menu.xml"
0x5A487B: call    Menu_LoadXML
0x5A4880: mov     edi, eax
0x5A4882: mov     ecx, edi
0x5A4884: call    Tile_GetParentMenu
0x5A4889: mov     esi, eax
0x5A488B: test    esi, esi
0x5A488D: jz      loc_5A496F
0x5A4893: mov     eax, [esi]
0x5A4895: mov     edx, [eax+34h]
0x5A4898: mov     ecx, esi
0x5A489A: call    edx
0x5A489C: cmp     eax, 3EDh
0x5A48A1: jnz     loc_5A495F
0x5A48A7: push    0; int
0x5A48A9: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A48AE: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A48B3: push    0; int
0x5A48B5: push    edi; void *
0x5A48B6: call    OblivionDynamicCast
0x5A48BB: add     esp, 14h
0x5A48BE: push    eax
0x5A48BF: mov     ecx, esi
0x5A48C1: call    Menu_SetTileMenu
0x5A48C6: push    0; int
0x5A48C8: push    offset ??_R0?AVHUDInfoMenu@@@8; struct TypeDescriptor *
0x5A48CD: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A48D2: push    0; int
0x5A48D4: push    esi; void *
0x5A48D5: call    OblivionDynamicCast
0x5A48DA: add     esp, 14h
0x5A48DD: mov     ecx, eax
0x5A48DF: call    sub_5A46B0
0x5A48E4: test    al, al
0x5A48E6: jnz     short loc_5A48F5
0x5A48E8: push    offset aHudInfoMenuCre; "HUD-Info Menu Creation Failed... Are yo"...
0x5A48ED: call    sub_404EC0
0x5A48F2: add     esp, 4
0x5A48F5: push    0FA5h
0x5A48FA: mov     ecx, edi
0x5A48FC: call    Tile_GetFloat
0x5A4901: fcomp   dword ptr ds:0A69770h
0x5A4907: fnstsw  ax
0x5A4909: test    ah, 44h
0x5A490C: jnp     short loc_5A4927
0x5A490E: push    0FA5h
0x5A4913: mov     ecx, edi
0x5A4915: call    Tile_GetFloat
0x5A491A: fcomp   qword ptr ds:0A69778h
0x5A4920: fnstsw  ax
0x5A4922: test    ah, 44h
0x5A4925: jp      short loc_5A493B
0x5A4927: fld     [esp+10h+var_4]
0x5A492B: push    ecx
0x5A492C: fstp    [esp+14h+a3]; a3
0x5A492F: push    0FABh; a2
0x5A4934: mov     ecx, edi; this
0x5A4936: call    Tile_SetFloat
0x5A493B: push    0FAFh
0x5A4940: mov     ecx, edi
0x5A4942: call    Tile_GetFloat
0x5A4947: call    Double_To_SInt32
0x5A494C: push    0; char
0x5A494E: mov     ecx, esi; int
0x5A4950: mov     [ebx+10h], eax
0x5A4953: call    EnableMenu
0x5A4958: mov     eax, edi
0x5A495A: pop     edi
0x5A495B: pop     esi
0x5A495C: pop     ebx
0x5A495D: pop     ecx
0x5A495E: retn
0x5A495F: cmp     dword ptr [esi+4], 0
0x5A4963: jz      short loc_5A496F
0x5A4965: mov     eax, [esi]
0x5A4967: mov     edx, [eax]
0x5A4969: push    1
0x5A496B: mov     ecx, esi
0x5A496D: call    edx
0x5A496F: pop     edi
0x5A4970: pop     esi
0x5A4971: xor     eax, eax
0x5A4973: pop     ebx
0x5A4974: pop     ecx
0x5A4975: retn
