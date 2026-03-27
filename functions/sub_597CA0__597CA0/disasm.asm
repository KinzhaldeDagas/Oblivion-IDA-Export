0x597CA0: push    3F0h
0x597CA5: call    Menu_GetOpenMenuTile
0x597CAA: add     esp, 4
0x597CAD: test    eax, eax
0x597CAF: jz      short locret_597CF4
0x597CB1: push    esi
0x597CB2: mov     ecx, eax
0x597CB4: call    Tile_GetParentMenu
0x597CB9: mov     esi, eax
0x597CBB: test    esi, esi
0x597CBD: jz      short loc_597CF3
0x597CBF: mov     eax, [esi+44h]
0x597CC2: push    0; int
0x597CC4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x597CC9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x597CCE: push    0; int
0x597CD0: push    eax; void *
0x597CD1: call    OblivionDynamicCast
0x597CD6: add     esp, 14h
0x597CD9: cmp     byte ptr [esi+61h], 0
0x597CDD: jz      short loc_597CF3
0x597CDF: test    eax, eax
0x597CE1: jz      short loc_597CF3
0x597CE3: fild    [esp+4+arg_0]
0x597CE7: push    ecx
0x597CE8: lea     ecx, [eax+44h]
0x597CEB: fstp    [esp+8+var_8]; float
0x597CEE: call    sub_422D20
0x597CF3: pop     esi
0x597CF4: retn
