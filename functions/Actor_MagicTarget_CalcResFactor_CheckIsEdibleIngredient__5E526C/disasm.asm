0x5E526C: mov     eax, [ebx]
0x5E526E: mov     edx, [eax+18h]
0x5E5271: push    esi
0x5E5272: mov     ecx, ebx
0x5E5274: call    edx
0x5E5276: cmp     eax, 7
0x5E5279: jnz     short Actor_MagicTarget_CalcResFactor___NotAlchemyItem
0x5E527B: push    0; int
0x5E527D: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x5E5282: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5E5287: push    0; int
0x5E5289: push    ebx; void *
0x5E528A: call    OblivionDynamicCast
0x5E528F: mov     esi, eax
0x5E5291: add     esp, 14h
0x5E5294: test    esi, esi
0x5E5296: jz      short loc_5E52A9
0x5E5298: lea     ecx, [esi+30h]
0x5E529B: call    EffectItemList_AllEffectsHostile
0x5E52A0: test    al, al
0x5E52A2: mov     [esp+4+arg_10], 1
0x5E52A7: jnz     short loc_5E52AE
0x5E52A9: mov     [esp+4+arg_10], 0
0x5E52AE: test    esi, esi
0x5E52B0: jz      short loc_5E52B9
0x5E52B2: cmp     [esp+4+arg_10], 0
0x5E52B7: jz      short Actor_MagicTarget_CalcResFactor___Return_1f_
0x5E52B9: mov     eax, [ebx]
0x5E52BB: mov     edx, [eax+18h]
0x5E52BE: mov     ecx, ebx
0x5E52C0: call    edx
0x5E52C2: cmp     eax, 8
0x5E52C5: jnz     short Actor_MagicTarget_CalcResFactor___GetCasterSkill
0x5E52C7: push    0; int
0x5E52C9: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x5E52CE: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5E52D3: push    0; int
0x5E52D5: push    ebx; void *
0x5E52D6: call    OblivionDynamicCast
0x5E52DB: add     esp, 14h
0x5E52DE: test    eax, eax
0x5E52E0: jz      short Actor_MagicTarget_CalcResFactor___GetCasterSkill
0x5E52E2: test    byte ptr [eax+7Ch], 2
0x5E52E6: jz      short Actor_MagicTarget_CalcResFactor___GetCasterSkill
