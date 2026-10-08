0x5F4F00: push    esi
0x5F4F01: mov     esi, ecx
0x5F4F03: cmp     dword ptr [esi+58h], 0
0x5F4F07: jz      short loc_5F4F1F
0x5F4F09: mov     ecx, [esi+58h]
0x5F4F0C: mov     eax, [ecx]
0x5F4F0E: mov     edx, [eax+2D0h]
0x5F4F14: call    edx
0x5F4F16: cmp     eax, 8
0x5F4F19: jz      loc_5F4FCB
0x5F4F1F: push    ebx
0x5F4F20: mov     ecx, esi; this
0x5F4F22: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x5F4F27: mov     ebx, eax
0x5F4F29: test    ebx, ebx
0x5F4F2B: jz      loc_5F4FCA
0x5F4F31: cmp     dword ptr [esi+58h], 0
0x5F4F35: jz      loc_5F4FCA
0x5F4F3B: mov     eax, [esi]
0x5F4F3D: mov     edx, [eax+18Ch]
0x5F4F43: mov     ecx, esi
0x5F4F45: call    edx
0x5F4F47: test    eax, eax
0x5F4F49: jnz     short loc_5F4FCA
0x5F4F4B: push    edi
0x5F4F4C: push    eax; forceWeaponPrefix
0x5F4F4D: push    eax; weaponEntryDataArg
0x5F4F4E: push    1Eh; groupID
0x5F4F50: mov     ecx, esi; this
0x5F4F52: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F4F57: movzx   edi, ax
0x5F4F5A: push    edi
0x5F4F5B: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F4F60: add     esp, 4
0x5F4F63: cmp     eax, 1Eh
0x5F4F66: jnz     short loc_5F4F9A
0x5F4F68: push    0FFFFFFFFh; repeatOrAction
0x5F4F6A: push    1; playImmediately
0x5F4F6C: push    edi; encodedKey
0x5F4F6D: mov     ecx, ebx; this
0x5F4F6F: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F4F74: push    3; slotSelector
0x5F4F76: mov     ecx, ebx; this
0x5F4F78: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F4F7D: push    eax; sequence
0x5F4F7E: push    7; action
0x5F4F80: mov     ecx, esi; this
0x5F4F82: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F4F87: mov     eax, [esi]
0x5F4F89: mov     edx, [eax+3A4h]
0x5F4F8F: push    1
0x5F4F91: push    edi
0x5F4F92: mov     ecx, esi
0x5F4F94: call    edx
0x5F4F96: pop     edi
0x5F4F97: pop     ebx
0x5F4F98: pop     esi
0x5F4F99: retn
0x5F4F9A: fldz
0x5F4F9C: push    ecx
0x5F4F9D: fstp    [esp+10h+easeOutTime]; easeOutTime
0x5F4FA0: mov     ecx, ebx; this
0x5F4FA2: push    3; slot
0x5F4FA4: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x5F4FA9: mov     ecx, ds:0B333C4h; this
0x5F4FAF: cmp     esi, ecx
0x5F4FB1: jnz     short loc_5F4FC9
0x5F4FB3: push    1; firstPerson
0x5F4FB5: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x5F4FBA: fldz
0x5F4FBC: push    ecx
0x5F4FBD: fstp    [esp+10h+easeOutTime]; easeOutTime
0x5F4FC0: push    3; slot
0x5F4FC2: mov     ecx, eax; this
0x5F4FC4: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x5F4FC9: pop     edi
0x5F4FCA: pop     ebx
0x5F4FCB: pop     esi
0x5F4FCC: retn
