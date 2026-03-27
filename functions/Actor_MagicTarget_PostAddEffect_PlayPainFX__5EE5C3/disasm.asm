0x5EE5C3: mov     eax, [esi+8]
0x5EE5C6: push    0; int
0x5EE5C8: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x5EE5CD: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5EE5D2: push    0; int
0x5EE5D4: push    eax; void *
0x5EE5D5: xor     bl, bl
0x5EE5D7: call    OblivionDynamicCast
0x5EE5DC: add     esp, 14h
0x5EE5DF: test    eax, eax
0x5EE5E1: jz      short loc_5EE5ED
0x5EE5E3: mov     bl, [eax+7Ch]
0x5EE5E6: shr     bl, 1
0x5EE5E8: and     bl, 1
0x5EE5EB: jmp     short loc_5EE614
0x5EE5ED: mov     eax, [esi+8]
0x5EE5F0: push    0; int
0x5EE5F2: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x5EE5F7: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5EE5FC: push    0; int
0x5EE5FE: push    eax; void *
0x5EE5FF: call    OblivionDynamicCast
0x5EE604: add     esp, 14h
0x5EE607: test    eax, eax
0x5EE609: jz      short loc_5EE614
0x5EE60B: mov     ecx, eax
0x5EE60D: call    AlchemyItem_IsEdible
0x5EE612: mov     bl, al
0x5EE614: mov     ecx, [esi+0Ch]
0x5EE617: call    EffectItem_IsHostile
0x5EE61C: test    al, al
0x5EE61E: jz      short Actor_MagicTarget_PostAddEffect___Done_
0x5EE620: cmp     dword ptr [esi+28h], 4
0x5EE624: jz      short Actor_MagicTarget_PostAddEffect___Done_
0x5EE626: test    bl, bl
0x5EE628: jnz     short Actor_MagicTarget_PostAddEffect___Done_
0x5EE62A: mov     ecx, [esi+0Ch]
0x5EE62D: mov     edx, [ecx+1Ch]
0x5EE630: cmp     dword ptr [edx+98h], 434E4C53h
0x5EE63A: mov     byte ptr [esp+arg_C], 1
0x5EE63F: jz      short loc_5EE645
0x5EE641: mov     byte ptr [esp+arg_C], bl
0x5EE645: mov     eax, [esp+arg_C]
0x5EE649: push    1
0x5EE64B: push    eax
0x5EE64C: lea     ecx, [edi-68h]
0x5EE64F: call    Actor_PlayPainFX
