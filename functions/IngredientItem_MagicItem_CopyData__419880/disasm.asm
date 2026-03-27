0x419880: mov     eax, [esp+arg_0]
0x419884: push    esi
0x419885: push    0; int
0x419887: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x41988C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419891: push    0; int
0x419893: push    eax; void *
0x419894: mov     esi, ecx
0x419896: call    OblivionDynamicCast
0x41989B: add     esp, 14h
0x41989E: test    eax, eax
0x4198A0: jz      short IngredientItem_MagicItem_CopyData___Done
0x4198A2: mov     ecx, [eax+78h]
0x4198A5: mov     [esi+54h], ecx
0x4198A8: mov     dl, [eax+7Ch]
0x4198AB: mov     [esi+58h], dl
