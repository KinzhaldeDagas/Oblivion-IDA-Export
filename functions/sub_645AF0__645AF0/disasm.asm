0x645AF0: push    ebx; Verified body: same door/actor and ownership checks as TESObjectREFR_SetOwnedDoorLockedForActor, then clears the locked bit on this/linked door and marks linked owner cells unlocked. Probable role: inverse callback used by actor package/cell spatial queries; callers include EvaluatePackage and process movement paths.
0x645AF1: mov     ebx, [esp+4+arg_4]
0x645AF5: test    ebx, ebx
0x645AF7: jz      loc_645BAE
0x645AFD: mov     eax, [ebx]
0x645AFF: mov     edx, [eax+198h]
0x645B05: push    0
0x645B07: mov     ecx, ebx
0x645B09: call    edx
0x645B0B: test    al, al
0x645B0D: jnz     loc_645BAE
0x645B13: push    esi
0x645B14: mov     esi, [esp+8+otherEndpoint]
0x645B18: test    esi, esi
0x645B1A: jz      loc_645BA9
0x645B20: mov     eax, [esi]
0x645B22: mov     edx, [eax+170h]
0x645B28: mov     ecx, esi
0x645B2A: call    edx
0x645B2C: cmp     byte ptr [eax+4], 18h
0x645B30: jnz     short loc_645BA9
0x645B32: push    edi
0x645B33: mov     ecx, esi; this
0x645B35: mov     byte ptr [esp+0Ch+arg_4], 0
0x645B3A: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x645B3F: mov     edi, eax
0x645B41: test    edi, edi
0x645B43: jz      short loc_645B72
0x645B45: mov     ecx, edi; linkedDoor
0x645B47: call    TeleportData_GetLinkedDoorWorldspace; Verified: given the linked-door reference slot from TeleportData, resolves its loaded parent cell or child cell and returns that cell's worldspace; returns null when the linked reference or its cell is unavailable.
0x645B4C: test    eax, eax
0x645B4E: jnz     short loc_645B6D
0x645B50: mov     ecx, ebx; this
0x645B52: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x645B57: test    eax, eax
0x645B59: jz      short loc_645B6D
0x645B5B: mov     ecx, ebx; this
0x645B5D: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x645B62: mov     ecx, eax; this
0x645B64: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x645B69: test    al, al
0x645B6B: jnz     short loc_645B72
0x645B6D: mov     byte ptr [esp+0Ch+arg_4], 1
0x645B72: mov     eax, [esp+0Ch+arg_4]
0x645B76: push    eax; useFactionOwnership
0x645B77: push    ebx; actorReference
0x645B78: mov     ecx, esi; reference
0x645B7A: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x645B7F: test    al, al
0x645B81: jz      short loc_645BA3
0x645B83: mov     ecx, esi; this
0x645B85: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x645B8A: test    eax, eax
0x645B8C: jz      short loc_645BA3
0x645B8E: mov     ecx, esi; this
0x645B90: call    TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor; Verified inverse lock-state helper: if this reference has an ExtraLock wrapper, clears its locked bit; otherwise follows the linked-door reference and clears that wrapper's locked bit. It then marks the owning reference or linked door modified with mask 0x40.
0x645B95: test    edi, edi
0x645B97: jz      short loc_645BA3
0x645B99: push    1; unlocked
0x645B9B: push    esi; otherEndpoint
0x645B9C: mov     ecx, edi; linkedDoorSlot
0x645B9E: call    TESObjectREFR_PropagateLockStateToLinkedDoorCells; Verified crime/security path: after clearing the door's locked bit, updates the linked-door owner cells with unlocked=true.
0x645BA3: pop     edi
0x645BA4: pop     esi
0x645BA5: xor     al, al
0x645BA7: pop     ebx
0x645BA8: retn
0x645BA9: pop     esi
0x645BAA: xor     al, al
0x645BAC: pop     ebx
0x645BAD: retn
0x645BAE: xor     al, al
0x645BB0: pop     ebx
0x645BB1: retn
