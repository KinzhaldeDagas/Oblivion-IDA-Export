0x546170: push    esi
0x546171: mov     esi, ecx
0x546173: call    ??1Sun@@UAE@XZ; Sun::~Sun(void)
0x546178: test    byte ptr [esp+4+arg_0], 1
0x54617D: jz      short loc_546188
0x54617F: push    esi
0x546180: call    FormHeapFree
0x546185: add     esp, 4
0x546188: mov     eax, esi
0x54618A: pop     esi
0x54618B: retn    4
