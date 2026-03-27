0x4EEAF0: push    esi
0x4EEAF1: mov     esi, ecx
0x4EEAF3: call    ??1TESWeather@@UAE@XZ; TESWeather::~TESWeather(void)
0x4EEAF8: test    byte ptr [esp+4+arg_0], 1
0x4EEAFD: jz      short loc_4EEB08
0x4EEAFF: push    esi
0x4EEB00: call    FormHeapFree
0x4EEB05: add     esp, 4
0x4EEB08: mov     eax, esi
0x4EEB0A: pop     esi
0x4EEB0B: retn    4
