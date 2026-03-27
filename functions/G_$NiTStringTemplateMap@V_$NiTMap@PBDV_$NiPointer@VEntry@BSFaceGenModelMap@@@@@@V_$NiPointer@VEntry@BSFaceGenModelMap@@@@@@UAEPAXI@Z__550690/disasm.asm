0x550690: push    esi
0x550691: mov     esi, ecx
0x550693: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(void)
0x550698: test    [esp+4+arg_0], 1
0x55069D: jz      short loc_5506A8
0x55069F: push    esi
0x5506A0: call    FormHeapFree
0x5506A5: add     esp, 4
0x5506A8: mov     eax, esi
0x5506AA: pop     esi
0x5506AB: retn    4
