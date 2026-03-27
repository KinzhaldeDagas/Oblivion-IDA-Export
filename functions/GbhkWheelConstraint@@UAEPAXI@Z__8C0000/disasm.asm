0x8C0000: push    esi
0x8C0001: mov     esi, ecx
0x8C0003: call    ??1bhkWheelConstraint@@UAE@XZ; bhkWheelConstraint::~bhkWheelConstraint(void)
0x8C0008: test    byte ptr [esp+4+arg_0], 1
0x8C000D: jz      short loc_8C0018
0x8C000F: push    esi
0x8C0010: call    FormHeapFree
0x8C0015: add     esp, 4
0x8C0018: mov     eax, esi
0x8C001A: pop     esi
0x8C001B: retn    4
