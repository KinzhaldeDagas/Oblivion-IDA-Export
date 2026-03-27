0x77CCA0: push    edi
0x77CCA1: mov     edi, ecx
0x77CCA3: cmp     byte ptr [edi+10h], 0
0x77CCA7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDV?$NiPointer@VNiShaderLibrary@@@@@@V?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>,NiPointer<NiShaderLibrary>>::`vftable'
0x77CCAD: jz      short loc_77CCE0
0x77CCAF: push    ebx
0x77CCB0: xor     ebx, ebx
0x77CCB2: cmp     [edi+4], ebx
0x77CCB5: jbe     short loc_77CCDF
0x77CCB7: push    esi
0x77CCB8: mov     eax, [edi+8]
0x77CCBB: mov     esi, [eax+ebx*4]
0x77CCBE: test    esi, esi
0x77CCC0: jz      short loc_77CCD6
0x77CCC2: mov     eax, esi
0x77CCC4: mov     ecx, [eax+4]
0x77CCC7: mov     esi, [esi]
0x77CCC9: push    ecx
0x77CCCA: call    FormHeapFree
0x77CCCF: add     esp, 4
0x77CCD2: test    esi, esi
0x77CCD4: jnz     short loc_77CCC2
0x77CCD6: add     ebx, 1
0x77CCD9: cmp     ebx, [edi+4]
0x77CCDC: jb      short loc_77CCB8
0x77CCDE: pop     esi
0x77CCDF: pop     ebx
0x77CCE0: mov     ecx, edi
0x77CCE2: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77CCE8: call    NiTMap_Clear
0x77CCED: mov     ecx, edi
0x77CCEF: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77CCF5: call    NiTMap_Clear
0x77CCFA: mov     edx, [edi+8]
0x77CCFD: push    edx
0x77CCFE: call    FormHeapFree
0x77CD03: add     esp, 4
0x77CD06: pop     edi
0x77CD07: retn
