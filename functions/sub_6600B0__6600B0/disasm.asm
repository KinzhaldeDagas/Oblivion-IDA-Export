0x6600B0: cmp     byte ptr [ecx+588h], 0; Return the player's currently active ActorSkinInfo: third-person +0x104 when +0x588 is set; otherwise first-person +0x5C8 when nonnull, falling back to +0x104. ActorSkinInfo owns equipped model pointers; it is not ActorAnimData.
0x6600B7: jnz     short loc_6600C3
0x6600B9: mov     eax, [ecx+5C8h]
0x6600BF: test    eax, eax
0x6600C1: jnz     short locret_6600C9
0x6600C3: mov     eax, [ecx+104h]
0x6600C9: retn
