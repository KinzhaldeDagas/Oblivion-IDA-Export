0x580290: push    esi
0x580291: mov     esi, ecx
0x580293: call    ??1?$NiTList@PAVTile@@@@UAE@XZ; NiTList<Tile *>::~NiTList<Tile *>(void)
0x580298: test    [esp+4+arg_0], 1
0x58029D: jz      short loc_5802A8
0x58029F: push    esi
0x5802A0: call    FormHeapFree
0x5802A5: add     esp, 4
0x5802A8: mov     eax, esi
0x5802AA: pop     esi
0x5802AB: retn    4
