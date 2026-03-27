0x8C2800: push    esi
0x8C2801: mov     esi, ecx
0x8C2803: call    ??1bhkHingeConstraint@@UAE@XZ; bhkHingeConstraint::~bhkHingeConstraint(void)
0x8C2808: test    byte ptr [esp+4+arg_0], 1
0x8C280D: jz      short loc_8C2818
0x8C280F: push    esi
0x8C2810: call    FormHeapFree
0x8C2815: add     esp, 4
0x8C2818: mov     eax, esi
0x8C281A: pop     esi
0x8C281B: retn    4
