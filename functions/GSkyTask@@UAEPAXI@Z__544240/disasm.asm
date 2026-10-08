0x544240: push    esi
0x544241: mov     esi, ecx
0x544243: call    ??1SkyTask@@UAE@XZ; SkyTask::~SkyTask(void)
0x544248: test    byte ptr [esp+4+arg_0], 1
0x54424D: jz      short loc_544258
0x54424F: push    esi
0x544250: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x544255: add     esp, 4
0x544258: mov     eax, esi
0x54425A: pop     esi
0x54425B: retn    4
