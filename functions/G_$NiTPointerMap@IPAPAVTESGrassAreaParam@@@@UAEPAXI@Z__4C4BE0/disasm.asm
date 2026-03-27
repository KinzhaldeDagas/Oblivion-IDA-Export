0x4C4BE0: push    esi
0x4C4BE1: mov     esi, ecx
0x4C4BE3: call    ??1?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@UAE@XZ; NiTPointerMap<uint,TESGrassAreaParam * *>::~NiTPointerMap<uint,TESGrassAreaParam * *>(void)
0x4C4BE8: test    [esp+4+arg_0], 1
0x4C4BED: jz      short loc_4C4BF8
0x4C4BEF: push    esi
0x4C4BF0: call    FormHeapFree
0x4C4BF5: add     esp, 4
0x4C4BF8: mov     eax, esi
0x4C4BFA: pop     esi
0x4C4BFB: retn    4
