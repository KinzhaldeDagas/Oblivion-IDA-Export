0x478E80: xor     eax, eax; Clear one ActorSkinInfo ring equipment slot: secondSlot=false selects biped slot 6 at +0xAC, true selects biped slot 7 at +0xBC. Exact left/right polarity is not proven.
0x478E82: cmp     [esp+secondSlot], al
0x478E86: push    0; newModelData
0x478E88: setnz   al
0x478E8B: push    1; replaceMetadata
0x478E8D: add     eax, 6
0x478E90: shl     eax, 4
0x478E93: lea     edx, [eax+ecx+4Ch]
0x478E97: push    edx; slot
0x478E98: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478E9D: retn    4
