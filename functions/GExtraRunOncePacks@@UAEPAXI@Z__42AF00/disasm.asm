0x42AF00: push    esi
0x42AF01: mov     esi, ecx
0x42AF03: call    ??1ExtraRunOncePacks@@UAE@XZ; ExtraRunOncePacks::~ExtraRunOncePacks(void)
0x42AF08: test    byte ptr [esp+4+arg_0], 1
0x42AF0D: jz      short loc_42AF18
0x42AF0F: push    esi
0x42AF10: call    FormHeapFree
0x42AF15: add     esp, 4
0x42AF18: mov     eax, esi
0x42AF1A: pop     esi
0x42AF1B: retn    4
