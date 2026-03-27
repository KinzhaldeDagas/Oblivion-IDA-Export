0x49A1E0: push    esi
0x49A1E1: mov     esi, ecx
0x49A1E3: call    ??1?$NiTPointerList@PAVWadingWaterData@@@@UAE@XZ; NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>(void)
0x49A1E8: test    [esp+4+arg_0], 1
0x49A1ED: jz      short loc_49A1F8
0x49A1EF: push    esi
0x49A1F0: call    FormHeapFree
0x49A1F5: add     esp, 4
0x49A1F8: mov     eax, esi
0x49A1FA: pop     esi
0x49A1FB: retn    4
