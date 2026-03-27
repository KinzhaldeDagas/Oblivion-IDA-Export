0x5DDB70: push    esi
0x5DDB71: push    3FBh
0x5DDB76: mov     esi, ecx
0x5DDB78: call    Menu_GetOpenMenuTile
0x5DDB7D: add     esp, 4
0x5DDB80: test    eax, eax
0x5DDB82: jz      def_5DDBD3
0x5DDB88: mov     ecx, eax
0x5DDB8A: call    Tile_GetParentMenu
0x5DDB8F: test    eax, eax
0x5DDB91: jz      def_5DDBD3
0x5DDB97: push    0; int
0x5DDB99: push    offset ??_R0?AVVideoDisplayMenu@@@8; struct TypeDescriptor *
0x5DDB9E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DDBA3: push    0; int
0x5DDBA5: push    eax; void *
0x5DDBA6: call    OblivionDynamicCast
0x5DDBAB: add     esp, 14h
0x5DDBAE: test    eax, eax
0x5DDBB0: jz      def_5DDBD3
0x5DDBB6: push    edi
0x5DDBB7: mov     edi, [esp+8+arg_0]
0x5DDBBB: cmp     edi, 3
0x5DDBBE: jnz     short loc_5DDBCA
0x5DDBC0: call    sub_5DDA50
0x5DDBC5: call    sub_5DDCA0
0x5DDBCA: lea     eax, [edi-4]; switch 5 cases
0x5DDBCD: cmp     eax, 4
0x5DDBD0: pop     edi
0x5DDBD1: ja      short def_5DDBD3
0x5DDBD3: jmp     ds:jpt_5DDBD3[eax*4]; switch jump
0x5DDBDA: push    258h; jumptable 005DDBD3 case 4
0x5DDBDF: push    320h
0x5DDBE4: mov     ecx, esi
0x5DDBE6: call    sub_5DDAA0
0x5DDBEB: pop     esi
0x5DDBEC: retn    8
0x5DDBEF: push    25Fh; jumptable 005DDBD3 case 5
0x5DDBF4: push    438h
0x5DDBF9: mov     ecx, esi
0x5DDBFB: call    sub_5DDAA0
0x5DDC00: pop     esi
0x5DDC01: retn    8
0x5DDC04: push    300h; jumptable 005DDBD3 case 6
0x5DDC09: push    400h
0x5DDC0E: mov     ecx, esi
0x5DDC10: call    sub_5DDAA0
0x5DDC15: pop     esi
0x5DDC16: retn    8
0x5DDC19: push    25Fh; jumptable 005DDBD3 case 7
0x5DDC1E: push    500h
0x5DDC23: mov     ecx, esi
0x5DDC25: call    sub_5DDAA0
0x5DDC2A: pop     esi
0x5DDC2B: retn    8
0x5DDC2E: push    2D0h; jumptable 005DDBD3 case 8
0x5DDC33: push    500h
0x5DDC38: mov     ecx, esi
0x5DDC3A: call    sub_5DDAA0
