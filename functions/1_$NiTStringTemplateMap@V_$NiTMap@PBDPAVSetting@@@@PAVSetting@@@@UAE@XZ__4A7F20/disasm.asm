0x4A7F20: push    edi
0x4A7F21: mov     edi, ecx
0x4A7F23: cmp     byte ptr [edi+10h], 0
0x4A7F27: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTMap@PBDPAVSetting@@@@PAVSetting@@@@6B@; const NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::`vftable'
0x4A7F2D: jz      short loc_4A7F60
0x4A7F2F: push    ebx
0x4A7F30: xor     ebx, ebx
0x4A7F32: cmp     [edi+4], ebx
0x4A7F35: jbe     short loc_4A7F5F
0x4A7F37: push    esi
0x4A7F38: mov     eax, [edi+8]
0x4A7F3B: mov     esi, [eax+ebx*4]
0x4A7F3E: test    esi, esi
0x4A7F40: jz      short loc_4A7F56
0x4A7F42: mov     eax, esi
0x4A7F44: mov     ecx, [eax+4]
0x4A7F47: mov     esi, [esi]
0x4A7F49: push    ecx
0x4A7F4A: call    FormHeapFree
0x4A7F4F: add     esp, 4
0x4A7F52: test    esi, esi
0x4A7F54: jnz     short loc_4A7F42
0x4A7F56: add     ebx, 1
0x4A7F59: cmp     ebx, [edi+4]
0x4A7F5C: jb      short loc_4A7F38
0x4A7F5E: pop     esi
0x4A7F5F: pop     ebx
0x4A7F60: mov     ecx, edi
0x4A7F62: pop     edi
0x4A7F63: jmp     ??1?$NiTMap@PBDPAVSetting@@@@UAE@XZ; NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(void)
