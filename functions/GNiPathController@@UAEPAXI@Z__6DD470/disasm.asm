0x6DD470: push    esi
0x6DD471: mov     esi, ecx
0x6DD473: call    ??1NiPathController@@UAE@XZ; NiPathController::~NiPathController(void)
0x6DD478: test    byte ptr [esp+4+arg_0], 1
0x6DD47D: jz      short loc_6DD488
0x6DD47F: push    esi
0x6DD480: call    FormHeapFree
0x6DD485: add     esp, 4
0x6DD488: mov     eax, esi
0x6DD48A: pop     esi
0x6DD48B: retn    4
