0x64ACD0: push    esi
0x64ACD1: mov     esi, ecx
0x64ACD3: call    ??1LowProcess@@UAE@XZ; LowProcess::~LowProcess(void)
0x64ACD8: test    byte ptr [esp+4+arg_0], 1
0x64ACDD: jz      short loc_64ACE8
0x64ACDF: push    esi
0x64ACE0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x64ACE5: add     esp, 4
0x64ACE8: mov     eax, esi
0x64ACEA: pop     esi
0x64ACEB: retn    4
