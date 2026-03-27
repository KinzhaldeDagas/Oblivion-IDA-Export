0x69B16C: mov     edx, [esi]
0x69B16E: mov     eax, [edx+30h]
0x69B171: mov     ecx, esi
0x69B173: mov     byte ptr [esp+arg_10], 0
0x69B178: call    eax
0x69B17A: push    0; int
0x69B17C: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x69B181: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x69B186: mov     edi, eax
0x69B188: push    0; int
0x69B18A: push    edi; void *
0x69B18B: call    OblivionDynamicCast
0x69B190: add     esp, 14h
0x69B193: push    0
0x69B195: lea     ebp, [edi+0Ch]
0x69B198: push    0
0x69B19A: mov     ecx, ebp
0x69B19C: mov     dword ptr [esp+8+arg_3C], eax
0x69B1A0: call    EffectItemList_GetStrongestItem
0x69B1A5: push    0
0x69B1A7: push    1
0x69B1A9: mov     ecx, ebp
0x69B1AB: mov     [esp+8+arg_34], eax
0x69B1AF: call    EffectItemList_GetStrongestItem
0x69B1B4: mov     edx, [esi]
0x69B1B6: xor     ebp, ebp
0x69B1B8: push    ebp; int
0x69B1B9: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x69B1BE: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x69B1C3: mov     [esp+0Ch+arg_38], eax
0x69B1C7: mov     eax, [edx+30h]
0x69B1CA: push    ebp; int
0x69B1CB: mov     ecx, esi
0x69B1CD: call    eax
0x69B1CF: push    eax; void *
0x69B1D0: call    OblivionDynamicCast
0x69B1D5: add     esp, 14h
0x69B1D8: lea     ecx, [esp+arg_44]
0x69B1DC: mov     [esp+arg_28], eax
0x69B1E0: mov     [esp+arg_44], ebp
0x69B1E4: mov     [esp+arg_48], ebp
0x69B1E8: call    BSSimpleList_Clear
