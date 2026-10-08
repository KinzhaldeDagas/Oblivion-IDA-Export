0x474530: push    0FFFFFFFFh; Plays a selected BSAnimGroupSequence. Resolves default slot from fixed group metadata, maps physical slot 5->0 and 6->3 while retaining the requested alias for clear semantics, handles menu/full reset conditions, records active key +0x3C and sequence +0xA0, chooses morph only for matching nonzero morph keys and equal controller counts, otherwise cross-fades or blends from a temporary pose, applies the maximum old/new Blend byte as transition time, and initializes slot action state.
0x474532: push    offset SEH_474530
0x474537: mov     eax, large fs:0
0x47453D: push    eax
0x47453E: sub     esp, 0Ch
0x474541: push    ebx
0x474542: push    ebp
0x474543: push    esi
0x474544: push    edi
0x474545: mov     eax, ds:0B30AACh
0x47454A: xor     eax, esp
0x47454C: push    eax
0x47454D: lea     eax, [esp+2Ch+var_C]
0x474551: mov     large fs:0, eax
0x474557: mov     esi, ecx
0x474559: mov     eax, [esp+2Ch+encodedKey]
0x47455D: push    eax
0x47455E: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x474563: mov     ecx, eax
0x474565: mov     eax, [esp+30h+slotSelector]
0x474569: add     esp, 4
0x47456C: cmp     eax, 0FFFFFFFFh
0x47456F: mov     [esp+2Ch+var_10], ecx
0x474573: mov     [esp+2Ch+var_18], eax
0x474577: jnz     short loc_474587
0x474579: lea     ecx, [ecx+ecx*8]
0x47457C: mov     edx, ds:0B102E8h[ecx*4]
0x474583: mov     [esp+2Ch+var_18], edx
0x474587: mov     eax, [esp+2Ch+var_18]
0x47458B: mov     [esp+2Ch+slot], eax
0x47458F: sub     eax, 5
0x474592: jz      short loc_4745A3
0x474594: sub     eax, 1
0x474597: jnz     short loc_4745AB
0x474599: mov     [esp+2Ch+var_18], 3
0x4745A1: jmp     short loc_4745AB
0x4745A3: mov     [esp+2Ch+var_18], 0
0x4745AB: mov     eax, [esp+2Ch+var_18]
0x4745AF: mov     edi, [esi+eax*4+0A0h]
0x4745B6: xor     ebx, ebx
0x4745B8: test    edi, edi
0x4745BA: mov     byte ptr [esp+2Ch+slotSelector], 0
0x4745BF: jz      short loc_4745C4
0x4745C1: mov     ebx, [edi+44h]
0x4745C4: mov     ebp, [esp+2Ch+sequence]
0x4745C8: test    ebp, ebp
0x4745CA: jz      loc_474A86
0x4745D0: cmp     word ptr [esp+2Ch+encodedKey], 0FFh
0x4745D7: jz      loc_474A86
0x4745DD: cmp     dword ptr [ebp+44h], 3
0x4745E1: jnz     short loc_4745F2
0x4745E3: fldz
0x4745E5: push    0; transition
0x4745E7: push    ecx
0x4745E8: fstp    [esp+34h+easeInTime]; easeOutTime
0x4745EB: mov     ecx, ebp; this
0x4745ED: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x4745F2: cmp     dword ptr [ebp+44h], 0
0x4745F6: jz      short loc_47462C
0x4745F8: cmp     dword ptr [ebp+24h], 0
0x4745FC: jnz     short loc_47462C
0x4745FE: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x474603: test    al, al
0x474605: jz      short loc_474619
0x474607: mov     ecx, ds:0B333C4h; this
0x47460D: push    0; firstPerson
0x47460F: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x474614: cmp     [esi+4], eax
0x474617: jz      short loc_47462C
0x474619: mov     ecx, [esp+2Ch+var_18]
0x47461D: mov     dword ptr [esi+ecx*4+48h], 0
0x474625: mov     eax, ebp
0x474627: jmp     loc_474A88
0x47462C: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x474631: test    al, al
0x474633: jz      loc_474735
0x474639: mov     ecx, ds:0B333C4h; this
0x47463F: push    0; firstPerson
0x474641: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x474646: cmp     [esi+4], eax
0x474649: jnz     loc_474735
0x47464F: mov     ecx, ds:0B33B00h
0x474655: call    sub_45A500
0x47465A: test    al, al
0x47465C: jnz     loc_474735
0x474662: fldz
0x474664: push    ecx
0x474665: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474668: mov     ecx, esi; this
0x47466A: push    4; slot
0x47466C: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x474671: fldz
0x474673: push    ecx
0x474674: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474677: push    0; slot
0x474679: mov     ecx, esi; this
0x47467B: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x474680: fldz
0x474682: push    ecx
0x474683: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474686: push    1; slot
0x474688: mov     ecx, esi; this
0x47468A: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47468F: fldz
0x474691: push    ecx
0x474692: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474695: push    2; slot
0x474697: mov     ecx, esi; this
0x474699: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47469E: mov     ecx, [esi+98h]
0x4746A4: test    ecx, ecx
0x4746A6: jz      short loc_4746FB
0x4746A8: mov     eax, [esi+0ACh]
0x4746AE: test    eax, eax
0x4746B0: jz      short loc_4746FB
0x4746B2: cmp     dword ptr [eax+44h], 0
0x4746B6: jz      short loc_4746FB
0x4746B8: mov     eax, [eax+58h]
0x4746BB: test    eax, eax
0x4746BD: jz      short loc_4746CB
0x4746BF: fldz
0x4746C1: push    ecx
0x4746C2: fstp    [esp+30h+easeOutTime]; easeOutTime
0x4746C5: push    eax; sequence
0x4746C6: call    BSAnimGroupSequence_Deactivate; BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
0x4746CB: mov     edx, [esi+0ACh]
0x4746D1: cmp     dword ptr [edx+44h], 5
0x4746D5: jnz     short loc_4746E8
0x4746D7: mov     ecx, [esi+98h]
0x4746DD: fldz
0x4746DF: push    ecx
0x4746E0: fstp    [esp+30h+easeOutTime]; float
0x4746E3: call    NiControllerManager_DeactivateTransitionSources; Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
0x4746E8: mov     ecx, [esi+0ACh]; this
0x4746EE: fldz
0x4746F0: push    0; transition
0x4746F2: push    ecx
0x4746F3: fstp    [esp+34h+easeInTime]; easeOutTime
0x4746F6: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x4746FB: mov     dword ptr [esi+0ACh], 0
0x474705: mov     eax, 0FFh
0x47470A: mov     [esi+42h], ax
0x47470E: mov     [esi+76h], ax
0x474712: push    0; sequence
0x474714: mov     dword ptr [esi+54h], 0FFFFFFFFh
0x47471B: mov     ecx, ds:0B333C4h; this
0x474721: push    0FFFFFFFFh; action
0x474723: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x474728: mov     ecx, esi
0x47472A: call    ActorAnimData_ResetRootMotion; Resets ActorAnimData root-motion state: zeroes the cached accumulation vector at +0x18, restores the accumulation/root node transform fields, then finds the matching accumulation controllers and resets them. Used before sequence play and by full actor/animation reset paths.
0x47472F: mov     ebx, [esp+2Ch+var_18]
0x474733: jmp     short loc_474779
0x474735: cmp     ebx, 1
0x474738: mov     eax, [esp+2Ch+slot]
0x47473C: jz      short loc_474754
0x47473E: fldz
0x474740: push    ecx
0x474741: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474744: mov     ecx, esi; this
0x474746: push    eax; slot
0x474747: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47474C: mov     ebx, [esp+2Ch+var_18]
0x474750: xor     edi, edi
0x474752: jmp     short loc_474779
0x474754: mov     ebx, [esp+2Ch+var_18]
0x474758: cmp     eax, ebx
0x47475A: jnz     short loc_47476B
0x47475C: cmp     byte ptr [esi+0C4h], 0
0x474763: jnz     short loc_47476B
0x474765: cmp     dword ptr [ebp+44h], 0
0x474769: jz      short loc_474779
0x47476B: fldz
0x47476D: push    ecx
0x47476E: fstp    [esp+30h+easeOutTime]; easeOutTime
0x474771: mov     ecx, esi; this
0x474773: push    eax; slot
0x474774: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x474779: mov     cx, word ptr [esp+2Ch+encodedKey]
0x47477E: mov     [esi+ebx*2+3Ch], cx
0x474783: mov     [esi+ebx*4+0A0h], ebp
0x47478A: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x47478F: test    al, al
0x474791: jz      short loc_4747A9
0x474793: mov     ecx, ds:0B333C4h; this
0x474799: push    0; firstPerson
0x47479B: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x4747A0: cmp     [esi+4], eax
0x4747A3: jz      loc_474852
0x4747A9: test    edi, edi
0x4747AB: jz      loc_474852
0x4747B1: mov     eax, [ebp+68h]
0x4747B4: push    eax
0x4747B5: lea     ecx, [esp+30h+sequence]
0x4747B9: call    sub_405070
0x4747BE: mov     eax, [edi+68h]
0x4747C1: push    eax
0x4747C2: lea     ecx, [esp+30h+encodedKey]
0x4747C6: mov     [esp+30h+var_4], 0
0x4747CE: call    sub_405070
0x4747D3: mov     ebx, [esp+2Ch+encodedKey]
0x4747D7: mov     ecx, ebx
0x4747D9: mov     byte ptr [esp+2Ch+var_4], 1
0x4747DE: call    TESAnimGroup_GetMorphKey; Final name: TESAnimGroup_GetMorphKey. Returns byte at TESAnimGroup +0x20 set by m: note.
0x4747E3: test    al, al
0x4747E5: jz      short loc_47482F
0x4747E7: mov     ecx, ebx
0x4747E9: call    TESAnimGroup_GetMorphKey; Final name: TESAnimGroup_GetMorphKey. Returns byte at TESAnimGroup +0x20 set by m: note.
0x4747EE: mov     ecx, [esp+2Ch+sequence]
0x4747F2: mov     bl, al
0x4747F4: call    TESAnimGroup_GetMorphKey; Final name: TESAnimGroup_GetMorphKey. Returns byte at TESAnimGroup +0x20 set by m: note.
0x4747F9: cmp     bl, al
0x4747FB: jnz     short loc_47482F
0x4747FD: mov     ebx, [edi+0Ch]
0x474800: cmp     ebx, [ebp+0Ch]
0x474803: jnz     loc_474926
0x474809: cmp     ebp, edi
0x47480B: mov     byte ptr [esp+2Ch+slotSelector], 1
0x474810: jnz     short loc_47482F
0x474812: mov     eax, [esi+4]
0x474815: mov     eax, [eax+8]
0x474818: mov     ecx, [edi+8]
0x47481B: push    eax
0x47481C: push    ecx; ArgList
0x47481D: push    offset aMorphErrorTryi; "Morph Error: Trying to morph from seque"...
0x474822: call    PrintError
0x474827: add     esp, 0Ch
0x47482A: mov     byte ptr [esp+2Ch+slotSelector], 0
0x47482F: lea     ecx, [esp+2Ch+encodedKey]; slot
0x474833: mov     byte ptr [esp+2Ch+var_4], 0
0x474838: call    NiPointerSlot_Release
0x47483D: lea     ecx, [esp+2Ch+sequence]; slot
0x474841: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x474849: call    NiPointerSlot_Release
0x47484E: mov     ebx, [esp+2Ch+var_18]
0x474852: fld     dword ptr ds:0B06538h
0x474858: xor     al, al
0x47485A: test    edi, edi
0x47485C: fstp    [esp+2Ch+encodedKey]
0x474860: jz      short loc_474868
0x474862: mov     ecx, [edi+68h]
0x474865: mov     al, [ecx+21h]
0x474868: mov     edx, [ebp+68h]
0x47486B: mov     cl, [edx+21h]
0x47486E: cmp     cl, al
0x474870: jbe     short loc_474874
0x474872: mov     al, cl
0x474874: test    al, al
0x474876: jz      short loc_47488D
0x474878: movzx   eax, al
0x47487B: mov     [esp+2Ch+encodedKey], eax
0x47487F: fild    [esp+2Ch+encodedKey]
0x474883: fdiv    qword ptr ds:0A3AA50h
0x474889: fstp    [esp+2Ch+encodedKey]
0x47488D: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x474892: test    al, al
0x474894: jz      short loc_4748A7
0x474896: mov     ecx, [esi+4]
0x474899: mov     edx, ds:0B333C4h
0x47489F: cmp     ecx, [edx+5D8h]
0x4748A5: jz      short loc_4748BA
0x4748A7: push    0
0x4748A9: push    40Ch
0x4748AE: call    InterfaceManager_IsMenuVisibleByID; CustomAnimSupport evidence: player node/control-state check used by install/defer and playback paths.
0x4748B3: add     esp, 8
0x4748B6: test    al, al
0x4748B8: jz      short loc_4748C4
0x4748BA: fld     dword ptr ds:0B06540h
0x4748C0: fstp    [esp+2Ch+encodedKey]
0x4748C4: cmp     byte ptr [esi+0C4h], 0
0x4748CB: jz      short loc_4748D3
0x4748CD: fldz
0x4748CF: fstp    [esp+2Ch+encodedKey]
0x4748D3: fld     [esp+2Ch+encodedKey]
0x4748D7: fdiv    dword ptr ds:0B06530h
0x4748DD: fstp    [esp+2Ch+encodedKey]
0x4748E1: fld     dword ptr [ebp+2Ch]
0x4748E4: fadd    qword ptr ds:0A2FC68h
0x4748EA: fstp    dword ptr [ebp+48h]
0x4748ED: fld     dword ptr ds:0A34BA0h
0x4748F3: fld     [esp+2Ch+encodedKey]
0x4748F7: fcom    st(1)
0x4748F9: fnstsw  ax
0x4748FB: fstp    st(1)
0x4748FD: test    ah, 5
0x474900: jp      short loc_47494C
0x474902: push    0; transition
0x474904: fstp    st
0x474906: fldz
0x474908: push    0; timeSyncSequence
0x47490A: sub     esp, 8
0x47490D: fstp    [esp+3Ch+weight]; easeInTime
0x474911: fld1
0x474913: mov     ecx, ebp; this
0x474915: fstp    [esp+3Ch+var_3C]; weight
0x474918: push    1; startOver
0x47491A: push    0; priority
0x47491C: call    NiControllerSequence_Activate; Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
0x474921: jmp     loc_474A34
0x474926: mov     edx, [esi+4]
0x474929: mov     eax, [edx+8]
0x47492C: mov     ecx, [ebp+8]
0x47492F: mov     edx, [edi+8]
0x474932: push    eax
0x474933: mov     eax, [ebp+0Ch]
0x474936: push    eax
0x474937: push    ecx
0x474938: push    ebx
0x474939: push    edx; ArgList
0x47493A: push    offset aMorphErrorCont; "Morph Error: Controller count not the s"...
0x47493F: call    PrintError
0x474944: add     esp, 18h
0x474947: jmp     loc_47482F
0x47494C: cmp     byte ptr [esp+2Ch+slotSelector], 0
0x474951: jz      short loc_474977
0x474953: fld1
0x474955: sub     esp, 8
0x474958: fst     [esp+34h+easeOutTime]; float
0x47495C: fstp    [esp+34h+easeInTime]; float
0x47495F: push    0; int
0x474961: push    ecx
0x474962: mov     ecx, [esi+98h]
0x474968: fstp    [esp+3Ch+var_3C]; float
0x47496B: push    ebp; int
0x47496C: push    edi; int
0x47496D: call    NiControllerSequence_Morph; Morph transition wrapper used by ActorAnimData_PlaySequence only after Oblivion confirms matching nonzero TESAnimGroup morph keys and equal controlled-block counts. Delegates to the sequence morph implementation at 0x6C9E00.
0x474972: jmp     loc_474A34
0x474977: test    edi, edi
0x474979: jz      short loc_4749A8
0x47497B: cmp     dword ptr [edi+44h], 0
0x47497F: jz      short loc_4749A8
0x474981: mov     ecx, [esi+98h]
0x474987: fld1
0x474989: push    0; int
0x47498B: push    ecx
0x47498C: fstp    [esp+34h+easeInTime]; float
0x47498F: push    1; int
0x474991: push    0; int
0x474993: push    ecx
0x474994: fstp    [esp+40h+var_40]; float
0x474997: push    ebp; int
0x474998: push    edi; int
0x474999: call    NiControllerSequence_CrossFade; Cross-fades from an active source sequence to an inactive destination: deactivates the source with the requested ease time, then activates the destination with the same transition time and caller-supplied priority/start/weight/time-sync values. Returns false unless source is active and destination inactive.
0x47499E: test    al, al
0x4749A0: jnz     loc_474A34
0x4749A6: jmp     short loc_4749AA
0x4749A8: fstp    st
0x4749AA: mov     ecx, ds:0B333C4h; this
0x4749B0: push    1; firstPerson
0x4749B2: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x4749B7: cmp     [esi+4], eax
0x4749BA: jz      short loc_474A14
0x4749BC: mov     ecx, ds:0B333C4h; this
0x4749C2: mov     edi, [esi+4]
0x4749C5: push    0; firstPerson
0x4749C7: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x4749CC: cmp     edi, eax
0x4749CE: jz      short loc_474A14
0x4749D0: mov     eax, ds:0B333CCh
0x4749D5: mov     eax, [eax+0DCh]
0x4749DB: push    eax
0x4749DC: push    edi
0x4749DD: call    sub_47F7B0
0x4749E2: add     esp, 8
0x4749E5: test    al, al
0x4749E7: jz      short loc_4749F2
0x4749E9: cmp     byte ptr ds:0B333B8h, 0
0x4749F0: jz      short loc_474A14
0x4749F2: fldz
0x4749F4: mov     ecx, [esi+98h]
0x4749FA: push    0; timeSyncSequence
0x4749FC: sub     esp, 8
0x4749FF: fstp    [esp+38h+easeInTime]; easeInTime
0x474A03: fld1
0x474A05: fstp    [esp+38h+weight]; weight
0x474A08: push    1; startOver
0x474A0A: push    0; priority
0x474A0C: push    ebp; sequence
0x474A0D: call    BSAnimGroupSequence_Activate; BSAnimGroupSequence activation wrapper. Delegates to NiControllerSequence_Activate with the final transition flag forced to zero.
0x474A12: jmp     short loc_474A34
0x474A14: fld     [esp+2Ch+encodedKey]
0x474A18: mov     ecx, [esi+98h]
0x474A1E: push    0; int
0x474A20: push    0; int
0x474A22: sub     esp, 8
0x474A25: fstp    [esp+3Ch+weight]; float
0x474A29: fldz
0x474A2B: fstp    [esp+3Ch+var_3C]; float
0x474A2E: push    ebp; int
0x474A2F: call    NiControllerManager_BlendFromPose; Creates or reuses a __TempBlendSequence__ for the current pose, then transitions from that temporary pose to the requested destination sequence through 0x6C9D30. ActorAnimData_PlaySequence uses this for player/camera-visible roots when a normal cross-fade cannot be used.
0x474A34: mov     eax, [esp+2Ch+var_10]
0x474A38: lea     ecx, [eax+eax*8]
0x474A3B: mov     eax, ds:0B102ECh[ecx*4]
0x474A42: cmp     eax, 7
0x474A45: ja      short loc_474A5D
0x474A47: movzx   edx, ds:byte_474AA4[eax]
0x474A4E: jmp     ds:jpt_474A4E[edx*4]; switch 1 cases
0x474A55: mov     dword ptr [esi+ebx*4+48h], 0; jumptable 00474A4E case 0
0x474A5D: cmp     byte ptr [esi+0C4h], 0
0x474A64: jz      short loc_474A82
0x474A66: fld     dword ptr [esi+94h]
0x474A6C: push    1; int
0x474A6E: push    0; int
0x474A70: push    ecx
0x474A71: mov     ecx, esi
0x474A73: fstp    [esp+38h+weight]; float
0x474A76: mov     byte ptr [esi+0C4h], 0
0x474A7D: call    ActorAnimData_SampleAndExtractRootMotion; Samples the actor scene graph while extracting accumulation/root motion. Seeds AccumNode +0x54 from ActorAnimData +0x18, updates RootNode at the requested time, optionally copies the resulting AccumNode translation to the caller, then zeroes AccumNode +0x54. Used after forced play, animation-state restore, and explicit play-group paths.
0x474A82: mov     eax, ebp
0x474A84: jmp     short loc_474A88
0x474A86: xor     eax, eax
0x474A88: mov     ecx, [esp+2Ch+var_C]
0x474A8C: mov     large fs:0, ecx
0x474A93: pop     ecx
0x474A94: pop     edi
0x474A95: pop     esi
0x474A96: pop     ebp
0x474A97: pop     ebx
0x474A98: add     esp, 18h
0x474A9B: retn    0Ch
0x9AEDD0: lea     ecx, [ebp+4]; slot
0x9AEDD3: jmp     NiPointerSlot_Release
0x9AEDD8: lea     ecx, [ebp+8]; slot
0x9AEDDB: jmp     NiPointerSlot_Release
0x9AEDE0: mov     edx, [esp+encodedKey]
0x9AEDE4: lea     eax, [edx-1Ch]
0x9AEDE7: mov     ecx, [edx-20h]
0x9AEDEA: xor     ecx, eax
0x9AEDEC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEDF1: mov     eax, offset stru_ADB4B4
0x9AEDF6: jmp     ___CxxFrameHandler3
