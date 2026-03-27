0x7B3840: push    esi
0x7B3841: mov     esi, ecx
0x7B3843: call    ??1CachedGeometry@DistantLODShaderProperty@@UAE@XZ; DistantLODShaderProperty::CachedGeometry::~CachedGeometry(void)
0x7B3848: test    byte ptr [esp+4+arg_0], 1
0x7B384D: jz      short loc_7B3858
0x7B384F: push    esi
0x7B3850: call    FormHeapFree
0x7B3855: add     esp, 4
0x7B3858: mov     eax, esi
0x7B385A: pop     esi
0x7B385B: retn    4
