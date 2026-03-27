0x412A40: mov     eax, [esp+arg_0]
0x412A44: push    esi
0x412A45: push    0; int
0x412A47: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x412A4C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x412A51: push    0; int
0x412A53: push    eax; void *
0x412A54: mov     esi, ecx
0x412A56: call    OblivionDynamicCast
0x412A5B: add     esp, 14h
0x412A5E: test    eax, eax
0x412A60: jz      short AlchemyItem_MagicItem_CopyData___Done
0x412A62: mov     ecx, [eax+78h]
0x412A65: mov     [esi+54h], ecx
0x412A68: mov     dl, [eax+7Ch]
0x412A6B: mov     [esi+58h], dl
0x412A6E: pop     esi
0x412A6F: retn    4
