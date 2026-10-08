0x5F4FD0: push    ebx
0x5F4FD1: push    esi
0x5F4FD2: mov     esi, ecx
0x5F4FD4: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x5F4FD9: mov     ebx, eax
0x5F4FDB: test    ebx, ebx
0x5F4FDD: jz      short loc_5F5041
0x5F4FDF: cmp     dword ptr [esi+58h], 0
0x5F4FE3: jz      short loc_5F5041
0x5F4FE5: mov     eax, [esi]
0x5F4FE7: mov     edx, [eax+18Ch]
0x5F4FED: mov     ecx, esi
0x5F4FEF: call    edx
0x5F4FF1: test    eax, eax
0x5F4FF3: jnz     short loc_5F5041
0x5F4FF5: push    edi
0x5F4FF6: push    eax; forceWeaponPrefix
0x5F4FF7: push    eax; weaponEntryDataArg
0x5F4FF8: push    1Fh; groupID
0x5F4FFA: mov     ecx, esi; this
0x5F4FFC: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F5001: movzx   edi, ax
0x5F5004: push    edi
0x5F5005: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F500A: add     esp, 4
0x5F500D: cmp     eax, 1Fh
0x5F5010: jnz     short loc_5F5040
0x5F5012: push    0FFFFFFFFh; repeatOrAction
0x5F5014: push    1; playImmediately
0x5F5016: push    edi; encodedKey
0x5F5017: mov     ecx, ebx; this
0x5F5019: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F501E: push    0; slotSelector
0x5F5020: mov     ecx, ebx; this
0x5F5022: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F5027: push    eax; sequence
0x5F5028: push    8; action
0x5F502A: mov     ecx, esi; this
0x5F502C: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F5031: mov     eax, [esi]
0x5F5033: mov     edx, [eax+3A4h]
0x5F5039: push    1
0x5F503B: push    edi
0x5F503C: mov     ecx, esi
0x5F503E: call    edx
0x5F5040: pop     edi
0x5F5041: pop     esi
0x5F5042: pop     ebx
0x5F5043: retn
