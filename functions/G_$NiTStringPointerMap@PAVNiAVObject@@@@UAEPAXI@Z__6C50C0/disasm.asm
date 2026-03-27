0x6C50C0: push    esi
0x6C50C1: mov     esi, ecx
0x6C50C3: call    ??1?$NiTStringPointerMap@PAVNiAVObject@@@@UAE@XZ; NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>(void)
0x6C50C8: test    [esp+4+arg_0], 1
0x6C50CD: jz      short loc_6C50D8
0x6C50CF: push    esi
0x6C50D0: call    FormHeapFree
0x6C50D5: add     esp, 4
0x6C50D8: mov     eax, esi
0x6C50DA: pop     esi
0x6C50DB: retn    4
