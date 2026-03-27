0x5DD340: push    esi; a3
0x5DD341: push    404h
0x5DD346: call    Menu_GetOpenMenuTile
0x5DD34B: mov     esi, eax
0x5DD34D: add     esp, 4
0x5DD350: test    esi, esi
0x5DD352: jz      loc_5DD3DC
0x5DD358: push    edi; a3
0x5DD359: mov     ecx, esi
0x5DD35B: call    Tile_GetParentMenu
0x5DD360: mov     edi, eax
0x5DD362: test    edi, edi
0x5DD364: jz      short loc_5DD3DB
0x5DD366: fld     dword ptr ds:0A379B4h
0x5DD36C: push    ecx
0x5DD36D: fstp    [esp+0Ch+var_C]; a3
0x5DD370: push    1772h; a2
0x5DD375: mov     ecx, esi; this
0x5DD377: call    Tile_SetFloat
0x5DD37C: mov     ecx, edi; int
0x5DD37E: call    sub_584740
0x5DD383: mov     eax, ds:0B33398h
0x5DD388: mov     ecx, [eax+24h]
0x5DD38B: call    sub_6AC3D0
0x5DD390: push    3F1h
0x5DD395: call    Menu_GetOpenMenuTile
0x5DD39A: mov     esi, eax
0x5DD39C: add     esp, 4
0x5DD39F: test    esi, esi
0x5DD3A1: jz      short loc_5DD3DB
0x5DD3A3: mov     ecx, esi
0x5DD3A5: call    Tile_GetParentMenu
0x5DD3AA: push    0; float
0x5DD3AC: mov     ecx, esi
0x5DD3AE: mov     edi, eax
0x5DD3B0: call    sub_58FBA0
0x5DD3B5: fld     dword ptr ds:0A379B4h
0x5DD3BB: push    ecx
0x5DD3BC: fstp    [esp+0Ch+var_C]; a3
0x5DD3BF: push    0FA1h; a2
0x5DD3C4: mov     ecx, esi; this
0x5DD3C6: call    Tile_SetFloat
0x5DD3CB: mov     byte ptr [edi+96h], 1
0x5DD3D2: mov     ecx, edi
0x5DD3D4: pop     edi
0x5DD3D5: pop     esi
0x5DD3D6: jmp     loc_59E100
0x5DD3DB: pop     edi
0x5DD3DC: pop     esi
0x5DD3DD: retn
