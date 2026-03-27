0x77F700: push    esi
0x77F701: mov     esi, ecx
0x77F703: call    ??1NiD3DShaderProgramFactory@@UAE@XZ; NiD3DShaderProgramFactory::~NiD3DShaderProgramFactory(void)
0x77F708: test    byte ptr [esp+4+arg_0], 1
0x77F70D: jz      short loc_77F718
0x77F70F: push    esi
0x77F710: call    FormHeapFree
0x77F715: add     esp, 4
0x77F718: mov     eax, esi
0x77F71A: pop     esi
0x77F71B: retn    4
