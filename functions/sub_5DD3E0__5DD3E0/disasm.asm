0x5DD3E0: push    404h
0x5DD3E5: call    Menu_GetOpenMenuTile
0x5DD3EA: add     esp, 4
0x5DD3ED: test    eax, eax
0x5DD3EF: jz      locret_5DD4AD
0x5DD3F5: mov     ecx, eax
0x5DD3F7: call    Tile_GetParentMenu
0x5DD3FC: test    eax, eax
0x5DD3FE: jz      locret_5DD4AD
0x5DD404: push    esi
0x5DD405: push    0; int
0x5DD407: push    offset ??_R0?AVTrainingMenu@@@8; struct TypeDescriptor *
0x5DD40C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DD411: push    0; int
0x5DD413: push    eax; void *
0x5DD414: call    OblivionDynamicCast
0x5DD419: mov     esi, eax
0x5DD41B: add     esp, 14h
0x5DD41E: test    esi, esi
0x5DD420: jz      loc_5DD4AC
0x5DD426: mov     eax, [esp+4+arg_0]
0x5DD42A: cmp     eax, 6
0x5DD42D: jnz     short loc_5DD498
0x5DD42F: mov     ecx, ds:0B333C4h
0x5DD435: call    sub_5E4420
0x5DD43A: cmp     [esi+5Ch], eax
0x5DD43D: jg      short loc_5DD479
0x5DD43F: mov     eax, [esi+58h]
0x5DD442: mov     ecx, ds:0B333C4h
0x5DD448: push    eax
0x5DD449: call    sub_66A3D0
0x5DD44E: mov     ecx, ds:0B333C4h
0x5DD454: add     ecx, 44h ; 'D'; this
0x5DD457: call    ExtraDataList_GetContainerChanges
0x5DD45C: mov     ecx, [esi+5Ch]
0x5DD45F: mov     edx, ds:0B333C4h
0x5DD465: push    0
0x5DD467: push    ecx
0x5DD468: push    edx
0x5DD469: mov     ecx, eax
0x5DD46B: call    sub_491700
0x5DD470: call    sub_5DD340
0x5DD475: pop     esi
0x5DD476: retn    8
0x5DD479: mov     eax, ds:0B38CF0h
0x5DD47E: mov     ecx, ds:0B38DB0h
0x5DD484: push    0
0x5DD486: push    eax
0x5DD487: push    1
0x5DD489: push    0
0x5DD48B: push    ecx
0x5DD48C: call    ShowUIMessageBox
0x5DD491: add     esp, 14h
0x5DD494: pop     esi
0x5DD495: retn    8
0x5DD498: cmp     eax, 7
0x5DD49B: jnz     short loc_5DD4AC
0x5DD49D: push    2; int
0x5DD49F: call    sub_57DE50
0x5DD4A4: add     esp, 4
0x5DD4A7: call    sub_5DD340
0x5DD4AC: pop     esi
0x5DD4AD: retn    8
