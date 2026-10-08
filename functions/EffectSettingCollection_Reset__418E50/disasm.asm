0x418E50: mov     ecx, 0B33508h
0x418E55: call    EffectSettingCollection_Clear
0x418E5A: mov     ecx, 0B33508h
0x418E5F: jmp     EffectSettingCollection_InitAllEffects; TES4 effect table initialization has Water Breathing/Walking and many magic effects, but no observed Slowfall or Climbing effect in this table. Movement discipline implementation must add behavior outside the vanilla effect state table.
