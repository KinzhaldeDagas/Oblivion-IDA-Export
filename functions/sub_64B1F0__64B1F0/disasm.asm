0x64B1F0: push    esi; High/MiddleHigh process vtable +0x12C. Compares supplied ActorSkinInfo against the player's first-person skin info (+0x5C8): first-person returns global ArrowBone cache 0xB3BA98; otherwise returns process +0x110. Native action 4 may still advance to action 5 when null.
0x64B1F1: mov     esi, ecx
0x64B1F3: mov     ecx, ds:0B333C4h; this
0x64B1F9: push    1; firstPerson
0x64B1FB: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x64B200: cmp     [esp+4+animData], eax
0x64B204: mov     eax, ds:0B3BA98h
0x64B209: jz      short loc_64B211
0x64B20B: mov     eax, [esi+110h]
0x64B211: pop     esi
0x64B212: retn    4
