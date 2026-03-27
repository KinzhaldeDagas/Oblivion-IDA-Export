0x782BD0: push    esi
0x782BD1: mov     esi, ecx
0x782BD3: call    ??1NiD3DShaderConstantManager@@UAE@XZ; NiD3DShaderConstantManager::~NiD3DShaderConstantManager(void)
0x782BD8: test    byte ptr [esp+4+arg_0], 1
0x782BDD: jz      short loc_782BE8
0x782BDF: push    esi
0x782BE0: call    FormHeapFree
0x782BE5: add     esp, 4
0x782BE8: mov     eax, esi
0x782BEA: pop     esi
0x782BEB: retn    4
