0x9A1CC0: push    esi
0x9A1CC1: mov     esi, ecx
0x9A1CC3: call    ??1NiRenderedCubeMap@@UAE@XZ; NiRenderedCubeMap::~NiRenderedCubeMap(void)
0x9A1CC8: test    byte ptr [esp+4+arg_0], 1
0x9A1CCD: jz      short loc_9A1CD8
0x9A1CCF: push    esi
0x9A1CD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A1CD5: add     esp, 4
0x9A1CD8: mov     eax, esi
0x9A1CDA: pop     esi
0x9A1CDB: retn    4
