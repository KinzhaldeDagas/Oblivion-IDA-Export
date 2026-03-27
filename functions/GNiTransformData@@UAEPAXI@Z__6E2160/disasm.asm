0x6E2160: push    esi
0x6E2161: mov     esi, ecx
0x6E2163: call    ??1NiTransformData@@UAE@XZ; NiTransformData::~NiTransformData(void)
0x6E2168: test    byte ptr [esp+4+arg_0], 1
0x6E216D: jz      short loc_6E2178
0x6E216F: push    esi
0x6E2170: call    FormHeapFree
0x6E2175: add     esp, 4
0x6E2178: mov     eax, esi
0x6E217A: pop     esi
0x6E217B: retn    4
