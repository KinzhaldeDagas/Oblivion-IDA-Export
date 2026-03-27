0x6D68D0: push    esi
0x6D68D1: mov     esi, ecx
0x6D68D3: call    ??1NiTransformInterpolator@@UAE@XZ; NiTransformInterpolator::~NiTransformInterpolator(void)
0x6D68D8: test    byte ptr [esp+4+arg_0], 1
0x6D68DD: jz      short loc_6D68E8
0x6D68DF: push    esi
0x6D68E0: call    FormHeapFree
0x6D68E5: add     esp, 4
0x6D68E8: mov     eax, esi
0x6D68EA: pop     esi
0x6D68EB: retn    4
