0x50B590: mov     eax, [esp+arg_8]
0x50B594: test    eax, eax
0x50B596: jnz     short loc_50B59B
0x50B598: xor     al, al
0x50B59A: retn
0x50B59B: push    0; int
0x50B59D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B5A2: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B5A7: push    0; int
0x50B5A9: push    eax; void *
0x50B5AA: call    OblivionDynamicCast
0x50B5AF: add     esp, 14h
0x50B5B2: test    eax, eax
0x50B5B4: jz      short loc_50B614
0x50B5B6: cmp     eax, ds:0B333C4h
0x50B5BC: jnz     short loc_50B608
0x50B5BE: push    3F1h
0x50B5C3: call    Menu_GetOpenMenuTile
0x50B5C8: add     esp, 4
0x50B5CB: test    eax, eax
0x50B5CD: jz      short loc_50B5F8
0x50B5CF: push    0; int
0x50B5D1: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x50B5D6: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x50B5DB: push    0; int
0x50B5DD: mov     ecx, eax
0x50B5DF: call    Tile_GetParentMenu
0x50B5E4: push    eax; void *
0x50B5E5: call    OblivionDynamicCast
0x50B5EA: add     esp, 14h
0x50B5ED: test    eax, eax
0x50B5EF: jz      short loc_50B5F8
0x50B5F1: mov     byte ptr [eax+94h], 1
0x50B5F8: mov     ecx, ds:0B333C4h
0x50B5FE: push    0; float
0x50B600: call    sub_670CA0
0x50B605: mov     al, 1
0x50B607: retn
0x50B608: mov     edx, [eax]
0x50B60A: mov     ecx, eax
0x50B60C: mov     eax, [edx+2B4h]
0x50B612: call    eax
0x50B614: mov     al, 1
0x50B616: retn
