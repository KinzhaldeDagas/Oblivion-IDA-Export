0x7C3570: push    esi
0x7C3571: mov     esi, ecx
0x7C3573: call    ??1?$NiTPointerList@PAVTallGrassGroup@@@@UAE@XZ; NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(void)
0x7C3578: test    [esp+4+arg_0], 1
0x7C357D: jz      short loc_7C3588
0x7C357F: push    esi
0x7C3580: call    FormHeapFree
0x7C3585: add     esp, 4
0x7C3588: mov     eax, esi
0x7C358A: pop     esi
0x7C358B: retn    4
