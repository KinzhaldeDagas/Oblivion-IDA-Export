0x67F690: push    ebp; Verified low-level route search seeding: enumerate the per-space reference map for the origin TESForm, filter eligible linked references, compute initial costs from source position and sourceRef, initialize per-node search state/parent, insert candidates into AStarWorldNodeList, and retain the best candidate already in the destination space.
0x67F691: mov     ebp, esp
0x67F693: and     esp, 0FFFFFFF8h
0x67F696: sub     esp, 18h
0x67F699: cmp     [ebp+openNodes], 0
0x67F69D: push    esi
0x67F69E: push    edi
0x67F69F: jz      loc_67F829
0x67F6A5: mov     ecx, ds:0B3BE0Ch
0x67F6AB: lea     eax, [esp+20h+self]
0x67F6AF: push    eax
0x67F6B0: push    ecx
0x67F6B1: mov     ecx, ds:0B3BE00h
0x67F6B7: mov     [esp+28h+self], 0
0x67F6BF: call    NiTMap_GetAt
0x67F6C4: test    al, al
0x67F6C6: jz      loc_67F829
0x67F6CC: mov     esi, [esp+20h+self]
0x67F6D0: test    esi, esi
0x67F6D2: jz      loc_67F829
0x67F6D8: mov     ecx, esi
0x67F6DA: call    NiTMapBase_GetFirstNode
0x67F6DF: test    eax, eax
0x67F6E1: mov     [esp+20h+position], eax
0x67F6E5: jz      loc_67F829
0x67F6EB: jmp     short loc_67F6F4
0x67F6F0: mov     esi, [esp+20h+self]
0x67F6F4: lea     edx, [esp+20h+valueOut]
0x67F6F8: push    edx; valueOut
0x67F6F9: lea     eax, [esp+24h+keyOut]
0x67F6FD: push    eax; keyOut
0x67F6FE: lea     ecx, [esp+28h+position]
0x67F702: push    ecx; position
0x67F703: mov     ecx, esi; self
0x67F705: mov     [esp+2Ch+valueOut], 0
0x67F70D: call    NiTMap_U32Pointer_GetNextEntry
0x67F712: mov     edi, [esp+20h+valueOut]
0x67F716: test    edi, edi
0x67F718: jz      loc_67F81E
0x67F71E: cmp     dword ptr [edi+4], 0
0x67F722: jnz     short loc_67F72D
0x67F724: cmp     dword ptr [edi], 0
0x67F727: jz      loc_67F81E
0x67F72D: mov     esi, [edi]
0x67F72F: mov     edx, ds:0B3BE0Ch
0x67F735: push    edx; space
0x67F736: mov     ecx, esi; this
0x67F738: call    TravelPathSpaceDoorLink_IsEligibleInSpace; Verified endpoint filter: rejects references with deleted bit 0x20; disabled bit 0x800 is rejected unless the verified allow-disabled-doors policy is set. The independent CalcLowPathToPoint diagnostic names 0x800 '-Disabled'.
0x67F73D: test    al, al
0x67F73F: jz      loc_67F813
0x67F745: mov     eax, ds:0B3BE08h
0x67F74A: mov     ecx, ds:0B3BE0Ch
0x67F750: push    1; includeTransitionPenalty
0x67F752: push    eax; sourceRef
0x67F753: push    esi; candidateNode
0x67F754: push    0B3BE20h; position
0x67F759: push    ecx; space
0x67F75A: call    TravelPath_ComputeTransitionDistanceCost; Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
0x67F75F: fstp    [esp+34h+fitness]; fitness
0x67F763: add     esp, 10h
0x67F766: mov     ecx, esi; node
0x67F768: call    TravelPath_SearchState_SetFitness; Verified: writes fitness at +0 of the 0x10-byte TravelPathSearchState selected by the link's 16-bit searchNodeIndex. Non-finite/NaN fitness is logged and clamped to 0.
0x67F76D: mov     edx, ds:0B3BE0Ch
0x67F773: push    edx; space
0x67F774: push    0; parentNode
0x67F776: mov     ecx, esi; node
0x67F778: call    TravelPath_SearchState_SetParentAndSpace; Verified: stores predecessor link pointer at state +4 and the spatial form used to enter the current link at state +8. Seed links use a null predecessor and source space.
0x67F77D: push    1; discovered
0x67F77F: mov     ecx, esi; node
0x67F781: call    TravelPath_SearchState_SetDiscoveredFlag; Verified: sets/clears state flag bit 0x01. It is set during source seeding and for newly inserted links; because it persists after expansion, its 'discovered' meaning is Probable.
0x67F786: mov     ecx, esi; node
0x67F788: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F78D: fld     dword ptr ds:0B1545Ch
0x67F793: fcompp
0x67F795: fnstsw  ax
0x67F797: test    ah, 41h
0x67F79A: jnz     short loc_67F7A5
0x67F79C: mov     ecx, [ebp+openNodes]; this
0x67F79F: push    esi; node
0x67F7A0: call    AStarWorldNodeList_InsertByFitness; Verified: Inserts a search-node index into the single AStarWorldNodeList. Reads that index's fitness from the 0x10-byte transient state table and keeps the list in ascending fitness order (before first >=, otherwise tail). This differs from Fallout's TeleportDoorSearch AStarQueue: Fallout AddNode selects one of 20 buckets from normalized fitness, then sorts within that bucket.
0x67F7A5: mov     eax, ds:0B3BE0Ch
0x67F7AA: push    eax; space
0x67F7AB: mov     ecx, esi; this
0x67F7AD: call    TravelPathSpaceDoorLink_GetOtherSpace; Verified: if the supplied spatial form matches spaceA or spaceB, returns the opposite spatial TESForm; otherwise returns null.
0x67F7B2: mov     ecx, ds:0B3BE10h
0x67F7B8: cmp     eax, ecx
0x67F7BA: jnz     short loc_67F813
0x67F7BC: mov     edx, ds:0B3BE08h
0x67F7C2: push    0; includeTransitionPenalty
0x67F7C4: push    edx; sourceRef
0x67F7C5: push    esi; candidateNode
0x67F7C6: push    0B3BE2Ch; position
0x67F7CB: push    ecx; space
0x67F7CC: call    TravelPath_ComputeTransitionDistanceCost; Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
0x67F7D1: fstp    qword ptr [esp+34h+keyOut]
0x67F7D5: add     esp, 14h
0x67F7D8: mov     ecx, esi; node
0x67F7DA: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F7DF: fadd    qword ptr [esp+20h+keyOut]
0x67F7E3: cmp     dword ptr ds:0B3BE04h, 0
0x67F7EA: fstp    [esp+20h+valueOut]
0x67F7EE: fld     [esp+20h+valueOut]
0x67F7F2: jz      short loc_67F803
0x67F7F4: fld     dword ptr ds:0B1545Ch
0x67F7FA: fcomp   st(1)
0x67F7FC: fnstsw  ax
0x67F7FE: test    ah, 41h
0x67F801: jnz     short loc_67F811
0x67F803: fstp    dword ptr ds:0B1545Ch
0x67F809: mov     ds:0B3BE04h, esi
0x67F80F: jmp     short loc_67F813
0x67F811: fstp    st
0x67F813: mov     edi, [edi+4]
0x67F816: test    edi, edi
0x67F818: jnz     loc_67F71E
0x67F81E: cmp     [esp+20h+position], 0
0x67F823: jnz     loc_67F6F0
0x67F829: pop     edi
0x67F82A: pop     esi
0x67F82B: mov     esp, ebp
0x67F82D: pop     ebp
0x67F82E: retn
