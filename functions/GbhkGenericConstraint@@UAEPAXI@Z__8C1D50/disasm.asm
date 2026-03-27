0x8C1D50: push    esi
0x8C1D51: mov     esi, ecx
0x8C1D53: call    ??1bhkGenericConstraint@@UAE@XZ; bhkGenericConstraint::~bhkGenericConstraint(void)
0x8C1D58: test    byte ptr [esp+4+arg_0], 1
0x8C1D5D: jz      short loc_8C1D68
0x8C1D5F: push    esi
0x8C1D60: call    FormHeapFree
0x8C1D65: add     esp, 4
0x8C1D68: mov     eax, esi
0x8C1D6A: pop     esi
0x8C1D6B: retn    4
