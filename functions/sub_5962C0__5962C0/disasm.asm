0x5962C0: push    402h
0x5962C5: call    Menu_GetOpenMenuTile
0x5962CA: add     esp, 4
0x5962CD: test    eax, eax
0x5962CF: jz      short loc_5962DB
0x5962D1: mov     edx, [eax]
0x5962D3: mov     ecx, eax
0x5962D5: mov     eax, [edx]
0x5962D7: push    1
0x5962D9: call    eax
0x5962DB: push    ebp
0x5962DC: mov     ebp, [esp+4+arg_0]
0x5962E0: test    ebp, ebp
0x5962E2: jnz     short loc_5962E8
0x5962E4: xor     eax, eax
0x5962E6: pop     ebp
0x5962E7: retn
0x5962E8: push    esi
0x5962E9: push    edi
0x5962EA: push    1; arg1
0x5962EC: push    0; canCreate
0x5962EE: call    InterfaceManager_GetSingleton
0x5962F3: add     esp, 8
0x5962F6: mov     esi, eax
0x5962F8: call    InterfaceManager_GetDepth
0x5962FD: fstp    [esp+0Ch+arg_0]
0x596301: mov     ecx, [esi+68h]; TileWindow *
0x596304: push    offset aDataMenusBook_; "Data\\Menus\\book_menu.xml"
0x596309: call    Menu_LoadXML
0x59630E: mov     edi, eax
0x596310: mov     ecx, edi
0x596312: call    Tile_GetParentMenu
0x596317: mov     esi, eax
0x596319: mov     edx, [esi]
0x59631B: mov     eax, [edx+34h]
0x59631E: mov     ecx, esi
0x596320: mov     [esi+34h], ebp
0x596323: call    eax
0x596325: cmp     eax, 402h
0x59632A: jnz     loc_596406
0x596330: push    ebx; a3
0x596331: push    0; int
0x596333: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x596338: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x59633D: push    0; int
0x59633F: push    edi; void *
0x596340: call    OblivionDynamicCast
0x596345: add     esp, 14h
0x596348: push    eax
0x596349: mov     ecx, esi
0x59634B: call    Menu_SetTileMenu
0x596350: push    0; int
0x596352: push    offset ??_R0?AVBookMenu@@@8; struct TypeDescriptor *
0x596357: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59635C: push    0; int
0x59635E: push    esi; void *
0x59635F: call    OblivionDynamicCast
0x596364: mov     ebx, eax
0x596366: add     esp, 14h
0x596369: cmp     dword ptr [ebx+28h], 0
0x59636D: jz      short loc_596375
0x59636F: cmp     dword ptr [ebx+2Ch], 0
0x596373: jnz     short loc_596389
0x596375: push    offset aBookMenuCreati; "Book Menu Creation Failed... Are your m"...
0x59637A: call    PrintError
0x59637F: add     esp, 4
0x596382: pop     ebx
0x596383: pop     edi
0x596384: pop     esi
0x596385: xor     eax, eax
0x596387: pop     ebp
0x596388: retn
0x596389: push    0FA5h
0x59638E: mov     ecx, edi
0x596390: call    Tile_GetFloat
0x596395: fcomp   dword ptr ds:0A69770h
0x59639B: fnstsw  ax
0x59639D: test    ah, 44h
0x5963A0: jnp     short loc_5963BB
0x5963A2: push    0FA5h
0x5963A7: mov     ecx, edi
0x5963A9: call    Tile_GetFloat
0x5963AE: fcomp   qword ptr ds:0A69778h
0x5963B4: fnstsw  ax
0x5963B6: test    ah, 44h
0x5963B9: jp      short loc_5963CF
0x5963BB: fld     [esp+10h+arg_0]
0x5963BF: push    ecx
0x5963C0: fstp    [esp+14h+a3]; a3
0x5963C3: push    0FABh; a2
0x5963C8: mov     ecx, edi; this
0x5963CA: call    Tile_SetFloat
0x5963CF: mov     ecx, [esp+10h+arg_4]
0x5963D3: push    ecx
0x5963D4: push    ebp
0x5963D5: mov     ecx, ebx
0x5963D7: call    sub_596020
0x5963DC: mov     edx, [ebx+34h]
0x5963DF: test    byte ptr [edx+88h], 1
0x5963E6: jz      short loc_5963EC
0x5963E8: push    19h
0x5963EA: jmp     short loc_5963EE
0x5963EC: push    1Bh; int
0x5963EE: call    sub_57DE50
0x5963F3: add     esp, 4
0x5963F6: push    0; char
0x5963F8: mov     ecx, esi; int
0x5963FA: call    EnableMenu
0x5963FF: pop     ebx
0x596400: mov     eax, edi
0x596402: pop     edi
0x596403: pop     esi
0x596404: pop     ebp
0x596405: retn
0x596406: cmp     dword ptr [esi+4], 0
0x59640A: jz      short loc_596416
0x59640C: mov     eax, [esi]
0x59640E: mov     edx, [eax]
0x596410: push    1
0x596412: mov     ecx, esi
0x596414: call    edx
0x596416: pop     edi
0x596417: pop     esi
0x596418: xor     eax, eax
0x59641A: pop     ebp
0x59641B: retn
