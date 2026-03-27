0x8C0B50: push    esi
0x8C0B51: mov     esi, ecx
0x8C0B53: call    ??1bhkRagdollConstraint@@UAE@XZ; bhkRagdollConstraint::~bhkRagdollConstraint(void)
0x8C0B58: test    byte ptr [esp+4+arg_0], 1
0x8C0B5D: jz      short loc_8C0B68
0x8C0B5F: push    esi
0x8C0B60: call    FormHeapFree
0x8C0B65: add     esp, 4
0x8C0B68: mov     eax, esi
0x8C0B6A: pop     esi
0x8C0B6B: retn    4
