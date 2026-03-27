0x8BF190: push    esi
0x8BF191: mov     esi, ecx
0x8BF193: call    ??1bhkMalleableConstraint@@UAE@XZ; bhkMalleableConstraint::~bhkMalleableConstraint(void)
0x8BF198: test    byte ptr [esp+4+arg_0], 1
0x8BF19D: jz      short loc_8BF1A8
0x8BF19F: push    esi
0x8BF1A0: call    FormHeapFree
0x8BF1A5: add     esp, 4
0x8BF1A8: mov     eax, esi
0x8BF1AA: pop     esi
0x8BF1AB: retn    4
