0x4796F0: push    ebx
0x4796F1: push    esi
0x4796F2: push    edi
0x4796F3: mov     edi, ecx
0x4796F5: push    offset unk_A2F830
0x4796FA: mov     ecx, offset unk_B33E00
0x4796FF: call    NiEnterCriticalSection
0x479704: lea     esi, [edi+4Ch]
0x479707: mov     ebx, 10h
0x47970C: lea     esp, [esp+0]
0x479710: push    0; newModelData
0x479712: push    1; replaceMetadata
0x479714: push    esi; slot
0x479715: mov     ecx, edi; this
0x479717: call    ActorSkinInfo_ClearOrReplaceEquipmentSlot; ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
0x47971C: add     esi, 10h
0x47971F: sub     ebx, 1
0x479722: jnz     short loc_479710
0x479724: pop     edi
0x479725: pop     esi
0x479726: mov     ecx, offset unk_B33E00; lpCriticalSection
0x47972B: pop     ebx
0x47972C: jmp     NiLeaveCriticalSection_0
