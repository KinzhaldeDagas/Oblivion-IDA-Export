0x4ED560: push    esi
0x4ED561: mov     esi, ecx
0x4ED563: call    ??1TerrainLODQuadLoadTask@@UAE@XZ; TerrainLODQuadLoadTask::~TerrainLODQuadLoadTask(void)
0x4ED568: test    byte ptr [esp+4+arg_0], 1
0x4ED56D: jz      short loc_4ED578
0x4ED56F: push    esi
0x4ED570: call    FormHeapFree
0x4ED575: add     esp, 4
0x4ED578: mov     eax, esi
0x4ED57A: pop     esi
0x4ED57B: retn    4
