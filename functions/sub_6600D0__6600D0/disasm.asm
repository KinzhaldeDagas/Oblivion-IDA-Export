0x6600D0: cmp     [esp+firstPerson], 0; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x6600D5: jz      short loc_6600E0
0x6600D7: mov     eax, [ecx+5C8h]
0x6600DD: retn    4
0x6600E0: mov     eax, [ecx+104h]
0x6600E6: retn    4
