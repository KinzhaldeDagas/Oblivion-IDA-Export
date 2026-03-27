0x5ADCF0: push    ecx
0x5ADCF1: push    3EFh
0x5ADCF6: call    Menu_GetOpenMenuTile
0x5ADCFB: add     esp, 4
0x5ADCFE: test    eax, eax
0x5ADD00: jz      short loc_5ADD0C
0x5ADD02: mov     edx, [eax]
0x5ADD04: mov     ecx, eax
0x5ADD06: mov     eax, [edx]
0x5ADD08: push    1
0x5ADD0A: call    eax
0x5ADD0C: push    esi
0x5ADD0D: push    edi; a3
0x5ADD0E: call    sub_5A8FD0
0x5ADD13: push    1; arg1
0x5ADD15: push    0; canCreate
0x5ADD17: call    InterfaceManager_GetSingleton
0x5ADD1C: add     esp, 8
0x5ADD1F: mov     esi, eax
0x5ADD21: call    InterfaceManager_GetDepth
0x5ADD26: fstp    [esp+0Ch+var_4]
0x5ADD2A: mov     ecx, [esi+68h]; TileWindow *
0x5ADD2D: push    offset aDataMenusLoadi; "Data\\Menus\\loading_menu.xml"
0x5ADD32: call    Menu_LoadXML
0x5ADD37: mov     esi, eax
0x5ADD39: mov     ecx, esi
0x5ADD3B: call    Tile_GetParentMenu
0x5ADD40: mov     edi, eax
0x5ADD42: test    edi, edi
0x5ADD44: jz      loc_5ADEB6
0x5ADD4A: mov     edx, [edi]
0x5ADD4C: mov     eax, [edx+34h]
0x5ADD4F: mov     ecx, edi
0x5ADD51: call    eax
0x5ADD53: cmp     eax, 3EFh
0x5ADD58: jnz     loc_5ADEA6
0x5ADD5E: push    0
0x5ADD60: call    sub_583DF0
0x5ADD65: push    0; int
0x5ADD67: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5ADD6C: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5ADD71: push    0; int
0x5ADD73: push    esi; void *
0x5ADD74: call    OblivionDynamicCast
0x5ADD79: add     esp, 18h
0x5ADD7C: push    eax
0x5ADD7D: mov     ecx, edi
0x5ADD7F: call    Menu_SetTileMenu
0x5ADD84: push    0; int
0x5ADD86: push    offset ??_R0?AVLoadingMenu@@@8; struct TypeDescriptor *
0x5ADD8B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5ADD90: push    0; int
0x5ADD92: push    edi; void *
0x5ADD93: call    OblivionDynamicCast
0x5ADD98: add     esp, 14h
0x5ADD9B: push    0FA5h
0x5ADDA0: mov     ecx, esi
0x5ADDA2: mov     edi, eax
0x5ADDA4: call    Tile_GetFloat
0x5ADDA9: fcomp   dword ptr ds:0A69770h
0x5ADDAF: fnstsw  ax
0x5ADDB1: test    ah, 44h
0x5ADDB4: jnp     short loc_5ADDCF
0x5ADDB6: push    0FA5h
0x5ADDBB: mov     ecx, esi
0x5ADDBD: call    Tile_GetFloat
0x5ADDC2: fcomp   qword ptr ds:0A69778h
0x5ADDC8: fnstsw  ax
0x5ADDCA: test    ah, 44h
0x5ADDCD: jp      short loc_5ADDE3
0x5ADDCF: fld     [esp+0Ch+var_4]
0x5ADDD3: push    ecx
0x5ADDD4: fstp    [esp+10h+a3]; a3
0x5ADDD7: push    0FABh; a2
0x5ADDDC: mov     ecx, esi; this
0x5ADDDE: call    Tile_SetFloat
0x5ADDE3: push    1; arg1
0x5ADDE5: push    0; canCreate
0x5ADDE7: call    InterfaceManager_GetSingleton
0x5ADDEC: push    1
0x5ADDEE: push    1
0x5ADDF0: mov     byte ptr [eax+8], 2
0x5ADDF4: call    sub_5A6040
0x5ADDF9: push    0
0x5ADDFB: push    0
0x5ADDFD: push    0
0x5ADDFF: call    sub_5A4980
0x5ADE04: push    0
0x5ADE06: call    sub_578D50
0x5ADE0B: mov     ecx, [esp+2Ch+arg_0]
0x5ADE0F: add     esp, 20h
0x5ADE12: push    offset word_A36430
0x5ADE17: mov     [edi+44h], ecx
0x5ADE1A: push    0FB3h
0x5ADE1F: mov     ecx, esi
0x5ADE21: call    Tile_SetString
0x5ADE26: mov     edx, [edi+44h]
0x5ADE29: push    edx
0x5ADE2A: mov     ecx, edi
0x5ADE2C: call    sub_5AD440
0x5ADE31: push    esi
0x5ADE32: mov     ecx, edi
0x5ADE34: call    sub_5AD780
0x5ADE39: cmp     dword ptr ds:0B333C4h, 0
0x5ADE40: jz      short loc_5ADE50
0x5ADE42: call    sub_40FDA0
0x5ADE47: test    al, al
0x5ADE49: jnz     short loc_5ADE50
0x5ADE4B: call    sub_410B00
0x5ADE50: mov     ecx, [esi+10h]
0x5ADE53: push    0; float
0x5ADE55: call    sub_58FBA0
0x5ADE5A: push    0; float
0x5ADE5C: mov     ecx, esi
0x5ADE5E: call    sub_58FBA0
0x5ADE63: push    3F4h
0x5ADE68: call    Menu_GetOpenMenuTile
0x5ADE6D: add     esp, 4
0x5ADE70: test    eax, eax
0x5ADE72: jz      short loc_5ADE7E
0x5ADE74: mov     edx, [eax]
0x5ADE76: mov     ecx, eax
0x5ADE78: mov     eax, [edx]
0x5ADE7A: push    1
0x5ADE7C: call    eax
0x5ADE7E: push    0
0x5ADE80: call    sub_579260
0x5ADE85: call    sub_5792B0
0x5ADE8A: push    0
0x5ADE8C: call    sub_579260
0x5ADE91: call    sub_5792B0
0x5ADE96: push    0
0x5ADE98: call    nullsub_returnTrue_0arg
0x5ADE9D: add     esp, 0Ch
0x5ADEA0: pop     edi
0x5ADEA1: mov     eax, esi
0x5ADEA3: pop     esi
0x5ADEA4: pop     ecx
0x5ADEA5: retn
0x5ADEA6: cmp     dword ptr [edi+4], 0
0x5ADEAA: jz      short loc_5ADEB6
0x5ADEAC: mov     edx, [edi]
0x5ADEAE: mov     eax, [edx]
0x5ADEB0: push    1
0x5ADEB2: mov     ecx, edi
0x5ADEB4: call    eax
0x5ADEB6: pop     edi
0x5ADEB7: xor     eax, eax
0x5ADEB9: pop     esi
0x5ADEBA: pop     ecx
0x5ADEBB: retn
