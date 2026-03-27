0x5A6040: mov     eax, ds:0B333C4h
0x5A6045: test    eax, eax
0x5A6047: jz      locret_5A6215
0x5A604D: cmp     byte ptr [eax+5C0h], 0
0x5A6054: jnz     locret_5A6215
0x5A605A: push    edi; a3
0x5A605B: push    3ECh
0x5A6060: call    Menu_GetOpenMenuTile
0x5A6065: mov     edi, eax
0x5A6067: add     esp, 4
0x5A606A: test    edi, edi
0x5A606C: jz      loc_5A6214
0x5A6072: mov     ecx, edi
0x5A6074: call    Tile_GetParentMenu
0x5A6079: test    eax, eax
0x5A607B: jz      loc_5A6214
0x5A6081: push    esi; a3
0x5A6082: push    0; int
0x5A6084: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x5A6089: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A608E: push    0; int
0x5A6090: mov     ecx, edi
0x5A6092: call    Tile_GetParentMenu
0x5A6097: push    eax; void *
0x5A6098: call    OblivionDynamicCast
0x5A609D: mov     esi, eax
0x5A609F: add     esp, 14h
0x5A60A2: test    esi, esi
0x5A60A4: jz      loc_5A6213
0x5A60AA: cmp     [esp+8+arg_0], 0
0x5A60AF: jz      loc_5A61B7
0x5A60B5: push    3EBh
0x5A60BA: push    1
0x5A60BC: call    Menu_GetB3A708
0x5A60C1: add     esp, 4
0x5A60C4: mov     ecx, eax
0x5A60C6: call    sub_5878B0
0x5A60CB: test    al, al
0x5A60CD: jnz     loc_5A6187
0x5A60D3: push    3EAh
0x5A60D8: push    1
0x5A60DA: call    Menu_GetB3A708
0x5A60DF: add     esp, 4
0x5A60E2: mov     ecx, eax
0x5A60E4: call    sub_5878B0
0x5A60E9: test    al, al
0x5A60EB: jnz     loc_5A6187
0x5A60F1: push    3FEh
0x5A60F6: push    1
0x5A60F8: call    Menu_GetB3A708
0x5A60FD: add     esp, 4
0x5A6100: mov     ecx, eax
0x5A6102: call    sub_5878B0
0x5A6107: test    al, al
0x5A6109: jnz     short loc_5A6187
0x5A610B: push    3FFh
0x5A6110: push    1
0x5A6112: call    Menu_GetB3A708
0x5A6117: add     esp, 4
0x5A611A: mov     ecx, eax
0x5A611C: call    sub_5878B0
0x5A6121: test    al, al
0x5A6123: jnz     short loc_5A6187
0x5A6125: mov     eax, [esi+24h]
0x5A6128: cmp     eax, 4
0x5A612B: jz      short loc_5A6171
0x5A612D: cmp     eax, 2
0x5A6130: jz      short loc_5A6171
0x5A6132: call    sub_578FE0
0x5A6137: test    eax, eax
0x5A6139: jz      short loc_5A6171
0x5A613B: cmp     [esp+8+arg_4], 0
0x5A6140: jz      short loc_5A616A
0x5A6142: fld1
0x5A6144: push    ecx
0x5A6145: fstp    [esp+0Ch+a2]; a3
0x5A6148: mov     ecx, edi; this
0x5A614A: push    0FA1h; a2
0x5A614F: call    Tile_SetFloat
0x5A6154: fld1
0x5A6156: push    ecx
0x5A6157: fstp    [esp+0Ch+a2]; a3
0x5A615A: mov     ecx, [esi+4]; this
0x5A615D: push    0FB1h; a2
0x5A6162: call    Tile_SetFloat
0x5A6167: pop     esi
0x5A6168: pop     edi
0x5A6169: retn
0x5A616A: mov     ecx, esi; int
0x5A616C: call    sub_584740
0x5A6171: fld1
0x5A6173: push    ecx
0x5A6174: mov     ecx, [esi+4]; this
0x5A6177: fstp    [esp+0Ch+a2]; a3
0x5A617A: push    0FB1h; a2
0x5A617F: call    Tile_SetFloat
0x5A6184: pop     esi
0x5A6185: pop     edi
0x5A6186: retn
0x5A6187: fldz
0x5A6189: push    ecx
0x5A618A: mov     ecx, [esi+4]; this
0x5A618D: fstp    [esp+0Ch+a2]; a3
0x5A6190: push    0FB1h; a2
0x5A6195: call    Tile_SetFloat
0x5A619A: mov     eax, [esi+24h]
0x5A619D: cmp     eax, 1
0x5A61A0: jz      short loc_5A6213
0x5A61A2: cmp     eax, 8
0x5A61A5: jz      short loc_5A6213
0x5A61A7: cmp     [esp+8+arg_4], 0
0x5A61AC: jnz     short loc_5A61FD
0x5A61AE: mov     ecx, esi; int
0x5A61B0: pop     esi
0x5A61B1: pop     edi
0x5A61B2: jmp     sub_584390
0x5A61B7: fld1
0x5A61B9: push    ecx
0x5A61BA: mov     ecx, [esi+4]; this
0x5A61BD: fstp    [esp+0Ch+a2]; a3
0x5A61C0: push    0FB1h; a2
0x5A61C5: call    Tile_SetFloat
0x5A61CA: mov     eax, [esi+24h]
0x5A61CD: cmp     eax, 1
0x5A61D0: jz      short loc_5A61FD
0x5A61D2: cmp     eax, 8
0x5A61D5: jz      short loc_5A61FD
0x5A61D7: cmp     [esp+8+arg_4], 0
0x5A61DC: jz      short loc_5A61F6
0x5A61DE: fld     dword ptr ds:0A379B4h
0x5A61E4: push    ecx
0x5A61E5: fstp    [esp+0Ch+a2]; a3
0x5A61E8: push    0FA1h; a2
0x5A61ED: mov     ecx, edi; this
0x5A61EF: call    Tile_SetFloat
0x5A61F4: jmp     short loc_5A61FD
0x5A61F6: mov     ecx, esi; int
0x5A61F8: call    sub_584390
0x5A61FD: fld     dword ptr ds:0A379B4h
0x5A6203: push    ecx
0x5A6204: fstp    [esp+0Ch+a2]; a3
0x5A6207: mov     ecx, edi; this
0x5A6209: push    0FA1h; a2
0x5A620E: call    Tile_SetFloat
0x5A6213: pop     esi
0x5A6214: pop     edi
0x5A6215: retn
