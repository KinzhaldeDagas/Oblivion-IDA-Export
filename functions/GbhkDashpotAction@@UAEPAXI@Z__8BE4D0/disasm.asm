0x8BE4D0: push    esi
0x8BE4D1: mov     esi, ecx
0x8BE4D3: call    ??1bhkDashpotAction@@UAE@XZ; bhkDashpotAction::~bhkDashpotAction(void)
0x8BE4D8: test    byte ptr [esp+4+arg_0], 1
0x8BE4DD: jz      short loc_8BE4E8
0x8BE4DF: push    esi
0x8BE4E0: call    FormHeapFree
0x8BE4E5: add     esp, 4
0x8BE4E8: mov     eax, esi
0x8BE4EA: pop     esi
0x8BE4EB: retn    4
