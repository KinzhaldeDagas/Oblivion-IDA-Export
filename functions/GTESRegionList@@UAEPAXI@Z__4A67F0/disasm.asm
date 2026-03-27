0x4A67F0: push    esi
0x4A67F1: mov     esi, ecx
0x4A67F3: call    ??1TESRegionList@@UAE@XZ; TESRegionList::~TESRegionList(void)
0x4A67F8: test    byte ptr [esp+4+arg_0], 1
0x4A67FD: jz      short loc_4A6808
0x4A67FF: push    esi
0x4A6800: call    FormHeapFree
0x4A6805: add     esp, 4
0x4A6808: mov     eax, esi
0x4A680A: pop     esi
0x4A680B: retn    4
