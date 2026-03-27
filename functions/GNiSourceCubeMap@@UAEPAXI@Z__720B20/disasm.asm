0x720B20: push    esi
0x720B21: mov     esi, ecx
0x720B23: call    ??1NiSourceCubeMap@@UAE@XZ; NiSourceCubeMap::~NiSourceCubeMap(void)
0x720B28: test    byte ptr [esp+4+arg_0], 1
0x720B2D: jz      short loc_720B38
0x720B2F: push    esi
0x720B30: call    FormHeapFree
0x720B35: add     esp, 4
0x720B38: mov     eax, esi
0x720B3A: pop     esi
0x720B3B: retn    4
