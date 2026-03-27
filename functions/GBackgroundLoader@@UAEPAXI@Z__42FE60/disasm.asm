0x42FE60: push    esi
0x42FE61: mov     esi, ecx
0x42FE63: call    ??1BackgroundLoader@@UAE@XZ; BackgroundLoader::~BackgroundLoader(void)
0x42FE68: test    byte ptr [esp+4+arg_0], 1
0x42FE6D: jz      short loc_42FE78
0x42FE6F: push    esi
0x42FE70: call    FormHeapFree
0x42FE75: add     esp, 4
0x42FE78: mov     eax, esi
0x42FE7A: pop     esi
0x42FE7B: retn    4
