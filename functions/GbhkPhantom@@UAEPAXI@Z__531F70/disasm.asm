0x531F70: push    esi
0x531F71: mov     esi, ecx
0x531F73: call    ??1bhkPhantom@@UAE@XZ; bhkPhantom::~bhkPhantom(void)
0x531F78: test    byte ptr [esp+4+arg_0], 1
0x531F7D: jz      short loc_531F88
0x531F7F: push    esi
0x531F80: call    FormHeapFree
0x531F85: add     esp, 4
0x531F88: mov     eax, esi
0x531F8A: pop     esi
0x531F8B: retn    4
