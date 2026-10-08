0x42E000: push    esi; MEF PLAN 2026-09-07: Scalar deleting destructor invokes Archive::~Archive42CA60 and frees object with FormHeapFree iff flag bit0. Existing factory failure42F5DF passes1. Checked cached construction returns an invalid object to factory; checked registration failure destroys still-private valid object through same path, never after list publication.
0x42E001: mov     esi, ecx
0x42E003: call    ??1Archive@@UAE@XZ; Archive::~Archive(void)
0x42E008: test    byte ptr [esp+4+arg_0], 1
0x42E00D: jz      short loc_42E018
0x42E00F: push    esi
0x42E010: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x42E015: add     esp, 4
0x42E018: mov     eax, esi
0x42E01A: pop     esi
0x42E01B: retn    4
