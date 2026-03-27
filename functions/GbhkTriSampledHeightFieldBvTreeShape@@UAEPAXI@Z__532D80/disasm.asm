0x532D80: push    esi
0x532D81: mov     esi, ecx
0x532D83: call    ??1bhkTriSampledHeightFieldBvTreeShape@@UAE@XZ; bhkTriSampledHeightFieldBvTreeShape::~bhkTriSampledHeightFieldBvTreeShape(void)
0x532D88: test    byte ptr [esp+4+arg_0], 1
0x532D8D: jz      short loc_532D98
0x532D8F: push    esi
0x532D90: call    FormHeapFree
0x532D95: add     esp, 4
0x532D98: mov     eax, esi
0x532D9A: pop     esi
0x532D9B: retn    4
