0x664C40: push    esi; Actor animation update path. Ensures idle/equip groups are playing when needed, ticks ActorAnimData, updates first-person animation data, and updates the first-person scene node/controller tree.
0x664C41: push    0
0x664C43: mov     esi, ecx
0x664C45: call    sub_578CF0
0x664C4A: mov     ecx, [esi+5DCh]
0x664C50: add     esp, 4
0x664C53: test    ecx, ecx
0x664C55: jz      loc_664D6D
0x664C5B: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x664C60: test    al, al
0x664C62: jz      loc_664D01
0x664C68: push    edi
0x664C69: push    0; forceWeaponPrefix
0x664C6B: push    0; weaponEntryDataArg
0x664C6D: push    0; groupID
0x664C6F: mov     ecx, esi; this
0x664C71: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x664C76: mov     ecx, [esi+5DCh]; this
0x664C7C: push    5; slot
0x664C7E: movzx   edi, ax
0x664C81: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x664C86: cmp     ax, di
0x664C89: jnz     short loc_664C94
0x664C8B: call    sub_578FA0
0x664C90: test    al, al
0x664C92: jz      short loc_664CA4
0x664C94: mov     ecx, [esi+5DCh]; this
0x664C9A: push    0FFFFFFFFh; repeatOrAction
0x664C9C: push    1; playImmediately
0x664C9E: push    edi; encodedKey
0x664C9F: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x664CA4: mov     ecx, [esi+58h]
0x664CA7: mov     eax, [ecx]
0x664CA9: mov     edx, [eax+0F0h]
0x664CAF: push    1
0x664CB1: call    edx
0x664CB3: test    eax, eax
0x664CB5: jz      short loc_664D00
0x664CB7: push    0; forceWeaponPrefix
0x664CB9: push    0; weaponEntryDataArg
0x664CBB: push    21h ; '!'; groupID
0x664CBD: mov     ecx, esi; this
0x664CBF: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x664CC4: movzx   edi, ax
0x664CC7: push    edi
0x664CC8: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x664CCD: add     esp, 4
0x664CD0: cmp     eax, 21h ; '!'
0x664CD3: jnz     short loc_664D00
0x664CD5: mov     ecx, [esi+5DCh]; this
0x664CDB: push    2; slot
0x664CDD: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x664CE2: cmp     ax, di
0x664CE5: jnz     short loc_664CF0
0x664CE7: call    sub_578FA0
0x664CEC: test    al, al
0x664CEE: jz      short loc_664D00
0x664CF0: mov     ecx, [esi+5DCh]; this
0x664CF6: push    0FFFFFFFFh; repeatOrAction
0x664CF8: push    1; playImmediately
0x664CFA: push    edi; encodedKey
0x664CFB: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x664D00: pop     edi; edi0
0x664D01: fld     dword ptr ds:0A30634h
0x664D07: mov     ecx, [esi+5DCh]; this
0x664D0D: sub     esp, 8
0x664D10: fstp    [esp+0Ch+explicitTimeOrMinusOne]; explicitTimeOrMinusOne
0x664D14: fld     dword ptr ds:0B33E9Ch
0x664D1A: fstp    [esp+0Ch+a2]; deltaTime
0x664D1D: push    esi; ownerActor
0x664D1E: call    ActorAnimData_Update; CustomAnimSupport evidence: observed ActorAnimData update caller; supports broad scheduler classification.
0x664D23: mov     ecx, [esi+5DCh]; this
0x664D29: push    esi; a2
0x664D2A: call    ActorAnimData_ApplyToActor; Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
0x664D2F: cmp     dword ptr [esi+5E0h], 0
0x664D36: jz      short loc_664D6D
0x664D38: mov     ecx, [esi+5E0h]
0x664D3E: fld     dword ptr ds:0B33E9Ch
0x664D44: mov     eax, [ecx]
0x664D46: mov     edx, [eax+50h]
0x664D49: push    ecx
0x664D4A: fstp    [esp+8+explicitTimeOrMinusOne]
0x664D4D: call    edx
0x664D4F: mov     eax, [esi+5E0h]
0x664D55: mov     ecx, [eax+40h]; this
0x664D58: test    ecx, ecx
0x664D5A: jz      short loc_664D6D
0x664D5C: fld     dword ptr ds:0B33E9Ch
0x664D62: push    0; a3
0x664D64: push    ecx
0x664D65: fstp    [esp+0Ch+a2]; a2
0x664D68: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x664D6D: pop     esi
0x664D6E: retn
