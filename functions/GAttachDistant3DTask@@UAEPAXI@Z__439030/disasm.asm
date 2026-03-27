0x439030: push    esi
0x439031: mov     esi, ecx
0x439033: call    ??1AttachDistant3DTask@@UAE@XZ; AttachDistant3DTask::~AttachDistant3DTask(void)
0x439038: test    byte ptr [esp+4+arg_0], 1
0x43903D: jz      short loc_439048
0x43903F: push    esi
0x439040: call    FormHeapFree
0x439045: add     esp, 4
0x439048: mov     eax, esi
0x43904A: pop     esi
0x43904B: retn    4
