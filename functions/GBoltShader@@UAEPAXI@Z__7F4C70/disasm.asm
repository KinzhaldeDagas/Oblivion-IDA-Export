0x7F4C70: push    esi
0x7F4C71: mov     esi, ecx
0x7F4C73: call    ??1BoltShader@@UAE@XZ; BoltShader::~BoltShader(void)
0x7F4C78: test    byte ptr [esp+4+arg_0], 1
0x7F4C7D: jz      short loc_7F4C88
0x7F4C7F: push    esi
0x7F4C80: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F4C85: add     esp, 4
0x7F4C88: mov     eax, esi
0x7F4C8A: pop     esi
0x7F4C8B: retn    4
