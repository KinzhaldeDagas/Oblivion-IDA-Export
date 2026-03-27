0x4B4300: push    esi
0x4B4301: mov     esi, ecx
0x4B4303: call    ??1TESObjectANIO@@UAE@XZ; TESObjectANIO::~TESObjectANIO(void)
0x4B4308: test    byte ptr [esp+4+arg_0], 1
0x4B430D: jz      short loc_4B4318
0x4B430F: push    esi
0x4B4310: call    FormHeapFree
0x4B4315: add     esp, 4
0x4B4318: mov     eax, esi
0x4B431A: pop     esi
0x4B431B: retn    4
