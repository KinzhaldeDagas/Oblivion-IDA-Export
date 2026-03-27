0x6C5500: push    esi
0x6C5501: mov     esi, ecx
0x6C5503: call    ??1NiDefaultAVObjectPalette@@UAE@XZ; NiDefaultAVObjectPalette::~NiDefaultAVObjectPalette(void)
0x6C5508: test    byte ptr [esp+4+arg_0], 1
0x6C550D: jz      short loc_6C5518
0x6C550F: push    esi
0x6C5510: call    FormHeapFree
0x6C5515: add     esp, 4
0x6C5518: mov     eax, esi
0x6C551A: pop     esi
0x6C551B: retn    4
