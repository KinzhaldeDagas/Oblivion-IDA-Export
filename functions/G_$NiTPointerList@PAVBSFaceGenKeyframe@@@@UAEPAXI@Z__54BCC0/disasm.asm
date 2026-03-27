0x54BCC0: push    esi
0x54BCC1: mov     esi, ecx
0x54BCC3: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BCC8: test    [esp+4+arg_0], 1
0x54BCCD: jz      short loc_54BCD8
0x54BCCF: push    esi
0x54BCD0: call    FormHeapFree
0x54BCD5: add     esp, 4
0x54BCD8: mov     eax, esi
0x54BCDA: pop     esi
0x54BCDB: retn    4
