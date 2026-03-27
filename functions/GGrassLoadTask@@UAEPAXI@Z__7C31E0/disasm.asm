0x7C31E0: push    esi
0x7C31E1: mov     esi, ecx
0x7C31E3: call    ??1GrassLoadTask@@UAE@XZ; GrassLoadTask::~GrassLoadTask(void)
0x7C31E8: test    byte ptr [esp+4+arg_0], 1
0x7C31ED: jz      short loc_7C31F8
0x7C31EF: push    esi
0x7C31F0: call    FormHeapFree
0x7C31F5: add     esp, 4
0x7C31F8: mov     eax, esi
0x7C31FA: pop     esi
0x7C31FB: retn    4
