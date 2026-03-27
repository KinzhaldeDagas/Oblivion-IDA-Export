0x526EE0: push    esi
0x526EE1: mov     esi, ecx
0x526EE3: call    ??1TESNPC@@UAE@XZ; TESNPC::~TESNPC(void)
0x526EE8: test    byte ptr [esp+4+arg_0], 1
0x526EED: jz      short loc_526EF8
0x526EEF: push    esi
0x526EF0: call    FormHeapFree
0x526EF5: add     esp, 4
0x526EF8: mov     eax, esi
0x526EFA: pop     esi
0x526EFB: retn    4
