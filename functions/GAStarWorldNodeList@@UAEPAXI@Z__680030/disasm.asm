0x680030: push    esi
0x680031: mov     esi, ecx
0x680033: call    ??1AStarWorldNodeList@@UAE@XZ; Verified AStarWorldNodeList destructor resets the NiTPointerListBase vtable, frees all list-link nodes through NiTPointerList::FreeAllNodes, then resets the base list vtable; AStarWorldNode records themselves are stored in the separate transient state table.
0x680038: test    byte ptr [esp+4+arg_0], 1
0x68003D: jz      short loc_680048
0x68003F: push    esi
0x680040: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x680045: add     esp, 4
0x680048: mov     eax, esi
0x68004A: pop     esi
0x68004B: retn    4
