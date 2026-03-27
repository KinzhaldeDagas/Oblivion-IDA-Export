0x708D80: push    esi
0x708D81: mov     esi, ecx
0x708D83: call    ??1?$NiTPointerList@PAVNiNode@@@@UAE@XZ; NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(void)
0x708D88: test    [esp+4+arg_0], 1
0x708D8D: jz      short loc_708D98
0x708D8F: push    esi
0x708D90: call    FormHeapFree
0x708D95: add     esp, 4
0x708D98: mov     eax, esi
0x708D9A: pop     esi
0x708D9B: retn    4
