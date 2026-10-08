0x4DCF10: push    esi
0x4DCF11: mov     esi, ecx
0x4DCF13: cmp     dword ptr [esi+3Ch], 0
0x4DCF17: jz      short loc_4DCF80
0x4DCF19: mov     eax, [esi]
0x4DCF1B: mov     edx, [eax+168h]
0x4DCF21: push    edi
0x4DCF22: call    edx
0x4DCF24: mov     ecx, ds:0B333C4h
0x4DCF2A: cmp     esi, ecx
0x4DCF2C: mov     edi, dword ptr [esp+8+firstPerson]
0x4DCF30: jnz     short loc_4DCF58
0x4DCF32: test    eax, eax
0x4DCF34: jz      short loc_4DCF44
0x4DCF36: push    edi; secondSlot
0x4DCF37: mov     ecx, eax; this
0x4DCF39: call    ActorSkinInfo_ClearRingSlot; Clear one ActorSkinInfo ring equipment slot: secondSlot=false selects biped slot 6 at +0xAC, true selects biped slot 7 at +0xBC. Exact left/right polarity is not proven.
0x4DCF3E: mov     ecx, ds:0B333C4h; this
0x4DCF44: mov     al, [ecx+588h]
0x4DCF4A: mov     [esp+8+firstPerson], al
0x4DCF4E: mov     edx, dword ptr [esp+8+firstPerson]
0x4DCF52: push    edx; firstPerson
0x4DCF53: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4DCF58: test    eax, eax
0x4DCF5A: jz      short loc_4DCF64
0x4DCF5C: push    edi; secondSlot
0x4DCF5D: mov     ecx, eax; this
0x4DCF5F: call    ActorSkinInfo_ClearRingSlot; Clear one ActorSkinInfo ring equipment slot: secondSlot=false selects biped slot 6 at +0xAC, true selects biped slot 7 at +0xBC. Exact left/right polarity is not proven.
0x4DCF64: mov     eax, [esi]
0x4DCF66: mov     edx, [eax+190h]
0x4DCF6C: mov     ecx, esi
0x4DCF6E: call    edx
0x4DCF70: test    al, al
0x4DCF72: pop     edi
0x4DCF73: jz      short loc_4DCF80
0x4DCF75: mov     eax, [esi+3Ch]
0x4DCF78: push    eax
0x4DCF79: mov     ecx, esi
0x4DCF7B: call    sub_5EA1A0
0x4DCF80: pop     esi
0x4DCF81: retn    4
