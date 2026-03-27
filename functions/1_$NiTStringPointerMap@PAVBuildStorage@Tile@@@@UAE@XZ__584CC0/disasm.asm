0x584CC0: push    edi
0x584CC1: mov     edi, ecx
0x584CC3: cmp     byte ptr [edi+10h], 0
0x584CC7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVBuildStorage@Tile@@@@PAVBuildStorage@Tile@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,Tile::BuildStorage *>,Tile::BuildStorage *>::`vftable'
0x584CCD: jz      short loc_584D00
0x584CCF: push    ebx
0x584CD0: xor     ebx, ebx
0x584CD2: cmp     [edi+4], ebx
0x584CD5: jbe     short loc_584CFF
0x584CD7: push    esi
0x584CD8: mov     eax, [edi+8]
0x584CDB: mov     esi, [eax+ebx*4]
0x584CDE: test    esi, esi
0x584CE0: jz      short loc_584CF6
0x584CE2: mov     eax, esi
0x584CE4: mov     ecx, [eax+4]
0x584CE7: mov     esi, [esi]
0x584CE9: push    ecx
0x584CEA: call    FormHeapFree
0x584CEF: add     esp, 4
0x584CF2: test    esi, esi
0x584CF4: jnz     short loc_584CE2
0x584CF6: add     ebx, 1
0x584CF9: cmp     ebx, [edi+4]
0x584CFC: jb      short loc_584CD8
0x584CFE: pop     esi
0x584CFF: pop     ebx
0x584D00: mov     ecx, edi
0x584D02: pop     edi
0x584D03: jmp     ??1?$NiTPointerMap@PBDPAVBuildStorage@Tile@@@@UAE@XZ; NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(void)
