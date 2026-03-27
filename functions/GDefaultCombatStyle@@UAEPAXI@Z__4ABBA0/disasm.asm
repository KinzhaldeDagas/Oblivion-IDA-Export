0x4ABBA0: push    esi
0x4ABBA1: mov     esi, ecx
0x4ABBA3: call    ??1DefaultCombatStyle@@UAE@XZ; DefaultCombatStyle::~DefaultCombatStyle(void)
0x4ABBA8: test    byte ptr [esp+4+arg_0], 1
0x4ABBAD: jz      short loc_4ABBB8
0x4ABBAF: push    esi
0x4ABBB0: call    FormHeapFree
0x4ABBB5: add     esp, 4
0x4ABBB8: mov     eax, esi
0x4ABBBA: pop     esi
0x4ABBBB: retn    4
