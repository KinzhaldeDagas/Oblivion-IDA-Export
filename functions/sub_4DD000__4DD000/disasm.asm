0x4DD000: push    ecx
0x4DD001: push    esi
0x4DD002: mov     esi, ecx
0x4DD004: cmp     dword ptr [esi+3Ch], 0
0x4DD008: jz      short loc_4DD069
0x4DD00A: mov     eax, [esi]
0x4DD00C: mov     edx, [eax+168h]
0x4DD012: call    edx
0x4DD014: mov     ecx, ds:0B333C4h
0x4DD01A: cmp     esi, ecx
0x4DD01C: jnz     short loc_4DD043
0x4DD01E: test    eax, eax
0x4DD020: jz      short loc_4DD02F
0x4DD022: mov     ecx, eax; this
0x4DD024: call    ActorSkinInfo_ClearAmuletSlot; Clear ActorSkinInfo amulet equipment slot at +0xCC; this is biped slot 8 teardown.
0x4DD029: mov     ecx, ds:0B333C4h; this
0x4DD02F: mov     al, [ecx+588h]
0x4DD035: mov     [esp+8+firstPerson], al
0x4DD039: mov     edx, dword ptr [esp+8+firstPerson]
0x4DD03D: push    edx; firstPerson
0x4DD03E: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4DD043: test    eax, eax
0x4DD045: jz      short loc_4DD04E
0x4DD047: mov     ecx, eax; this
0x4DD049: call    ActorSkinInfo_ClearAmuletSlot; Clear ActorSkinInfo amulet equipment slot at +0xCC; this is biped slot 8 teardown.
0x4DD04E: mov     eax, [esi]
0x4DD050: mov     edx, [eax+190h]
0x4DD056: mov     ecx, esi
0x4DD058: call    edx
0x4DD05A: test    al, al
0x4DD05C: jz      short loc_4DD069
0x4DD05E: mov     eax, [esi+3Ch]
0x4DD061: push    eax
0x4DD062: mov     ecx, esi
0x4DD064: call    sub_5EA1A0
0x4DD069: pop     esi
0x4DD06A: pop     ecx
0x4DD06B: retn
