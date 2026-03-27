0x5C1270: push    esi
0x5C1271: mov     esi, ecx
0x5C1273: call    ??1?$NiTPointerList@PAVTESForm@@@@UAE@XZ; NiTPointerList<TESForm *>::~NiTPointerList<TESForm *>(void)
0x5C1278: test    [esp+4+arg_0], 1
0x5C127D: jz      short loc_5C1288
0x5C127F: push    esi
0x5C1280: call    FormHeapFree
0x5C1285: add     esp, 4
0x5C1288: mov     eax, esi
0x5C128A: pop     esi
0x5C128B: retn    4
