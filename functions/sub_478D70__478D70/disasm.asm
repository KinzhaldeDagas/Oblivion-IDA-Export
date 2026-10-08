0x478D70: push    ebx; Installs only form type 0x22 (AMMO) into ActorSkinInfo AmmoForm at +0x10C after clearing prior state; AmmoModel at +0x110 points to the form's embedded TESModel at form+0x30.
0x478D71: mov     ebx, [esp+4+ammoForm]
0x478D75: test    ebx, ebx
0x478D77: push    esi
0x478D78: mov     esi, ecx
0x478D7A: jz      short loc_478D9F
0x478D7C: cmp     byte ptr [ebx+4], 22h ; '"'
0x478D80: jnz     short loc_478D9F
0x478D82: push    edi
0x478D83: push    0; newModelData
0x478D85: push    1; replaceMetadata
0x478D87: lea     edi, [esi+10Ch]
0x478D8D: push    edi; slot
0x478D8E: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478D93: mov     [edi], ebx
0x478D95: add     ebx, 30h ; '0'
0x478D98: mov     [esi+110h], ebx
0x478D9E: pop     edi
0x478D9F: pop     esi
0x478DA0: pop     ebx
0x478DA1: retn    4
