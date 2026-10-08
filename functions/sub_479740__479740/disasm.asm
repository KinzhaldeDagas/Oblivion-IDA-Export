0x479740: push    ebp
0x479741: mov     ebp, [esp+4+arg_0]
0x479745: test    ebp, ebp
0x479747: push    edi
0x479748: mov     edi, ecx
0x47974A: jz      short loc_479770
0x47974C: push    ebx
0x47974D: push    esi
0x47974E: lea     esi, [edi+4Ch]
0x479751: mov     ebx, 10h
0x479756: cmp     [esi], ebp
0x479758: jnz     short loc_479766
0x47975A: push    0; newModelData
0x47975C: push    1; replaceMetadata
0x47975E: push    esi; slot
0x47975F: mov     ecx, edi; this
0x479761: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x479766: add     esi, 10h
0x479769: sub     ebx, 1
0x47976C: jnz     short loc_479756
0x47976E: pop     esi
0x47976F: pop     ebx
0x479770: pop     edi
0x479771: pop     ebp
0x479772: retn    4
