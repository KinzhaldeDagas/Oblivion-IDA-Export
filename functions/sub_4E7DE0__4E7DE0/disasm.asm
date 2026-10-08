0x4E7DE0: lea     eax, [ecx+20h]; Verified graph-node connection-list accessor: returns this+0x20. TESPathGrid and TESRoad graph code both traverse this as a BSSimpleList of adjacency pointers.
0x4E7DE3: retn
