0x5F460A: push    0; int
0x5F460C: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5F4611: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F4616: push    0; int
0x5F4618: push    edi; void *
0x5F4619: call    OblivionDynamicCast
0x5F461E: add     esp, 14h
0x5F4621: test    eax, eax
0x5F4623: jz      short Actor_MagicCaster_IsMagicItemUseable___CheckNonApparelEnchantment
0x5F4625: test    byte ptr [eax+40h], 8
0x5F4629: jz      short Actor_MagicCaster_IsMagicItemUseable___CheckNonApparelEnchantment
0x5F462B: mov     [esp+arg_E], 0
