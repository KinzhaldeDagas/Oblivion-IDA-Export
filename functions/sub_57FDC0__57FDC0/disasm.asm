0x57FDC0: mov     eax, [esp+arg_0]
0x57FDC4: push    esi; a3
0x57FDC5: mov     esi, ecx
0x57FDC7: mov     ecx, [esi+84h]
0x57FDCD: test    ecx, ecx
0x57FDCF: jz      short loc_57FDE4
0x57FDD1: cmp     eax, 2
0x57FDD4: jnz     short loc_57FDE4
0x57FDD6: push    0FA1h
0x57FDDB: call    Tile_GetFloat
0x57FDE0: fstp    st
0x57FDE2: jmp     short loc_57FDFF
0x57FDE4: cmp     eax, 3
0x57FDE7: jnz     short loc_57FDFF
0x57FDE9: test    ecx, ecx
0x57FDEB: jz      short loc_57FDF5
0x57FDED: mov     eax, [ecx]
0x57FDEF: mov     edx, [eax]
0x57FDF1: push    1
0x57FDF3: call    edx
0x57FDF5: mov     dword ptr [esi+84h], 0
0x57FDFF: mov     ecx, [esi+84h]
0x57FE05: test    ecx, ecx
0x57FE07: jnz     short loc_57FE55
0x57FE09: mov     ecx, [esi+68h]; TileWindow *
0x57FE0C: push    offset aDataMenusMainS; "Data\\Menus\\Main\\safe_zone.xml"
0x57FE11: call    Menu_LoadXML
0x57FE16: fld     dword ptr ds:0A379B4h
0x57FE1C: push    ecx
0x57FE1D: fstp    [esp+8+a2]; a3
0x57FE20: push    0FA1h; a2
0x57FE25: mov     ecx, eax; this
0x57FE27: mov     [esi+84h], eax
0x57FE2D: call    Tile_SetFloat
0x57FE32: fldz
0x57FE34: mov     eax, [esi+84h]
0x57FE3A: mov     ecx, [eax+24h]
0x57FE3D: sub     esp, 8
0x57FE40: fstp    [esp+0Ch+a2]; float
0x57FE44: fld1
0x57FE46: fstp    [esp+0Ch+var_C]; float
0x57FE49: push    ecx; int
0x57FE4A: mov     ecx, esi
0x57FE4C: call    sub_57EA20
0x57FE51: pop     esi
0x57FE52: retn    4
0x57FE55: mov     edx, [ecx]
0x57FE57: mov     eax, [edx]
0x57FE59: push    1
0x57FE5B: call    eax
0x57FE5D: mov     dword ptr [esi+84h], 0
0x57FE67: pop     esi
0x57FE68: retn    4
