0x65D750: cmp     [esp+a2], 0; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x65D755: jz      short loc_65D760
0x65D757: mov     eax, [ecx+5CCh]
0x65D75D: retn    4
0x65D760: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x65D765: retn    4
