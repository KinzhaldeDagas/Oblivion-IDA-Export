0x6429C0: push    esi
0x6429C1: mov     esi, ecx
0x6429C3: call    ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x6429C8: test    byte ptr [esp+4+arg_0], 1
0x6429CD: jz      short loc_6429D8
0x6429CF: push    esi
0x6429D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6429D5: add     esp, 4
0x6429D8: mov     eax, esi
0x6429DA: pop     esi
0x6429DB: retn    4
