0x778B90: push    esi
0x778B91: mov     esi, ecx
0x778B93: call    ??1NiDX9IndexBufferManager@@UAE@XZ; NiDX9IndexBufferManager::~NiDX9IndexBufferManager(void)
0x778B98: test    byte ptr [esp+4+arg_0], 1
0x778B9D: jz      short loc_778BA8
0x778B9F: push    esi
0x778BA0: call    FormHeapFree
0x778BA5: add     esp, 4
0x778BA8: mov     eax, esi
0x778BAA: pop     esi
0x778BAB: retn    4
