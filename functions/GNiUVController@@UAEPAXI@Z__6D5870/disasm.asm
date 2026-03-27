0x6D5870: push    esi
0x6D5871: mov     esi, ecx
0x6D5873: call    ??1NiUVController@@UAE@XZ; NiUVController::~NiUVController(void)
0x6D5878: test    byte ptr [esp+4+arg_0], 1
0x6D587D: jz      short loc_6D5888
0x6D587F: push    esi
0x6D5880: call    FormHeapFree
0x6D5885: add     esp, 4
0x6D5888: mov     eax, esi
0x6D588A: pop     esi
0x6D588B: retn    4
