0x46C1D0: push    edi
0x46C1D1: mov     edi, ecx
0x46C1D3: cmp     byte ptr [edi+10h], 0
0x46C1D7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTMap@PBDPAVTESForm@@@@PAVTESForm@@@@6B@; const NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::`vftable'
0x46C1DD: jz      short loc_46C210
0x46C1DF: push    ebx
0x46C1E0: xor     ebx, ebx
0x46C1E2: cmp     [edi+4], ebx
0x46C1E5: jbe     short loc_46C20F
0x46C1E7: push    esi
0x46C1E8: mov     eax, [edi+8]
0x46C1EB: mov     esi, [eax+ebx*4]
0x46C1EE: test    esi, esi
0x46C1F0: jz      short loc_46C206
0x46C1F2: mov     eax, esi
0x46C1F4: mov     ecx, [eax+4]
0x46C1F7: mov     esi, [esi]
0x46C1F9: push    ecx
0x46C1FA: call    FormHeapFree
0x46C1FF: add     esp, 4
0x46C202: test    esi, esi
0x46C204: jnz     short loc_46C1F2
0x46C206: add     ebx, 1
0x46C209: cmp     ebx, [edi+4]
0x46C20C: jb      short loc_46C1E8
0x46C20E: pop     esi
0x46C20F: pop     ebx
0x46C210: mov     ecx, edi
0x46C212: pop     edi
0x46C213: jmp     ??1?$NiTMap@PBDPAVTESForm@@@@UAE@XZ; NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(void)
