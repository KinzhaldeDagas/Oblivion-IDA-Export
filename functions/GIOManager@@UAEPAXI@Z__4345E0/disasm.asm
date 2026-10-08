0x4345E0: push    esi
0x4345E1: mov     esi, ecx
0x4345E3: call    ??1IOManager@@UAE@XZ; IOManager::~IOManager(void)
0x4345E8: test    byte ptr [esp+4+arg_0], 1
0x4345ED: jz      short loc_4345F8
0x4345EF: push    esi
0x4345F0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4345F5: add     esp, 4
0x4345F8: mov     eax, esi
0x4345FA: pop     esi
0x4345FB: retn    4
