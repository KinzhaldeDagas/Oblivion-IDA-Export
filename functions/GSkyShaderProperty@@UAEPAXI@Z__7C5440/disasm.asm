0x7C5440: push    esi
0x7C5441: mov     esi, ecx
0x7C5443: call    ??1SkyShaderProperty@@UAE@XZ; SkyShaderProperty::~SkyShaderProperty(void)
0x7C5448: test    byte ptr [esp+4+arg_0], 1
0x7C544D: jz      short loc_7C5458
0x7C544F: push    esi
0x7C5450: call    FormHeapFree
0x7C5455: add     esp, 4
0x7C5458: mov     eax, esi
0x7C545A: pop     esi
0x7C545B: retn    4
