0x6D9AF0: push    esi
0x6D9AF1: mov     esi, ecx
0x6D9AF3: call    ??1NiColorInterpolator@@UAE@XZ; NiColorInterpolator::~NiColorInterpolator(void)
0x6D9AF8: test    byte ptr [esp+4+arg_0], 1
0x6D9AFD: jz      short loc_6D9B08
0x6D9AFF: push    esi
0x6D9B00: call    FormHeapFree
0x6D9B05: add     esp, 4
0x6D9B08: mov     eax, esi
0x6D9B0A: pop     esi
0x6D9B0B: retn    4
