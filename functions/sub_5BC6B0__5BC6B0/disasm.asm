0x5BC6B0: push    edi
0x5BC6B1: push    3E9h
0x5BC6B6: call    Menu_GetOpenMenuTile
0x5BC6BB: mov     edi, eax
0x5BC6BD: add     esp, 4
0x5BC6C0: test    edi, edi
0x5BC6C2: jz      loc_5BC761
0x5BC6C8: push    esi; a3
0x5BC6C9: mov     ecx, edi
0x5BC6CB: call    Tile_GetParentMenu
0x5BC6D0: mov     esi, eax
0x5BC6D2: test    esi, esi
0x5BC6D4: jz      loc_5BC760
0x5BC6DA: push    1; arg1
0x5BC6DC: push    0; canCreate
0x5BC6DE: mov     byte ptr ds:0B143AEh, 1
0x5BC6E5: call    InterfaceManager_GetSingleton
0x5BC6EA: add     esp, 8
0x5BC6ED: cmp     byte ptr [eax+0B0h], 0FFh
0x5BC6F4: jnz     short loc_5BC70B
0x5BC6F6: push    1; arg1
0x5BC6F8: push    0; canCreate
0x5BC6FA: call    InterfaceManager_GetSingleton
0x5BC6FF: mov     cl, [esi+60h]
0x5BC702: add     esp, 8
0x5BC705: mov     [eax+0B0h], cl
0x5BC70B: fld     dword ptr ds:0A379B4h
0x5BC711: push    ecx
0x5BC712: fstp    [esp+0Ch+a2]; a3
0x5BC715: push    1772h; a2
0x5BC71A: mov     ecx, edi; this
0x5BC71C: call    Tile_SetFloat
0x5BC721: push    1; arg1
0x5BC723: push    0; canCreate
0x5BC725: call    InterfaceManager_GetSingleton
0x5BC72A: add     esp, 8
0x5BC72D: cmp     dword ptr [eax+60h], 0
0x5BC731: jz      short loc_5BC756
0x5BC733: push    40Eh
0x5BC738: push    1
0x5BC73A: call    Menu_GetB3A708
0x5BC73F: add     esp, 4
0x5BC742: mov     ecx, eax
0x5BC744: call    sub_5878B0
0x5BC749: test    al, al
0x5BC74B: jnz     short loc_5BC756
0x5BC74D: mov     ecx, esi; int
0x5BC74F: pop     esi
0x5BC750: pop     edi
0x5BC751: jmp     sub_584740
0x5BC756: mov     edx, [esi]
0x5BC758: mov     eax, [edx]
0x5BC75A: push    1
0x5BC75C: mov     ecx, esi
0x5BC75E: call    eax
0x5BC760: pop     esi
0x5BC761: pop     edi
0x5BC762: retn
