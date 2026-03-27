0x471820: push    esi
0x471821: mov     esi, ecx
0x471823: call    ??1?$NiTList@PBVBSAnimGroupSequence@@@@UAE@XZ; NiTList<BSAnimGroupSequence const *>::~NiTList<BSAnimGroupSequence const *>(void)
0x471828: test    [esp+4+arg_0], 1
0x47182D: jz      short loc_471838
0x47182F: push    esi
0x471830: call    FormHeapFree
0x471835: add     esp, 4
0x471838: mov     eax, esi
0x47183A: pop     esi
0x47183B: retn    4
