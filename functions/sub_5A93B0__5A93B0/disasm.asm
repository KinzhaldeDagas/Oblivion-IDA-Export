0x5A93B0: push    ecx
0x5A93B1: push    ebx
0x5A93B2: push    3F2h
0x5A93B7: mov     ebx, ecx
0x5A93B9: call    Menu_GetOpenMenuTile
0x5A93BE: add     esp, 4
0x5A93C1: test    eax, eax
0x5A93C3: jz      loc_5A95B8
0x5A93C9: push    esi
0x5A93CA: mov     ecx, eax
0x5A93CC: call    Tile_GetParentMenu
0x5A93D1: push    0
0x5A93D3: push    3F5h
0x5A93D8: mov     esi, eax
0x5A93DA: call    sub_5790E0
0x5A93DF: add     esp, 8
0x5A93E2: test    al, al
0x5A93E4: jnz     loc_5A95B7
0x5A93EA: push    0
0x5A93EC: push    3EFh
0x5A93F1: call    sub_5790E0
0x5A93F6: add     esp, 8
0x5A93F9: test    al, al
0x5A93FB: jnz     loc_5A95B7
0x5A9401: test    esi, esi
0x5A9403: jz      loc_5A95B7
0x5A9409: push    edi; a3
0x5A940A: push    3F1h; a3
0x5A940F: call    Menu_GetOpenMenuTile
0x5A9414: mov     edi, eax
0x5A9416: add     esp, 4
0x5A9419: test    edi, edi
0x5A941B: jz      short loc_5A9424
0x5A941D: mov     ecx, edi
0x5A941F: call    Tile_GetParentMenu
0x5A9424: call    InterfaceManager_IsMenuMode
0x5A9429: test    al, al
0x5A942B: jz      short loc_5A944A
0x5A942D: test    edi, edi
0x5A942F: jz      short loc_5A946C
0x5A9431: push    0FA1h
0x5A9436: mov     ecx, edi
0x5A9438: call    Tile_GetFloat
0x5A943D: fcomp   dword ptr ds:0A379B4h
0x5A9443: fnstsw  ax
0x5A9445: test    ah, 44h
0x5A9448: jnp     short loc_5A946C
0x5A944A: mov     ecx, ds:0B333C4h
0x5A9450: test    ecx, ecx
0x5A9452: jz      short loc_5A946C
0x5A9454: mov     eax, [ecx]
0x5A9456: mov     edx, [eax+198h]
0x5A945C: push    0
0x5A945E: call    edx
0x5A9460: test    al, al
0x5A9462: jnz     short loc_5A946C
0x5A9464: fld     dword ptr ds:0A379B4h
0x5A946A: jmp     short loc_5A946E
0x5A946C: fld1
0x5A946E: push    ecx
0x5A946F: mov     ecx, [ebx+28h]; this
0x5A9472: fstp    [esp+14h+var_14]; a3
0x5A9475: push    0FA1h; a2
0x5A947A: call    Tile_SetFloat
0x5A947F: fldz
0x5A9481: mov     al, [esi+38h]
0x5A9484: cmp     al, 2
0x5A9486: jnz     short loc_5A94AB
0x5A9488: fld     dword ptr [esi+3Ch]
0x5A948B: fsub    dword ptr ds:0B33E9Ch
0x5A9491: fstp    [esp+10h+var_4]
0x5A9495: fld     [esp+10h+var_4]
0x5A9499: fst     dword ptr [esi+3Ch]
0x5A949C: fcompp
0x5A949E: fnstsw  ax
0x5A94A0: test    ah, 41h
0x5A94A3: jp      short loc_5A9506
0x5A94A5: mov     byte ptr [esi+38h], 3
0x5A94A9: jmp     short loc_5A9506
0x5A94AB: cmp     al, 3
0x5A94AD: jnz     short loc_5A94D6
0x5A94AF: mov     ecx, [esi+40h]
0x5A94B2: fstp    st
0x5A94B4: test    ecx, ecx
0x5A94B6: jz      short loc_5A94C1
0x5A94B8: call    sub_6B7260
0x5A94BD: test    al, al
0x5A94BF: jnz     short loc_5A9506
0x5A94C1: mov     ecx, offset unk_B3B3D0
0x5A94C6: call    GameSetting_GetSafeFloatPointer
0x5A94CB: fld     dword ptr [eax]
0x5A94CD: fstp    dword ptr [esi+3Ch]
0x5A94D0: mov     byte ptr [esi+38h], 4
0x5A94D4: jmp     short loc_5A9506
0x5A94D6: cmp     al, 4
0x5A94D8: jnz     short loc_5A9504
0x5A94DA: fld     dword ptr [esi+3Ch]
0x5A94DD: fsub    dword ptr ds:0B33E9Ch
0x5A94E3: fstp    [esp+10h+var_4]
0x5A94E7: fld     [esp+10h+var_4]
0x5A94EB: fst     dword ptr [esi+3Ch]
0x5A94EE: fcompp
0x5A94F0: fnstsw  ax
0x5A94F2: test    ah, 41h
0x5A94F5: jp      short loc_5A9506
0x5A94F7: mov     ecx, esi
0x5A94F9: mov     byte ptr [esi+38h], 1
0x5A94FD: call    sub_5A8F30
0x5A9502: jmp     short loc_5A9506
0x5A9504: fstp    st
0x5A9506: push    0
0x5A9508: push    40Ch
0x5A950D: call    sub_5790E0
0x5A9512: add     esp, 8
0x5A9515: test    al, al
0x5A9517: jnz     loc_5A95A3
0x5A951D: lea     esi, [ebx+2Ch]
0x5A9520: mov     ecx, esi
0x5A9522: call    BSSimpleList_Count
0x5A9527: test    eax, eax
0x5A9529: jz      loc_5A95B6
0x5A952F: fld     dword ptr ds:0A379B4h
0x5A9535: push    ecx
0x5A9536: mov     ecx, [ebx+34h]; this
0x5A9539: fstp    [esp+14h+var_14]; a3
0x5A953C: push    0FA1h; a2
0x5A9541: call    Tile_SetFloat
0x5A9546: test    esi, esi
0x5A9548: jz      short loc_5A95B6
0x5A954A: lea     ebx, [ebx+0]
0x5A9550: mov     ecx, [ebx+34h]
0x5A9553: mov     edi, [esi]
0x5A9555: push    0FDEh
0x5A955A: call    sub_588C10
0x5A955F: push    eax
0x5A9560: mov     ecx, edi
0x5A9562: call    sub_5755D0
0x5A9567: test    al, al
0x5A9569: jz      short loc_5A958A
0x5A956B: fld     dword ptr [edi+8]
0x5A956E: fsub    dword ptr ds:0B33E9Ch
0x5A9574: fstp    [esp+10h+var_4]
0x5A9578: fld     [esp+10h+var_4]
0x5A957C: fst     dword ptr [edi+8]
0x5A957F: fldz
0x5A9581: fcompp
0x5A9583: fnstsw  ax
0x5A9585: test    ah, 1
0x5A9588: jz      short loc_5A9596
0x5A958A: mov     esi, [esi+4]
0x5A958D: test    esi, esi
0x5A958F: jnz     short loc_5A9550
0x5A9591: pop     edi
0x5A9592: pop     esi
0x5A9593: pop     ebx
0x5A9594: pop     ecx
0x5A9595: retn
0x5A9596: pop     edi
0x5A9597: pop     esi
0x5A9598: mov     ecx, ebx
0x5A959A: pop     ebx
0x5A959B: add     esp, 4
0x5A959E: jmp     sub_5A90E0
0x5A95A3: fld1
0x5A95A5: push    ecx
0x5A95A6: mov     ecx, [ebx+34h]; this
0x5A95A9: fstp    [esp+14h+var_14]; a3
0x5A95AC: push    0FA1h; a2
0x5A95B1: call    Tile_SetFloat
0x5A95B6: pop     edi
0x5A95B7: pop     esi
0x5A95B8: pop     ebx
0x5A95B9: pop     ecx
0x5A95BA: retn
