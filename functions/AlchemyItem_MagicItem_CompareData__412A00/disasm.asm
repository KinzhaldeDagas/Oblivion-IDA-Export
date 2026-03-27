0x412A00: mov     eax, [esp+arg_0]
0x412A04: push    esi
0x412A05: push    0; int
0x412A07: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x412A0C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x412A11: push    0; int
0x412A13: push    eax; void *
0x412A14: mov     esi, ecx
0x412A16: call    OblivionDynamicCast
0x412A1B: add     esp, 14h
0x412A1E: test    eax, eax
0x412A20: jz      short AlchemyItem_MagicItem_CompareData___Return_1
0x412A22: mov     ecx, [eax+78h]
0x412A25: cmp     ecx, [esi+54h]
0x412A28: jnz     short AlchemyItem_MagicItem_CompareData___Return_1
0x412A2A: mov     dl, [eax+7Ch]
0x412A2D: cmp     dl, [esi+58h]
0x412A30: jnz     short AlchemyItem_MagicItem_CompareData___Return_1
0x412A32: xor     al, al
0x412A34: pop     esi
0x412A35: retn    4
0x412A38: mov     al, 1
0x412A3A: pop     esi
0x412A3B: retn    4
