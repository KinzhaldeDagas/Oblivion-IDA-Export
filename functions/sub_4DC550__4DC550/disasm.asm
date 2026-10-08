0x4DC550: mov     eax, [ecx]
0x4DC552: mov     edx, [eax+164h]
0x4DC558: push    esi
0x4DC559: call    edx
0x4DC55B: mov     esi, eax
0x4DC55D: test    esi, esi
0x4DC55F: jz      short loc_4DC5A0
0x4DC561: push    0
0x4DC563: push    1
0x4DC565: mov     ecx, esi
0x4DC567: call    ActorAnimData_CleanupOrPromoteQueuedIdles; Owns current/queued idle retirement and promotion across ActorAnimData +0xCC/+0xD0/+0xD4/+0xD8. Depending on caller flags, stops a still-active sequence, moves stale holders into the two cleanup slots, destroys them when no slot is available or forced, or promotes queued +0xD0 into current +0xCC.
0x4DC56C: fldz
0x4DC56E: push    ecx
0x4DC56F: fstp    [esp+8+easeOutTime]; easeOutTime
0x4DC572: push    5; slot
0x4DC574: mov     ecx, esi; this
0x4DC576: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x4DC57B: fldz
0x4DC57D: push    ecx
0x4DC57E: fstp    [esp+8+easeOutTime]; easeOutTime
0x4DC581: mov     ecx, [esi+98h]; this
0x4DC587: call    NiControllerManager_DeactivateAllSequences; Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
0x4DC58C: mov     eax, [esi+4]
0x4DC58F: push    eax
0x4DC590: call    sub_473120
0x4DC595: add     esp, 4
0x4DC598: mov     ecx, esi
0x4DC59A: pop     esi
0x4DC59B: jmp     sub_4730B0; Walks every controller-manager sequence, RTTI-filters to the Oblivion animation-group sequence class, and clears the +8 pointer in each 0x10-byte controlled-block record through 0x49F520. Kept conservatively unnamed because the exact field type is not yet recovered.
0x4DC5A0: pop     esi
0x4DC5A1: retn
