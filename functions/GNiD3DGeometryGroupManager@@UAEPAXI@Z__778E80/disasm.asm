0x778E80: push    esi
0x778E81: mov     esi, ecx
0x778E83: call    ??1NiD3DGeometryGroupManager@@UAE@XZ; NiD3DGeometryGroupManager::~NiD3DGeometryGroupManager(void)
0x778E88: test    byte ptr [esp+4+arg_0], 1
0x778E8D: jz      short loc_778E98
0x778E8F: push    esi
0x778E90: call    FormHeapFree
0x778E95: add     esp, 4
0x778E98: mov     eax, esi
0x778E9A: pop     esi
0x778E9B: retn    4
