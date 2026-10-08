0x470FC0: mov     eax, [esp+slot]; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x470FC4: push    esi
0x470FC5: push    edi
0x470FC6: mov     edi, eax
0x470FC8: sub     eax, 5
0x470FCB: mov     esi, ecx
0x470FCD: jz      short loc_470FD6
0x470FCF: sub     eax, 1
0x470FD2: jz      short loc_470FF6
0x470FD4: jmp     short loc_47101D
0x470FD6: fld     [esp+8+arg_4]
0x470FDA: push    ecx
0x470FDB: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x470FDE: push    4; slot
0x470FE0: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x470FE5: fld     [esp+8+arg_4]
0x470FE9: push    ecx
0x470FEA: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x470FED: push    0; slot
0x470FEF: mov     ecx, esi; this
0x470FF1: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x470FF6: fld     [esp+8+arg_4]
0x470FFA: push    ecx
0x470FFB: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x470FFE: push    1; slot
0x471000: mov     ecx, esi; this
0x471002: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x471007: fld     [esp+8+arg_4]
0x47100B: push    ecx
0x47100C: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x47100F: push    2; slot
0x471011: mov     ecx, esi; this
0x471013: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x471018: mov     edi, 3
0x47101D: mov     ecx, [esi+98h]
0x471023: test    ecx, ecx
0x471025: jz      short loc_471088
0x471027: cmp     edi, 5
0x47102A: jge     short loc_471088
0x47102C: mov     eax, [esi+edi*4+0A0h]
0x471033: test    eax, eax
0x471035: jz      short loc_471088
0x471037: cmp     dword ptr [eax+44h], 0
0x47103B: jz      short loc_471088
0x47103D: mov     eax, [eax+58h]
0x471040: test    eax, eax
0x471042: jz      short loc_471052
0x471044: fld     [esp+8+arg_4]
0x471048: push    ecx
0x471049: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x47104C: push    eax; sequence
0x47104D: call    BSAnimGroupSequence_Deactivate; BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
0x471052: mov     eax, [esi+edi*4+0A0h]
0x471059: cmp     dword ptr [eax+44h], 5
0x47105D: jnz     short loc_471072
0x47105F: fld     [esp+8+arg_4]
0x471063: push    ecx
0x471064: mov     ecx, [esi+98h]
0x47106A: fstp    [esp+0Ch+easeOutTime]; float
0x47106D: call    NiControllerManager_DeactivateTransitionSources; Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
0x471072: fld     [esp+8+arg_4]
0x471076: push    0; transition
0x471078: push    ecx
0x471079: mov     ecx, [esi+edi*4+0A0h]; this
0x471080: fstp    [esp+10h+var_10]; easeOutTime
0x471083: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x471088: mov     dword ptr [esi+edi*4+0A0h], 0
0x471093: mov     eax, 0FFh
0x471098: mov     [esi+edi*2+3Ch], ax
0x47109D: mov     [esi+edi*2+70h], ax
0x4710A2: mov     dword ptr [esi+edi*4+48h], 0FFFFFFFFh; ActorAnimData_ClearSlot sets the per-slot note/action state to -1, distinct from HighProcess.currentAction; clearing a sequence slot alone is not proof that process action 3 was cleared.
0x4710AA: pop     edi
0x4710AB: pop     esi
0x4710AC: retn    8
