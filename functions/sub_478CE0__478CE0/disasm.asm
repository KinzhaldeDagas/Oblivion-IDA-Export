0x478CE0: push    esi; Clears ActorSkinInfo weapon form/model/3D state and, when the owning non-creature still has its weapon out, schedules the appropriate ActorAnimData equipment refresh. ActorSkinInfo and ActorAnimData are distinct objects.
0x478CE1: push    0; newModelData
0x478CE3: mov     esi, ecx
0x478CE5: push    1; replaceMetadata
0x478CE7: lea     eax, [esi+0DCh]
0x478CED: push    eax; slot
0x478CEE: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478CF3: mov     ecx, [esi+150h]
0x478CF9: mov     edx, [ecx]
0x478CFB: mov     eax, [edx+190h]
0x478D01: call    eax
0x478D03: test    al, al
0x478D05: jz      short loc_478D64
0x478D07: push    edi
0x478D08: mov     edi, [esi+150h]
0x478D0E: mov     ecx, edi; this
0x478D10: call    Actor_IsCreature
0x478D15: test    al, al
0x478D17: jnz     short loc_478D63
0x478D19: cmp     dword ptr [edi+58h], 0
0x478D1D: jz      short loc_478D63
0x478D1F: mov     ecx, edi
0x478D21: call    Actor_IsWeaponOut
0x478D26: test    al, al
0x478D28: jz      short loc_478D63
0x478D2A: mov     ecx, ds:0B333C4h; this
0x478D30: cmp     [esi+150h], ecx
0x478D36: jnz     short loc_478D52
0x478D38: push    1; firstPerson
0x478D3A: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x478D3F: cmp     esi, eax
0x478D41: jnz     short loc_478D52
0x478D43: mov     ecx, ds:0B333C4h; this
0x478D49: push    1; firstPerson
0x478D4B: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x478D50: jmp     short loc_478D59
0x478D52: mov     ecx, edi; this
0x478D54: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x478D59: test    eax, eax
0x478D5B: jz      short loc_478D63
0x478D5D: mov     [eax+0C8h], edi
0x478D63: pop     edi
0x478D64: pop     esi
0x478D65: retn
