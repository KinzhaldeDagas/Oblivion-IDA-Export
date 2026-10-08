0x478DB0: push    0; Clears ActorSkinInfo ammo form/model/3D state at +0x10C/+0x110/+0x114.
0x478DB2: push    1; replaceMetadata
0x478DB4: lea     eax, [ecx+10Ch]
0x478DBA: push    eax; slot
0x478DBB: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478DC0: retn
