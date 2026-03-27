0x4A4E30: push    esi
0x4A4E31: mov     esi, ecx
0x4A4E33: call    ??1TESRegionDataMap@@UAE@XZ; TESRegionDataMap::~TESRegionDataMap(void)
0x4A4E38: test    byte ptr [esp+4+arg_0], 1
0x4A4E3D: jz      short loc_4A4E48
0x4A4E3F: push    esi
0x4A4E40: call    FormHeapFree
0x4A4E45: add     esp, 4
0x4A4E48: mov     eax, esi
0x4A4E4A: pop     esi
0x4A4E4B: retn    4
