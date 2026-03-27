0x5D41E0: push    esi
0x5D41E1: push    418h
0x5D41E6: call    Menu_GetOpenMenuTile
0x5D41EB: mov     esi, eax
0x5D41ED: add     esp, 4
0x5D41F0: test    esi, esi
0x5D41F2: jz      short loc_5D4255
0x5D41F4: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x5D41FA: push    edi; a3
0x5D41FB: call    sub_668CC0
0x5D4200: push    0; int
0x5D4202: push    offset ??_R0?AVSigilStoneMenu@@@8; struct TypeDescriptor *
0x5D4207: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D420C: push    0; int
0x5D420E: mov     ecx, esi
0x5D4210: call    Tile_GetParentMenu
0x5D4215: push    eax; void *
0x5D4216: call    OblivionDynamicCast
0x5D421B: mov     edi, eax
0x5D421D: add     esp, 14h
0x5D4220: test    edi, edi
0x5D4222: jz      short loc_5D4241
0x5D4224: fld     dword ptr ds:0A379B4h
0x5D422A: push    ecx
0x5D422B: fstp    [esp+0Ch+a2]; a3
0x5D422E: push    1772h; a2
0x5D4233: mov     ecx, esi; this
0x5D4235: call    Tile_SetFloat
0x5D423A: mov     ecx, edi; int
0x5D423C: call    sub_584740
0x5D4241: mov     al, ds:0B3B720h
0x5D4246: cmp     al, 3
0x5D4248: pop     edi
0x5D4249: jz      short loc_5D424F
0x5D424B: cmp     al, 2
0x5D424D: jnz     short loc_5D4255
0x5D424F: pop     esi
0x5D4250: jmp     sub_57CAC0
0x5D4255: pop     esi
0x5D4256: retn
