0x699D80: push    esi
0x699D81: mov     esi, ecx
0x699D83: call    ??1bhkAabbPhantom@@UAE@XZ; bhkAabbPhantom::~bhkAabbPhantom(void)
0x699D88: test    byte ptr [esp+4+arg_0], 1
0x699D8D: jz      short loc_699D98
0x699D8F: push    esi
0x699D90: call    FormHeapFree
0x699D95: add     esp, 4
0x699D98: mov     eax, esi
0x699D9A: pop     esi
0x699D9B: retn    4
