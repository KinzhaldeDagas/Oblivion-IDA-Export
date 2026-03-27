0x42E000: push    esi
0x42E001: mov     esi, ecx
0x42E003: call    ??1Archive@@UAE@XZ; Archive::~Archive(void)
0x42E008: test    byte ptr [esp+4+arg_0], 1
0x42E00D: jz      short loc_42E018
0x42E00F: push    esi
0x42E010: call    FormHeapFree
0x42E015: add     esp, 4
0x42E018: mov     eax, esi
0x42E01A: pop     esi
0x42E01B: retn    4
