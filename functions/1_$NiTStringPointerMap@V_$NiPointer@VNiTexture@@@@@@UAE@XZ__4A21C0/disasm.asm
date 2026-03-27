0x4A21C0: push    edi
0x4A21C1: mov     edi, ecx
0x4A21C3: cmp     byte ptr [edi+10h], 0
0x4A21C7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDV?$NiPointer@VNiTexture@@@@@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiTexture>>,NiPointer<NiTexture>>::`vftable'
0x4A21CD: jz      short loc_4A2200
0x4A21CF: push    ebx
0x4A21D0: xor     ebx, ebx
0x4A21D2: cmp     [edi+4], ebx
0x4A21D5: jbe     short loc_4A21FF
0x4A21D7: push    esi
0x4A21D8: mov     eax, [edi+8]
0x4A21DB: mov     esi, [eax+ebx*4]
0x4A21DE: test    esi, esi
0x4A21E0: jz      short loc_4A21F6
0x4A21E2: mov     eax, esi
0x4A21E4: mov     ecx, [eax+4]
0x4A21E7: mov     esi, [esi]
0x4A21E9: push    ecx
0x4A21EA: call    FormHeapFree
0x4A21EF: add     esp, 4
0x4A21F2: test    esi, esi
0x4A21F4: jnz     short loc_4A21E2
0x4A21F6: add     ebx, 1
0x4A21F9: cmp     ebx, [edi+4]
0x4A21FC: jb      short loc_4A21D8
0x4A21FE: pop     esi
0x4A21FF: pop     ebx
0x4A2200: mov     ecx, edi
0x4A2202: pop     edi
0x4A2203: jmp     ??1?$NiTPointerMap@PBDV?$NiPointer@VNiTexture@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(void)
