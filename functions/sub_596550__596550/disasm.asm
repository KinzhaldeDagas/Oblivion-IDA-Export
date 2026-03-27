0x596550: push    ecx
0x596551: push    415h
0x596556: call    Menu_GetOpenMenuTile
0x59655B: add     esp, 4
0x59655E: test    eax, eax
0x596560: jz      short loc_5965B4
0x596562: push    esi; a3
0x596563: push    0; int
0x596565: push    offset ??_R0?AVBreathMenu@@@8; struct TypeDescriptor *
0x59656A: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59656F: push    0; int
0x596571: mov     ecx, eax
0x596573: call    Tile_GetParentMenu
0x596578: push    eax; void *
0x596579: call    OblivionDynamicCast
0x59657E: fld     [esp+1Ch+arg_0]
0x596582: fmul    qword ptr ds:0A309F0h
0x596588: add     esp, 14h
0x59658B: mov     esi, eax
0x59658D: call    Double_To_SInt32
0x596592: cmp     [esi+30h], eax
0x596595: mov     [esp+8+var_4], eax
0x596599: jz      short loc_5965B3
0x59659B: fild    [esp+8+var_4]
0x59659F: push    ecx
0x5965A0: mov     ecx, [esi+2Ch]; this
0x5965A3: mov     [esi+30h], eax
0x5965A6: fstp    [esp+0Ch+a2]; a3
0x5965A9: push    0FAFh; a2
0x5965AE: call    Tile_SetFloat
0x5965B3: pop     esi
0x5965B4: pop     ecx
0x5965B5: retn
