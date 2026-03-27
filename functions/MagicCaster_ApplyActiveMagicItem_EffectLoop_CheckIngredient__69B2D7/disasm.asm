0x69B2D7: mov     edx, [esi]
0x69B2D9: mov     eax, [edx+30h]
0x69B2DC: mov     ecx, esi
0x69B2DE: call    eax
0x69B2E0: mov     edx, [eax]
0x69B2E2: mov     ecx, eax
0x69B2E4: mov     eax, [edx+18h]
0x69B2E7: call    eax
0x69B2E9: test    eax, eax
0x69B2EB: jz      MagicCaster_ApplyActiveMagicItem___EffectLoop_Spell
0x69B2F1: cmp     eax, 8
0x69B2F4: jnz     MagicCaster_ApplyActiveMagicItem___EffectLoop_CheckRange
0x69B2FA: mov     eax, [esp+arg_3C]
0x69B2FE: test    eax, eax
0x69B300: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_InedibleIngredient
0x69B302: test    byte ptr [eax+7Ch], 2
0x69B306: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_InedibleIngredient
