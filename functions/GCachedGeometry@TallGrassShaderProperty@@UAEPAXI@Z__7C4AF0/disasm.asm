0x7C4AF0: push    esi
0x7C4AF1: mov     esi, ecx
0x7C4AF3: call    ??1CachedGeometry@TallGrassShaderProperty@@UAE@XZ; TallGrassShaderProperty::CachedGeometry::~CachedGeometry(void)
0x7C4AF8: test    byte ptr [esp+4+arg_0], 1
0x7C4AFD: jz      short loc_7C4B08
0x7C4AFF: push    esi
0x7C4B00: call    FormHeapFree
0x7C4B05: add     esp, 4
0x7C4B08: mov     eax, esi
0x7C4B0A: pop     esi
0x7C4B0B: retn    4
