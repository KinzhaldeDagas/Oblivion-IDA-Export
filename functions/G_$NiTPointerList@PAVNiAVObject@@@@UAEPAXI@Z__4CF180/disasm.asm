0x4CF180: push    esi
0x4CF181: mov     esi, ecx
0x4CF183: call    ??1?$NiTPointerList@PAVNiAVObject@@@@UAE@XZ; NiTPointerList<NiAVObject *>::~NiTPointerList<NiAVObject *>(void)
0x4CF188: test    [esp+4+arg_0], 1
0x4CF18D: jz      short loc_4CF198
0x4CF18F: push    esi
0x4CF190: call    FormHeapFree
0x4CF195: add     esp, 4
0x4CF198: mov     eax, esi
0x4CF19A: pop     esi
0x4CF19B: retn    4
