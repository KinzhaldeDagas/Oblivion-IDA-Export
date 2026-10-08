0x4DC8F0: push    ecx
0x4DC8F1: push    esi
0x4DC8F2: mov     esi, ecx
0x4DC8F4: cmp     dword ptr [esi+3Ch], 0
0x4DC8F8: jz      loc_4DCAA2
0x4DC8FE: mov     eax, [esi]
0x4DC900: mov     edx, [eax+168h]
0x4DC906: push    edi
0x4DC907: call    edx
0x4DC909: mov     ecx, ds:0B333C4h
0x4DC90F: cmp     esi, ecx
0x4DC911: mov     edi, eax
0x4DC913: jnz     short loc_4DC93C
0x4DC915: test    edi, edi
0x4DC917: jz      short loc_4DC926
0x4DC919: mov     ecx, edi; this
0x4DC91B: call    ActorSkinInfo_ClearShieldSlot; Clear ActorSkinInfo shield equipment slot at +0x11C ({form, model, object3D}); this is biped slot 13 teardown.
0x4DC920: mov     ecx, ds:0B333C4h; this
0x4DC926: mov     al, [ecx+588h]
0x4DC92C: mov     [esp+0Ch+firstPerson], al
0x4DC930: mov     edx, dword ptr [esp+0Ch+firstPerson]
0x4DC934: push    edx; firstPerson
0x4DC935: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4DC93A: mov     edi, eax
0x4DC93C: mov     eax, [esi]
0x4DC93E: mov     edx, [eax+190h]
0x4DC944: mov     ecx, esi
0x4DC946: mov     dword ptr [esp+0Ch+firstPerson], 0
0x4DC94E: call    edx
0x4DC950: test    al, al
0x4DC952: jz      short loc_4DC998
0x4DC954: mov     ecx, [esi+58h]
0x4DC957: test    ecx, ecx
0x4DC959: mov     dword ptr [esp+0Ch+firstPerson], esi
0x4DC95D: jz      short loc_4DC998
0x4DC95F: mov     eax, [ecx]
0x4DC961: mov     edx, [eax+2D0h]
0x4DC967: call    edx
0x4DC969: cmp     eax, 6
0x4DC96C: jnz     short loc_4DC998
0x4DC96E: mov     eax, [esi]
0x4DC970: mov     edx, [eax+164h]
0x4DC976: mov     ecx, esi
0x4DC978: call    edx
0x4DC97A: test    eax, eax
0x4DC97C: jz      short loc_4DC98D
0x4DC97E: fldz
0x4DC980: push    ecx
0x4DC981: fstp    [esp+10h+easeOutTime]; easeOutTime
0x4DC984: mov     ecx, eax; this
0x4DC986: push    1; slot
0x4DC988: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x4DC98D: push    0; sequence
0x4DC98F: push    0FFFFFFFFh; action
0x4DC991: mov     ecx, esi; this
0x4DC993: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x4DC998: test    edi, edi
0x4DC99A: jz      short loc_4DC9A8
0x4DC99C: mov     ecx, edi; this
0x4DC99E: call    ActorSkinInfo_ClearShieldSlot; Clear ActorSkinInfo shield equipment slot at +0x11C ({form, model, object3D}); this is biped slot 13 teardown.
0x4DC9A3: jmp     loc_4DCA7C
0x4DC9A8: mov     eax, ds:0B0656Ch
0x4DC9AD: mov     edx, [esi]
0x4DC9AF: push    ebx
0x4DC9B0: push    ebp
0x4DC9B1: push    eax; a2
0x4DC9B2: mov     eax, [edx+154h]
0x4DC9B8: mov     ecx, esi
0x4DC9BA: call    eax
0x4DC9BC: push    eax; a1
0x4DC9BD: call    NiObjectNET_LookupObjectByName
0x4DC9C2: mov     ebp, eax
0x4DC9C4: add     esp, 8
0x4DC9C7: test    ebp, ebp
0x4DC9C9: jz      short loc_4DC9E9
0x4DC9CB: mov     edx, [ebp+0]
0x4DC9CE: mov     eax, [edx+8]
0x4DC9D1: mov     ecx, ebp
0x4DC9D3: call    eax
0x4DC9D5: mov     edi, eax
0x4DC9D7: test    edi, edi
0x4DC9D9: jz      short loc_4DC9EB
0x4DC9DB: cmp     word ptr [edi+0B8h], 0
0x4DC9E3: jz      short loc_4DC9EB
0x4DC9E5: mov     bl, 1
0x4DC9E7: jmp     short loc_4DC9ED
0x4DC9E9: xor     edi, edi
0x4DC9EB: xor     bl, bl
0x4DC9ED: push    ebp; object
0x4DC9EE: push    0
0x4DC9F0: call    GetShadowSceneNode
0x4DC9F5: add     esp, 4
0x4DC9F8: mov     ecx, eax; this
0x4DC9FA: call    ShadowSceneNode_RemoveObjectReceivers; Removes an object's geometry from shadow-light receiver lists under the shadow-scene critical section. It obtains the object's node/container through virtual +0x08 and recurses; it does not detach the object from its parent or clear NiNode children.
0x4DC9FF: test    edi, edi
0x4DCA01: jz      short loc_4DCA12
0x4DCA03: test    bl, bl
0x4DCA05: jz      short loc_4DCA12
0x4DCA07: lea     ecx, [edi+0ACh]; this
0x4DCA0D: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x4DCA12: lea     ecx, [esi+44h]; this
0x4DCA15: call    ExtraDataList_GetContainerChanges
0x4DCA1A: test    eax, eax
0x4DCA1C: jz      short loc_4DCA7A
0x4DCA1E: push    0
0x4DCA20: push    0Dh
0x4DCA22: mov     ecx, eax
0x4DCA24: call    ContainerExtraData_GetEquippedInstance
0x4DCA29: mov     edi, eax
0x4DCA2B: test    edi, edi
0x4DCA2D: jz      short loc_4DCA7A
0x4DCA2F: mov     eax, [edi+8]
0x4DCA32: push    0; int
0x4DCA34: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4DCA39: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DCA3E: push    0; int
0x4DCA40: push    eax; void *
0x4DCA41: call    OblivionDynamicCast
0x4DCA46: add     esp, 14h
0x4DCA49: test    eax, eax
0x4DCA4B: jz      short loc_4DCA6A
0x4DCA4D: test    bl, bl
0x4DCA4F: jz      short loc_4DCA6A
0x4DCA51: push    0
0x4DCA53: mov     ecx, eax
0x4DCA55: call    TESBipedModelForm_GetModelPath
0x4DCA5A: mov     ecx, ds:0B33A1Ch
0x4DCA60: push    1
0x4DCA62: push    1
0x4DCA64: push    eax
0x4DCA65: call    QueuedModelLoader_RemoveModel
0x4DCA6A: mov     ecx, edi
0x4DCA6C: call    ContainerEntryExtraData_DestroyDataTable
0x4DCA71: push    edi
0x4DCA72: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4DCA77: add     esp, 4
0x4DCA7A: pop     ebp
0x4DCA7B: pop     ebx
0x4DCA7C: mov     edi, dword ptr [esp+0Ch+firstPerson]
0x4DCA80: test    edi, edi
0x4DCA82: jz      short loc_4DCAA1
0x4DCA84: cmp     [esp+0Ch+arg_0], 0
0x4DCA89: jz      short loc_4DCA96
0x4DCA8B: push    0
0x4DCA8D: push    0
0x4DCA8F: mov     ecx, edi
0x4DCA91: call    HideEquipment
0x4DCA96: mov     ecx, [esi+3Ch]
0x4DCA99: push    ecx
0x4DCA9A: mov     ecx, edi
0x4DCA9C: call    sub_5EA1A0
0x4DCAA1: pop     edi
0x4DCAA2: pop     esi
0x4DCAA3: pop     ecx
0x4DCAA4: retn    4
