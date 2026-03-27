0x4AE6E0: push    esi
0x4AE6E1: mov     esi, ecx
0x4AE6E3: call    ??1TESFurniture@@UAE@XZ; TESFurniture::~TESFurniture(void)
0x4AE6E8: test    byte ptr [esp+4+arg_0], 1
0x4AE6ED: jz      short loc_4AE6F8
0x4AE6EF: push    esi
0x4AE6F0: call    FormHeapFree
0x4AE6F5: add     esp, 4
0x4AE6F8: mov     eax, esi
0x4AE6FA: pop     esi
0x4AE6FB: retn    4
