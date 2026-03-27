0x7C37E0: push    edi
0x7C37E1: mov     edi, ecx
0x7C37E3: cmp     byte ptr [edi+10h], 0
0x7C37E7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@V?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'
0x7C37ED: jz      short loc_7C3820
0x7C37EF: push    ebx
0x7C37F0: xor     ebx, ebx
0x7C37F2: cmp     [edi+4], ebx
0x7C37F5: jbe     short loc_7C381F
0x7C37F7: push    esi
0x7C37F8: mov     eax, [edi+8]
0x7C37FB: mov     esi, [eax+ebx*4]
0x7C37FE: test    esi, esi
0x7C3800: jz      short loc_7C3816
0x7C3802: mov     eax, esi
0x7C3804: mov     ecx, [eax+4]
0x7C3807: mov     esi, [esi]
0x7C3809: push    ecx
0x7C380A: call    FormHeapFree
0x7C380F: add     esp, 4
0x7C3812: test    esi, esi
0x7C3814: jnz     short loc_7C3802
0x7C3816: add     ebx, 1
0x7C3819: cmp     ebx, [edi+4]
0x7C381C: jb      short loc_7C37F8
0x7C381E: pop     esi
0x7C381F: pop     ebx
0x7C3820: mov     ecx, edi
0x7C3822: pop     edi
0x7C3823: jmp     ??1?$NiTPointerMap@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(void)
