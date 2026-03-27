0x539A40: push    esi
0x539A41: mov     esi, ecx
0x539A43: call    ??1bhkLimitedHingeConstraint@@UAE@XZ; bhkLimitedHingeConstraint::~bhkLimitedHingeConstraint(void)
0x539A48: test    byte ptr [esp+4+arg_0], 1
0x539A4D: jz      short loc_539A58
0x539A4F: push    esi
0x539A50: call    FormHeapFree
0x539A55: add     esp, 4
0x539A58: mov     eax, esi
0x539A5A: pop     esi
0x539A5B: retn    4
