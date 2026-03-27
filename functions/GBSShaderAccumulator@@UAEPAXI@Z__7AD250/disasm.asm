0x7AD250: push    esi
0x7AD251: mov     esi, ecx
0x7AD253: call    ??1BSShaderAccumulator@@UAE@XZ; BSShaderAccumulator::~BSShaderAccumulator(void)
0x7AD258: test    byte ptr [esp+4+arg_0], 1
0x7AD25D: jz      short loc_7AD268
0x7AD25F: push    esi
0x7AD260: call    FormHeapFree
0x7AD265: add     esp, 4
0x7AD268: mov     eax, esi
0x7AD26A: pop     esi
0x7AD26B: retn    4
