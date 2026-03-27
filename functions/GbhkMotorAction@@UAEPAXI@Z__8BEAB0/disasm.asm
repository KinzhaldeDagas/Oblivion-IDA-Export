0x8BEAB0: push    esi
0x8BEAB1: mov     esi, ecx
0x8BEAB3: call    ??1bhkMotorAction@@UAE@XZ; bhkMotorAction::~bhkMotorAction(void)
0x8BEAB8: test    byte ptr [esp+4+arg_0], 1
0x8BEABD: jz      short loc_8BEAC8
0x8BEABF: push    esi
0x8BEAC0: call    FormHeapFree
0x8BEAC5: add     esp, 4
0x8BEAC8: mov     eax, esi
0x8BEACA: pop     esi
0x8BEACB: retn    4
