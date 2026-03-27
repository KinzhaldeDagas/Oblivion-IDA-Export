0x5D1FC0: push    ecx
0x5D1FC1: push    40Bh
0x5D1FC6: call    Menu_GetOpenMenuTile
0x5D1FCB: add     esp, 4
0x5D1FCE: test    eax, eax
0x5D1FD0: jz      loc_5D2069
0x5D1FD6: push    esi
0x5D1FD7: mov     ecx, eax
0x5D1FD9: call    Tile_GetParentMenu
0x5D1FDE: mov     esi, eax
0x5D1FE0: test    esi, esi
0x5D1FE2: jz      loc_5D2068
0x5D1FE8: call    sub_578D70
0x5D1FED: cmp     al, 1
0x5D1FEF: jnz     short loc_5D2064
0x5D1FF1: mov     ecx, ds:0B333C4h
0x5D1FF7: push    edi; a3
0x5D1FF8: add     ecx, 44h ; 'D'; this
0x5D1FFB: call    ExtraDataList_GetContainerChanges
0x5D2000: mov     edi, eax
0x5D2002: mov     ecx, edi
0x5D2004: call    sub_48F390
0x5D2009: mov     eax, ds:0B3B714h
0x5D200E: mov     ecx, ds:0B333C4h
0x5D2014: push    0
0x5D2016: push    eax
0x5D2017: push    ecx
0x5D2018: mov     ecx, edi
0x5D201A: call    sub_491700
0x5D201F: mov     ecx, ds:0B333C4h
0x5D2025: call    sub_5E4420
0x5D202A: mov     [esp+0Ch+var_4], eax
0x5D202E: fild    [esp+0Ch+var_4]
0x5D2032: push    ecx
0x5D2033: mov     ecx, [esi+34h]; this
0x5D2036: fstp    [esp+10h+a2]; a3
0x5D2039: push    0FAEh; a2
0x5D203E: call    Tile_SetFloat
0x5D2043: mov     ecx, ds:0B333C4h
0x5D2049: mov     edx, [ecx]
0x5D204B: mov     eax, [edx+2C0h]
0x5D2051: call    eax
0x5D2053: mov     ecx, esi
0x5D2055: call    sub_5D0B80
0x5D205A: push    1
0x5D205C: mov     ecx, esi
0x5D205E: call    sub_5D1080
0x5D2063: pop     edi
0x5D2064: mov     byte ptr [esi+64h], 0
0x5D2068: pop     esi
0x5D2069: pop     ecx
0x5D206A: retn
