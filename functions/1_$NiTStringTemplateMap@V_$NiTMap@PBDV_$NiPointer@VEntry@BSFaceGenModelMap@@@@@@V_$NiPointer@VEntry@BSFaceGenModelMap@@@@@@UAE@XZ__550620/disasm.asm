0x550620: push    edi
0x550621: mov     edi, ecx
0x550623: cmp     byte ptr [edi+10h], 0
0x550627: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x55062D: jz      short loc_550660
0x55062F: push    ebx
0x550630: xor     ebx, ebx
0x550632: cmp     [edi+4], ebx
0x550635: jbe     short loc_55065F
0x550637: push    esi
0x550638: mov     eax, [edi+8]
0x55063B: mov     esi, [eax+ebx*4]
0x55063E: test    esi, esi
0x550640: jz      short loc_550656
0x550642: mov     eax, esi
0x550644: mov     ecx, [eax+4]
0x550647: mov     esi, [esi]
0x550649: push    ecx
0x55064A: call    FormHeapFree
0x55064F: add     esp, 4
0x550652: test    esi, esi
0x550654: jnz     short loc_550642
0x550656: add     ebx, 1
0x550659: cmp     ebx, [edi+4]
0x55065C: jb      short loc_550638
0x55065E: pop     esi
0x55065F: pop     ebx
0x550660: mov     ecx, edi
0x550662: pop     edi
0x550663: jmp     ??1?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ; NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(void)
