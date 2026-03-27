0x61F8D0: push    esi
0x61F8D1: mov     esi, ecx
0x61F8D3: call    ??1CombatController@@UAE@XZ; CombatController::~CombatController(void)
0x61F8D8: test    byte ptr [esp+4+arg_0], 1
0x61F8DD: jz      short loc_61F8E8
0x61F8DF: push    esi
0x61F8E0: call    FormHeapFree
0x61F8E5: add     esp, 4
0x61F8E8: mov     eax, esi
0x61F8EA: pop     esi
0x61F8EB: retn    4
