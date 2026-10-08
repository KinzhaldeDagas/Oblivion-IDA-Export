0x473200: push    ebp; Controller-sequence reset/rebind phase. Clears active slots 4/0/1/2, deactivates the queued/current blend sequence, restores key/state sentinels, removes a controller object from the actor root, then rebinds or repairs every non-__TempBlendSequence__ manager sequence according to the flag. This is whole-object reset logic, not a per-key cleanup API.
0x473201: push    esi
0x473202: mov     esi, ecx
0x473204: xor     ebp, ebp
0x473206: cmp     [esi+98h], ebp
0x47320C: jz      loc_47338E
0x473212: fldz
0x473214: push    ecx
0x473215: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x473218: push    4; slot
0x47321A: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47321F: fldz
0x473221: push    ecx
0x473222: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x473225: push    ebp; slot
0x473226: mov     ecx, esi; this
0x473228: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47322D: fldz
0x47322F: push    ecx
0x473230: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x473233: push    1; slot
0x473235: mov     ecx, esi; this
0x473237: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47323C: fldz
0x47323E: push    ecx
0x47323F: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x473242: push    2; slot
0x473244: mov     ecx, esi; this
0x473246: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47324B: mov     ecx, [esi+98h]
0x473251: cmp     ecx, ebp
0x473253: jz      short loc_4732A6
0x473255: mov     eax, [esi+0ACh]
0x47325B: cmp     eax, ebp
0x47325D: jz      short loc_4732A6
0x47325F: cmp     [eax+44h], ebp
0x473262: jz      short loc_4732A6
0x473264: mov     eax, [eax+58h]
0x473267: cmp     eax, ebp
0x473269: jz      short loc_473277
0x47326B: fldz
0x47326D: push    ecx
0x47326E: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x473271: push    eax; sequence
0x473272: call    BSAnimGroupSequence_Deactivate; BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
0x473277: mov     eax, [esi+0ACh]
0x47327D: cmp     dword ptr [eax+44h], 5
0x473281: jnz     short loc_473294
0x473283: fldz
0x473285: push    ecx
0x473286: mov     ecx, [esi+98h]
0x47328C: fstp    [esp+0Ch+easeOutTime]; float
0x47328F: call    NiControllerManager_DeactivateTransitionSources; Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
0x473294: fldz
0x473296: push    ebp; transition
0x473297: push    ecx
0x473298: fstp    [esp+10h+var_10]; easeOutTime
0x47329B: mov     ecx, [esi+0ACh]; this
0x4732A1: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x4732A6: mov     [esi+0ACh], ebp
0x4732AC: mov     eax, 0FFh
0x4732B1: mov     [esi+42h], ax
0x4732B5: mov     [esi+76h], ax
0x4732B9: mov     dword ptr [esi+54h], 0FFFFFFFFh
0x4732C0: mov     ecx, [esi+98h]
0x4732C6: mov     eax, [ecx+7Ch]
0x4732C9: cmp     eax, ebp
0x4732CB: jz      short loc_4732E6
0x4732CD: push    eax
0x4732CE: push    offset stru_B3FCB8
0x4732D3: call    NiRTTI_Cast
0x4732D8: add     esp, 8
0x4732DB: cmp     eax, ebp
0x4732DD: jz      short loc_4732E6
0x4732DF: mov     ecx, eax
0x4732E1: call    sub_716690
0x4732E6: mov     ecx, [esi+4]
0x4732E9: push    edi
0x4732EA: push    offset stru_B3CD7C
0x4732EF: call    sub_700010
0x4732F4: mov     edi, eax
0x4732F6: cmp     edi, ebp
0x4732F8: jz      short loc_473314
0x4732FA: fldz
0x4732FC: push    ecx
0x4732FD: mov     ecx, [esi+98h]; this
0x473303: fstp    [esp+10h+var_10]; easeOutTime
0x473306: call    NiControllerManager_DeactivateAllSequences; Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
0x47330B: mov     ecx, [esi+4]
0x47330E: push    edi
0x47330F: call    NiObjectNET_RemoveController; Removes a specific NiTimeController from NiObjectNET's refcounted controller chain, relinking predecessor/head and clearing the removed controller's next link with balanced temporary references.
0x473314: mov     eax, [esi+98h]
0x47331A: cmp     [eax+46h], bp
0x47331E: jbe     short loc_47338D
0x473320: push    ebx
0x473321: mov     bl, [esp+10h+arg_0]
0x473325: mov     edx, [eax+40h]
0x473328: mov     edi, [edx+ebp*4]
0x47332B: test    edi, edi
0x47332D: jz      short loc_47337B
0x47332F: mov     eax, [edi+8]
0x473332: push    eax; right
0x473333: push    offset a__tempblendseq; "__TempBlendSequence__"
0x473338: call    CRT_StricmpLocaleDispatch
0x47333D: add     esp, 8
0x473340: test    eax, eax
0x473342: jz      short loc_47337B
0x473344: test    bl, bl
0x473346: jz      short loc_473355
0x473348: mov     eax, [esi+4]
0x47334B: push    eax
0x47334C: mov     ecx, edi
0x47334E: call    sub_6C9590
0x473353: jmp     short loc_47337B
0x473355: push    edi
0x473356: push    0B35270h
0x47335B: call    NiRTTI_Cast
0x473360: mov     edi, eax
0x473362: add     esp, 8
0x473365: test    edi, edi
0x473367: jz      short loc_47337B
0x473369: mov     ecx, edi
0x47336B: call    sub_49F880
0x473370: mov     ecx, [esi+4]
0x473373: push    ecx
0x473374: mov     ecx, edi
0x473376: call    sub_49F860
0x47337B: mov     eax, [esi+98h]
0x473381: movzx   edx, word ptr [eax+46h]
0x473385: add     ebp, 1
0x473388: cmp     ebp, edx
0x47338A: jb      short loc_473325
0x47338C: pop     ebx
0x47338D: pop     edi
0x47338E: pop     esi
0x47338F: pop     ebp
0x473390: retn    4
