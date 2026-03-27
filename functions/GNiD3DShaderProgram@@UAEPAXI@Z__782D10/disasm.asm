0x782D10: push    esi
0x782D11: mov     esi, ecx
0x782D13: call    ??1NiD3DShaderProgram@@UAE@XZ; NiD3DShaderProgram::~NiD3DShaderProgram(void)
0x782D18: test    byte ptr [esp+4+arg_0], 1
0x782D1D: jz      short loc_782D28
0x782D1F: push    esi
0x782D20: call    FormHeapFree
0x782D25: add     esp, 4
0x782D28: mov     eax, esi
0x782D2A: pop     esi
0x782D2B: retn    4
