0x550670: push    esi
0x550671: mov     esi, ecx
0x550673: call    ??1?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ; NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(void)
0x550678: test    [esp+4+arg_0], 1
0x55067D: jz      short loc_550688
0x55067F: push    esi
0x550680: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x550685: add     esp, 4
0x550688: mov     eax, esi
0x55068A: pop     esi
0x55068B: retn    4
