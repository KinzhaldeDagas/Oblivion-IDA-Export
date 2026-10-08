0x473AA0: fldz; Whole ActorAnimData sequence reset. Clears all active slots, deactivates current/controller sequences, restores current and queued key sentinels, resets root motion and idle ownership, clears controlled-block links, then runs the controller-sequence reset/rebind phase. Not safe as scoped replacement cleanup.
0x473AA2: push    esi
0x473AA3: push    ecx
0x473AA4: fstp    [esp+8+easeOutTime]; easeOutTime
0x473AA7: push    4; slot
0x473AA9: mov     esi, ecx
0x473AAB: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x473AB0: fldz
0x473AB2: push    ecx
0x473AB3: fstp    [esp+8+easeOutTime]; easeOutTime
0x473AB6: push    0; slot
0x473AB8: mov     ecx, esi; this
0x473ABA: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x473ABF: fldz
0x473AC1: push    ecx
0x473AC2: fstp    [esp+8+easeOutTime]; easeOutTime
0x473AC5: push    1; slot
0x473AC7: mov     ecx, esi; this
0x473AC9: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x473ACE: fldz
0x473AD0: push    ecx
0x473AD1: fstp    [esp+8+easeOutTime]; easeOutTime
0x473AD4: push    2; slot
0x473AD6: mov     ecx, esi; this
0x473AD8: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x473ADD: mov     ecx, [esi+98h]
0x473AE3: test    ecx, ecx
0x473AE5: jz      short loc_473B3A
0x473AE7: mov     eax, [esi+0ACh]
0x473AED: test    eax, eax
0x473AEF: jz      short loc_473B3A
0x473AF1: cmp     dword ptr [eax+44h], 0
0x473AF5: jz      short loc_473B3A
0x473AF7: mov     eax, [eax+58h]
0x473AFA: test    eax, eax
0x473AFC: jz      short loc_473B0A
0x473AFE: fldz
0x473B00: push    ecx
0x473B01: fstp    [esp+8+easeOutTime]; easeOutTime
0x473B04: push    eax; sequence
0x473B05: call    BSAnimGroupSequence_Deactivate; BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
0x473B0A: mov     eax, [esi+0ACh]
0x473B10: cmp     dword ptr [eax+44h], 5
0x473B14: jnz     short loc_473B27
0x473B16: fldz
0x473B18: push    ecx
0x473B19: mov     ecx, [esi+98h]
0x473B1F: fstp    [esp+8+easeOutTime]; float
0x473B22: call    NiControllerManager_DeactivateTransitionSources; Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
0x473B27: fldz
0x473B29: push    0; transition
0x473B2B: push    ecx
0x473B2C: fstp    [esp+0Ch+var_C]; easeOutTime
0x473B2F: mov     ecx, [esi+0ACh]; this
0x473B35: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x473B3A: mov     eax, 0FFh
0x473B3F: mov     dword ptr [esi+0ACh], 0
0x473B49: mov     [esi+42h], ax
0x473B4D: mov     [esi+76h], ax
0x473B51: push    edi
0x473B52: mov     ecx, esi
0x473B54: mov     dword ptr [esi+54h], 0FFFFFFFFh
0x473B5B: call    ActorAnimData_ResetRootMotion; Resets ActorAnimData root-motion state: zeroes the cached accumulation vector at +0x18, restores the accumulation/root node transform fields, then finds the matching accumulation controllers and resets them. Used before sequence play and by full actor/animation reset paths.
0x473B60: cmp     dword ptr [esi+0CCh], 0
0x473B67: lea     edi, [esi+0CCh]
0x473B6D: jz      short loc_473B77
0x473B6F: push    edi
0x473B70: mov     ecx, esi
0x473B72: call    AnimIdle_DestroyAndRelease; Destroys one ActorAnimData-owned AnimIdle slot. Resolves the idle KF encoded key from KFModel +0x08, removes the matching sequence from the controller manager/map entry where appropriate, runs AnimIdle_CleanupLoadedResources, frees the 0x2C-byte holder, nulls the caller slot, and balances native references.
0x473B77: cmp     dword ptr [esi+0D0h], 0
0x473B7E: mov     dword ptr [edi], 0
0x473B84: lea     edi, [esi+0D0h]
0x473B8A: jz      short loc_473B94
0x473B8C: push    edi
0x473B8D: mov     ecx, esi
0x473B8F: call    AnimIdle_DestroyAndRelease; Destroys one ActorAnimData-owned AnimIdle slot. Resolves the idle KF encoded key from KFModel +0x08, removes the matching sequence from the controller manager/map entry where appropriate, runs AnimIdle_CleanupLoadedResources, frees the 0x2C-byte holder, nulls the caller slot, and balances native references.
0x473B94: fldz
0x473B96: push    ecx
0x473B97: fstp    [esp+0Ch+var_C]; easeOutTime
0x473B9A: mov     ecx, esi; this
0x473B9C: push    4; slot
0x473B9E: mov     dword ptr [edi], 0
0x473BA4: mov     dword ptr [esi+0B0h], 0
0x473BAE: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x473BB3: mov     ecx, [esi+98h]; this
0x473BB9: test    ecx, ecx
0x473BBB: pop     edi
0x473BBC: jz      short loc_473BC9
0x473BBE: fldz
0x473BC0: push    ecx
0x473BC1: fstp    [esp+8+easeOutTime]; easeOutTime
0x473BC4: call    NiControllerManager_DeactivateAllSequences; Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
0x473BC9: mov     ecx, [esi+4]
0x473BCC: push    ecx
0x473BCD: call    sub_473120
0x473BD2: add     esp, 4
0x473BD5: mov     ecx, esi
0x473BD7: call    sub_4730B0; Walks every controller-manager sequence, RTTI-filters to the Oblivion animation-group sequence class, and clears the +8 pointer in each 0x10-byte controlled-block record through 0x49F520. Kept conservatively unnamed because the exact field type is not yet recovered.
0x473BDC: push    1
0x473BDE: mov     ecx, esi
0x473BE0: call    ActorAnimData_ResetControllerSequences; Controller-sequence reset/rebind phase. Clears active slots 4/0/1/2, deactivates the queued/current blend sequence, restores key/state sentinels, removes a controller object from the actor root, then rebinds or repairs every non-__TempBlendSequence__ manager sequence according to the flag. This is whole-object reset logic, not a per-key cleanup API.
0x473BE5: pop     esi
0x473BE6: retn    4
