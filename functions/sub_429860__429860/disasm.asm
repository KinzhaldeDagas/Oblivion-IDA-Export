0x429860: mov     eax, [esp+arg_0]
0x429864: push    esi
0x429865: push    0; int
0x429867: push    offset ??_R0?AVExtraXTarget@@@8; struct TypeDescriptor *
0x42986C: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429871: push    0; int
0x429873: push    eax; void *
0x429874: mov     esi, ecx
0x429876: call    OblivionDynamicCast
0x42987B: add     esp, 14h
0x42987E: test    eax, eax
0x429880: jnz     short loc_429888
0x429882: mov     al, 1
0x429884: pop     esi
0x429885: retn    4
0x429888: mov     ecx, [esi+0Ch]
0x42988B: cmp     ecx, [eax+0Ch]
0x42988E: pop     esi
0x42988F: setnz   al
0x429892: retn    4
