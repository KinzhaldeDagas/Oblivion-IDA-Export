0x6C5050: push    edi
0x6C5051: mov     edi, ecx
0x6C5053: cmp     byte ptr [edi+10h], 0
0x6C5057: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiControllerSequence@@@@PAVNiControllerSequence@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiControllerSequence *>,NiControllerSequence *>::`vftable'
0x6C505D: jz      short loc_6C5090
0x6C505F: push    ebx
0x6C5060: xor     ebx, ebx
0x6C5062: cmp     [edi+4], ebx
0x6C5065: jbe     short loc_6C508F
0x6C5067: push    esi
0x6C5068: mov     eax, [edi+8]
0x6C506B: mov     esi, [eax+ebx*4]
0x6C506E: test    esi, esi
0x6C5070: jz      short loc_6C5086
0x6C5072: mov     eax, esi
0x6C5074: mov     ecx, [eax+4]
0x6C5077: mov     esi, [esi]
0x6C5079: push    ecx
0x6C507A: call    FormHeapFree
0x6C507F: add     esp, 4
0x6C5082: test    esi, esi
0x6C5084: jnz     short loc_6C5072
0x6C5086: add     ebx, 1
0x6C5089: cmp     ebx, [edi+4]
0x6C508C: jb      short loc_6C5068
0x6C508E: pop     esi
0x6C508F: pop     ebx
0x6C5090: mov     ecx, edi
0x6C5092: pop     edi
0x6C5093: jmp     ??1?$NiTPointerMap@PBDPAVNiControllerSequence@@@@UAE@XZ; NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(void)
