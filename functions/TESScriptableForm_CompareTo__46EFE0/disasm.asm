0x46EFE0: mov     eax, [esp+arg_0]
0x46EFE4: push    esi
0x46EFE5: push    0; int
0x46EFE7: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x46EFEC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46EFF1: push    0; int
0x46EFF3: push    eax; void *
0x46EFF4: mov     esi, ecx
0x46EFF6: call    OblivionDynamicCast
0x46EFFB: add     esp, 14h
0x46EFFE: test    eax, eax
0x46F000: jnz     short loc_46F008
0x46F002: mov     al, 1
0x46F004: pop     esi
0x46F005: retn    4
0x46F008: mov     ecx, [esi+4]
0x46F00B: cmp     ecx, [eax+4]
0x46F00E: pop     esi
0x46F00F: setnz   al
0x46F012: retn    4
