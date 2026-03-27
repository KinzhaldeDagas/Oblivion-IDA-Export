0x6A2B73: mov     eax, [ebp+0]
0x6A2B76: mov     edx, [eax+4]
0x6A2B79: mov     ecx, ebp
0x6A2B7B: call    edx
0x6A2B7D: mov     esi, eax
0x6A2B7F: test    esi, esi
0x6A2B81: jz      MagicTarget_AddEffect___Return_0
0x6A2B87: mov     ebx, [esp+arg_1C]
0x6A2B8B: push    0; int
0x6A2B8D: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x6A2B92: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x6A2B97: push    0; int
0x6A2B99: push    ebx; void *
0x6A2B9A: mov     [esi+20h], edi
0x6A2B9D: call    OblivionDynamicCast
0x6A2BA2: add     esp, 14h
0x6A2BA5: test    eax, eax
0x6A2BA7: jnz     short MagicTarget_AddEffect___AddEffectToTarget
