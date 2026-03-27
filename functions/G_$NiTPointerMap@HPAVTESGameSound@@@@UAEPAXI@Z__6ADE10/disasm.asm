0x6ADE10: push    esi
0x6ADE11: mov     esi, ecx
0x6ADE13: call    ??1?$NiTPointerMap@HPAVTESGameSound@@@@UAE@XZ; NiTPointerMap<int,TESGameSound *>::~NiTPointerMap<int,TESGameSound *>(void)
0x6ADE18: test    [esp+4+arg_0], 1
0x6ADE1D: jz      short loc_6ADE28
0x6ADE1F: push    esi
0x6ADE20: call    FormHeapFree
0x6ADE25: add     esp, 4
0x6ADE28: mov     eax, esi
0x6ADE2A: pop     esi
0x6ADE2B: retn    4
