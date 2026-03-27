0x882A40: push    esi
0x882A41: mov     esi, ecx
0x882A43: call    ??1HairShaderProperty@@UAE@XZ; HairShaderProperty::~HairShaderProperty(void)
0x882A48: test    byte ptr [esp+4+arg_0], 1
0x882A4D: jz      short loc_882A58
0x882A4F: push    esi
0x882A50: call    FormHeapFree
0x882A55: add     esp, 4
0x882A58: mov     eax, esi
0x882A5A: pop     esi
0x882A5B: retn    4
