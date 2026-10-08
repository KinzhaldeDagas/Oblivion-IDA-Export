0x5F4E10: push    edi
0x5F4E11: mov     edi, ecx
0x5F4E13: cmp     dword ptr [edi+58h], 0
0x5F4E17: jz      short loc_5F4E2F
0x5F4E19: mov     ecx, [edi+58h]
0x5F4E1C: mov     eax, [ecx]
0x5F4E1E: mov     edx, [eax+2D0h]
0x5F4E24: call    edx
0x5F4E26: cmp     eax, 8
0x5F4E29: jz      loc_5F4EF8
0x5F4E2F: push    ebp
0x5F4E30: mov     ecx, edi; this
0x5F4E32: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x5F4E37: mov     ebp, eax
0x5F4E39: test    ebp, ebp
0x5F4E3B: jz      loc_5F4EF7
0x5F4E41: cmp     dword ptr [edi+58h], 0
0x5F4E45: jz      loc_5F4EF7
0x5F4E4B: mov     eax, [edi]
0x5F4E4D: mov     edx, [eax+18Ch]
0x5F4E53: mov     ecx, edi
0x5F4E55: call    edx
0x5F4E57: test    eax, eax
0x5F4E59: jnz     loc_5F4EF7
0x5F4E5F: cmp     [esp+8+arg_0], al
0x5F4E63: push    ebx
0x5F4E64: setnz   al
0x5F4E67: push    esi
0x5F4E68: push    0; forceWeaponPrefix
0x5F4E6A: push    0; weaponEntryDataArg
0x5F4E6C: mov     ecx, edi; this
0x5F4E6E: add     eax, 1Ch
0x5F4E71: mov     esi, eax
0x5F4E73: push    esi; groupID
0x5F4E74: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F4E79: movzx   ebx, ax
0x5F4E7C: push    ebx
0x5F4E7D: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F4E82: add     esp, 4
0x5F4E85: cmp     eax, esi
0x5F4E87: jz      short loc_5F4E99
0x5F4E89: push    ebx
0x5F4E8A: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F4E8F: add     esp, 4
0x5F4E92: cmp     eax, 1Ch
0x5F4E95: jnz     short loc_5F4E99
0x5F4E97: mov     esi, eax
0x5F4E99: push    ebx
0x5F4E9A: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F4E9F: add     esp, 4
0x5F4EA2: cmp     eax, esi
0x5F4EA4: jnz     short loc_5F4EF5
0x5F4EA6: push    0FFFFFFFFh; repeatOrAction
0x5F4EA8: push    1; playImmediately
0x5F4EAA: push    ebx; encodedKey
0x5F4EAB: mov     ecx, ebp; this
0x5F4EAD: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F4EB2: cmp     esi, 1Dh
0x5F4EB5: jnz     short loc_5F4ECA
0x5F4EB7: mov     ecx, ds:0B106FCh
0x5F4EBD: push    ecx; slotSelector
0x5F4EBE: mov     ecx, ebp; this
0x5F4EC0: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F4EC5: push    eax
0x5F4EC6: push    2
0x5F4EC8: jmp     short loc_5F4EDF
0x5F4ECA: lea     edx, [esi+esi*8]
0x5F4ECD: mov     eax, ds:0B102E8h[edx*4]
0x5F4ED4: push    eax; slotSelector
0x5F4ED5: mov     ecx, ebp; this
0x5F4ED7: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F4EDC: push    eax; sequence
0x5F4EDD: push    6; action
0x5F4EDF: mov     ecx, edi; this
0x5F4EE1: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F4EE6: mov     edx, [edi]
0x5F4EE8: mov     eax, [edx+3A4h]
0x5F4EEE: push    1
0x5F4EF0: push    ebx
0x5F4EF1: mov     ecx, edi
0x5F4EF3: call    eax
0x5F4EF5: pop     esi
0x5F4EF6: pop     ebx
0x5F4EF7: pop     ebp
0x5F4EF8: pop     edi
0x5F4EF9: retn    4
