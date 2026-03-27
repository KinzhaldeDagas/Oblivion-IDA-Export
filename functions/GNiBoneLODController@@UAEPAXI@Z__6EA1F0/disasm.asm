0x6EA1F0: push    esi
0x6EA1F1: mov     esi, ecx
0x6EA1F3: call    ??1NiBoneLODController@@UAE@XZ; NiBoneLODController::~NiBoneLODController(void)
0x6EA1F8: test    byte ptr [esp+4+arg_0], 1
0x6EA1FD: jz      short loc_6EA208
0x6EA1FF: push    esi
0x6EA200: call    FormHeapFree
0x6EA205: add     esp, 4
0x6EA208: mov     eax, esi
0x6EA20A: pop     esi
0x6EA20B: retn    4
