0x749CA0: push    edi
0x749CA1: mov     edi, ecx
0x749CA3: cmp     byte ptr [edi+10h], 0
0x749CA7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiPSysModifier@@@@PAVNiPSysModifier@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiPSysModifier *>,NiPSysModifier *>::`vftable'
0x749CAD: jz      short loc_749CE0
0x749CAF: push    ebx
0x749CB0: xor     ebx, ebx
0x749CB2: cmp     [edi+4], ebx
0x749CB5: jbe     short loc_749CDF
0x749CB7: push    esi
0x749CB8: mov     eax, [edi+8]
0x749CBB: mov     esi, [eax+ebx*4]
0x749CBE: test    esi, esi
0x749CC0: jz      short loc_749CD6
0x749CC2: mov     eax, esi
0x749CC4: mov     ecx, [eax+4]
0x749CC7: mov     esi, [esi]
0x749CC9: push    ecx
0x749CCA: call    FormHeapFree
0x749CCF: add     esp, 4
0x749CD2: test    esi, esi
0x749CD4: jnz     short loc_749CC2
0x749CD6: add     ebx, 1
0x749CD9: cmp     ebx, [edi+4]
0x749CDC: jb      short loc_749CB8
0x749CDE: pop     esi
0x749CDF: pop     ebx
0x749CE0: mov     ecx, edi
0x749CE2: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDPAVNiPSysModifier@@@@6B@; const NiTPointerMap<char const *,NiPSysModifier *>::`vftable'
0x749CE8: call    NiTMap_Clear
0x749CED: mov     ecx, edi
0x749CEF: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiPSysModifier@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPSysModifier *>::`vftable'
0x749CF5: call    NiTMap_Clear
0x749CFA: mov     edx, [edi+8]
0x749CFD: push    edx
0x749CFE: call    FormHeapFree
0x749D03: add     esp, 4
0x749D06: pop     edi
0x749D07: retn
