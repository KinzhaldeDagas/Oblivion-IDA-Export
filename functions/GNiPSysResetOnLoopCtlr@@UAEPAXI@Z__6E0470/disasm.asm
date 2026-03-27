0x6E0470: push    esi
0x6E0471: mov     esi, ecx
0x6E0473: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6E0478: test    byte ptr [esp+4+arg_0], 1
0x6E047D: jz      short loc_6E0488
0x6E047F: push    esi
0x6E0480: call    FormHeapFree
0x6E0485: add     esp, 4
0x6E0488: mov     eax, esi
0x6E048A: pop     esi
0x6E048B: retn    4
