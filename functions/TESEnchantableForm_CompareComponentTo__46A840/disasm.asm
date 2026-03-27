0x46A840: mov     eax, [esp+arg_0]
0x46A844: push    esi
0x46A845: push    0; int
0x46A847: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x46A84C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46A851: push    0; int
0x46A853: push    eax; void *
0x46A854: mov     esi, ecx
0x46A856: call    OblivionDynamicCast
0x46A85B: add     esp, 14h
0x46A85E: test    eax, eax
0x46A860: jnz     short loc_46A868
0x46A862: mov     al, 1
0x46A864: pop     esi
0x46A865: retn    4
0x46A868: mov     ecx, [esi+4]
0x46A86B: cmp     ecx, [eax+4]
0x46A86E: jnz     short loc_46A862
0x46A870: mov     dx, [esi+8]
0x46A874: cmp     dx, [eax+8]
0x46A878: pop     esi
0x46A879: setnz   al
0x46A87C: retn    4
