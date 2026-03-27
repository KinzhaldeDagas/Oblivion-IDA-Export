0x6D2130: push    esi
0x6D2131: mov     esi, ecx
0x6D2133: call    ??1NiFlipController@@UAE@XZ; NiFlipController::~NiFlipController(void)
0x6D2138: test    byte ptr [esp+4+arg_0], 1
0x6D213D: jz      short loc_6D2148
0x6D213F: push    esi
0x6D2140: call    FormHeapFree
0x6D2145: add     esp, 4
0x6D2148: mov     eax, esi
0x6D214A: pop     esi
0x6D214B: retn    4
