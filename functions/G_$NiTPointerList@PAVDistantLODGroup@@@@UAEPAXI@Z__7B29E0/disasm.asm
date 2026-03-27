0x7B29E0: push    esi
0x7B29E1: mov     esi, ecx
0x7B29E3: call    ??1?$NiTPointerList@PAVDistantLODGroup@@@@UAE@XZ; NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(void)
0x7B29E8: test    [esp+4+arg_0], 1
0x7B29ED: jz      short loc_7B29F8
0x7B29EF: push    esi
0x7B29F0: call    FormHeapFree
0x7B29F5: add     esp, 4
0x7B29F8: mov     eax, esi
0x7B29FA: pop     esi
0x7B29FB: retn    4
