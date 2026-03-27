0x571800: push    esi
0x571801: mov     esi, ecx
0x571803: call    ??1?$NiTList@PAUDebugTextData@DebugText@@@@UAE@XZ; NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(void)
0x571808: test    [esp+4+arg_0], 1
0x57180D: jz      short loc_571818
0x57180F: push    esi
0x571810: call    FormHeapFree
0x571815: add     esp, 4
0x571818: mov     eax, esi
0x57181A: pop     esi
0x57181B: retn    4
