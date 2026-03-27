0x8C98C0: push    esi
0x8C98C1: mov     esi, ecx
0x8C98C3: call    ??1bhkConvexTransformShape@@UAE@XZ; bhkConvexTransformShape::~bhkConvexTransformShape(void)
0x8C98C8: test    byte ptr [esp+4+arg_0], 1
0x8C98CD: jz      short loc_8C98D8
0x8C98CF: push    esi
0x8C98D0: call    FormHeapFree
0x8C98D5: add     esp, 4
0x8C98D8: mov     eax, esi
0x8C98DA: pop     esi
0x8C98DB: retn    4
