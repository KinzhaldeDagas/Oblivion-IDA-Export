0x4A37B0: push    esi
0x4A37B1: mov     esi, ecx
0x4A37B3: call    ??1TESRegionDataGrass@@UAE@XZ; TESRegionDataGrass::~TESRegionDataGrass(void)
0x4A37B8: test    byte ptr [esp+4+arg_0], 1
0x4A37BD: jz      short loc_4A37C8
0x4A37BF: push    esi
0x4A37C0: call    FormHeapFree
0x4A37C5: add     esp, 4
0x4A37C8: mov     eax, esi
0x4A37CA: pop     esi
0x4A37CB: retn    4
