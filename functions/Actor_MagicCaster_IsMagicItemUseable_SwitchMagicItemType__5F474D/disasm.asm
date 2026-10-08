0x5F474D: mov     edx, [edi]
0x5F474F: mov     eax, [edx+18h]
0x5F4752: mov     ecx, edi
0x5F4754: call    eax
0x5F4756: cmp     eax, 8; switch 9 cases
0x5F4759: ja      Actor_MagicCaster_IsMagicItemUseable___ActorMagicCaster_IsAbleToCast_Return1; jumptable 005F475F default case, cases 1,4,7
0x5F475F: jmp     ds:jpt_5F475F[eax*4]; switch jump
0x5F4766: push    0; jumptable 005F475F case 2
0x5F4768: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5F476D: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F4772: push    0; int
0x5F4774: push    edi; void *
0x5F4775: call    OblivionDynamicCast
0x5F477A: mov     ecx, [esp+14h+arg_10]
0x5F477E: add     esp, 14h
0x5F4781: push    eax
0x5F4782: add     ecx, 0FFFFFFA4h
0x5F4785: call    Actor_GetMagicItemCooldown
0x5F478A: test    eax, eax
0x5F478C: jz      short Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW; jumptable 005F475F case 3
0x5F478E: test    esi, esi
0x5F4790: jz      short loc_5F4798
0x5F4792: mov     dword ptr [esi], 4
0x5F4798: pop     edi
0x5F4799: pop     esi
0x5F479A: xor     al, al
0x5F479C: pop     ebx
0x5F479D: add     esp, 0Ch
0x5F47A0: retn    10h
0x5F47A3: cmp     byte ptr [esp+arg_18], 0; jumptable 005F475F case 3
0x5F47B1: test    bl, bl; jumptable 005F475F case 6
0x5F47B3: jnz     short Actor_MagicCaster_IsMagicItemUseable___Return_0
0x5F47B5: cmp     [esp+arg_9], bl
0x5F47B9: jnz     short Actor_MagicCaster_IsMagicItemUseable___Return_0
0x5F47BB: pop     edi
0x5F47BC: pop     esi
0x5F47BD: mov     eax, 1
0x5F47C2: pop     ebx
0x5F47C3: add     esp, 0Ch
0x5F47C6: retn    10h
0x5F47D4: cmp     byte ptr [esp+arg_18], 0; jumptable 005F475F cases 0,5
0x5F47D9: jz      short Actor_MagicCaster_IsMagicItemUseable___Return_0
0x5F47DB: cmp     [esp+arg_B], 0
0x5F47E0: jmp     short Actor_MagicCaster_IsMagicItemUseable___CheckSilence
0x5F47E2: push    0; Ingredient branch of Actor_MagicCaster_IsMagicItemUseable. Non-food ingredients fall through to CalcAlchemySkill unless the ingredient flags force zero output.
0x5F47E4: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x5F47E9: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F47EE: push    0; int
0x5F47F0: push    edi; void *
0x5F47F1: call    OblivionDynamicCast
0x5F47F6: add     esp, 14h
0x5F47F9: test    eax, eax
0x5F47FB: jz      short Actor_MagicCaster_IsMagicItemUseable___CalcAlchemySkill; AVU decode: ingredient wortcraft Alchemy branch. Loads MagicCaster pointer from stack, subtracts 0x5C to recover owning Actor, pushes AV 0x13, then calls Actor_GetLuckModifiedBaseAV.
0x5F47FD: test    byte ptr [eax+7Ch], 2
0x5F4801: jz      short Actor_MagicCaster_IsMagicItemUseable___CalcAlchemySkill; AVU decode: ingredient wortcraft Alchemy branch. Loads MagicCaster pointer from stack, subtracts 0x5C to recover owning Actor, pushes AV 0x13, then calls Actor_GetLuckModifiedBaseAV.
0x5F4803: fldz
0x5F4805: mov     ecx, [esp+arg_1C]
0x5F4809: pop     edi
0x5F480A: fstp    dword ptr [ecx]
0x5F480C: pop     esi
0x5F480D: mov     al, 1
0x5F480F: pop     ebx
0x5F4810: add     esp, 0Ch
0x5F4813: retn    10h
0x5F4842: pop     edi; jumptable 005F475F default case, cases 1,4,7
0x5F4843: pop     esi
0x5F4844: mov     al, 1
0x5F4846: pop     ebx
0x5F4847: add     esp, 0Ch
0x5F484A: retn    10h
