0x45F0B0: push    esi
0x45F0B1: mov     esi, ecx
0x45F0B3: call    ??1ExteriorCellNewReferencesMap@@UAE@XZ; ExteriorCellNewReferencesMap::~ExteriorCellNewReferencesMap(void)
0x45F0B8: test    byte ptr [esp+4+arg_0], 1
0x45F0BD: jz      short loc_45F0C8
0x45F0BF: push    esi
0x45F0C0: call    FormHeapFree
0x45F0C5: add     esp, 4
0x45F0C8: mov     eax, esi
0x45F0CA: pop     esi
0x45F0CB: retn    4
