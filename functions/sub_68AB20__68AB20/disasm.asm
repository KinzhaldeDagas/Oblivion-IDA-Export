0x68AB20: sub     esp, 8; Verified TravelPath orchestration: clears existing node records; calls TravelPath_FindLowLevelRoute; copies returned kind-0 reference nodes into the TravelPath list; runs the teleport-loop pruning pass; and appends a kind-1 owned position node for the destination only when the A* search succeeded.
0x68AB23: push    ebx
0x68AB24: push    esi
0x68AB25: push    edi
0x68AB26: mov     esi, ecx
0x68AB28: xor     bl, bl
0x68AB2A: call    TravelPath_ClearNodes; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x68AB2F: mov     eax, [esp+14h+sourceSpace]
0x68AB33: mov     edi, [esp+14h+destinationPosition]
0x68AB37: xor     edx, edx
0x68AB39: cmp     eax, edx
0x68AB3B: jz      short loc_68AB82
0x68AB3D: mov     ecx, [esp+14h+destinationSpace]
0x68AB41: cmp     ecx, edx
0x68AB43: jz      short loc_68AB82
0x68AB45: mov     [esp+14h+sourceNodes.firstNode.data], edx
0x68AB49: mov     [esp+14h+sourceNodes.firstNode.next], edx
0x68AB4D: mov     edx, [esp+14h+sourceRef]
0x68AB51: push    edx; sourceRef
0x68AB52: lea     edx, [esp+18h+sourceNodes]
0x68AB56: push    edx; outRouteNodes
0x68AB57: push    edi; destinationPosition
0x68AB58: push    ecx; destinationSpace
0x68AB59: mov     ecx, [esp+24h+sourceRouteContext]
0x68AB5D: push    ecx; sourcePosition
0x68AB5E: push    eax; sourceSpace
0x68AB5F: call    TravelPath_FindLowLevelRoute; Verified state layout now typed: TravelPathSpaceDoorLink is 0x14 bytes (16-bit table index, two ref/space endpoint pairs); TravelPathSearchState is 0x10 bytes (fitness, predecessor link, current space, flags). The 0x01 discovered interpretation remains Probable; 0x02 expanded is Verified.
0x68AB64: mov     bl, al
0x68AB66: add     esp, 18h
0x68AB69: test    bl, bl
0x68AB6B: jz      short loc_68AB79
0x68AB6D: lea     edx, [esp+14h+sourceNodes]
0x68AB71: push    edx; sourceNodes
0x68AB72: mov     ecx, esi; this
0x68AB74: call    TravelPath_CopyRouteNodes; Verified copies low-path route entries into newly allocated TravelPathNode records. Each clone is set to kind 0 and stores the route TESObjectREFR*; these references remain non-owned.
0x68AB79: lea     ecx, [esp+14h+sourceNodes]
0x68AB7D: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x68AB82: mov     ecx, esi; this
0x68AB84: call    TravelPath_PruneTeleportRouteLoop; Verified route normalization scans teleport references for an earlier route reference in the linked door's spatial container; when one is found, it removes nodes from the list head through the current node. Probable intent is to prune a redundant teleport loop; exact loop policy remains Unknown.
0x68AB89: test    bl, bl
0x68AB8B: jz      short loc_68AB95
0x68AB8D: push    edi; position
0x68AB8E: mov     ecx, esi; this
0x68AB90: call    TravelPath_AppendDestinationPosition; Verified appends the final destination as a kind-1 TravelPathNode with its own copied NiPoint3 payload, even if low-path A* produced no reference nodes.
0x68AB95: pop     edi
0x68AB96: pop     esi
0x68AB97: mov     al, bl
0x68AB99: pop     ebx
0x68AB9A: add     esp, 8
0x68AB9D: retn    14h
