0x713940: push    edi
0x713941: mov     edi, ecx
0x713943: cmp     byte ptr [edi+10h], 0
0x713947: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDG@@G@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,ushort>,ushort>::`vftable'
0x71394D: jz      short loc_713980
0x71394F: push    ebx
0x713950: xor     ebx, ebx
0x713952: cmp     [edi+4], ebx
0x713955: jbe     short loc_71397F
0x713957: push    esi
0x713958: mov     eax, [edi+8]
0x71395B: mov     esi, [eax+ebx*4]
0x71395E: test    esi, esi
0x713960: jz      short loc_713976
0x713962: mov     eax, esi
0x713964: mov     ecx, [eax+4]
0x713967: mov     esi, [esi]
0x713969: push    ecx
0x71396A: call    FormHeapFree
0x71396F: add     esp, 4
0x713972: test    esi, esi
0x713974: jnz     short loc_713962
0x713976: add     ebx, 1
0x713979: cmp     ebx, [edi+4]
0x71397C: jb      short loc_713958
0x71397E: pop     esi
0x71397F: pop     ebx
0x713980: mov     ecx, edi
0x713982: pop     edi
0x713983: jmp     ??1?$NiTPointerMap@PBDG@@UAE@XZ; NiTPointerMap<char const *,ushort>::~NiTPointerMap<char const *,ushort>(void)
