0x6C38F0: push    esi
0x6C38F1: mov     esi, ecx
0x6C38F3: call    ??1NiBlendAccumTransformInterpolator@@UAE@XZ; NiBlendAccumTransformInterpolator::~NiBlendAccumTransformInterpolator(void)
0x6C38F8: test    byte ptr [esp+4+arg_0], 1
0x6C38FD: jz      short loc_6C3908
0x6C38FF: push    esi
0x6C3900: call    FormHeapFree
0x6C3905: add     esp, 4
0x6C3908: mov     eax, esi
0x6C390A: pop     esi
0x6C390B: retn    4
