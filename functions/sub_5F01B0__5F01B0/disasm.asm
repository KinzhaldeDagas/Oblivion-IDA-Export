0x5F01B0: push    ecx
0x5F01B1: push    esi
0x5F01B2: mov     esi, ecx
0x5F01B4: mov     eax, [esi]
0x5F01B6: mov     edx, [eax+18Ch]
0x5F01BC: call    edx
0x5F01BE: test    eax, eax
0x5F01C0: jnz     loc_5F0259
0x5F01C6: mov     eax, [esi]
0x5F01C8: mov     edx, [eax+164h]
0x5F01CE: push    edi
0x5F01CF: mov     ecx, esi
0x5F01D1: call    edx
0x5F01D3: mov     edi, eax
0x5F01D5: test    edi, edi
0x5F01D7: jz      short loc_5F020C
0x5F01D9: fldz
0x5F01DB: push    ecx
0x5F01DC: fstp    [esp+10h+easeOutTime]; easeOutTime
0x5F01DF: mov     ecx, edi; this
0x5F01E1: push    5; slot
0x5F01E3: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x5F01E8: push    0FFFFFFFFh; repeatOrAction
0x5F01EA: push    0; playImmediately
0x5F01EC: push    0; forceWeaponPrefix
0x5F01EE: push    0; weaponEntryDataArg
0x5F01F0: push    0; groupID
0x5F01F2: mov     ecx, esi; this
0x5F01F4: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F01F9: mov     ecx, edi; this
0x5F01FB: push    eax; encodedKey
0x5F01FC: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F0201: push    0; sequence
0x5F0203: push    0FFFFFFFFh; action
0x5F0205: mov     ecx, esi; this
0x5F0207: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F020C: mov     ecx, ds:0B333C4h; this
0x5F0212: cmp     esi, ecx
0x5F0214: jnz     short loc_5F0258
0x5F0216: mov     al, [ecx+588h]
0x5F021C: mov     [esp+0Ch+a2], al
0x5F0220: mov     edx, dword ptr [esp+0Ch+a2]
0x5F0224: push    edx; firstPerson
0x5F0225: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x5F022A: mov     edi, eax
0x5F022C: test    edi, edi
0x5F022E: jz      short loc_5F0258
0x5F0230: push    0FFFFFFFFh; repeatOrAction
0x5F0232: push    0; playImmediately
0x5F0234: push    0; forceWeaponPrefix
0x5F0236: push    0; weaponEntryDataArg
0x5F0238: push    0; groupID
0x5F023A: mov     ecx, esi; this
0x5F023C: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F0241: mov     ecx, edi; this
0x5F0243: push    eax; encodedKey
0x5F0244: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F0249: fldz
0x5F024B: push    ecx
0x5F024C: fstp    [esp+10h+easeOutTime]; easeOutTime
0x5F024F: push    5; slot
0x5F0251: mov     ecx, edi; this
0x5F0253: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x5F0258: pop     edi
0x5F0259: pop     esi
0x5F025A: pop     ecx
0x5F025B: retn
