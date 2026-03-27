0x8C9E00: push    esi
0x8C9E01: mov     esi, ecx
0x8C9E03: call    ??1bhkConvexSweepShape@@UAE@XZ; bhkConvexSweepShape::~bhkConvexSweepShape(void)
0x8C9E08: test    byte ptr [esp+4+arg_0], 1
0x8C9E0D: jz      short loc_8C9E18
0x8C9E0F: push    esi
0x8C9E10: call    FormHeapFree
0x8C9E15: add     esp, 4
0x8C9E18: mov     eax, esi
0x8C9E1A: pop     esi
0x8C9E1B: retn    4
