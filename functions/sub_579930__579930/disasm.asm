0x579930: push    esi; a3
0x579931: push    1; arg1
0x579933: push    0; canCreate
0x579935: call    InterfaceManager_GetSingleton
0x57993A: fld     dword ptr ds:0A379B4h
0x579940: mov     esi, [eax+1Ch]
0x579943: fstp    [esp+0Ch+a2]; a3
0x579947: add     esp, 4
0x57994A: push    0FA1h; a2
0x57994F: mov     ecx, esi; this
0x579951: call    Tile_SetFloat
0x579956: cmp     dword ptr [esi+24h], 0
0x57995A: jnz     short loc_579960
0x57995C: or      dword ptr [esi+2Ch], 2
0x579960: mov     ecx, esi
0x579962: pop     esi
0x579963: jmp     sub_58E870
