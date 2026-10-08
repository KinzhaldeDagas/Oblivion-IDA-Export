0x645A30: push    edi; Verified body: rejects null/dead actor refs and non-door forms; applies only when the door is owned by the actor (using worldspace-sensitive ownership when applicable) and has an effective lock; sets locked bit on this/linked door and marks linked owner cells as not unlocked. Probable role: callback used by actor package/cell spatial queries; callers include EvaluatePackage and process movement paths.
0x645A31: mov     edi, [esp+4+arg_4]
0x645A35: test    edi, edi
0x645A37: jz      loc_645AE8
0x645A3D: mov     eax, [edi]
0x645A3F: mov     edx, [eax+198h]
0x645A45: push    0
0x645A47: mov     ecx, edi
0x645A49: call    edx
0x645A4B: test    al, al
0x645A4D: jnz     loc_645AE8
0x645A53: push    esi
0x645A54: mov     esi, [esp+8+otherEndpoint]
0x645A58: test    esi, esi
0x645A5A: jz      loc_645AE7
0x645A60: mov     eax, [esi]
0x645A62: mov     edx, [eax+170h]
0x645A68: mov     ecx, esi
0x645A6A: call    edx
0x645A6C: cmp     byte ptr [eax+4], 18h
0x645A70: jnz     short loc_645AE7
0x645A72: mov     ecx, esi; this
0x645A74: mov     byte ptr [esp+8+arg_4], 0
0x645A79: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x645A7E: test    eax, eax
0x645A80: jz      short loc_645AAF
0x645A82: mov     ecx, eax; linkedDoor
0x645A84: call    TeleportData_GetLinkedDoorWorldspace; Verified: given the linked-door reference slot from TeleportData, resolves its loaded parent cell or child cell and returns that cell's worldspace; returns null when the linked reference or its cell is unavailable.
0x645A89: test    eax, eax
0x645A8B: jnz     short loc_645AAA
0x645A8D: mov     ecx, edi; this
0x645A8F: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x645A94: test    eax, eax
0x645A96: jz      short loc_645AAA
0x645A98: mov     ecx, edi; this
0x645A9A: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x645A9F: mov     ecx, eax; this
0x645AA1: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x645AA6: test    al, al
0x645AA8: jnz     short loc_645AAF
0x645AAA: mov     byte ptr [esp+8+arg_4], 1
0x645AAF: mov     eax, [esp+8+arg_4]
0x645AB3: push    eax; useFactionOwnership
0x645AB4: push    edi; actorReference
0x645AB5: mov     ecx, esi; reference
0x645AB7: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x645ABC: test    al, al
0x645ABE: jz      short loc_645AE7
0x645AC0: mov     ecx, esi; this
0x645AC2: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x645AC7: test    eax, eax
0x645AC9: jz      short loc_645AE7
0x645ACB: mov     ecx, esi; this
0x645ACD: call    TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor; Verified lock-state propagation helper: if this reference has an ExtraLock wrapper, sets its locked bit; otherwise follows its linked-door reference and sets that wrapper's locked bit. It then calls TESObjectREFR_MarkLockDataAsModified so the owning reference or linked door records change mask 0x40.
0x645AD2: mov     ecx, esi; this
0x645AD4: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x645AD9: test    eax, eax
0x645ADB: jz      short loc_645AE7
0x645ADD: push    0; unlocked
0x645ADF: push    esi; otherEndpoint
0x645AE0: mov     ecx, eax; linkedDoorSlot
0x645AE2: call    TESObjectREFR_PropagateLockStateToLinkedDoorCells; Verified crime/security path: after setting the door's locked bit, updates the linked-door owner cells with unlocked=false.
0x645AE7: pop     esi
0x645AE8: xor     al, al
0x645AEA: pop     edi
0x645AEB: retn
