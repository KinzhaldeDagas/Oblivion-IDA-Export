0x7FA870: push    esi
0x7FA871: mov     esi, ecx
0x7FA873: call    ??1DebugShader@@UAE@XZ; DebugShader::~DebugShader(void)
0x7FA878: test    byte ptr [esp+4+arg_0], 1
0x7FA87D: jz      short loc_7FA888
0x7FA87F: push    esi
0x7FA880: call    FormHeapFree
0x7FA885: add     esp, 4
0x7FA888: mov     eax, esi
0x7FA88A: pop     esi
0x7FA88B: retn    4
