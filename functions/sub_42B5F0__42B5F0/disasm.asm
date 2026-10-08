0x42B5F0: push    edi; Verified Oblivion path: for each available endpoint cell with an owner, writes its bit-0x40 temp-public state to the unlocked argument; Lock callers pass false and Unlock callers true. Fallout homolog DoorTeleportData::SetConnectedCellsPublic likewise applies TESObjectCELL::SetTempPublic to the linked and local endpoint cells when owned. Divergence: Oblivion exposes this as a standalone linked-door lock-state helper, while Fallout places it on DoorTeleportData and names the boolean public state.
0x42B5F1: mov     edi, [esp+4+arg_0]
0x42B5F5: test    edi, edi
0x42B5F7: jz      short loc_42B645
0x42B5F9: mov     ecx, [ecx]; this
0x42B5FB: test    ecx, ecx
0x42B5FD: push    ebx
0x42B5FE: mov     ebx, dword ptr [esp+8+unlocked]
0x42B602: push    esi
0x42B603: jz      short loc_42B623
0x42B605: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x42B60A: mov     esi, eax
0x42B60C: test    esi, esi
0x42B60E: jz      short loc_42B623
0x42B610: mov     ecx, esi; cell
0x42B612: call    TESObjectCELL_GetOwner; Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
0x42B617: test    eax, eax
0x42B619: jz      short loc_42B623
0x42B61B: push    ebx; unlocked
0x42B61C: mov     ecx, esi; this
0x42B61E: call    TESObjectCELL_SetTempPublic; Verified body and call path: sets/clears flags0 bit 0x40; TESObjectREFR_PropagateLockStateToLinkedDoorCells invokes it for linked-door owner cells on lock/unlock. Probable semantic identity: TempPublic, directly corroborated by Fallout's named SetTempPublic and Oblivion's access/load behavior; active-file retention controls whether cell load clears this bit.
0x42B623: mov     ecx, edi; this
0x42B625: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x42B62A: mov     esi, eax
0x42B62C: test    esi, esi
0x42B62E: jz      short loc_42B643
0x42B630: mov     ecx, esi; cell
0x42B632: call    TESObjectCELL_GetOwner; Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
0x42B637: test    eax, eax
0x42B639: jz      short loc_42B643
0x42B63B: push    ebx; unlocked
0x42B63C: mov     ecx, esi; this
0x42B63E: call    TESObjectCELL_SetTempPublic; Verified body and call path: sets/clears flags0 bit 0x40; TESObjectREFR_PropagateLockStateToLinkedDoorCells invokes it for linked-door owner cells on lock/unlock. Probable semantic identity: TempPublic, directly corroborated by Fallout's named SetTempPublic and Oblivion's access/load behavior; active-file retention controls whether cell load clears this bit.
0x42B643: pop     esi
0x42B644: pop     ebx
0x42B645: pop     edi
0x42B646: retn    8
