0x69B26B: mov     edx, [esi]; UCWUS pipeline note: effect-loop enchantment filter calls EnchantmentItem_EffectAllowedFromEnch. Keep this intact; UCWUS 0x00010009 moves selected item/spell/token charge state into a native session via bridge commands instead of bypassing the filter.
0x69B26D: mov     eax, [edx+30h]
0x69B270: mov     ecx, esi
0x69B272: call    eax
0x69B274: mov     edx, [eax]
0x69B276: mov     ecx, eax
0x69B278: mov     eax, [edx+18h]
0x69B27B: call    eax
0x69B27D: cmp     eax, 6
0x69B280: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_CreateActiveEffect
0x69B282: mov     ecx, [esp+arg_78]
0x69B286: test    ecx, ecx
0x69B288: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_CreateActiveEffect
0x69B28A: mov     eax, [ebp+1Ch]
0x69B28D: push    0
0x69B28F: push    eax
0x69B290: push    0
0x69B292: push    ecx
0x69B293: call    EnchantmentItem_EffectAllowedFromEnch??; UCWUS decode note: EnchantmentItem_EffectAllowedFromEnch applies global object/effect flag rules for weapon/apparel enchantment effects. UCWUS should not bypass this wholesale; the faithful path is a targeted apparel-cast branch patch plus plugin session/suppression commands.
0x69B298: add     esp, 10h
0x69B29B: test    al, al
0x69B29D: jz      MagicCaster_ApplyActiveMagicItem___EffectLoop_Next
