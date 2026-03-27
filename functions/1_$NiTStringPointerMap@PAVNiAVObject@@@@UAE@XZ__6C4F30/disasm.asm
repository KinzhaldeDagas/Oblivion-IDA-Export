0x6C4F30: push    edi
0x6C4F31: mov     edi, ecx
0x6C4F33: cmp     byte ptr [edi+10h], 0
0x6C4F37: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiAVObject@@@@PAVNiAVObject@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiAVObject *>,NiAVObject *>::`vftable'
0x6C4F3D: jz      short loc_6C4F70
0x6C4F3F: push    ebx
0x6C4F40: xor     ebx, ebx
0x6C4F42: cmp     [edi+4], ebx
0x6C4F45: jbe     short loc_6C4F6F
0x6C4F47: push    esi
0x6C4F48: mov     eax, [edi+8]
0x6C4F4B: mov     esi, [eax+ebx*4]
0x6C4F4E: test    esi, esi
0x6C4F50: jz      short loc_6C4F66
0x6C4F52: mov     eax, esi
0x6C4F54: mov     ecx, [eax+4]
0x6C4F57: mov     esi, [esi]
0x6C4F59: push    ecx
0x6C4F5A: call    FormHeapFree
0x6C4F5F: add     esp, 4
0x6C4F62: test    esi, esi
0x6C4F64: jnz     short loc_6C4F52
0x6C4F66: add     ebx, 1
0x6C4F69: cmp     ebx, [edi+4]
0x6C4F6C: jb      short loc_6C4F48
0x6C4F6E: pop     esi
0x6C4F6F: pop     ebx
0x6C4F70: mov     ecx, edi
0x6C4F72: pop     edi
0x6C4F73: jmp     ??1?$NiTPointerMap@PBDPAVNiAVObject@@@@UAE@XZ; NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(void)
