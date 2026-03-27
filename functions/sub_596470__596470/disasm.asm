0x596470: push    415h
0x596475: call    Menu_GetOpenMenuTile
0x59647A: add     esp, 4
0x59647D: test    eax, eax
0x59647F: jz      short loc_5964A3
0x596481: push    0; int
0x596483: push    offset ??_R0?AVBreathMenu@@@8; struct TypeDescriptor *
0x596488: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59648D: push    0; int
0x59648F: mov     ecx, eax
0x596491: call    Tile_GetParentMenu
0x596496: push    eax; void *
0x596497: call    OblivionDynamicCast
0x59649C: fild    dword ptr [eax+30h]
0x59649F: add     esp, 14h
0x5964A2: retn
0x5964A3: fld1
0x5964A5: retn
