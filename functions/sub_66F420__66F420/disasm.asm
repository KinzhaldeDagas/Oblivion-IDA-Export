0x66F420: push    0FFFFFFFFh
0x66F422: push    offset SEH_66F420
0x66F427: mov     eax, large fs:0
0x66F42D: push    eax; int
0x66F42E: sub     esp, 40h
0x66F431: push    ebx; float
0x66F432: push    ebp; float
0x66F433: push    esi; float
0x66F434: push    edi; float
0x66F435: mov     eax, ds:0B30AACh
0x66F43A: xor     eax, esp
0x66F43C: push    eax; float
0x66F43D: lea     eax, [esp+60h+var_C]
0x66F441: mov     large fs:0, eax
0x66F447: mov     esi, ecx
0x66F449: mov     eax, [esi]
0x66F44B: mov     edx, [eax+25Ch]
0x66F451: call    edx
0x66F453: test    al, al
0x66F455: jnz     loc_66FD74
0x66F45B: cmp     ds:0B13228h, al
0x66F461: jz      short loc_66F46E
0x66F463: mov     ecx, ds:0B33B00h
0x66F469: call    sub_466B70
0x66F46E: mov     eax, ds:0B333C4h
0x66F473: mov     byte ptr [eax+12Ch], 1; 3DTheft decode: fast-travel core marks PlayerCharacter+0x12C in-transition before travel simulation/relocation work.
0x66F47A: mov     edx, [esi]
0x66F47C: mov     eax, [edx+380h]
0x66F482: mov     ecx, esi
0x66F484: mov     [esp+60h+var_49], 0
0x66F489: call    eax
0x66F48B: test    eax, eax
0x66F48D: jz      short loc_66F505
0x66F48F: mov     edx, [esi]
0x66F491: mov     eax, [edx+380h]
0x66F497: mov     ecx, esi
0x66F499: mov     [esp+60h+var_49], 1
0x66F49E: call    eax
0x66F4A0: mov     ecx, ds:0B333C4h
0x66F4A6: mov     edx, [esi]
0x66F4A8: push    1; useFactionOwnership
0x66F4AA: mov     edi, eax
0x66F4AC: mov     eax, [edx+380h]
0x66F4B2: push    ecx; actorReference
0x66F4B3: mov     ecx, esi
0x66F4B5: mov     [esp+68h+var_48], edi; float
0x66F4B9: call    eax
0x66F4BB: mov     ecx, eax; reference
0x66F4BD: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x66F4C2: test    al, al
0x66F4C4: jz      short loc_66F4D8
0x66F4C6: mov     edx, [esi]
0x66F4C8: mov     eax, [edx+380h]
0x66F4CE: mov     ecx, esi
0x66F4D0: call    eax
0x66F4D2: mov     [esi+1E0h], eax
0x66F4D8: xor     ebx, ebx
0x66F4DA: mov     ecx, [esi+58h]
0x66F4DD: mov     eax, [ecx]
0x66F4DF: mov     edx, [eax+184h]
0x66F4E5: call    edx
0x66F4E7: cmp     eax, ebx
0x66F4E9: jz      short loc_66F551
0x66F4EB: cmp     edi, ebx
0x66F4ED: jz      short loc_66F551
0x66F4EF: mov     al, [eax+20h]
0x66F4F2: cmp     al, 16h
0x66F4F4: jnz     short loc_66F546
0x66F4F6: push    edi
0x66F4F7: mov     ecx, esi
0x66F4F9: call    sub_602050
0x66F4FE: mov     [esp+60h+var_49], 1
0x66F503: jmp     short loc_66F551
0x66F505: mov     ecx, [esi+1E0h]; reference
0x66F50B: xor     ebx, ebx
0x66F50D: cmp     ecx, ebx
0x66F50F: jz      short loc_66F538
0x66F511: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x66F516: test    eax, eax
0x66F518: jz      short loc_66F538
0x66F51A: mov     ecx, ds:0B333C4h
0x66F520: push    1; useFactionOwnership
0x66F522: push    ecx; actorReference
0x66F523: mov     ecx, [esi+1E0h]; reference
0x66F529: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x66F52E: test    al, al
0x66F530: jnz     short loc_66F538
0x66F532: mov     [esi+1E0h], ebx
0x66F538: mov     edx, [esi+1E0h]
0x66F53E: mov     [esp+60h+var_48], edx
0x66F542: mov     edi, edx
0x66F544: jmp     short loc_66F4DA
0x66F546: cmp     al, 17h
0x66F548: jnz     short loc_66F551
0x66F54A: mov     ecx, esi
0x66F54C: call    sub_5F0410
0x66F551: mov     ecx, [esi+1E0h]
0x66F557: cmp     ecx, ebx
0x66F559: jz      short loc_66F58A
0x66F55B: mov     eax, [ecx]
0x66F55D: mov     edx, [eax+198h]
0x66F563: push    ebx
0x66F564: call    edx
0x66F566: test    al, al
0x66F568: jnz     short loc_66F584
0x66F56A: mov     eax, [esi+1E0h]
0x66F570: mov     eax, [eax+8]
0x66F573: mov     ecx, eax
0x66F575: shr     ecx, 0Bh
0x66F578: test    cl, 1
0x66F57B: jnz     short loc_66F584
0x66F57D: shr     eax, 5
0x66F580: test    al, 1
0x66F582: jz      short loc_66F58A
0x66F584: mov     [esi+1E0h], ebx
0x66F58A: mov     edx, [esi+5Ch]
0x66F58D: mov     eax, [edx+30h]
0x66F590: lea     edi, [esi+5Ch]
0x66F593: mov     ecx, edi
0x66F595: call    eax
0x66F597: test    eax, eax
0x66F599: jz      loc_66F64B
0x66F59F: mov     ecx, edi
0x66F5A1: call    MagicCaster_InitializeCasting???
0x66F5A6: mov     ecx, esi; this
0x66F5A8: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x66F5AD: mov     edi, eax
0x66F5AF: push    1; slot
0x66F5B1: mov     ecx, edi; this
0x66F5B3: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x66F5B8: push    eax
0x66F5B9: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x66F5BE: add     eax, 0FFFFFFDEh
0x66F5C1: add     esp, 4
0x66F5C4: cmp     eax, 5
0x66F5C7: ja      short loc_66F5FA
0x66F5C9: fldz
0x66F5CB: push    ecx
0x66F5CC: fstp    [esp+64h+duration]; easeOutTime
0x66F5CF: mov     ecx, edi; this
0x66F5D1: push    1; slot
0x66F5D3: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x66F5D8: fld     dword ptr ds:0A30634h
0x66F5DE: sub     esp, 8
0x66F5E1: fstp    [esp+68h+duration]; explicitTimeOrMinusOne
0x66F5E5: mov     ecx, edi; this
0x66F5E7: fldz
0x66F5E9: fstp    [esp+68h+deltaTime]; deltaTime
0x66F5EC: push    esi; ownerActor
0x66F5ED: call    ActorAnimData_Update; Oblivion ActorAnimData scheduler with exact native ABI: this in ECX plus three 4-byte stack arguments, retn 0x0C. ownerActor is at [EBP+8]; all surveyed callers pass the owning Actor/Player, but the native body never dereferences it, so an interior hook's use of that value is a caller-derived contract. deltaTime at [EBP+0x0C] advances ActorAnimData time +0x94 and sequence offsets. explicitTimeOrMinusOne at [EBP+0x10] uses -1.0 for normal ticking; any other value drives an explicit-time scene update/early return. The function drains deferred KF models, maintains power/idle state, samples five slots, and advances required-note templates (class 4 terminal index 3; class 7 terminal index 4).
0x66F5F2: push    esi; a2
0x66F5F3: mov     ecx, edi; this
0x66F5F5: call    ActorAnimData_ApplyToActor; Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
0x66F5FA: mov     edi, [esi+5CCh]
0x66F600: push    1; slot
0x66F602: mov     ecx, edi; this
0x66F604: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x66F609: push    eax
0x66F60A: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x66F60F: add     eax, 0FFFFFFDEh
0x66F612: add     esp, 4
0x66F615: cmp     eax, 5
0x66F618: ja      short loc_66F64B
0x66F61A: fldz
0x66F61C: push    ecx
0x66F61D: fstp    [esp+64h+duration]; easeOutTime
0x66F620: mov     ecx, edi; this
0x66F622: push    1; slot
0x66F624: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x66F629: fld     dword ptr ds:0A30634h
0x66F62F: sub     esp, 8
0x66F632: fstp    [esp+68h+duration]; explicitTimeOrMinusOne
0x66F636: mov     ecx, edi; this
0x66F638: fldz
0x66F63A: fstp    [esp+68h+deltaTime]; deltaTime
0x66F63D: push    esi; ownerActor
0x66F63E: call    ActorAnimData_Update; Oblivion ActorAnimData scheduler with exact native ABI: this in ECX plus three 4-byte stack arguments, retn 0x0C. ownerActor is at [EBP+8]; all surveyed callers pass the owning Actor/Player, but the native body never dereferences it, so an interior hook's use of that value is a caller-derived contract. deltaTime at [EBP+0x0C] advances ActorAnimData time +0x94 and sequence offsets. explicitTimeOrMinusOne at [EBP+0x10] uses -1.0 for normal ticking; any other value drives an explicit-time scene update/early return. The function drains deferred KF models, maintains power/idle state, samples five slots, and advances required-note templates (class 4 terminal index 3; class 7 terminal index 4).
0x66F643: push    esi; a2
0x66F644: mov     ecx, edi; this
0x66F646: call    ActorAnimData_ApplyToActor; Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
0x66F64B: push    800h
0x66F650: mov     ecx, esi
0x66F652: call    sub_5E05F0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x66F657: mov     ecx, esi; this
0x66F659: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x66F65E: mov     [eax+2A0h], ebx
0x66F664: mov     edx, [esi]
0x66F666: mov     eax, [edx+380h]
0x66F66C: mov     ecx, esi
0x66F66E: call    eax
0x66F670: test    eax, eax
0x66F672: jz      short loc_66F6A5
0x66F674: mov     edx, [esi]
0x66F676: mov     eax, [edx+380h]
0x66F67C: push    800h; int
0x66F681: mov     ecx, esi
0x66F683: call    eax
0x66F685: mov     ecx, eax
0x66F687: call    sub_5E05F0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x66F68C: mov     edx, [esi]
0x66F68E: mov     eax, [edx+380h]
0x66F694: mov     ecx, esi
0x66F696: call    eax
0x66F698: mov     ecx, eax; this
0x66F69A: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x66F69F: mov     [eax+2A0h], ebx
0x66F6A5: mov     ecx, esi
0x66F6A7: call    sub_5E4140
0x66F6AC: fldz
0x66F6AE: mov     ecx, ds:0B333C4h
0x66F6B4: fstp    [esp+60h+var_44]
0x66F6B8: mov     edx, [ecx]
0x66F6BA: mov     eax, [edx+174h]
0x66F6C0: call    eax
0x66F6C2: fld     dword ptr [eax]
0x66F6C4: mov     ecx, ds:0B333C4h
0x66F6CA: fstp    dword ptr [esp+60h+var_40+4]
0x66F6CE: mov     edx, [ecx]
0x66F6D0: mov     eax, [edx+174h]
0x66F6D6: call    eax
0x66F6D8: fld     dword ptr [eax+4]
0x66F6DB: mov     ecx, ds:0B333C4h
0x66F6E1: fstp    [esp+60h+var_38]
0x66F6E5: mov     edx, [ecx]
0x66F6E7: mov     eax, [edx+174h]
0x66F6ED: call    eax
0x66F6EF: fld     dword ptr [eax+8]
0x66F6F2: mov     ecx, dword ptr [esp+60h+var_40+4]
0x66F6F6: fstp    [esp+60h+var_34]
0x66F6FA: mov     edx, [esp+60h+var_38]
0x66F6FE: mov     edi, [esp+60h+arg_0]; Selected destination ref argument is loaded into EDI here; EDI survives through the primary relocation call setup at 0x66FABD..0x66FAFA.
0x66F702: sub     esp, 0Ch
0x66F705: mov     eax, esp
0x66F707: mov     [eax], ecx
0x66F709: mov     ecx, [esp+6Ch+var_34]
0x66F70D: mov     [eax+4], edx
0x66F710: lea     edx, [esp+6Ch+var_44]
0x66F714: push    edx; int
0x66F715: mov     [eax+8], ecx
0x66F718: push    edi; int
0x66F719: mov     ecx, esi; int
0x66F71B: call    sub_5F0810; Fast-travel core helper runs before time calculation; selected destination ref is EDI, current player pos was copied from g_PlayerRef.GetPos(), and var_44 starts as distance/out value.
0x66F720: lea     ecx, [esp+60h+var_20]; this
0x66F724: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x66F729: mov     ecx, edi; this
0x66F72B: mov     [esp+60h+var_4], ebx
0x66F72F: call    TESObjectREFR_GetWorldSpace
0x66F734: push    eax; destinationWorldspace
0x66F735: mov     ecx, edi; this
0x66F737: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x66F73C: push    eax; destinationCell
0x66F73D: mov     eax, [edi]
0x66F73F: mov     edx, [eax+174h]
0x66F745: mov     ecx, edi
0x66F747: call    edx
0x66F749: push    eax; destinationPosition
0x66F74A: mov     eax, ds:0B333C4h
0x66F74F: push    eax; sourceRef
0x66F750: lea     ecx, [esp+70h+var_20]; this
0x66F754: call    TravelPath_BuildToDestination; Fast-travel duration path build uses player current ref plus destination pos/cell/worldspace. It computes travel time, not the later relocation target.
0x66F759: test    al, al; If TravelPath_BuildToDestination succeeds, vanilla computes path distance; otherwise var_44 remains the fallback/zero distance before duration calculation.
0x66F75B: jz      short loc_66F771
0x66F75D: mov     ecx, ds:0B333C4h
0x66F763: push    ecx; sourceRef
0x66F764: lea     ecx, [esp+64h+var_20]; this
0x66F768: call    TravelPath_ComputeDistance; Verified TravelPath_ComputeDistance sums Euclidean segments from sourceRef->GetPos through each TravelPathNode_GetPosition. For a type-0 teleport node, the segment endpoint is the linked door's TeleportData xyz marker; after consuming that node, the next segment starts at the current door's own TeleportData xyz (its destination marker). Type-1 nodes use owned position payloads; ordinary references use GetPos.
0x66F76D: fstp    [esp+60h+var_44]; After TravelPath_ComputeDistance returns, vanilla stores total route distance to [esp+0x1C] (var_44). FPU is empty before 0x66F771. This is a low-risk point for a handler to decide an encounter and replace var_44 with distance-to-encounter while allowing vanilla TimeScale/time-loop code to run normally.
0x66F771: push    3Ah ; ':'; Candidate pre-time-advance encounter hook point. Concrete runtime state before the push: ESI=player, EDI=destination ref, EBX=0, [esp+0x1C]=var_44 total route distance, [esp+0x40]=TravelPath local/list, [esp+0x5C]=SEH state var_4. Vanilla has not looked up TimeScale or advanced travel time.
0x66F773: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x66F778: fld     [esp+64h+var_44]; Duration calculation reads route distance from [esp+0x20] here only because push 0x3A shifted the stack by 4; that is the same local var_44 normally at [esp+0x1C] before 0x66F771. A pre-hook should write [esp+0x1C] before resuming.
0x66F77C: mov     ecx, ds:0B333C4h
0x66F782: fstp    [esp+64h+var_40+4]
0x66F786: add     esp, 4
0x66F789: mov     ebp, eax
0x66F78B: call    Actor_CalcFastTravelSpeed; Player travel speed source: sub_5E3750 returns current actor movement speed used for fast-travel duration.
0x66F790: fdivr   [esp+60h+var_40+4]; Duration seed here is distance / playerTravelSpeed, then divided by 3600.0 and multiplied by TimeScale.
0x66F794: cmp     [esp+60h+var_49], 0
0x66F799: fstp    [esp+60h+arg_0]
0x66F79D: fld     [esp+60h+arg_0]
0x66F7A1: fdiv    qword ptr ds:0A2F938h
0x66F7A7: fstp    [esp+60h+arg_0]
0x66F7AB: fld     dword ptr [ebp+24h]
0x66F7AE: fstp    dword ptr [esp+60h+var_40]
0x66F7B2: fld     dword ptr [esp+60h+var_40]
0x66F7B6: fmul    [esp+60h+arg_0]
0x66F7BA: fstp    [esp+60h+arg_0]
0x66F7BE: jz      short loc_66F7CE
0x66F7C0: fld     [esp+60h+arg_0]; Mounted/horse path halves the computed duration multiplier (constant 0.5).
0x66F7C4: fmul    qword ptr ds:0A2FAA0h
0x66F7CA: fstp    [esp+60h+arg_0]
0x66F7CE: fld     [esp+60h+arg_0]; Fast-travel duration is rounded to an integer and stored at PlayerCharacter+0x590 before relocation. If nonzero, vanilla advances time/processes in a loop before the 0x66FAFA move.
0x66F7D2: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x66F7D7: push    edi
0x66F7D8: push    ebx; a3
0x66F7D9: mov     [esi+590h], eax
0x66F7DF: mov     byte ptr [esi+594h], 0
0x66F7E6: mov     ecx, ds:0B333A0h
0x66F7EC: push    1; a2
0x66F7EE: call    sub_440AF0
0x66F7F3: mov     eax, [esi+590h]
0x66F7F9: cmp     eax, ebx
0x66F7FB: jz      loc_66F97B
0x66F801: fld     dword ptr ds:0A3D9A4h
0x66F807: lea     edx, [esp+60h+var_30]
0x66F80B: fstp    [esp+60h+var_30]
0x66F80F: push    edx
0x66F810: fld     dword ptr ds:0A2FAACh
0x66F816: mov     [esp+64h+arg_0], eax
0x66F81A: fstp    [esp+64h+var_2C]
0x66F81E: fld     dword ptr ds:0A41724h
0x66F824: fstp    [esp+64h+var_28]
0x66F828: fldz
0x66F82A: fstp    [esp+64h+var_24]
0x66F82E: call    sub_578E90
0x66F833: add     esp, 4
0x66F836: cmp     [esi+590h], ebx
0x66F83C: jle     loc_66F9D1
0x66F842: fild    [esp+60h+arg_0]
0x66F846: fstp    dword ptr [esp+60h+var_40]
0x66F84A: lea     ebx, [ebx+0]
0x66F850: fld     qword ptr ds:0A309F0h; Fast-travel time/process loop. Each iteration advances UI/progress, TimeGlobals, ActorProcessManager lists, and player effects before relocation. This means a 0x66FAFA encounter hook occurs after vanilla travel time has already elapsed.
0x66F856: push    ecx
0x66F857: fild    dword ptr [esi+590h]
0x66F85D: fmul    st, st(1)
0x66F85F: fdiv    dword ptr [esp+64h+var_40]
0x66F863: fsubp   st(1), st
0x66F865: fstp    [esp+64h+arg_0]
0x66F869: fld     [esp+64h+arg_0]
0x66F86D: fstp    [esp+64h+duration]; float
0x66F870: push    ebx; int
0x66F871: call    sub_57B950; Fast-travel UI/progress update helper called once per simulated travel-time step before relocation.
0x66F876: add     esp, 8
0x66F879: mov     ecx, 0B332E0h
0x66F87E: call    TimeGlobals_GetTimeScale; Returns TimeGlobals field +5 TESGlobal value (time scale). Observed callers use it for magic cooldown and fast-travel time calculations.
0x66F883: fdivr   qword ptr ds:0A2F938h
0x66F889: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F88E: fstp    [esp+60h+arg_0]
0x66F892: call    sub_673B00
0x66F897: fadd    [esp+60h+arg_0]
0x66F89B: push    ecx
0x66F89C: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F8A1: fstp    dword ptr [esp+64h+var_40+4]
0x66F8A5: fld     dword ptr [esp+64h+var_40+4]
0x66F8A9: fstp    [esp+64h+duration]; float
0x66F8AC: call    sub_673B10; ActorProcessManager accumulates a fractional fast-travel/update remainder in flt_B3BCF0; NaN/large values are reset to 0.
0x66F8B1: fld     [esp+60h+arg_0]
0x66F8B5: push    ecx
0x66F8B6: mov     ecx, 0B332E0h
0x66F8BB: fstp    [esp+64h+duration]; float
0x66F8BE: call    TimeGlobals_AdvanceGameTime; TimeGlobals::AdvanceGameTime-style call during fast-travel loop. a2 is a fraction of the computed travel duration, converted using TimeScale/GameHour.
0x66F8C3: fld     dword ptr ds:0A71E4Ch
0x66F8C9: push    1; float
0x66F8CB: push    ecx
0x66F8CC: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F8D1: fstp    [esp+68h+deltaTime]; float
0x66F8D4: call    sub_677EC0; ActorProcessManager high/process list update used during fast-travel time simulation.
0x66F8D9: fld     dword ptr ds:0A71E4Ch
0x66F8DF: push    1; float
0x66F8E1: push    ecx
0x66F8E2: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F8E7: fstp    [esp+68h+deltaTime]; float
0x66F8EA: call    sub_674200; ActorProcessManager process-level-1 list update used during fast-travel time simulation.
0x66F8EF: fld     dword ptr ds:0A71E4Ch
0x66F8F5: push    1; float
0x66F8F7: push    ecx
0x66F8F8: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F8FD: fstp    [esp+68h+deltaTime]; float
0x66F900: call    sub_673E90; ActorProcessManager process-level-2 list update used during fast-travel time simulation.
0x66F905: fld     dword ptr ds:0A71E4Ch
0x66F90B: push    1; int
0x66F90D: push    ecx
0x66F90E: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F913: fstp    [esp+68h+deltaTime]; float
0x66F916: call    sub_673C10; ActorProcessManager process-level-3 list update used during fast-travel time simulation.
0x66F91B: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F920: call    sub_674A20; 3DTheft decode 2026-05-16: frame-loop actor process manager maintenance pass after process updates; removes/destroys invalid refs and refreshes process level state.
0x66F925: fld     dword ptr ds:0A379B4h
0x66F92B: add     dword ptr [esi+590h], 0FFFFFFFFh
0x66F932: push    ecx
0x66F933: mov     ecx, ds:0B333C4h
0x66F939: fstp    [esp+64h+duration]
0x66F93C: call    sub_5F2530; Fast-travel loop player AV update: clamps/restores health toward base+modifier over travel time.
0x66F941: fld     dword ptr ds:0A379B4h
0x66F947: push    1; float
0x66F949: push    ecx
0x66F94A: mov     ecx, ds:0B333C4h
0x66F950: fstp    [esp+68h+deltaTime]; float
0x66F953: call    sub_5F25F0; Fast-travel loop player AV update: magicka regeneration/active magic adjustment over travel time.
0x66F958: fld     dword ptr ds:0A379B4h
0x66F95E: push    ecx
0x66F95F: mov     ecx, ds:0B333C4h
0x66F965: fstp    [esp+64h+duration]; float
0x66F968: call    sub_5F2720; Fast-travel loop player AV update: fatigue regeneration over travel time.
0x66F96D: cmp     [esi+590h], ebx
0x66F973: jg      loc_66F850
0x66F979: jmp     short loc_66F9D1
0x66F97B: fld     [esp+60h+arg_0]
0x66F97F: mov     ecx, 0B332E0h
0x66F984: fmul    qword ptr ds:0A2F938h
0x66F98A: fstp    [esp+60h+var_40+4]
0x66F98E: call    TimeGlobals_GetTimeScale; Returns TimeGlobals field +5 TESGlobal value (time scale). Observed callers use it for magic cooldown and fast-travel time calculations.
0x66F993: fdivr   [esp+60h+var_40+4]
0x66F997: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F99C: fstp    [esp+60h+arg_0]
0x66F9A0: call    sub_673B00
0x66F9A5: fadd    [esp+60h+arg_0]
0x66F9A9: push    ecx
0x66F9AA: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F9AF: fstp    dword ptr [esp+64h+var_40+4]
0x66F9B3: fld     dword ptr [esp+64h+var_40+4]
0x66F9B7: fstp    [esp+64h+duration]; float
0x66F9BA: call    sub_673B10; ActorProcessManager accumulates a fractional fast-travel/update remainder in flt_B3BCF0; NaN/large values are reset to 0.
0x66F9BF: fld     [esp+60h+arg_0]
0x66F9C3: push    ecx
0x66F9C4: mov     ecx, 0B332E0h
0x66F9C9: fstp    [esp+64h+duration]; float
0x66F9CC: call    TimeGlobals_AdvanceGameTime; Zero/small-duration path still advances TimeGlobals once before relocation.
0x66F9D1: push    edi; After all time/process updates are complete, the core moves into horse prepositioning and final destination relocation setup.
0x66F9D2: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66F9D7: mov     dword ptr [esi+590h], 0Ah
0x66F9E1: call    sub_676940
0x66F9E6: mov     ecx, [esp+60h+var_48]; Travel-horse branch: var_48 is the horse/owned travel ref (PlayerCharacter+0x1E0), not the player. This prepositions the horse when it shares the destination world/cell path.
0x66F9EA: cmp     ecx, ebx
0x66F9EC: mov     [esi+590h], ebx
0x66F9F2: jz      loc_66FA87
0x66F9F8: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66F9FD: mov     ecx, edi; this
0x66F9FF: mov     ebp, eax
0x66FA01: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66FA06: cmp     eax, ebp
0x66FA08: jnz     short loc_66FA87
0x66FA0A: mov     eax, [esi]
0x66FA0C: mov     edx, [eax+380h]
0x66FA12: mov     ecx, esi
0x66FA14: call    edx
0x66FA16: test    eax, eax
0x66FA18: jnz     short loc_66FA87
0x66FA1A: mov     ecx, edi; this
0x66FA1C: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x66FA21: mov     ecx, edi; this
0x66FA23: mov     ebp, eax
0x66FA25: call    TESObjectREFR_GetWorldSpace
0x66FA2A: mov     ebx, eax
0x66FA2C: mov     eax, [edi]
0x66FA2E: mov     edx, [eax+174h]
0x66FA34: mov     ecx, edi
0x66FA36: call    edx
0x66FA38: mov     edx, [eax]
0x66FA3A: sub     esp, 0Ch
0x66FA3D: mov     ecx, esp
0x66FA3F: mov     [ecx], edx
0x66FA41: mov     edx, [eax+4]
0x66FA44: mov     eax, [eax+8]
0x66FA47: mov     [ecx+4], edx
0x66FA4A: mov     [ecx+8], eax
0x66FA4D: mov     ecx, [esp+6Ch+var_48]; this
0x66FA51: call    TESObjectREFR_SetPosition; SetPosition here applies to var_48 travel horse/current mount ref after a non-null check at 0x66F9EA; player position is still original until final relocation.
0x66FA56: push    ebx; int
0x66FA57: mov     ebx, [esp+64h+var_48]
0x66FA5B: push    ebp; int
0x66FA5C: push    ebx; int
0x66FA5D: call    sub_4DD4B0
0x66FA62: mov     ecx, ds:0B333A0h
0x66FA68: add     esp, 0Ch
0x66FA6B: push    1; a2
0x66FA6D: push    ebp; a1
0x66FA6E: call    TESObjectCELL_IsProcessLevel?LowHigh
0x66FA73: test    al, al
0x66FA75: jz      short loc_66FA85
0x66FA77: mov     edx, [ebx]
0x66FA79: mov     eax, [edx+178h]
0x66FA7F: push    0
0x66FA81: mov     ecx, ebx
0x66FA83: call    eax
0x66FA85: xor     ebx, ebx
0x66FA87: cmp     byte ptr ds:0B0525Ch, 0
0x66FA8E: jz      short loc_66FA9C
0x66FA90: mov     ecx, ds:0B333A0h
0x66FA96: push    ebx
0x66FA97: call    sub_43F2D0
0x66FA9C: push    1
0x66FA9E: call    Sky_CreateOrGetGlobalObject
0x66FAA3: mov     ecx, eax
0x66FAA5: call    Sky_SetFastTravelFlag; 3DTheft decode: fast-travel core sets Sky fast-travel flag before final relocation; travel-time simulation has already run by this point.
0x66FAAA: mov     byte ptr ds:0B3A6D2h, 1
0x66FAB1: mov     edx, [edi]
0x66FAB3: mov     eax, [edx+174h]
0x66FAB9: mov     ecx, edi
0x66FABB: call    eax
0x66FABD: push    ebx; 3DTheft decode: final fast-travel relocation arg setup begins here: selected ref pos/rot/worldspace are pushed for PlayerCharacter_RelocateToFastTravelTarget.
0x66FABE: mov     ecx, edi; this
0x66FAC0: mov     ebp, eax
0x66FAC2: call    TESObjectREFR_GetWorldSpace
0x66FAC7: mov     ecx, [edi+20h]
0x66FACA: mov     edx, [edi+24h]
0x66FACD: push    eax; int
0x66FACE: sub     esp, 0Ch
0x66FAD1: mov     eax, esp
0x66FAD3: mov     [eax], ecx
0x66FAD5: mov     ecx, [edi+28h]
0x66FAD8: mov     [eax+4], edx
0x66FADB: mov     edx, [ebp+0]
0x66FADE: mov     [eax+8], ecx
0x66FAE1: mov     ecx, [ebp+4]
0x66FAE4: sub     esp, 0Ch
0x66FAE7: mov     eax, esp
0x66FAE9: mov     [eax], edx
0x66FAEB: mov     edx, [ebp+8]
0x66FAEE: mov     [eax+4], ecx
0x66FAF1: mov     ecx, ds:0B333C4h
0x66FAF7: mov     [eax+8], edx
0x66FAFA: call    PlayerCharacter_RelocateToFastTravelTarget; 3DTheft hook site: exact accepted fast-travel relocation. Plugin should record the event, chain to PlayerCharacter_RelocateToFastTravelTarget, and defer encounter spawn until post-relocation cleanup has settled.
0x66FAFF: push    ebx
0x66FB00: mov     byte ptr ds:0B3A6D2h, 0; 3DTheft decode: Sky fast-travel flag is cleared after relocation returns; this confirms the relocation hook fires before vanilla fast-travel cleanup is complete.
0x66FB07: call    Sky_CreateOrGetGlobalObject
0x66FB0C: mov     ecx, eax
0x66FB0E: call    Sky_SetFastTravelFlag; 3DTheft decode: Sky fast-travel flag is cleared after relocation returns; encounter spawn should be deferred until player control loop observes the completed move.
0x66FB13: cmp     byte ptr ds:0B0525Ch, 0
0x66FB1A: jz      short loc_66FB29
0x66FB1C: mov     ecx, ds:0B333A0h
0x66FB22: push    1
0x66FB24: call    sub_43F2D0
0x66FB29: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66FB2E: call    sub_676A40
0x66FB33: mov     ecx, ds:0B333A0h
0x66FB39: call    sub_441610
0x66FB3E: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66FB43: call    sub_678750; BunkFix: furniture activation/sit-sleep handoff. For Sleep package, revalidates candidate furniture refs, picks first unused marker via sub_4D73F0, resolves marker transform via sub_4DB9D0, then calls SetSleepState. This is after the actor has already reached/activated the furniture ref.
0x66FB48: mov     ecx, (offset qword_B3BB2C+23Ch); this
0x66FB4D: call    ActorList_ReturnHead; Identity helper used before actor list iteration; callers then treat the returned pointer as tList node {Actor* item, Node* next}.
0x66FB52: push    eax
0x66FB53: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66FB58: call    sub_6745D0
0x66FB5D: mov     eax, ds:0B333C4h
0x66FB62: cmp     byte ptr [eax+116h], 0
0x66FB69: jnz     loc_66FC60
0x66FB6F: cmp     [esp+60h+var_49], 0
0x66FB74: jz      loc_66FC60
0x66FB7A: mov     ecx, [esi+1E0h]
0x66FB80: cmp     ecx, ebx
0x66FB82: jz      loc_66FC60
0x66FB88: mov     edx, [ecx]
0x66FB8A: mov     eax, [edx+154h]
0x66FB90: call    eax
0x66FB92: test    eax, eax
0x66FB94: jz      loc_66FC60
0x66FB9A: mov     ecx, edi; this
0x66FB9C: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66FBA1: mov     ecx, [esi+1E0h]; this
0x66FBA7: mov     edi, eax
0x66FBA9: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66FBAE: cmp     edi, eax
0x66FBB0: jnz     loc_66FC60; Sky fast-travel flag clear happens after relocation. Relocation hook must return here normally so weather/time cleanup remains vanilla.
0x66FBB6: mov     edx, [esi]
0x66FBB8: mov     eax, [edx+380h]
0x66FBBE: mov     ecx, esi
0x66FBC0: call    eax
0x66FBC2: test    eax, eax
0x66FBC4: jnz     loc_66FC60
0x66FBCA: mov     ecx, ds:0B333C4h
0x66FBD0: push    ebx
0x66FBD1: call    sub_5E6D70
0x66FBD6: mov     ecx, ds:0B333C4h
0x66FBDC: mov     ecx, [ecx+58h]
0x66FBDF: mov     edx, [ecx]
0x66FBE1: mov     eax, [edx+304h]
0x66FBE7: call    eax
0x66FBE9: test    al, al
0x66FBEB: jz      short loc_66FC23
0x66FBED: mov     ecx, ds:0B333C4h
0x66FBF3: mov     ebp, [ecx+58h]
0x66FBF6: mov     edx, [ecx]
0x66FBF8: mov     edi, [ebp+0]
0x66FBFB: mov     eax, [edx+164h]
0x66FC01: push    ecx
0x66FC02: add     edi, 150h
0x66FC08: call    eax
0x66FC0A: mov     ecx, ds:0B333C4h
0x66FC10: mov     edx, [ecx]
0x66FC12: push    eax
0x66FC13: mov     eax, [edx+168h]
0x66FC19: call    eax
0x66FC1B: mov     edx, [edi]
0x66FC1D: push    eax
0x66FC1E: push    ebx
0x66FC1F: mov     ecx, ebp
0x66FC21: call    edx
0x66FC23: mov     ecx, ds:0B333C4h
0x66FC29: mov     eax, [ecx]
0x66FC2B: mov     edx, [esi+1E0h]
0x66FC31: mov     eax, [eax+384h]
0x66FC37: push    edx
0x66FC38: call    eax
0x66FC3A: mov     ecx, [esi+1E0h]
0x66FC40: mov     edx, [ecx]
0x66FC42: mov     eax, ds:0B333C4h
0x66FC47: mov     edx, [edx+38Ch]
0x66FC4D: push    eax
0x66FC4E: call    edx
0x66FC50: mov     eax, [esi+1E0h]
0x66FC56: push    eax
0x66FC57: mov     ecx, esi
0x66FC59: call    sub_602050
0x66FC5E: jmp     short loc_66FCAB
0x66FC60: mov     ecx, ds:0B333C4h
0x66FC66: cmp     byte ptr [ecx+116h], 0
0x66FC6D: jnz     short loc_66FCAB
0x66FC6F: mov     ecx, [esi+1E0h]; this
0x66FC75: cmp     ecx, ebx
0x66FC77: jz      short loc_66FCAB
0x66FC79: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66FC7E: mov     ecx, ds:0B333C4h; this
0x66FC84: mov     edi, eax
0x66FC86: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x66FC8B: cmp     eax, edi
0x66FC8D: jz      short loc_66FCAB
0x66FC8F: fld     dword ptr ds:0A30634h
0x66FC95: mov     edx, ds:0B38B50h
0x66FC9B: push    ecx
0x66FC9C: fstp    [esp+64h+duration]; duration
0x66FC9F: push    1; unk2
0x66FCA1: push    ebx; unk1
0x66FCA2: push    edx; string
0x66FCA3: call    GameUI_QueueMessage
0x66FCA8: add     esp, 10h
0x66FCAB: mov     eax, [esi+68h]
0x66FCAE: mov     edx, [eax+8]
0x66FCB1: lea     ecx, [esi+68h]
0x66FCB4: call    edx
0x66FCB6: mov     edi, eax
0x66FCB8: cmp     edi, ebx
0x66FCBA: jz      short loc_66FCFD
0x66FCBC: lea     esp, [esp+0]
0x66FCC0: cmp     [edi+4], ebx
0x66FCC3: jnz     short loc_66FCC9
0x66FCC5: cmp     [edi], ebx
0x66FCC7: jz      short loc_66FCFD
0x66FCC9: mov     eax, [edi]
0x66FCCB: mov     ecx, [eax+0Ch]
0x66FCCE: mov     ecx, [ecx+1Ch]
0x66FCD1: cmp     dword ptr [ecx+98h], 47445553h
0x66FCDB: jnz     short loc_66FCF6
0x66FCDD: push    ebx; int
0x66FCDE: push    offset ??_R0?AVSunDamageEffect@@@8; struct TypeDescriptor *
0x66FCE3: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x66FCE8: push    ebx; int
0x66FCE9: push    eax; void *
0x66FCEA: call    OblivionDynamicCast
0x66FCEF: add     esp, 14h
0x66FCF2: mov     byte ptr [eax+3Dh], 1
0x66FCF6: mov     edi, [edi+4]
0x66FCF9: cmp     edi, ebx
0x66FCFB: jnz     short loc_66FCC0
0x66FCFD: mov     edx, ds:0B333C4h
0x66FD03: mov     ecx, (offset qword_B3BB2C+1D4h); Common late cleanup tail clears PlayerCharacter+0x12C fast-travel/in-transition flag, performs process cleanup, destroys TravelPath local at var_20, clears PlayerCharacter+0x114, then epilogues. A pre-loop interrupt path needs equivalent cleanup if it skips the vanilla time/relocation body.
0x66FD08: mov     byte ptr [edx+12Ch], 0; 3DTheft decode: late fast-travel cleanup clears PlayerCharacter+0x12C after actor-process/world cleanup. Same-frame plugin spawn/package assignment should be avoided.
0x66FD0F: call    sub_679A70; 3DTheft decode: ActorProcessManager cleanup follows the fast-travel transition flag clear; delayed encounter spawn should wait for a later world-update pass.
0x66FD14: fldz
0x66FD16: push    ebx; float
0x66FD17: push    ecx
0x66FD18: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66FD1D: fstp    [esp+68h+deltaTime]; float
0x66FD20: call    sub_677EC0; ActorProcessManager high/process list update used during fast-travel time simulation.
0x66FD25: mov     eax, [esi]
0x66FD27: mov     edx, [eax+2ECh]
0x66FD2D: mov     ecx, esi
0x66FD2F: call    edx
0x66FD31: mov     edi, [esi+764h]
0x66FD37: cmp     edi, ebx
0x66FD39: jz      short loc_66FD57
0x66FD3B: mov     ecx, edi; this
0x66FD3D: call    sub_6B73E0
0x66FD42: push    edi
0x66FD43: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x66FD48: add     esp, 4
0x66FD4B: mov     [esi+764h], ebx
0x66FD51: mov     [esi+760h], ebx
0x66FD57: mov     eax, ds:0B333C4h; Normal cleanup immediately before epilogue: clears PlayerCharacter+0x114, destroys local TravelPath via sub_68AA10, then falls into epilogue at 0x66FD74.
0x66FD5C: lea     ecx, [esp+60h+var_20]; Late cleanup uses [esp+0x40] as the TravelPath local/list address and calls sub_68AA10 to free path nodes before epilogue.
0x66FD60: mov     byte ptr [eax+114h], 0
0x66FD67: mov     [esp+60h+var_4], 0FFFFFFFFh
0x66FD6F: call    PathLow_dtor; Post-fast-travel cleanup-complete observation point follows this TravelPath destructor. At normal arrival to epilogue, PlayerCharacter+0x12C/+0x114 are clear and ESI is still PlayerCharacter. Because the next bytes restore SEH/epilogue state, a runtime patch here would need a careful trampoline; scheduling next-frame spawn from the relocation hook is likely cleaner.
0x66FD74: mov     ecx, [esp+60h+var_C]; Post-fast-travel cleanup-complete hook candidate. At normal arrival here, PlayerCharacter+0x12C and +0x114 are cleared and local TravelPath has been destroyed; ESI is still PlayerCharacter. A pending encounter can spawn/start combat here or schedule next-frame work without running while fast-travel state is active.
0x66FD78: mov     large fs:0, ecx
0x66FD7F: pop     ecx
0x66FD80: pop     edi
0x66FD81: pop     esi
0x66FD82: pop     ebp
0x66FD83: pop     ebx
0x66FD84: add     esp, 4Ch
0x66FD87: retn    4
0x9C4260: lea     ecx, [ebp-20h]; this
0x9C4263: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9C4268: mov     edx, [esp+arg_4]
0x9C426C: lea     eax, [edx-50h]
0x9C426F: mov     ecx, [edx-54h]
0x9C4272: xor     ecx, eax
0x9C4274: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4279: mov     eax, offset stru_AECC4C
0x9C427E: jmp     ___CxxFrameHandler3
