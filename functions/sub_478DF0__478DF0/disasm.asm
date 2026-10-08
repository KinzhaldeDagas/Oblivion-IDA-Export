0x478DF0: push    ebx; Set ActorSkinInfo light slot form at +0x12C after validating Oblivion form type 0x1A (LIGH).
0x478DF1: mov     ebx, [esp+4+form]
0x478DF5: test    ebx, ebx
0x478DF7: push    esi
0x478DF8: mov     esi, ecx
0x478DFA: jz      short loc_478E1F
0x478DFC: cmp     byte ptr [ebx+4], 1Ah
0x478E00: jnz     short loc_478E1F
0x478E02: push    edi
0x478E03: push    0; newModelData
0x478E05: push    1; replaceMetadata
0x478E07: lea     edi, [esi+12Ch]
0x478E0D: push    edi; slot
0x478E0E: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478E13: mov     [edi], ebx
0x478E15: add     ebx, 30h ; '0'
0x478E18: mov     [esi+130h], ebx
0x478E1E: pop     edi
0x478E1F: pop     esi
0x478E20: pop     ebx
0x478E21: retn    4
