0x45F090: push    esi
0x45F091: mov     esi, ecx
0x45F093: call    ??1InteriorCellNewReferencesMap@@UAE@XZ; InteriorCellNewReferencesMap::~InteriorCellNewReferencesMap(void)
0x45F098: test    byte ptr [esp+4+arg_0], 1
0x45F09D: jz      short loc_45F0A8
0x45F09F: push    esi
0x45F0A0: call    FormHeapFree
0x45F0A5: add     esp, 4
0x45F0A8: mov     eax, esi
0x45F0AA: pop     esi
0x45F0AB: retn    4
