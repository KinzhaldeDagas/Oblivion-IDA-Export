0x6EA320: push    esi
0x6EA321: mov     esi, ecx
0x6EA323: call    ??1NiBlendBoolInterpolator@@UAE@XZ; NiBlendBoolInterpolator::~NiBlendBoolInterpolator(void)
0x6EA328: test    byte ptr [esp+4+arg_0], 1
0x6EA32D: jz      short loc_6EA338
0x6EA32F: push    esi
0x6EA330: call    FormHeapFree
0x6EA335: add     esp, 4
0x6EA338: mov     eax, esi
0x6EA33A: pop     esi
0x6EA33B: retn    4
