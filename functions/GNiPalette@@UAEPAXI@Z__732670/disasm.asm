0x732670: push    esi
0x732671: mov     esi, ecx
0x732673: call    ??1NiPalette@@UAE@XZ; NiPalette::~NiPalette(void)
0x732678: test    byte ptr [esp+4+arg_0], 1
0x73267D: jz      short loc_732688
0x73267F: push    esi
0x732680: call    FormHeapFree
0x732685: add     esp, 4
0x732688: mov     eax, esi
0x73268A: pop     esi
0x73268B: retn    4
