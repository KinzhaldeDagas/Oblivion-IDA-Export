0x699090: mov     eax, [esp+sourceObject]; Verified MagicCaster virtual factory adapter (MagicCasterVtbl slot +0x40): forwards caster from ECX plus MagicItem*, EffectItem*, and source TESBoundObject* to ActiveEffect_Base_CreateDynamic; returns the resulting ActiveEffect*.
0x699094: mov     edx, [esp+effectItem]
0x699098: push    eax; sourceObject
0x699099: mov     eax, [esp+4+magicItem]
0x69909D: push    edx; effectItem
0x69909E: push    eax; magicItem
0x69909F: push    ecx; caster
0x6990A0: call    ActiveEffect_Base_CreateDynamic; Verified wrapper path: MagicCaster_CreateActiveEffect calls ActiveEffect_Base_CreateDynamic and returns its ActiveEffect factory result to the caster creation flow.
0x6990A5: add     esp, 10h
0x6990A8: retn    0Ch
