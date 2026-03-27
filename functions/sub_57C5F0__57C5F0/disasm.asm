0x57C5F0: push    1; arg1
0x57C5F2: push    0; canCreate
0x57C5F4: call    InterfaceManager_GetSingleton
0x57C5F9: add     esp, 8
0x57C5FC: test    eax, eax
0x57C5FE: jz      locret_57C7B9
0x57C604: push    1; arg1
0x57C606: push    0; canCreate
0x57C608: call    InterfaceManager_GetSingleton
0x57C60D: add     esp, 8
0x57C610: cmp     dword ptr [eax+1Ch], 0
0x57C614: jz      locret_57C7B9
0x57C61A: push    1; arg1
0x57C61C: push    0; canCreate
0x57C61E: call    InterfaceManager_GetSingleton
0x57C623: add     esp, 8
0x57C626: cmp     dword ptr [eax+68h], 0
0x57C62A: jz      locret_57C7B9
0x57C630: push    1; arg1
0x57C632: push    0; canCreate
0x57C634: call    InterfaceManager_GetSingleton
0x57C639: mov     eax, [eax+68h]
0x57C63C: add     esp, 8
0x57C63F: push    0FAEh
0x57C644: mov     ecx, eax
0x57C646: call    Tile_GetFloat
0x57C64B: fcomp   dword ptr ds:0A379B4h
0x57C651: fnstsw  ax
0x57C653: test    ah, 44h
0x57C656: jp      locret_57C7B9
0x57C65C: push    ebx
0x57C65D: push    ebp
0x57C65E: push    esi
0x57C65F: push    edi; a3
0x57C660: push    3EBh
0x57C665: call    Menu_GetOpenMenuTile
0x57C66A: push    3EAh
0x57C66F: mov     edi, eax
0x57C671: call    Menu_GetOpenMenuTile
0x57C676: push    3FEh
0x57C67B: mov     ebx, eax
0x57C67D: call    Menu_GetOpenMenuTile
0x57C682: push    3FFh
0x57C687: mov     esi, eax
0x57C689: call    Menu_GetOpenMenuTile
0x57C68E: mov     ebp, eax
0x57C690: mov     al, [esp+20h+arg_4]
0x57C694: neg     al
0x57C696: sbb     eax, eax
0x57C698: and     eax, 0Bh
0x57C69B: push    eax
0x57C69C: push    3FEh
0x57C6A1: call    sub_5790E0
0x57C6A6: add     esp, 18h
0x57C6A9: cmp     [esp+10h+arg_0], 0
0x57C6AE: jz      loc_57C76A
0x57C6B4: test    al, al
0x57C6B6: jnz     loc_57C799
0x57C6BC: test    edi, edi
0x57C6BE: jz      short loc_57C6CE
0x57C6C0: mov     ecx, edi
0x57C6C2: call    Tile_GetParentMenu
0x57C6C7: mov     ecx, eax; int
0x57C6C9: call    sub_584740
0x57C6CE: test    ebx, ebx
0x57C6D0: jz      short loc_57C6E0
0x57C6D2: mov     ecx, ebx
0x57C6D4: call    Tile_GetParentMenu
0x57C6D9: mov     ecx, eax; int
0x57C6DB: call    sub_584740
0x57C6E0: test    ebp, ebp
0x57C6E2: jz      short loc_57C6F2
0x57C6E4: mov     ecx, ebp
0x57C6E6: call    Tile_GetParentMenu
0x57C6EB: mov     ecx, eax; int
0x57C6ED: call    sub_584740
0x57C6F2: test    esi, esi
0x57C6F4: jnz     short loc_57C701
0x57C6F6: call    sub_57A180
0x57C6FB: mov     esi, eax
0x57C6FD: test    esi, esi
0x57C6FF: jz      short loc_57C724
0x57C701: push    1; arg1
0x57C703: push    0; canCreate
0x57C705: call    InterfaceManager_GetSingleton
0x57C70A: fld     dword ptr ds:0A68C08h
0x57C710: mov     ecx, [eax+68h]; this
0x57C713: fstp    [esp+18h+var_14]; a3
0x57C717: add     esp, 4
0x57C71A: push    1771h; a2
0x57C71F: call    Tile_SetFloat
0x57C724: push    1; arg1
0x57C726: push    0; canCreate
0x57C728: call    InterfaceManager_GetSingleton
0x57C72D: mov     eax, [eax+60h]
0x57C730: and     word ptr [eax+18h], 0FFFEh
0x57C736: add     esp, 8
0x57C739: call    sub_5B3E90
0x57C73E: call    sub_57A260
0x57C743: test    esi, esi
0x57C745: jz      short loc_57C799
0x57C747: mov     ecx, esi
0x57C749: call    Tile_GetParentMenu
0x57C74E: mov     ecx, [eax+4Ch]
0x57C751: test    ecx, ecx
0x57C753: jz      short loc_57C75A
0x57C755: call    sub_58E7D0
0x57C75A: mov     ecx, esi
0x57C75C: call    Tile_GetParentMenu
0x57C761: mov     ecx, eax; int
0x57C763: call    sub_584390
0x57C768: jmp     short loc_57C799
0x57C76A: test    al, al
0x57C76C: jz      short loc_57C799
0x57C76E: test    esi, esi
0x57C770: jz      short loc_57C799
0x57C772: mov     ecx, esi
0x57C774: call    Tile_GetParentMenu
0x57C779: mov     ecx, eax; int
0x57C77B: call    sub_584740
0x57C780: push    1; arg1
0x57C782: push    0; canCreate
0x57C784: call    InterfaceManager_GetSingleton
0x57C789: mov     eax, [eax+60h]
0x57C78C: or      word ptr [eax+18h], 1
0x57C791: add     esp, 8
0x57C794: call    sub_5B3E90
0x57C799: push    1; arg1
0x57C79B: push    0; canCreate
0x57C79D: call    InterfaceManager_GetSingleton
0x57C7A2: fldz
0x57C7A4: add     esp, 8
0x57C7A7: push    0; a3
0x57C7A9: push    ecx
0x57C7AA: mov     ecx, [eax+60h]; this
0x57C7AD: fstp    [esp+18h+a2]; a2
0x57C7B0: call    NiAVObject_UpdateNiAVObject
0x57C7B5: pop     edi
0x57C7B6: pop     esi
0x57C7B7: pop     ebp
0x57C7B8: pop     ebx
0x57C7B9: retn
