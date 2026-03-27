0x777EF0: push    esi
0x777EF1: mov     esi, ecx
0x777EF3: call    ??1NiDX9VertexBufferManager@@UAE@XZ; NiDX9VertexBufferManager::~NiDX9VertexBufferManager(void)
0x777EF8: test    byte ptr [esp+4+arg_0], 1
0x777EFD: jz      short loc_777F08
0x777EFF: push    esi
0x777F00: call    FormHeapFree
0x777F05: add     esp, 4
0x777F08: mov     eax, esi
0x777F0A: pop     esi
0x777F0B: retn    4
