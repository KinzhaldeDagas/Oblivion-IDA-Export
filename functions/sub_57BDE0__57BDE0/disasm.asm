0x57BDE0: push    40Ah
0x57BDE5: call    Menu_GetOpenMenuTile
0x57BDEA: mov     ecx, eax
0x57BDEC: add     esp, 4
0x57BDEF: xor     eax, eax
0x57BDF1: test    ecx, ecx
0x57BDF3: jz      short locret_57BE0F
0x57BDF5: push    eax; int
0x57BDF6: push    offset ??_R0?AVPersuasionMenu@@@8; struct TypeDescriptor *
0x57BDFB: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57BE00: push    eax; int
0x57BE01: call    Tile_GetParentMenu
0x57BE06: push    eax; void *
0x57BE07: call    OblivionDynamicCast
0x57BE0C: add     esp, 14h
0x57BE0F: retn
