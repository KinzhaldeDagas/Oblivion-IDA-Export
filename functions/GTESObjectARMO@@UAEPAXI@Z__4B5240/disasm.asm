0x4B5240: push    esi
0x4B5241: mov     esi, ecx
0x4B5243: call    ??1TESObjectARMO@@UAE@XZ; TESObjectARMO::~TESObjectARMO(void)
0x4B5248: test    byte ptr [esp+4+arg_0], 1
0x4B524D: jz      short loc_4B5258
0x4B524F: push    esi
0x4B5250: call    FormHeapFree
0x4B5255: add     esp, 4
0x4B5258: mov     eax, esi
0x4B525A: pop     esi
0x4B525B: retn    4
