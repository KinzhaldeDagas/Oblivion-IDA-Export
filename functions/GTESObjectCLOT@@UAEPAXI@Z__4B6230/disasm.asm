0x4B6230: push    esi
0x4B6231: mov     esi, ecx
0x4B6233: call    ??1TESObjectCLOT@@UAE@XZ; TESObjectCLOT::~TESObjectCLOT(void)
0x4B6238: test    byte ptr [esp+4+arg_0], 1
0x4B623D: jz      short loc_4B6248
0x4B623F: push    esi
0x4B6240: call    FormHeapFree
0x4B6245: add     esp, 4
0x4B6248: mov     eax, esi
0x4B624A: pop     esi
0x4B624B: retn    4
