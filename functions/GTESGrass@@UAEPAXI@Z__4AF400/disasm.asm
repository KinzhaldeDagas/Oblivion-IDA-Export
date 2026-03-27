0x4AF400: push    esi
0x4AF401: mov     esi, ecx
0x4AF403: call    ??1TESGrass@@UAE@XZ; TESGrass::~TESGrass(void)
0x4AF408: test    byte ptr [esp+4+arg_0], 1
0x4AF40D: jz      short loc_4AF418
0x4AF40F: push    esi
0x4AF410: call    FormHeapFree
0x4AF415: add     esp, 4
0x4AF418: mov     eax, esi
0x4AF41A: pop     esi
0x4AF41B: retn    4
