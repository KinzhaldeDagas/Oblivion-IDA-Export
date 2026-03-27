0x863700: push    esi
0x863701: mov     esi, ecx
0x863703: call    ??1Lighting30ShaderProperty@@UAE@XZ; Lighting30ShaderProperty::~Lighting30ShaderProperty(void)
0x863708: test    byte ptr [esp+4+arg_0], 1
0x86370D: jz      short loc_863718
0x86370F: push    esi
0x863710: call    FormHeapFree
0x863715: add     esp, 4
0x863718: mov     eax, esi
0x86371A: pop     esi
0x86371B: retn    4
