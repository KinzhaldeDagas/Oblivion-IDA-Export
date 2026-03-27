0x6D9180: push    esi
0x6D9181: mov     esi, ecx
0x6D9183: call    ??1NiRollController@@UAE@XZ; NiRollController::~NiRollController(void)
0x6D9188: test    byte ptr [esp+4+arg_0], 1
0x6D918D: jz      short loc_6D9198
0x6D918F: push    esi
0x6D9190: call    FormHeapFree
0x6D9195: add     esp, 4
0x6D9198: mov     eax, esi
0x6D919A: pop     esi
0x6D919B: retn    4
