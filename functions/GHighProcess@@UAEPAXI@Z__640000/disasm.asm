0x640000: push    esi
0x640001: mov     esi, ecx
0x640003: call    ??1HighProcess@@UAE@XZ; HighProcess::~HighProcess(void)
0x640008: test    byte ptr [esp+4+arg_0], 1
0x64000D: jz      short loc_640018
0x64000F: push    esi
0x640010: call    FormHeapFree
0x640015: add     esp, 4
0x640018: mov     eax, esi
0x64001A: pop     esi
0x64001B: retn    4
