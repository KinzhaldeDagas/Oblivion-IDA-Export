0x564CC0: push    esi
0x564CC1: mov     esi, ecx
0x564CC3: call    BSTreeNode_dtor; Verified BSTreeNode destructor frees branchNodesByLOD/leafNodesByLOD array headers, releases billboardNode/treeModel smart references, then chains to NiBSPNode destructor.
0x564CC8: test    byte ptr [esp+4+arg_0], 1
0x564CCD: jz      short loc_564CD8
0x564CCF: push    esi
0x564CD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x564CD5: add     esp, 4
0x564CD8: mov     eax, esi
0x564CDA: pop     esi
0x564CDB: retn    4
