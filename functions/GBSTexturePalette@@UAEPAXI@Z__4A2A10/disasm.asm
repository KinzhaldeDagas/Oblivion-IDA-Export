0x4A2A10: push    esi
0x4A2A11: mov     esi, ecx
0x4A2A13: call    ??1BSTexturePalette@@UAE@XZ; BSTexturePalette::~BSTexturePalette(void)
0x4A2A18: test    byte ptr [esp+4+arg_0], 1
0x4A2A1D: jz      short loc_4A2A28
0x4A2A1F: push    esi
0x4A2A20: call    FormHeapFree
0x4A2A25: add     esp, 4
0x4A2A28: mov     eax, esi
0x4A2A2A: pop     esi
0x4A2A2B: retn    4
