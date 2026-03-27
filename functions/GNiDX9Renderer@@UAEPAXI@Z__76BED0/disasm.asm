0x76BED0: push    esi
0x76BED1: mov     esi, ecx
0x76BED3: call    ??1NiDX9Renderer@@UAE@XZ; NiDX9Renderer::~NiDX9Renderer(void)
0x76BED8: test    byte ptr [esp+4+arg_0], 1
0x76BEDD: jz      short loc_76BEE8
0x76BEDF: push    esi
0x76BEE0: call    FormHeapFree
0x76BEE5: add     esp, 4
0x76BEE8: mov     eax, esi
0x76BEEA: pop     esi
0x76BEEB: retn    4
