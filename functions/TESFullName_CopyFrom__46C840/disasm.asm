0x46C840: mov     eax, [esp+arg_0]
0x46C844: push    esi
0x46C845: push    0; int
0x46C847: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x46C84C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46C851: push    0; int
0x46C853: push    eax; void *
0x46C854: mov     esi, ecx
0x46C856: call    OblivionDynamicCast
0x46C85B: add     esp, 14h
0x46C85E: test    eax, eax
0x46C860: jz      short loc_46C879
0x46C862: mov     eax, [eax+4]
0x46C865: test    eax, eax
0x46C867: jnz     short loc_46C86E
0x46C869: mov     eax, offset EmptyString
0x46C86E: push    0; a3
0x46C870: push    eax; a2
0x46C871: lea     ecx, [esi+4]; this
0x46C874: call    BSStringT_Set
0x46C879: pop     esi
0x46C87A: retn    4
