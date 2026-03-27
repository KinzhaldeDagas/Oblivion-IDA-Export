0x419840: mov     eax, [esp+arg_0]
0x419844: push    esi
0x419845: push    0; int
0x419847: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x41984C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419851: push    0; int
0x419853: push    eax; void *
0x419854: mov     esi, ecx
0x419856: call    OblivionDynamicCast
0x41985B: add     esp, 14h
0x41985E: test    eax, eax
0x419860: jz      short IngredientItem_MagicItem_CompareData___Return_1
0x419862: mov     ecx, [eax+78h]
0x419865: cmp     ecx, [esi+54h]
0x419868: jnz     short IngredientItem_MagicItem_CompareData___Return_1
0x41986A: mov     dl, [eax+7Ch]
0x41986D: cmp     dl, [esi+58h]
0x419870: jnz     short IngredientItem_MagicItem_CompareData___Return_1
0x419872: xor     al, al
0x419874: pop     esi
0x419875: retn    4
