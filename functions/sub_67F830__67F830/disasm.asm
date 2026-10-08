0x67F830: push    ebp; Verified A* neighbor expansion: resolve the current node's spatial form, enumerate its linked-reference bucket, validate candidate reference/space relationship and traversal cost, update candidate fitness and parent when improved, then reinsert or reopen it as appropriate. Reaching destination space updates the best-route bound.
0x67F831: mov     ebp, esp
0x67F833: and     esp, 0FFFFFFF8h
0x67F836: sub     esp, 34h
0x67F839: push    ebx
0x67F83A: push    esi
0x67F83B: push    edi; ArgList
0x67F83C: mov     edi, [ebp+space]
0x67F83F: test    edi, edi
0x67F841: jz      loc_67FA62
0x67F847: cmp     [ebp+openNodes], 0
0x67F84B: jz      loc_67FA62
0x67F851: mov     ecx, [ebp+node]; this
0x67F854: test    ecx, ecx
0x67F856: jz      loc_67FA62
0x67F85C: lea     eax, [esp+40h+outPosition]
0x67F860: push    eax; outPosition
0x67F861: push    edi; space
0x67F862: call    TravelPathSpaceDoorLink_GetPositionInSpace; Verified: chooses the link endpoint reference matching the supplied spatial form, calls its position virtual at vtable offset +0x174, and copies the NiPoint3 to outPosition. Returns false for missing/mismatched endpoints.
0x67F867: test    al, al
0x67F869: jz      loc_67FA55
0x67F86F: lea     ecx, [esp+40h+self]
0x67F873: push    ecx
0x67F874: mov     ecx, ds:0B3BE00h
0x67F87A: push    edi
0x67F87B: mov     [esp+48h+self], 0
0x67F883: call    NiTMap_GetAt
0x67F888: test    al, al
0x67F88A: jz      loc_67FA62
0x67F890: mov     esi, [esp+40h+self]
0x67F894: test    esi, esi
0x67F896: jz      loc_67FA62
0x67F89C: mov     ecx, esi
0x67F89E: call    NiTMapBase_GetFirstNode
0x67F8A3: test    eax, eax
0x67F8A5: mov     [esp+40h+position], eax
0x67F8A9: jz      loc_67FA62
0x67F8AF: jmp     short loc_67F8B5
0x67F8B1: mov     esi, [esp+40h+self]
0x67F8B5: lea     edx, [esp+40h+valueOut]
0x67F8B9: push    edx; valueOut
0x67F8BA: lea     eax, [esp+44h+keyOut]
0x67F8BE: push    eax; keyOut
0x67F8BF: lea     ecx, [esp+48h+position]
0x67F8C3: push    ecx; position
0x67F8C4: mov     ecx, esi; self
0x67F8C6: mov     [esp+4Ch+valueOut], 0
0x67F8CE: call    NiTMap_U32Pointer_GetNextEntry
0x67F8D3: mov     ebx, [esp+40h+valueOut]
0x67F8D7: test    ebx, ebx
0x67F8D9: jz      loc_67FA43
0x67F8DF: jmp     short loc_67F8E5
0x67F8E1: mov     ebx, [esp+40h+valueOut]
0x67F8E5: cmp     dword ptr [ebx+4], 0
0x67F8E9: jnz     short loc_67F8F4
0x67F8EB: cmp     dword ptr [ebx], 0
0x67F8EE: jz      loc_67FA43
0x67F8F4: mov     esi, [ebx]
0x67F8F6: push    edi; space
0x67F8F7: mov     ecx, esi; this
0x67F8F9: call    TravelPathSpaceDoorLink_IsEligibleInSpace; Verified endpoint filter: rejects references with deleted bit 0x20; disabled bit 0x800 is rejected unless the verified allow-disabled-doors policy is set. The independent CalcLowPathToPoint diagnostic names 0x800 '-Disabled'.
0x67F8FE: test    al, al
0x67F900: jz      loc_67FA34
0x67F906: mov     edx, ds:0B3BE08h
0x67F90C: push    1; includeTransitionPenalty
0x67F90E: push    edx; sourceRef
0x67F90F: push    esi; candidateNode
0x67F910: lea     eax, [esp+4Ch+outPosition]
0x67F914: push    eax; position
0x67F915: push    edi; space
0x67F916: call    TravelPath_ComputeTransitionDistanceCost; Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
0x67F91B: fstp    qword ptr [esp+54h+keyOut]
0x67F91F: mov     ecx, [ebp+node]; node
0x67F922: add     esp, 14h
0x67F925: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F92A: fadd    qword ptr [esp+40h+keyOut]
0x67F92E: mov     ecx, esi; node
0x67F930: xor     bl, bl
0x67F932: fstp    [esp+40h+keyOut]
0x67F936: call    TravelPath_SearchState_IsDiscovered; Verified: tests state flag bit 0x01. Probable interpretation: link has been discovered/entered into the search; the flag remains set after expansion.
0x67F93B: test    al, al
0x67F93D: jnz     short loc_67F94A
0x67F93F: mov     ecx, esi; node
0x67F941: call    TravelPath_SearchState_IsExpanded; Verified: tests state flag bit 0x02. The main A* loop sets this bit after expanding the popped node, so expanded/closed is Verified.
0x67F946: test    al, al
0x67F948: jz      short loc_67F96A
0x67F94A: fld     [esp+40h+keyOut]
0x67F94E: mov     ecx, esi; node
0x67F950: fstp    [esp+40h+var_18]
0x67F954: mov     bl, 1
0x67F956: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F95B: fcomp   [esp+40h+var_18]
0x67F95F: fnstsw  ax
0x67F961: test    ah, 41h
0x67F964: jnp     loc_67FA30
0x67F96A: fld     [esp+40h+keyOut]
0x67F96E: push    ecx
0x67F96F: mov     ecx, esi; node
0x67F971: fstp    [esp+44h+fitness]; fitness
0x67F974: call    TravelPath_SearchState_SetFitness; Verified: writes fitness at +0 of the 0x10-byte TravelPathSearchState selected by the link's 16-bit searchNodeIndex. Non-finite/NaN fitness is logged and clamped to 0.
0x67F979: mov     ecx, [ebp+node]
0x67F97C: push    edi; space
0x67F97D: push    ecx; parentNode
0x67F97E: mov     ecx, esi; node
0x67F980: call    TravelPath_SearchState_SetParentAndSpace; Verified: stores predecessor link pointer at state +4 and the spatial form used to enter the current link at state +8. Seed links use a null predecessor and source space.
0x67F985: mov     ecx, esi; node
0x67F987: call    TravelPath_SearchState_IsDiscovered; Verified: tests state flag bit 0x01. Probable interpretation: link has been discovered/entered into the search; the flag remains set after expansion.
0x67F98C: test    al, al
0x67F98E: jnz     short loc_67F9BA
0x67F990: mov     ecx, esi; node
0x67F992: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F997: fld     dword ptr ds:0B1545Ch
0x67F99D: fcompp
0x67F99F: fnstsw  ax
0x67F9A1: test    ah, 41h
0x67F9A4: jnz     short loc_67F9BA
0x67F9A6: push    1; discovered
0x67F9A8: mov     ecx, esi; node
0x67F9AA: call    TravelPath_SearchState_SetDiscoveredFlag; Verified: sets/clears state flag bit 0x01. It is set during source seeding and for newly inserted links; because it persists after expansion, its 'discovered' meaning is Probable.
0x67F9AF: mov     ecx, [ebp+openNodes]; this
0x67F9B2: push    esi; node
0x67F9B3: call    AStarWorldNodeList_InsertByFitness; Verified: Inserts a search-node index into the single AStarWorldNodeList. Reads that index's fitness from the 0x10-byte transient state table and keeps the list in ascending fitness order (before first >=, otherwise tail). This differs from Fallout's TeleportDoorSearch AStarQueue: Fallout AddNode selects one of 20 buckets from normalized fitness, then sorts within that bucket.
0x67F9B8: jmp     short loc_67F9C7
0x67F9BA: test    bl, bl
0x67F9BC: jz      short loc_67F9C7
0x67F9BE: mov     ecx, [ebp+openNodes]; this
0x67F9C1: push    esi; node
0x67F9C2: call    AStarWorldNodeList_ReinsertByFitness; Verified: removes the existing link item from AStarWorldNodeList and reinserts it according to its updated fitness, allowing the sorted open list to reflect an improved score.
0x67F9C7: push    edi; space
0x67F9C8: mov     ecx, esi; this
0x67F9CA: call    TravelPathSpaceDoorLink_GetOtherSpace; Verified: if the supplied spatial form matches spaceA or spaceB, returns the opposite spatial TESForm; otherwise returns null.
0x67F9CF: mov     ecx, ds:0B3BE10h
0x67F9D5: cmp     eax, ecx
0x67F9D7: jnz     short loc_67FA30
0x67F9D9: mov     edx, ds:0B3BE08h
0x67F9DF: push    0; includeTransitionPenalty
0x67F9E1: push    edx; sourceRef
0x67F9E2: push    esi; candidateNode
0x67F9E3: push    0B3BE2Ch; position
0x67F9E8: push    ecx; space
0x67F9E9: call    TravelPath_ComputeTransitionDistanceCost; Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
0x67F9EE: fstp    [esp+54h+var_18]
0x67F9F2: add     esp, 14h
0x67F9F5: mov     ecx, esi; node
0x67F9F7: call    TravelPath_SearchState_GetFitness; Verified: returns fitness from state +0 for the link's searchNodeIndex.
0x67F9FC: fadd    [esp+40h+var_18]
0x67FA00: cmp     dword ptr ds:0B3BE04h, 0
0x67FA07: fstp    [esp+40h+keyOut]
0x67FA0B: fld     [esp+40h+keyOut]
0x67FA0F: jz      short loc_67FA20
0x67FA11: fld     dword ptr ds:0B1545Ch
0x67FA17: fcomp   st(1)
0x67FA19: fnstsw  ax
0x67FA1B: test    ah, 41h
0x67FA1E: jnz     short loc_67FA2E
0x67FA20: fstp    dword ptr ds:0B1545Ch
0x67FA26: mov     ds:0B3BE04h, esi
0x67FA2C: jmp     short loc_67FA30
0x67FA2E: fstp    st
0x67FA30: mov     ebx, [esp+40h+valueOut]
0x67FA34: mov     ebx, [ebx+4]
0x67FA37: test    ebx, ebx
0x67FA39: mov     [esp+40h+valueOut], ebx
0x67FA3D: jnz     loc_67F8E1
0x67FA43: cmp     [esp+40h+position], 0
0x67FA48: jnz     loc_67F8B1
0x67FA4E: pop     edi
0x67FA4F: pop     esi
0x67FA50: pop     ebx
0x67FA51: mov     esp, ebp
0x67FA53: pop     ebp
0x67FA54: retn
0x67FA55: push    offset aFailedToFindCo; "Failed to find coord for space."
0x67FA5A: call    PrintError
0x67FA5F: add     esp, 4
0x67FA62: pop     edi
0x67FA63: pop     esi
0x67FA64: pop     ebx
0x67FA65: mov     esp, ebp
0x67FA67: pop     ebp
0x67FA68: retn
