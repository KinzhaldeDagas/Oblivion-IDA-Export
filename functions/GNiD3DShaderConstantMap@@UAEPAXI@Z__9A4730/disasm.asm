0x9A4730: push    esi
0x9A4731: mov     esi, ecx
0x9A4733: call    ??1NiD3DShaderConstantMap@@UAE@XZ; NiD3DShaderConstantMap::~NiD3DShaderConstantMap(void)
0x9A4738: test    byte ptr [esp+4+arg_0], 1
0x9A473D: jz      short loc_9A4748
0x9A473F: push    esi
0x9A4740: call    FormHeapFree
0x9A4745: add     esp, 4
0x9A4748: mov     eax, esi
0x9A474A: pop     esi
0x9A474B: retn    4
