0x551370: push    esi
0x551371: mov     esi, ecx
0x551373: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x551379: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(void)
0x55137E: test    [esp+4+arg_0], 1
0x551383: jz      short loc_55138E
0x551385: push    esi
0x551386: call    FormHeapFree
0x55138B: add     esp, 4
0x55138E: mov     eax, esi
0x551390: pop     esi
0x551391: retn    4
