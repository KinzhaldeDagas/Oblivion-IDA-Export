0x58FF30: push    esi
0x58FF31: mov     esi, ecx
0x58FF33: call    ??1TileText@@UAE@XZ; TileText::~TileText(void)
0x58FF38: test    [esp+4+arg_0], 1
0x58FF3D: jz      short loc_58FF48
0x58FF3F: push    esi
0x58FF40: call    FormHeapFree
0x58FF45: add     esp, 4
0x58FF48: mov     eax, esi
0x58FF4A: pop     esi
0x58FF4B: retn    4
