0x478E30: push    esi; Clear ActorSkinInfo light equipment slot at +0x12C; called by native UnequipLight handling.
0x478E31: mov     esi, ecx
0x478E33: mov     ecx, [esi+12Ch]
0x478E39: test    ecx, ecx
0x478E3B: lea     eax, [esi+12Ch]
0x478E41: jz      short loc_478E55
0x478E43: cmp     byte ptr [ecx+4], 1Ah
0x478E47: jnz     short loc_478E55
0x478E49: push    0; newModelData
0x478E4B: push    1; replaceMetadata
0x478E4D: push    eax; slot
0x478E4E: mov     ecx, esi; this
0x478E50: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478E55: mov     ecx, ds:0B333C4h
0x478E5B: cmp     [esi+150h], ecx
0x478E61: jnz     short loc_478E77
0x478E63: push    esi
0x478E64: call    sub_65D770
0x478E69: mov     ecx, ds:0B333C4h
0x478E6F: push    eax
0x478E70: push    0
0x478E72: call    sub_663870
0x478E77: pop     esi
0x478E78: retn
