0x57C420: push    1; arg1
0x57C422: push    0; canCreate
0x57C424: call    InterfaceManager_GetSingleton
0x57C429: add     esp, 8
0x57C42C: test    eax, eax
0x57C42E: jz      locret_57C5EA
0x57C434: push    1; arg1
0x57C436: push    0; canCreate
0x57C438: call    InterfaceManager_GetSingleton
0x57C43D: add     esp, 8
0x57C440: cmp     dword ptr [eax+1Ch], 0
0x57C444: jz      locret_57C5EA
0x57C44A: push    1; arg1
0x57C44C: push    0; canCreate
0x57C44E: call    InterfaceManager_GetSingleton
0x57C453: add     esp, 8
0x57C456: cmp     dword ptr [eax+68h], 0
0x57C45A: jz      locret_57C5EA
0x57C460: push    1; arg1
0x57C462: push    0; canCreate
0x57C464: call    InterfaceManager_GetSingleton
0x57C469: mov     eax, [eax+68h]
0x57C46C: add     esp, 8
0x57C46F: push    0FAEh
0x57C474: mov     ecx, eax
0x57C476: call    Tile_GetFloat
0x57C47B: fcomp   dword ptr ds:0A379B4h
0x57C481: fnstsw  ax
0x57C483: test    ah, 44h
0x57C486: jp      locret_57C5EA
0x57C48C: push    ebx
0x57C48D: push    ebp
0x57C48E: push    esi
0x57C48F: push    edi; a3
0x57C490: push    3EBh
0x57C495: call    Menu_GetOpenMenuTile
0x57C49A: push    3EAh
0x57C49F: mov     edi, eax
0x57C4A1: call    Menu_GetOpenMenuTile
0x57C4A6: push    3FEh
0x57C4AB: mov     ebp, eax
0x57C4AD: call    Menu_GetOpenMenuTile
0x57C4B2: push    3FFh
0x57C4B7: mov     ebx, eax
0x57C4B9: call    Menu_GetOpenMenuTile
0x57C4BE: mov     esi, eax
0x57C4C0: mov     al, [esp+20h+arg_4]
0x57C4C4: neg     al
0x57C4C6: sbb     eax, eax
0x57C4C8: and     eax, 0Bh
0x57C4CB: push    eax
0x57C4CC: push    3FFh
0x57C4D1: call    sub_5790E0
0x57C4D6: add     esp, 18h
0x57C4D9: cmp     [esp+10h+arg_0], 0
0x57C4DE: jz      loc_57C587
0x57C4E4: test    al, al
0x57C4E6: jnz     loc_57C5CA
0x57C4EC: test    edi, edi
0x57C4EE: jz      short loc_57C4FE
0x57C4F0: mov     ecx, edi
0x57C4F2: call    Tile_GetParentMenu
0x57C4F7: mov     ecx, eax; int
0x57C4F9: call    sub_584740
0x57C4FE: test    ebx, ebx
0x57C500: jz      short loc_57C510
0x57C502: mov     ecx, ebx
0x57C504: call    Tile_GetParentMenu
0x57C509: mov     ecx, eax; int
0x57C50B: call    sub_584740
0x57C510: test    ebp, ebp
0x57C512: jz      short loc_57C522
0x57C514: mov     ecx, ebp
0x57C516: call    Tile_GetParentMenu
0x57C51B: mov     ecx, eax; int
0x57C51D: call    sub_584740
0x57C522: test    esi, esi
0x57C524: jnz     short loc_57C531
0x57C526: call    sub_579F80
0x57C52B: mov     esi, eax
0x57C52D: test    esi, esi
0x57C52F: jz      short loc_57C554
0x57C531: push    1; arg1
0x57C533: push    0; canCreate
0x57C535: call    InterfaceManager_GetSingleton
0x57C53A: fld     dword ptr ds:0A68C04h
0x57C540: mov     ecx, [eax+68h]; this
0x57C543: fstp    [esp+18h+var_14]; a3
0x57C547: add     esp, 4
0x57C54A: push    1771h; a2
0x57C54F: call    Tile_SetFloat
0x57C554: push    1; arg1
0x57C556: push    0; canCreate
0x57C558: call    InterfaceManager_GetSingleton
0x57C55D: mov     eax, [eax+60h]
0x57C560: and     word ptr [eax+18h], 0FFFEh
0x57C566: add     esp, 8
0x57C569: call    sub_5B3E90
0x57C56E: test    esi, esi
0x57C570: jz      short loc_57C580
0x57C572: mov     ecx, esi
0x57C574: call    Tile_GetParentMenu
0x57C579: mov     ecx, eax; int
0x57C57B: call    sub_584390
0x57C580: call    sub_57A060
0x57C585: jmp     short loc_57C5CA
0x57C587: test    al, al
0x57C589: jz      short loc_57C5CA
0x57C58B: test    esi, esi
0x57C58D: jz      short loc_57C5CA
0x57C58F: mov     ecx, esi
0x57C591: call    Tile_GetParentMenu
0x57C596: mov     ecx, eax; int
0x57C598: call    sub_584740
0x57C59D: push    1; arg1
0x57C59F: push    0; canCreate
0x57C5A1: call    InterfaceManager_GetSingleton
0x57C5A6: mov     eax, [eax+60h]
0x57C5A9: or      word ptr [eax+18h], 1
0x57C5AE: add     esp, 8
0x57C5B1: mov     ecx, esi
0x57C5B3: call    Tile_GetParentMenu
0x57C5B8: mov     edx, [eax]
0x57C5BA: push    0
0x57C5BC: mov     ecx, eax
0x57C5BE: mov     eax, [edx+14h]
0x57C5C1: push    0
0x57C5C3: call    eax
0x57C5C5: call    sub_5B3E90
0x57C5CA: push    1; arg1
0x57C5CC: push    0; canCreate
0x57C5CE: call    InterfaceManager_GetSingleton
0x57C5D3: fldz
0x57C5D5: add     esp, 8
0x57C5D8: push    0; a3
0x57C5DA: push    ecx
0x57C5DB: mov     ecx, [eax+60h]; this
0x57C5DE: fstp    [esp+18h+a2]; a2
0x57C5E1: call    NiAVObject_UpdateNiAVObject
0x57C5E6: pop     edi
0x57C5E7: pop     esi
0x57C5E8: pop     ebp
0x57C5E9: pop     ebx
0x57C5EA: retn
