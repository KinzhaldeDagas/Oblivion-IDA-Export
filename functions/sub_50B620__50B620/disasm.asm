0x50B620: mov     eax, [esp+arg_8]
0x50B624: test    eax, eax
0x50B626: jnz     short loc_50B62B
0x50B628: xor     al, al
0x50B62A: retn
0x50B62B: push    0; int
0x50B62D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B632: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B637: push    0; int
0x50B639: push    eax; void *
0x50B63A: call    OblivionDynamicCast
0x50B63F: add     esp, 14h
0x50B642: test    eax, eax
0x50B644: jz      short loc_50B695
0x50B646: cmp     eax, ds:0B333C4h
0x50B64C: jnz     short loc_50B695
0x50B64E: push    3F1h
0x50B653: call    Menu_GetOpenMenuTile
0x50B658: add     esp, 4
0x50B65B: test    eax, eax
0x50B65D: jz      short loc_50B688
0x50B65F: push    0; int
0x50B661: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x50B666: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x50B66B: push    0; int
0x50B66D: mov     ecx, eax
0x50B66F: call    Tile_GetParentMenu
0x50B674: push    eax; void *
0x50B675: call    OblivionDynamicCast
0x50B67A: add     esp, 14h
0x50B67D: test    eax, eax
0x50B67F: jz      short loc_50B688
0x50B681: mov     byte ptr [eax+95h], 1
0x50B688: mov     ecx, ds:0B333C4h
0x50B68E: push    0
0x50B690: call    Player_GoToJail?
0x50B695: mov     al, 1
0x50B697: retn
