0x77D160: push    esi
0x77D161: mov     esi, ecx
0x77D163: call    ??1NiD3DShaderFactory@@UAE@XZ; NiD3DShaderFactory::~NiD3DShaderFactory(void)
0x77D168: test    byte ptr [esp+4+arg_0], 1
0x77D16D: jz      short loc_77D178
0x77D16F: push    esi
0x77D170: call    FormHeapFree
0x77D175: add     esp, 4
0x77D178: mov     eax, esi
0x77D17A: pop     esi
0x77D17B: retn    4
