0x680C60: push    esi; Verified: removes the existing link item from AStarWorldNodeList and reinserts it according to its updated fitness, allowing the sorted open list to reflect an improved score.
0x680C61: push    edi
0x680C62: mov     edi, [esp+8+node]
0x680C66: test    edi, edi
0x680C68: mov     esi, ecx
0x680C6A: jz      short loc_680C7E
0x680C6C: lea     eax, [esp+8+node]
0x680C70: push    eax; data
0x680C71: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x680C76: push    edi; node
0x680C77: mov     ecx, esi; this
0x680C79: call    AStarWorldNodeList_InsertByFitness; Verified: Inserts a search-node index into the single AStarWorldNodeList. Reads that index's fitness from the 0x10-byte transient state table and keeps the list in ascending fitness order (before first >=, otherwise tail). This differs from Fallout's TeleportDoorSearch AStarQueue: Fallout AddNode selects one of 20 buckets from normalized fitness, then sorts within that bucket.
0x680C7E: pop     edi
0x680C7F: pop     esi
0x680C80: retn    4
