0x5D3390: push    ecx
0x5D3391: push    ebx
0x5D3392: push    edi
0x5D3393: call    sub_578D70
0x5D3398: push    40Fh
0x5D339D: mov     bl, al
0x5D339F: call    Menu_GetOpenMenuTile
0x5D33A4: add     esp, 4
0x5D33A7: mov     ecx, eax
0x5D33A9: call    Tile_GetParentMenu
0x5D33AE: push    0; int
0x5D33B0: push    offset ??_R0?AVSaveMenu@@@8; struct TypeDescriptor *
0x5D33B5: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D33BA: push    0; int
0x5D33BC: push    eax; void *
0x5D33BD: call    OblivionDynamicCast
0x5D33C2: add     esp, 14h
0x5D33C5: cmp     bl, 2
0x5D33C8: mov     edi, eax
0x5D33CA: jnz     loc_5D3465
0x5D33D0: mov     ecx, [edi+58h]
0x5D33D3: test    ecx, ecx
0x5D33D5: push    esi; a3
0x5D33D6: mov     esi, [edi+4Ch]
0x5D33D9: jz      short loc_5D33E7
0x5D33DB: push    0FAEh
0x5D33E0: call    Tile_GetFloat
0x5D33E5: jmp     short loc_5D33ED
0x5D33E7: fld     dword ptr ds:0A30634h
0x5D33ED: fstp    [esp+10h+var_4]
0x5D33F1: fld     [esp+10h+var_4]
0x5D33F5: call    Double_To_SInt32
0x5D33FA: test    esi, esi
0x5D33FC: mov     ecx, 1
0x5D3401: jz      short loc_5D343D
0x5D3403: cmp     dword ptr [esi], 0
0x5D3406: jz      short loc_5D343D
0x5D3408: cmp     eax, ecx
0x5D340A: jz      short loc_5D3418
0x5D340C: mov     esi, [esi+4]
0x5D340F: add     ecx, 1
0x5D3412: test    esi, esi
0x5D3414: jnz     short loc_5D3403
0x5D3416: jmp     short loc_5D343D
0x5D3418: fld1
0x5D341A: push    ecx
0x5D341B: mov     ecx, [edi+40h]; this
0x5D341E: fstp    [esp+14h+a2]; a3
0x5D3421: push    0FA1h; a2
0x5D3426: call    Tile_SetFloat
0x5D342B: mov     eax, [esi]
0x5D342D: mov     ecx, ds:0B33B00h
0x5D3433: push    0; int
0x5D3435: push    0; Str
0x5D3437: push    eax; int
0x5D3438: call    TESSaveLoadGame_SaveGame?
0x5D343D: fld     dword ptr ds:0A30634h
0x5D3443: push    ecx
0x5D3444: mov     ecx, ds:0B387D0h
0x5D344A: fstp    [esp+14h+a2]; duration
0x5D344D: push    1; unk2
0x5D344F: push    0; unk1
0x5D3451: push    ecx; string
0x5D3452: call    GameUI_QueueMessage
0x5D3457: add     esp, 10h
0x5D345A: call    sub_5D2CF0
0x5D345F: call    sub_5BDA20
0x5D3464: pop     esi
0x5D3465: mov     byte ptr [edi+5Ch], 0
0x5D3469: pop     edi
0x5D346A: pop     ebx
0x5D346B: pop     ecx
0x5D346C: retn
