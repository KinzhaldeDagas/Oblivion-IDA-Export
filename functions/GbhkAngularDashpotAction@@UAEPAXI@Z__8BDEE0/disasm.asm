0x8BDEE0: push    esi
0x8BDEE1: mov     esi, ecx
0x8BDEE3: call    ??1bhkAngularDashpotAction@@UAE@XZ; bhkAngularDashpotAction::~bhkAngularDashpotAction(void)
0x8BDEE8: test    byte ptr [esp+4+arg_0], 1
0x8BDEED: jz      short loc_8BDEF8
0x8BDEEF: push    esi
0x8BDEF0: call    FormHeapFree
0x8BDEF5: add     esp, 4
0x8BDEF8: mov     eax, esi
0x8BDEFA: pop     esi
0x8BDEFB: retn    4
