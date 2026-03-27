0x4A3D60: push    esi
0x4A3D61: mov     esi, ecx
0x4A3D63: call    ??1TESRegionDataLandscape@@UAE@XZ; TESRegionDataLandscape::~TESRegionDataLandscape(void)
0x4A3D68: test    byte ptr [esp+4+arg_0], 1
0x4A3D6D: jz      short loc_4A3D78
0x4A3D6F: push    esi
0x4A3D70: call    FormHeapFree
0x4A3D75: add     esp, 4
0x4A3D78: mov     eax, esi
0x4A3D7A: pop     esi
0x4A3D7B: retn    4
