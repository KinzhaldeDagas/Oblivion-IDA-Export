0x67E610: push    ebp; Verified A* route builder: F=G+H, Euclidean edge G, Euclidean H, predecessor at +0x0C. It emits a TeleportData chain from v14: the goal if found, otherwise the best candidate seen; return value v13 separately reports whether the goal was reached. Fallout's inspected Pathing uses typed AStarQueue/NavMeshSearchNode and TeleportDoorSearch instead.
0x67E611: mov     ebp, esp
0x67E613: and     esp, 0FFFFFFF8h
0x67E616: push    0FFFFFFFFh
0x67E618: push    offset SEH_67E8D0
0x67E61D: mov     eax, large fs:0
0x67E623: push    eax
0x67E624: sub     esp, 30h
0x67E627: push    ebx
0x67E628: push    esi
0x67E629: push    edi
0x67E62A: mov     eax, ds:0B30AACh
0x67E62F: xor     eax, esp
0x67E631: push    eax
0x67E632: lea     eax, [esp+4Ch+var_C]
0x67E636: mov     large fs:0, eax
0x67E63C: mov     esi, [ebp+start]
0x67E63F: xor     al, al
0x67E641: xor     edi, edi
0x67E643: cmp     esi, edi
0x67E645: mov     [esp+4Ch+var_39], al
0x67E649: jz      loc_67E8B7
0x67E64F: mov     ebx, [ebp+goal]
0x67E652: cmp     ebx, edi
0x67E654: jz      loc_67E8B7
0x67E65A: cmp     [ebp+outRouteNodes], edi
0x67E65D: jz      loc_67E8B7
0x67E663: mov     [esp+4Ch+var_20.itemCount], edi
0x67E667: mov     [esp+4Ch+var_20.start], edi; Verified start/head pointer: append replaces it with the newest node; Pop traverses from it through node next links.
0x67E66B: mov     [esp+4Ch+var_20.end], edi; Verified end/tail pointer: initialized to the first node when the list was empty.
0x67E66F: mov     [esp+4Ch+var_20.vtable], offset ??_7AStarNodeList@@6B@; const AStarNodeList::`vftable' ...
0x67E677: fldz
0x67E679: push    ecx
0x67E67A: fstp    [esp+50h+value]; value
0x67E67D: mov     ecx, esi; this
0x67E67F: mov     [esp+50h+var_4], edi
0x67E683: mov     [esp+50h+var_38], edi
0x67E687: call    SetFloatAtOffset_04; Verified raw float setter at object+4. A* uses it for TESConnectedPoint G/pathCost; unrelated callers use the same helper for their own +4 float field.
0x67E68C: push    ebx; b
0x67E68D: push    esi; a
0x67E68E: call    TESConnectedPoint_DistanceTo; Verified graph-node Euclidean distance helper; used by Road and PathGrid graph operations. Null inputs return FLT_MAX.
0x67E693: fstp    [esp+54h+value]; value
0x67E697: add     esp, 4
0x67E69A: mov     ecx, esi; this
0x67E69C: call    TESConnectedPoint_SetHeuristicCost; Verified writes H/heuristic cost at TESConnectedPoint+8.
0x67E6A1: mov     ecx, esi; this
0x67E6A3: call    TESConnectedPoint_RecomputeTotalEstimateCost; Verified computes total estimate cost F at +0 as path cost G at +4 plus heuristic H at +8.
0x67E6A8: push    edi
0x67E6A9: mov     ecx, esi
0x67E6AB: call    TESWaterCulling__SetCamera
0x67E6B0: push    1; value
0x67E6B2: mov     ecx, esi; this
0x67E6B4: call    GraphNode_SetFlag01; Verified sets/clears stateFlags bit 0x01, the graph-search discovered/open-list marker.
0x67E6B9: push    esi; graphNode
0x67E6BA: lea     ecx, [esp+50h+var_20]; this
0x67E6BE: call    AStarNodeList_Add; Verified Oblivion AStarNodeList append uses intrusive nodes and appends at the start/head pointer. Fallout's inspected AStarQueue stores each AStarNode in a sorted linked list within one of 20 F-cost buckets; the two layouts/algorithms are distinct.
0x67E6C3: lea     ecx, [esp+4Ch+var_20]; this
0x67E6C7: call    AStarNodeList_PopLowestTotalEstimateCost; Verified Oblivion AStarNodeList pop scans from start through each node's next link, compares F cost at graph-node+0, unlinks the lowest-F entry, and returns the generic graph-node pointer. Fallout's inspected NavMesh AStarQueue instead selects the first nonempty F bucket among 20.
0x67E6CC: mov     edi, eax
0x67E6CE: test    edi, edi
0x67E6D0: jz      loc_67E848
0x67E6D6: jmp     short loc_67E6E0
0x67E6E0: cmp     [esp+4Ch+var_39], 0
0x67E6E5: jnz     loc_67E848
0x67E6EB: cmp     edi, ebx
0x67E6ED: jnz     short loc_67E6F8
0x67E6EF: mov     [esp+4Ch+var_39], 1
0x67E6F4: mov     [esp+4Ch+var_38], ebx
0x67E6F8: mov     ecx, edi; this
0x67E6FA: call    PathGraphNode_GetConnections; Verified graph-node connection-list accessor: returns this+0x20. TESPathGrid and TESRoad graph code both traverse this as a BSSimpleList of adjacency pointers.
0x67E6FF: test    eax, eax
0x67E701: mov     [esp+4Ch+var_34], eax
0x67E705: jz      loc_67E82C
0x67E70B: jmp     short loc_67E714
0x67E710: mov     eax, [esp+4Ch+var_34]
0x67E714: cmp     dword ptr [eax+4], 0
0x67E718: jnz     short loc_67E723
0x67E71A: cmp     dword ptr [eax], 0
0x67E71D: jz      loc_67E82C
0x67E723: cmp     [esp+4Ch+var_39], 0
0x67E728: jnz     loc_67E82C
0x67E72E: mov     esi, [eax]
0x67E730: cmp     esi, ebx
0x67E732: jnz     short loc_67E74A
0x67E734: push    edi
0x67E735: mov     ecx, ebx
0x67E737: mov     [esp+50h+var_39], 1
0x67E73C: call    TESWaterCulling__SetCamera
0x67E741: mov     [esp+4Ch+var_38], ebx
0x67E745: jmp     loc_67E821
0x67E74A: push    esi; b
0x67E74B: push    edi; a
0x67E74C: call    TESConnectedPoint_DistanceTo; Verified graph-node Euclidean distance helper; used by Road and PathGrid graph operations. Null inputs return FLT_MAX.
0x67E751: fstp    [esp+54h+var_30]
0x67E755: add     esp, 8
0x67E758: mov     ecx, edi; this
0x67E75A: call    TESConnectedPoint_GetPathCost; Verified returns G/path cost at TESConnectedPoint+4.
0x67E75F: fadd    [esp+4Ch+var_30]
0x67E763: mov     ecx, esi; this
0x67E765: fstp    dword ptr [esp+4Ch+var_30]
0x67E769: call    GraphNode_IsFlag01Set; Verified returns stateFlags bit 0x01; graph searches use it to avoid inserting a node into the open list more than once.
0x67E76E: test    al, al
0x67E770: jnz     short loc_67E77D
0x67E772: mov     ecx, esi; this
0x67E774: call    GraphNode_IsFlag02Set; Verified returns stateFlags bit 0x02; graph searches set it after processing a node and use it to avoid reprocessing.
0x67E779: test    al, al
0x67E77B: jz      short loc_67E79B
0x67E77D: fld     dword ptr [esp+4Ch+var_30]
0x67E781: mov     ecx, esi; this
0x67E783: fstp    [esp+4Ch+var_28]
0x67E787: call    TESConnectedPoint_GetPathCost; Verified returns G/path cost at TESConnectedPoint+4.
0x67E78C: fcomp   [esp+4Ch+var_28]
0x67E790: fnstsw  ax
0x67E792: test    ah, 41h
0x67E795: jnp     loc_67E816
0x67E79B: mov     ecx, esi; this
0x67E79D: call    GraphNode_IsFlag01Set; Verified returns stateFlags bit 0x01; graph searches use it to avoid inserting a node into the open list more than once.
0x67E7A2: test    al, al
0x67E7A4: jnz     short loc_67E7B9
0x67E7A6: push    1; value
0x67E7A8: mov     ecx, esi; this
0x67E7AA: call    GraphNode_SetFlag01; Verified sets/clears stateFlags bit 0x01, the graph-search discovered/open-list marker.
0x67E7AF: push    esi; graphNode
0x67E7B0: lea     ecx, [esp+50h+var_20]; this
0x67E7B4: call    AStarNodeList_Add; Verified Oblivion AStarNodeList append uses intrusive nodes and appends at the start/head pointer. Fallout's inspected AStarQueue stores each AStarNode in a sorted linked list within one of 20 F-cost buckets; the two layouts/algorithms are distinct.
0x67E7B9: fld     dword ptr [esp+4Ch+var_30]
0x67E7BD: push    ecx
0x67E7BE: mov     ecx, esi; this
0x67E7C0: fstp    [esp+50h+value]; value
0x67E7C3: call    SetFloatAtOffset_04; Verified raw float setter at object+4. A* uses it for TESConnectedPoint G/pathCost; unrelated callers use the same helper for their own +4 float field.
0x67E7C8: push    ebx; b
0x67E7C9: push    esi; a
0x67E7CA: call    TESConnectedPoint_DistanceTo; Verified graph-node Euclidean distance helper; used by Road and PathGrid graph operations. Null inputs return FLT_MAX.
0x67E7CF: fstp    [esp+54h+value]; value
0x67E7D3: add     esp, 4
0x67E7D6: mov     ecx, esi; this
0x67E7D8: call    TESConnectedPoint_SetHeuristicCost; Verified writes H/heuristic cost at TESConnectedPoint+8.
0x67E7DD: mov     ecx, esi; this
0x67E7DF: call    TESConnectedPoint_RecomputeTotalEstimateCost; Verified computes total estimate cost F at +0 as path cost G at +4 plus heuristic H at +8.
0x67E7E4: push    edi
0x67E7E5: mov     ecx, esi
0x67E7E7: call    TESWaterCulling__SetCamera
0x67E7EC: cmp     [esp+4Ch+var_38], 0
0x67E7F1: jz      short loc_67E812
0x67E7F3: mov     ecx, esi; this
0x67E7F5: call    TESConnectedPoint_GetTotalEstimateCost; Verified returns F cost at TESConnectedPoint+0.
0x67E7FA: fstp    [esp+4Ch+var_28]
0x67E7FE: mov     ecx, [esp+4Ch+var_38]; this
0x67E802: call    TESConnectedPoint_GetTotalEstimateCost; Verified returns F cost at TESConnectedPoint+0.
0x67E807: fcomp   [esp+4Ch+var_28]
0x67E80B: fnstsw  ax
0x67E80D: test    ah, 41h
0x67E810: jnz     short loc_67E816
0x67E812: mov     [esp+4Ch+var_38], esi
0x67E816: mov     eax, [esp+4Ch+var_34]
0x67E81A: mov     ecx, [eax+4]
0x67E81D: mov     [esp+4Ch+var_34], ecx
0x67E821: cmp     [esp+4Ch+var_34], 0
0x67E826: jnz     loc_67E710
0x67E82C: push    1; value
0x67E82E: mov     ecx, edi; this
0x67E830: call    GraphNode_SetFlag02; Verified sets/clears stateFlags bit 0x02, the graph-search processed/closed marker.
0x67E835: lea     ecx, [esp+4Ch+var_20]; this
0x67E839: call    AStarNodeList_PopLowestTotalEstimateCost; Verified Oblivion AStarNodeList pop scans from start through each node's next link, compares F cost at graph-node+0, unlinks the lowest-F entry, and returns the generic graph-node pointer. Fallout's inspected NavMesh AStarQueue instead selects the first nonempty F bucket among 20.
0x67E83E: mov     edi, eax
0x67E840: test    edi, edi
0x67E842: jnz     loc_67E6E0
0x67E848: mov     edi, [esp+4Ch+var_38]
0x67E84C: test    edi, edi
0x67E84E: jz      short loc_67E8A2
0x67E850: push    0
0x67E852: mov     ecx, edi; this
0x67E854: call    PathGraphNode_GetPosition; Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
0x67E859: mov     ecx, [ebp+outRouteNodes]
0x67E85C: push    eax
0x67E85D: call    sub_68C280
0x67E862: mov     esi, eax
0x67E864: test    esi, esi
0x67E866: jz      short loc_67E895
0x67E868: push    1
0x67E86A: mov     ecx, esi
0x67E86C: call    sub_68CA30
0x67E871: push    1
0x67E873: mov     ecx, esi
0x67E875: call    sub_68CA60
0x67E87A: push    0
0x67E87C: mov     ecx, esi
0x67E87E: call    sub_68CA90
0x67E883: push    0
0x67E885: mov     ecx, esi
0x67E887: call    sub_68CAC0
0x67E88C: push    1
0x67E88E: mov     ecx, esi
0x67E890: call    sub_68CB10
0x67E895: mov     ecx, edi
0x67E897: call    TESEnchantableForm_GetCastingType
0x67E89C: mov     edi, eax
0x67E89E: test    edi, edi
0x67E8A0: jnz     short loc_67E850
0x67E8A2: lea     ecx, [esp+4Ch+var_20]; this
0x67E8A6: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x67E8AE: call    AStarNodeList_dtor
0x67E8B3: mov     al, [esp+4Ch+var_39]
0x67E8B7: mov     ecx, [esp+4Ch+var_C]
0x67E8BB: mov     large fs:0, ecx
0x67E8C2: pop     ecx
0x67E8C3: pop     edi
0x67E8C4: pop     esi
0x67E8C5: pop     ebx
0x67E8C6: mov     esp, ebp
0x67E8C8: pop     ebp
0x67E8C9: retn    0Ch
0x9C4A90: lea     ecx, [ebp+var_20]; this
0x9C4A93: jmp     j_??1AStarNodeList@@UAE@XZ; AStarNodeList::~AStarNodeList(void)
0x9C4A98: mov     edx, [esp-4+goal]
0x9C4A9C: lea     eax, [edx-3Ch]
0x9C4A9F: mov     ecx, [edx-40h]
0x9C4AA2: xor     ecx, eax
0x9C4AA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4AA9: mov     eax, offset stru_AED3B0
0x9C4AAE: jmp     ___CxxFrameHandler3
