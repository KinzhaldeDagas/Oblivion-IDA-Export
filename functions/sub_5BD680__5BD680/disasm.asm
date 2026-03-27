0x5BD680: sub     esp, 8
0x5BD683: push    3F7h
0x5BD688: call    Menu_GetOpenMenuTile
0x5BD68D: add     esp, 4
0x5BD690: test    eax, eax
0x5BD692: jz      short loc_5BD69E
0x5BD694: mov     edx, [eax]
0x5BD696: mov     ecx, eax
0x5BD698: mov     eax, [edx]
0x5BD69A: push    1
0x5BD69C: call    eax
0x5BD69E: push    ebp
0x5BD69F: push    esi
0x5BD6A0: push    edi; a3
0x5BD6A1: push    1; arg1
0x5BD6A3: push    0; canCreate
0x5BD6A5: call    InterfaceManager_GetSingleton
0x5BD6AA: mov     esi, eax
0x5BD6AC: add     esp, 8
0x5BD6AF: mov     [esp+14h+var_8], esi
0x5BD6B3: call    InterfaceManager_GetDepth
0x5BD6B8: fstp    [esp+14h+var_4]
0x5BD6BC: mov     ecx, [esi+68h]; TileWindow *
0x5BD6BF: push    offset aDataMenusOpt_5; "Data\\Menus\\Options\\options_menu.xml"
0x5BD6C4: call    Menu_LoadXML
0x5BD6C9: mov     ebp, eax
0x5BD6CB: mov     ecx, ebp
0x5BD6CD: call    Tile_GetParentMenu
0x5BD6D2: mov     edi, eax
0x5BD6D4: test    edi, edi
0x5BD6D6: jz      loc_5BD825
0x5BD6DC: mov     edx, [edi]
0x5BD6DE: mov     eax, [edx+34h]
0x5BD6E1: mov     ecx, edi
0x5BD6E3: call    eax
0x5BD6E5: cmp     eax, 3F7h
0x5BD6EA: jnz     loc_5BD815
0x5BD6F0: push    0; int
0x5BD6F2: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5BD6F7: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD6FC: push    0; int
0x5BD6FE: push    ebp; void *
0x5BD6FF: call    OblivionDynamicCast
0x5BD704: add     esp, 14h
0x5BD707: push    eax
0x5BD708: mov     ecx, edi
0x5BD70A: call    Menu_SetTileMenu
0x5BD70F: push    0; int
0x5BD711: push    offset ??_R0?AVOptionsMenu@@@8; struct TypeDescriptor *
0x5BD716: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD71B: push    0; int
0x5BD71D: push    edi; void *
0x5BD71E: call    OblivionDynamicCast
0x5BD723: add     esp, 14h
0x5BD726: cmp     dword ptr [eax+28h], 0
0x5BD72A: jz      short loc_5BD74A
0x5BD72C: cmp     dword ptr [eax+2Ch], 0
0x5BD730: jz      short loc_5BD74A
0x5BD732: cmp     dword ptr [eax+30h], 0
0x5BD736: jz      short loc_5BD74A
0x5BD738: cmp     dword ptr [eax+34h], 0
0x5BD73C: jz      short loc_5BD74A
0x5BD73E: cmp     dword ptr [eax+38h], 0
0x5BD742: jz      short loc_5BD74A
0x5BD744: cmp     dword ptr [eax+3Ch], 0
0x5BD748: jnz     short loc_5BD760
0x5BD74A: push    offset aOptionsMenuCre; "Options Menu Creation Failed... Are you"...
0x5BD74F: call    PrintError
0x5BD754: add     esp, 4
0x5BD757: pop     edi
0x5BD758: pop     esi
0x5BD759: xor     al, al
0x5BD75B: pop     ebp
0x5BD75C: add     esp, 8
0x5BD75F: retn
0x5BD760: push    0FA5h
0x5BD765: mov     ecx, ebp
0x5BD767: call    Tile_GetFloat
0x5BD76C: fcomp   dword ptr ds:0A69770h
0x5BD772: fnstsw  ax
0x5BD774: test    ah, 44h
0x5BD777: jnp     short loc_5BD792
0x5BD779: push    0FA5h
0x5BD77E: mov     ecx, ebp
0x5BD780: call    Tile_GetFloat
0x5BD785: fcomp   qword ptr ds:0A69778h
0x5BD78B: fnstsw  ax
0x5BD78D: test    ah, 44h
0x5BD790: jp      short loc_5BD7A6
0x5BD792: fld     [esp+14h+var_4]
0x5BD796: push    ecx
0x5BD797: fstp    [esp+18h+a3]; a3
0x5BD79A: push    0FABh; a2
0x5BD79F: mov     ecx, ebp; this
0x5BD7A1: call    Tile_SetFloat
0x5BD7A6: push    ebx; a3
0x5BD7A7: xor     bl, bl
0x5BD7A9: xor     esi, esi
0x5BD7AB: jmp     short loc_5BD7B0
0x5BD7AD: align 10h
0x5BD7B0: cmp     esi, 0Ah
0x5BD7B3: jge     short loc_5BD7E0
0x5BD7B5: mov     ecx, [esp+18h+var_8]
0x5BD7B9: push    esi
0x5BD7BA: call    sub_57CFA0
0x5BD7BF: cmp     eax, 3F7h
0x5BD7C4: jz      short loc_5BD7E0
0x5BD7C6: mov     ecx, [esp+18h+var_8]
0x5BD7CA: push    esi
0x5BD7CB: call    sub_57CFA0
0x5BD7D0: cmp     eax, 3F5h
0x5BD7D5: jnz     short loc_5BD7D9
0x5BD7D7: mov     bl, 1
0x5BD7D9: add     esi, 1
0x5BD7DC: test    bl, bl
0x5BD7DE: jz      short loc_5BD7B0
0x5BD7E0: xor     ecx, ecx
0x5BD7E2: test    bl, bl
0x5BD7E4: setnz   cl
0x5BD7E7: add     ecx, 1
0x5BD7EA: mov     [esp+18h+var_4], ecx
0x5BD7EE: fild    [esp+18h+var_4]
0x5BD7F2: push    ecx
0x5BD7F3: mov     ecx, ebp; this
0x5BD7F5: fstp    [esp+1Ch+a2]; a3
0x5BD7F8: push    0FAEh; a2
0x5BD7FD: call    Tile_SetFloat
0x5BD802: push    0; char
0x5BD804: mov     ecx, edi; int
0x5BD806: call    EnableMenu
0x5BD80B: pop     ebx
0x5BD80C: pop     edi
0x5BD80D: pop     esi
0x5BD80E: mov     al, 1
0x5BD810: pop     ebp
0x5BD811: add     esp, 8
0x5BD814: retn
0x5BD815: cmp     dword ptr [edi+4], 0
0x5BD819: jz      short loc_5BD825
0x5BD81B: mov     edx, [edi]
0x5BD81D: mov     eax, [edx]
0x5BD81F: push    1
0x5BD821: mov     ecx, edi
0x5BD823: call    eax
0x5BD825: pop     edi
0x5BD826: pop     esi
0x5BD827: xor     al, al
0x5BD829: pop     ebp
0x5BD82A: add     esp, 8
0x5BD82D: retn
