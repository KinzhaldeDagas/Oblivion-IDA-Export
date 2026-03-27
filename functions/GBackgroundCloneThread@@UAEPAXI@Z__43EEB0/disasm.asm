0x43EEB0: push    esi
0x43EEB1: mov     esi, ecx
0x43EEB3: call    ??1BackgroundCloneThread@@UAE@XZ; BackgroundCloneThread::~BackgroundCloneThread(void)
0x43EEB8: test    byte ptr [esp+4+arg_0], 1
0x43EEBD: jz      short loc_43EEC8
0x43EEBF: push    esi
0x43EEC0: call    FormHeapFree
0x43EEC5: add     esp, 4
0x43EEC8: mov     eax, esi
0x43EECA: pop     esi
0x43EECB: retn    4
