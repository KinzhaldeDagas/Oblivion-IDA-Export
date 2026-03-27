0x483570: push    esi
0x483571: mov     esi, ecx
0x483573: call    ??1GridCellArray@@UAE@XZ; GridCellArray::~GridCellArray(void)
0x483578: test    byte ptr [esp+4+arg_0], 1
0x48357D: jz      short loc_483588
0x48357F: push    esi
0x483580: call    FormHeapFree
0x483585: add     esp, 4
0x483588: mov     eax, esi
0x48358A: pop     esi
0x48358B: retn    4
