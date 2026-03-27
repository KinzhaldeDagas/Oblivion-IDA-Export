0x77CBC0: push    edi
0x77CBC1: mov     edi, ecx
0x77CBC3: cmp     byte ptr [edi+10h], 0
0x77CBC7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTMap@PBDPAVNiD3DGlobalConstantEntry@@@@PAVNiD3DGlobalConstantEntry@@@@6B@; const NiTStringTemplateMap<NiTMap<char const *,NiD3DGlobalConstantEntry *>,NiD3DGlobalConstantEntry *>::`vftable'
0x77CBCD: jz      short loc_77CC00
0x77CBCF: push    ebx
0x77CBD0: xor     ebx, ebx
0x77CBD2: cmp     [edi+4], ebx
0x77CBD5: jbe     short loc_77CBFF
0x77CBD7: push    esi
0x77CBD8: mov     eax, [edi+8]
0x77CBDB: mov     esi, [eax+ebx*4]
0x77CBDE: test    esi, esi
0x77CBE0: jz      short loc_77CBF6
0x77CBE2: mov     eax, esi
0x77CBE4: mov     ecx, [eax+4]
0x77CBE7: mov     esi, [esi]
0x77CBE9: push    ecx
0x77CBEA: call    FormHeapFree
0x77CBEF: add     esp, 4
0x77CBF2: test    esi, esi
0x77CBF4: jnz     short loc_77CBE2
0x77CBF6: add     ebx, 1
0x77CBF9: cmp     ebx, [edi+4]
0x77CBFC: jb      short loc_77CBD8
0x77CBFE: pop     esi
0x77CBFF: pop     ebx
0x77CC00: mov     ecx, edi
0x77CC02: mov     dword ptr [edi], offset ??_7?$NiTMap@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMap<char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77CC08: call    NiTMap_Clear
0x77CC0D: mov     ecx, edi
0x77CC0F: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$DFALL@PAVNiD3DGlobalConstantEntry@@@@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77CC15: call    NiTMap_Clear
0x77CC1A: mov     edx, [edi+8]
0x77CC1D: push    edx
0x77CC1E: call    FormHeapFree
0x77CC23: add     esp, 4
0x77CC26: pop     edi
0x77CC27: retn
