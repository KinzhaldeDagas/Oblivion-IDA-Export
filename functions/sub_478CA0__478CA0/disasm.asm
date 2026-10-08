0x478CA0: push    ebx; Installs only form type 0x21 (WEAP) into ActorSkinInfo WeaponForm at +0xDC after clearing prior state; WeaponModel at +0xE0 points to the form's embedded TESModel at form+0x30.
0x478CA1: mov     ebx, [esp+4+weaponForm]
0x478CA5: test    ebx, ebx
0x478CA7: push    esi
0x478CA8: mov     esi, ecx
0x478CAA: jz      short loc_478CCF
0x478CAC: cmp     byte ptr [ebx+4], 21h ; '!'
0x478CB0: jnz     short loc_478CCF
0x478CB2: push    edi
0x478CB3: push    0; newModelData
0x478CB5: push    1; replaceMetadata
0x478CB7: lea     edi, [esi+0DCh]
0x478CBD: push    edi; slot
0x478CBE: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x478CC3: mov     [edi], ebx
0x478CC5: add     ebx, 30h ; '0'
0x478CC8: mov     [esi+0E0h], ebx
0x478CCE: pop     edi
0x478CCF: pop     esi
0x478CD0: pop     ebx
0x478CD1: retn    4
