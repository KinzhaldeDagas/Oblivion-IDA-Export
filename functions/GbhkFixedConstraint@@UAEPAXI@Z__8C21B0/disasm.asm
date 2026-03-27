0x8C21B0: push    esi
0x8C21B1: mov     esi, ecx
0x8C21B3: call    ??1bhkFixedConstraint@@UAE@XZ; bhkFixedConstraint::~bhkFixedConstraint(void)
0x8C21B8: test    byte ptr [esp+4+arg_0], 1
0x8C21BD: jz      short loc_8C21C8
0x8C21BF: push    esi
0x8C21C0: call    FormHeapFree
0x8C21C5: add     esp, 4
0x8C21C8: mov     eax, esi
0x8C21CA: pop     esi
0x8C21CB: retn    4
