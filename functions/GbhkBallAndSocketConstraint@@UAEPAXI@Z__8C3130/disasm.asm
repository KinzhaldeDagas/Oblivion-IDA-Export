0x8C3130: push    esi
0x8C3131: mov     esi, ecx
0x8C3133: call    ??1bhkBallAndSocketConstraint@@UAE@XZ; bhkBallAndSocketConstraint::~bhkBallAndSocketConstraint(void)
0x8C3138: test    byte ptr [esp+4+arg_0], 1
0x8C313D: jz      short loc_8C3148
0x8C313F: push    esi
0x8C3140: call    FormHeapFree
0x8C3145: add     esp, 4
0x8C3148: mov     eax, esi
0x8C314A: pop     esi
0x8C314B: retn    4
