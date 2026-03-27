0x5D5A50: push    esi
0x5D5A51: push    0; int
0x5D5A53: push    offset ??_R0?AVSkillsMenu@@@8; struct TypeDescriptor *
0x5D5A58: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D5A5D: push    0; int
0x5D5A5F: push    408h
0x5D5A64: call    Menu_GetOpenMenuTile
0x5D5A69: add     esp, 4
0x5D5A6C: mov     ecx, eax
0x5D5A6E: call    Tile_GetParentMenu
0x5D5A73: push    eax; void *
0x5D5A74: call    OblivionDynamicCast
0x5D5A79: mov     esi, eax
0x5D5A7B: add     esp, 14h
0x5D5A7E: test    esi, esi
0x5D5A80: jz      short loc_5D5AAC
0x5D5A82: call    sub_578D70
0x5D5A87: cmp     al, 2
0x5D5A89: jnz     short loc_5D5AAC
0x5D5A8B: mov     eax, [esi+40h]
0x5D5A8E: mov     ecx, ds:0B33A98h
0x5D5A94: push    eax
0x5D5A95: call    sub_447350
0x5D5A9A: mov     ecx, ds:0B333C4h
0x5D5AA0: push    eax
0x5D5AA1: call    Player_SetBirthsign
0x5D5AA6: pop     esi
0x5D5AA7: jmp     sub_5D5720
0x5D5AAC: pop     esi
0x5D5AAD: retn
