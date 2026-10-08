0x4BD8A0: push    esi
0x4BD8A1: mov     esi, ecx
0x4BD8A3: call    ??1DistantLODLoaderTask@@UAE@XZ; DistantLODLoaderTask::~DistantLODLoaderTask(void)
0x4BD8A8: test    byte ptr [esp+4+arg_0], 1
0x4BD8AD: jz      short loc_4BD8B8
0x4BD8AF: push    esi
0x4BD8B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BD8B5: add     esp, 4
0x4BD8B8: mov     eax, esi
0x4BD8BA: pop     esi
0x4BD8BB: retn    4
