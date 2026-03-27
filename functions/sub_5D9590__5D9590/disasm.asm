0x5D9590: push    ecx
0x5D9591: push    40Dh
0x5D9596: call    Menu_GetOpenMenuTile
0x5D959B: add     esp, 4
0x5D959E: test    eax, eax
0x5D95A0: jz      short loc_5D95AC
0x5D95A2: mov     edx, [eax]
0x5D95A4: mov     ecx, eax
0x5D95A6: mov     eax, [edx]
0x5D95A8: push    1
0x5D95AA: call    eax
0x5D95AC: push    ebp
0x5D95AD: push    esi
0x5D95AE: push    edi; a3
0x5D95AF: push    1; arg1
0x5D95B1: push    0; canCreate
0x5D95B3: call    InterfaceManager_GetSingleton
0x5D95B8: add     esp, 8
0x5D95BB: mov     esi, eax
0x5D95BD: call    InterfaceManager_GetDepth
0x5D95C2: fstp    [esp+10h+var_4]
0x5D95C6: mov     ecx, [esi+68h]; TileWindow *
0x5D95C9: push    offset aDataMenusDia_4; "Data\\Menus\\dialog\\spell_purchase.xml"
0x5D95CE: call    Menu_LoadXML
0x5D95D3: mov     ebp, eax
0x5D95D5: mov     ecx, ebp
0x5D95D7: call    Tile_GetParentMenu
0x5D95DC: mov     edi, eax
0x5D95DE: test    edi, edi
0x5D95E0: jz      loc_5D971D
0x5D95E6: mov     edx, [edi]
0x5D95E8: mov     eax, [edx+34h]
0x5D95EB: mov     ecx, edi
0x5D95ED: call    eax
0x5D95EF: cmp     eax, 40Dh
0x5D95F4: jnz     loc_5D970D
0x5D95FA: push    0; int
0x5D95FC: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D9601: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D9606: push    0; int
0x5D9608: push    ebp; void *
0x5D9609: call    OblivionDynamicCast
0x5D960E: add     esp, 14h
0x5D9611: push    eax
0x5D9612: mov     ecx, edi
0x5D9614: call    Menu_SetTileMenu
0x5D9619: push    0; int
0x5D961B: push    offset ??_R0?AVSpellPurchaseMenu@@@8; struct TypeDescriptor *
0x5D9620: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D9625: push    0; int
0x5D9627: push    edi; void *
0x5D9628: call    OblivionDynamicCast
0x5D962D: mov     esi, eax
0x5D962F: add     esp, 14h
0x5D9632: cmp     dword ptr [esi+28h], 0
0x5D9636: jz      short loc_5D965C
0x5D9638: cmp     dword ptr [esi+2Ch], 0
0x5D963C: jz      short loc_5D965C
0x5D963E: cmp     dword ptr [esi+30h], 0
0x5D9642: jz      short loc_5D965C
0x5D9644: cmp     dword ptr [esi+34h], 0
0x5D9648: jz      short loc_5D965C
0x5D964A: cmp     dword ptr [esi+38h], 0
0x5D964E: jz      short loc_5D965C
0x5D9650: cmp     dword ptr [esi+3Ch], 0
0x5D9654: jz      short loc_5D965C
0x5D9656: cmp     dword ptr [esi+40h], 0
0x5D965A: jnz     short loc_5D9670
0x5D965C: push    offset aSpellPurchaseC; "Spell Purchase Creation Failed... Are y"...
0x5D9661: call    PrintError
0x5D9666: add     esp, 4
0x5D9669: pop     edi
0x5D966A: pop     esi
0x5D966B: xor     eax, eax
0x5D966D: pop     ebp
0x5D966E: pop     ecx
0x5D966F: retn
0x5D9670: push    0FA5h
0x5D9675: mov     ecx, ebp
0x5D9677: call    Tile_GetFloat
0x5D967C: fcomp   dword ptr ds:0A69770h
0x5D9682: fnstsw  ax
0x5D9684: test    ah, 44h
0x5D9687: jnp     short loc_5D96A2
0x5D9689: push    0FA5h
0x5D968E: mov     ecx, ebp
0x5D9690: call    Tile_GetFloat
0x5D9695: fcomp   qword ptr ds:0A69778h
0x5D969B: fnstsw  ax
0x5D969D: test    ah, 44h
0x5D96A0: jp      short loc_5D96B6
0x5D96A2: fld     [esp+10h+var_4]
0x5D96A6: push    ecx
0x5D96A7: fstp    [esp+14h+a3]; a3
0x5D96AA: push    0FABh; a2
0x5D96AF: mov     ecx, ebp; this
0x5D96B1: call    Tile_SetFloat
0x5D96B6: push    ebx
0x5D96B7: mov     ebx, [esp+14h+arg_0]
0x5D96BB: mov     ecx, esi
0x5D96BD: mov     [esi+50h], ebx
0x5D96C0: call    SpellPurchaseMenu_Update
0x5D96C5: push    0; char
0x5D96C7: mov     ecx, edi; int
0x5D96C9: call    EnableMenu
0x5D96CE: push    1
0x5D96D0: push    5
0x5D96D2: call    TESTopic__GEtTopic
0x5D96D7: mov     ecx, ds:0B33398h
0x5D96DD: mov     ecx, [ecx+24h]
0x5D96E0: add     esp, 8
0x5D96E3: mov     esi, eax
0x5D96E5: call    sub_6AC3D0
0x5D96EA: mov     eax, ds:0B333C4h
0x5D96EF: mov     edx, [ebx]
0x5D96F1: mov     edx, [edx+0DCh]
0x5D96F7: push    0
0x5D96F9: push    1
0x5D96FB: push    1
0x5D96FD: push    eax
0x5D96FE: push    esi
0x5D96FF: mov     ecx, ebx
0x5D9701: call    edx
0x5D9703: fstp    st
0x5D9705: pop     ebx
0x5D9706: pop     edi
0x5D9707: pop     esi
0x5D9708: mov     eax, ebp
0x5D970A: pop     ebp
0x5D970B: pop     ecx
0x5D970C: retn
0x5D970D: cmp     dword ptr [edi+4], 0
0x5D9711: jz      short loc_5D971D
0x5D9713: mov     eax, [edi]
0x5D9715: mov     edx, [eax]
0x5D9717: push    1
0x5D9719: mov     ecx, edi
0x5D971B: call    edx
0x5D971D: pop     edi
0x5D971E: pop     esi
0x5D971F: xor     eax, eax
0x5D9721: pop     ebp
0x5D9722: pop     ecx
0x5D9723: retn
