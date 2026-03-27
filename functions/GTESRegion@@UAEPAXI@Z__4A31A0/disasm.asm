0x4A31A0: push    esi
0x4A31A1: mov     esi, ecx
0x4A31A3: call    ??1TESRegion@@UAE@XZ; TESRegion::~TESRegion(void)
0x4A31A8: test    byte ptr [esp+4+arg_0], 1
0x4A31AD: jz      short loc_4A31B8
0x4A31AF: push    esi
0x4A31B0: call    FormHeapFree
0x4A31B5: add     esp, 4
0x4A31B8: mov     eax, esi
0x4A31BA: pop     esi
0x4A31BB: retn    4
