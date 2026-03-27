0x780B60: push    esi
0x780B61: mov     esi, ecx
0x780B63: mov     dword ptr [esi], offset ??_7NiDX9ShaderConstantManager@@6B@; const NiDX9ShaderConstantManager::`vftable'
0x780B69: call    ??1NiD3DShaderConstantManager@@UAE@XZ; NiD3DShaderConstantManager::~NiD3DShaderConstantManager(void)
0x780B6E: test    byte ptr [esp+4+arg_0], 1
0x780B73: jz      short loc_780B7E
0x780B75: push    esi
0x780B76: call    FormHeapFree
0x780B7B: add     esp, 4
0x780B7E: mov     eax, esi
0x780B80: pop     esi
0x780B81: retn    4
