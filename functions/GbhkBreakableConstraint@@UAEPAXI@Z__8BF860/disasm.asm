0x8BF860: push    esi
0x8BF861: mov     esi, ecx
0x8BF863: call    ??1bhkBreakableConstraint@@UAE@XZ; bhkBreakableConstraint::~bhkBreakableConstraint(void)
0x8BF868: test    byte ptr [esp+4+arg_0], 1
0x8BF86D: jz      short loc_8BF878
0x8BF86F: push    esi
0x8BF870: call    FormHeapFree
0x8BF875: add     esp, 4
0x8BF878: mov     eax, esi
0x8BF87A: pop     esi
0x8BF87B: retn    4
