0x430DC0: push    esi
0x430DC1: mov     esi, ecx
0x430DC3: call    ??1BSSearchPath@@UAE@XZ; BSSearchPath::~BSSearchPath(void)
0x430DC8: test    byte ptr [esp+4+arg_0], 1
0x430DCD: jz      short loc_430DD8
0x430DCF: push    esi
0x430DD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x430DD5: add     esp, 4
0x430DD8: mov     eax, esi
0x430DDA: pop     esi
0x430DDB: retn    4
