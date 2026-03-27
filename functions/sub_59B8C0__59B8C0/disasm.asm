0x59B8C0: call    sub_578D70
0x59B8C5: cmp     al, 2
0x59B8C7: jnz     short locret_59B91D
0x59B8C9: push    3FDh
0x59B8CE: call    Menu_GetOpenMenuTile
0x59B8D3: add     esp, 4
0x59B8D6: test    eax, eax
0x59B8D8: jz      short loc_59B8E3
0x59B8DA: mov     ecx, eax
0x59B8DC: call    Tile_GetParentMenu
0x59B8E1: jmp     short loc_59B8E5
0x59B8E3: xor     eax, eax
0x59B8E5: push    esi
0x59B8E6: push    0; int
0x59B8E8: push    offset ??_R0?AVControlsMenu@@@8; struct TypeDescriptor *
0x59B8ED: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59B8F2: push    0; int
0x59B8F4: push    eax; void *
0x59B8F5: call    OblivionDynamicCast
0x59B8FA: mov     esi, eax
0x59B8FC: add     esp, 14h
0x59B8FF: test    esi, esi
0x59B901: jz      short loc_59B91C
0x59B903: mov     eax, [esi+5Ch]
0x59B906: mov     ecx, ds:0B33398h
0x59B90C: mov     ecx, [ecx+20h]; this
0x59B90F: push    eax; scheme
0x59B910: call    InputGlobals__ResetControlMap
0x59B915: mov     byte ptr [esi+0D4h], 1
0x59B91C: pop     esi
0x59B91D: retn
