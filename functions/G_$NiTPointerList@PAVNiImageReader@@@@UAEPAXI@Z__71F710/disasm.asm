0x71F710: push    esi
0x71F711: mov     esi, ecx
0x71F713: call    ??1?$NiTPointerList@PAVNiImageReader@@@@UAE@XZ; NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>(void)
0x71F718: test    [esp+4+arg_0], 1
0x71F71D: jz      short loc_71F728
0x71F71F: push    esi
0x71F720: call    FormHeapFree
0x71F725: add     esp, 4
0x71F728: mov     eax, esi
0x71F72A: pop     esi
0x71F72B: retn    4
