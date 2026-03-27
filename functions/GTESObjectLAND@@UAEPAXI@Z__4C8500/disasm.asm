0x4C8500: push    esi
0x4C8501: mov     esi, ecx
0x4C8503: call    ??1TESObjectLAND@@UAE@XZ; TESObjectLAND::~TESObjectLAND(void)
0x4C8508: test    byte ptr [esp+4+arg_0], 1
0x4C850D: jz      short loc_4C8518
0x4C850F: push    esi
0x4C8510: call    FormHeapFree
0x4C8515: add     esp, 4
0x4C8518: mov     eax, esi
0x4C851A: pop     esi
0x4C851B: retn    4
