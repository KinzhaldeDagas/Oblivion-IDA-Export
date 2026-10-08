0x5F5050: sub     esp, 8; TES4 authoritative: player Acrobatics dodge-style action. Chooses anim group 0xB..0xE from movement flags and starts current action 9.
0x5F5053: push    ebx
0x5F5054: push    edi
0x5F5055: mov     edi, ecx
0x5F5057: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x5F505C: mov     ebx, eax
0x5F505E: test    ebx, ebx
0x5F5060: jz      loc_5F5160
0x5F5066: cmp     dword ptr [edi+58h], 0
0x5F506A: jz      loc_5F5160
0x5F5070: mov     al, [esp+10h+arg_0]
0x5F5074: test    al, 1
0x5F5076: push    ebp
0x5F5077: mov     ebp, 0FFh
0x5F507C: jz      short loc_5F5085
0x5F507E: mov     ebp, 0Bh
0x5F5083: jmp     short loc_5F50A4
0x5F5085: test    al, 2
0x5F5087: jz      short loc_5F5090
0x5F5089: mov     ebp, 0Ch
0x5F508E: jmp     short loc_5F50A4
0x5F5090: test    al, 4
0x5F5092: jz      short loc_5F509B
0x5F5094: mov     ebp, 0Dh
0x5F5099: jmp     short loc_5F50A4
0x5F509B: test    al, 8
0x5F509D: jz      short loc_5F50A4
0x5F509F: mov     ebp, 0Eh
0x5F50A4: push    esi
0x5F50A5: push    0; forceWeaponPrefix
0x5F50A7: push    0; weaponEntryDataArg
0x5F50A9: push    ebp; groupID
0x5F50AA: mov     ecx, edi; this
0x5F50AC: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F50B1: movzx   esi, ax
0x5F50B4: movzx   eax, si
0x5F50B7: add     eax, 0FFFFFFF5h
0x5F50BA: cmp     eax, 3
0x5F50BD: ja      loc_5F5151
0x5F50C3: push    0FFFFFFFFh; repeatOrAction
0x5F50C5: push    1; playImmediately
0x5F50C7: push    esi; encodedKey
0x5F50C8: mov     ecx, ebx; this
0x5F50CA: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F50CF: push    0; slotSelector
0x5F50D1: mov     ecx, ebx; this
0x5F50D3: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F50D8: push    eax; sequence
0x5F50D9: push    9; action
0x5F50DB: mov     ecx, edi; this
0x5F50DD: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F50E2: mov     eax, [edi]
0x5F50E4: mov     edx, [eax+3A4h]
0x5F50EA: push    1
0x5F50EC: push    esi
0x5F50ED: mov     ecx, edi
0x5F50EF: call    edx
0x5F50F1: fld1
0x5F50F3: and     esi, 0FF03h
0x5F50F9: fstp    dword ptr [esp+18h+arg_0]
0x5F50FD: mov     ecx, edi
0x5F50FF: or      esi, 3
0x5F5102: call    sub_5E3590; Walk-speed branch used by sub_5E65B0 when run/swim/fly flags are absent. Calls Calc_WalkSpeed, then may clamp to package target actor's walk speed minus close-distance margin.
0x5F5107: fstp    dword ptr [esp+18h+var_8]
0x5F510B: push    esi
0x5F510C: mov     ecx, ebx
0x5F510E: call    sub_472330
0x5F5113: test    ax, ax
0x5F5116: jz      short loc_5F513B
0x5F5118: fld     dword ptr [esp+18h+var_8]
0x5F511C: push    esi
0x5F511D: mov     ecx, ebx
0x5F511F: fstp    [esp+1Ch+var_8]
0x5F5123: call    sub_472330
0x5F5128: movsx   eax, ax
0x5F512B: mov     dword ptr [esp+18h+arg_0], eax
0x5F512F: fild    dword ptr [esp+18h+arg_0]
0x5F5133: fdivr   [esp+18h+var_8]
0x5F5137: fstp    dword ptr [esp+18h+arg_0]
0x5F513B: fld     dword ptr [esp+18h+arg_0]
0x5F513F: pop     esi
0x5F5140: mov     eax, ebp
0x5F5142: fstp    dword ptr [ebx+0BCh]
0x5F5148: pop     ebp
0x5F5149: pop     edi
0x5F514A: pop     ebx
0x5F514B: add     esp, 8
0x5F514E: retn    4
0x5F5151: pop     esi
0x5F5152: pop     ebp
0x5F5153: pop     edi
0x5F5154: mov     eax, 0FFh
0x5F5159: pop     ebx
0x5F515A: add     esp, 8
0x5F515D: retn    4
0x5F5160: pop     edi
0x5F5161: mov     eax, 0FFh
0x5F5166: pop     ebx
0x5F5167: add     esp, 8
0x5F516A: retn    4
