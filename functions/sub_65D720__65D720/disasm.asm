0x65D720: mov     eax, [ecx+5DCh]; Player active ActorAnimData selector. Prefer defaultAnimData override +0x5DC when nonnull; otherwise, when first-person is active (+0x588 == 0), prefer firstPersonAnimData +0x5CC; fall back to TESObjectREFR_GetAnimData. This is distinct from perspective-specific ActorSkinInfo.
0x65D726: test    eax, eax
0x65D728: jnz     short locret_65D741
0x65D72A: cmp     [ecx+588h], al
0x65D730: jnz     short loc_65D73C
0x65D732: mov     eax, [ecx+5CCh]
0x65D738: test    eax, eax
0x65D73A: jnz     short locret_65D741
0x65D73C: jmp     TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x65D741: retn
