0x8C0730: push    esi
0x8C0731: mov     esi, ecx
0x8C0733: call    ??1bhkStiffSpringConstraint@@UAE@XZ; bhkStiffSpringConstraint::~bhkStiffSpringConstraint(void)
0x8C0738: test    byte ptr [esp+4+arg_0], 1
0x8C073D: jz      short loc_8C0748
0x8C073F: push    esi
0x8C0740: call    FormHeapFree
0x8C0745: add     esp, 4
0x8C0748: mov     eax, esi
0x8C074A: pop     esi
0x8C074B: retn    4
