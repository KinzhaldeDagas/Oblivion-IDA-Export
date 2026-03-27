0x5BDE70: push    esi
0x5BDE71: push    3F5h
0x5BDE76: mov     esi, ecx
0x5BDE78: call    Menu_GetOpenMenuTile
0x5BDE7D: add     esp, 4
0x5BDE80: test    eax, eax
0x5BDE82: jz      loc_5BDF98
0x5BDE88: mov     ecx, eax
0x5BDE8A: call    Tile_GetParentMenu
0x5BDE8F: test    eax, eax
0x5BDE91: jz      loc_5BDF98
0x5BDE97: push    0; int
0x5BDE99: push    offset ??_R0?AVPauseMenu@@@8; struct TypeDescriptor *
0x5BDE9E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BDEA3: push    0; int
0x5BDEA5: push    eax; void *
0x5BDEA6: call    OblivionDynamicCast
0x5BDEAB: add     esp, 14h
0x5BDEAE: test    eax, eax
0x5BDEB0: jz      loc_5BDF98
0x5BDEB6: mov     eax, [esp+4+arg_0]
0x5BDEBA: cmp     eax, 3
0x5BDEBD: jnz     short loc_5BDEEA
0x5BDEBF: mov     ecx, ds:0B333C4h
0x5BDEC5: test    ecx, ecx
0x5BDEC7: jz      loc_5BDF98
0x5BDECD: mov     eax, [ecx]
0x5BDECF: mov     edx, [eax+198h]
0x5BDED5: push    0
0x5BDED7: call    edx
0x5BDED9: test    al, al
0x5BDEDB: jnz     loc_5BDF98
0x5BDEE1: call    sub_5BDCD0
0x5BDEE6: pop     esi
0x5BDEE7: retn    8
0x5BDEEA: cmp     eax, 5
0x5BDEED: jnz     short loc_5BDF12
0x5BDEEF: mov     ecx, [esp+4+arg_4]
0x5BDEF3: mov     eax, [esi]
0x5BDEF5: mov     edx, [eax+14h]
0x5BDEF8: push    ecx
0x5BDEF9: push    5
0x5BDEFB: mov     ecx, esi
0x5BDEFD: call    edx
0x5BDEFF: call    sub_5BD9F0
0x5BDF04: push    0
0x5BDF06: call    sub_5AEA60
0x5BDF0B: add     esp, 4
0x5BDF0E: pop     esi
0x5BDF0F: retn    8
0x5BDF12: cmp     eax, 4
0x5BDF15: jnz     short loc_5BDF35
0x5BDF17: mov     ecx, [esp+4+arg_4]
0x5BDF1B: mov     eax, [esi]
0x5BDF1D: mov     edx, [eax+14h]
0x5BDF20: push    ecx
0x5BDF21: push    4
0x5BDF23: mov     ecx, esi
0x5BDF25: call    edx
0x5BDF27: call    sub_5BD9F0
0x5BDF2C: call    sub_5D39A0
0x5BDF31: pop     esi
0x5BDF32: retn    8
0x5BDF35: cmp     eax, 7
0x5BDF38: jnz     short loc_5BDF58
0x5BDF3A: mov     ecx, [esp+4+arg_4]
0x5BDF3E: mov     eax, [esi]
0x5BDF40: mov     edx, [eax+14h]
0x5BDF43: push    ecx
0x5BDF44: push    7
0x5BDF46: mov     ecx, esi
0x5BDF48: call    edx
0x5BDF4A: call    sub_5BD9F0
0x5BDF4F: call    sub_5BD680
0x5BDF54: pop     esi
0x5BDF55: retn    8
0x5BDF58: cmp     eax, 8
0x5BDF5B: jnz     short loc_5BDF98
0x5BDF5D: mov     eax, ds:0B38C58h
0x5BDF62: mov     ecx, ds:0B38CA8h
0x5BDF68: mov     edx, ds:0B38D08h
0x5BDF6E: push    0
0x5BDF70: push    eax
0x5BDF71: mov     eax, ds:0B38C98h
0x5BDF76: push    ecx
0x5BDF77: push    edx
0x5BDF78: push    1
0x5BDF7A: push    offset sub_5BDDE0
0x5BDF7F: push    eax
0x5BDF80: call    ShowUIMessageBox
0x5BDF85: mov     eax, [esp+20h+arg_4]
0x5BDF89: mov     edx, [esi]
0x5BDF8B: mov     edx, [edx+14h]
0x5BDF8E: add     esp, 1Ch
0x5BDF91: push    eax
0x5BDF92: push    8
0x5BDF94: mov     ecx, esi
0x5BDF96: call    edx
0x5BDF98: pop     esi
0x5BDF99: retn    8
