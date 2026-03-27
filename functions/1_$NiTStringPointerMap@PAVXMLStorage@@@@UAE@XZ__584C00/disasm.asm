0x584C00: push    edi
0x584C01: mov     edi, ecx
0x584C03: cmp     byte ptr [edi+10h], 0
0x584C07: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVXMLStorage@@@@PAVXMLStorage@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,XMLStorage *>,XMLStorage *>::`vftable'
0x584C0D: jz      short loc_584C40
0x584C0F: push    ebx
0x584C10: xor     ebx, ebx
0x584C12: cmp     [edi+4], ebx
0x584C15: jbe     short loc_584C3F
0x584C17: push    esi
0x584C18: mov     eax, [edi+8]
0x584C1B: mov     esi, [eax+ebx*4]
0x584C1E: test    esi, esi
0x584C20: jz      short loc_584C36
0x584C22: mov     eax, esi
0x584C24: mov     ecx, [eax+4]
0x584C27: mov     esi, [esi]
0x584C29: push    ecx
0x584C2A: call    FormHeapFree
0x584C2F: add     esp, 4
0x584C32: test    esi, esi
0x584C34: jnz     short loc_584C22
0x584C36: add     ebx, 1
0x584C39: cmp     ebx, [edi+4]
0x584C3C: jb      short loc_584C18
0x584C3E: pop     esi
0x584C3F: pop     ebx
0x584C40: mov     ecx, edi
0x584C42: pop     edi
0x584C43: jmp     ??1?$NiTPointerMap@PBDPAVXMLStorage@@@@UAE@XZ; NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(void)
