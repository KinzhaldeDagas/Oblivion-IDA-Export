0x4F1DE0: push    esi
0x4F1DE1: mov     esi, ecx
0x4F1DE3: call    ??1TESWorldSpace@@UAE@XZ; Verified destruction order: clears persistent-reference index (+0x64), TESForm component references, SubSpace spatial index (+0x60), exterior cell map, cellMap, persistent cell, auxiliary resources, LOD-cell map, terrain LOD map, then base components.
0x4F1DE8: test    byte ptr [esp+4+arg_0], 1
0x4F1DED: jz      short loc_4F1DF8
0x4F1DEF: push    esi
0x4F1DF0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F1DF5: add     esp, 4
0x4F1DF8: mov     eax, esi
0x4F1DFA: pop     esi
0x4F1DFB: retn    4
