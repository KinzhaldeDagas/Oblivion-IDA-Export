0x5D6D00: push    esi
0x5D6D01: mov     esi, ecx
0x5D6D03: call    ??1SleepWaitMenu@@UAE@XZ; SleepWaitMenu::~SleepWaitMenu(void)
0x5D6D08: test    byte ptr [esp+4+arg_0], 1
0x5D6D0D: jz      short loc_5D6D18
0x5D6D0F: push    esi
0x5D6D10: call    FormHeapFree
0x5D6D15: add     esp, 4
0x5D6D18: mov     eax, esi
0x5D6D1A: pop     esi
0x5D6D1B: retn    4
