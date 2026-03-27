0x713880: push    edi
0x713881: mov     edi, ecx
0x713883: cmp     byte ptr [edi+10h], 0
0x713887: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@P6APAVNiObject@@XZ@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiObject * (*)(void)>,NiObject * (*)(void)>::`vftable'
0x71388D: jz      short loc_7138C0
0x71388F: push    ebx
0x713890: xor     ebx, ebx
0x713892: cmp     [edi+4], ebx
0x713895: jbe     short loc_7138BF
0x713897: push    esi
0x713898: mov     eax, [edi+8]
0x71389B: mov     esi, [eax+ebx*4]
0x71389E: test    esi, esi
0x7138A0: jz      short loc_7138B6
0x7138A2: mov     eax, esi
0x7138A4: mov     ecx, [eax+4]
0x7138A7: mov     esi, [esi]
0x7138A9: push    ecx
0x7138AA: call    FormHeapFree
0x7138AF: add     esp, 4
0x7138B2: test    esi, esi
0x7138B4: jnz     short loc_7138A2
0x7138B6: add     ebx, 1
0x7138B9: cmp     ebx, [edi+4]
0x7138BC: jb      short loc_713898
0x7138BE: pop     esi
0x7138BF: pop     ebx
0x7138C0: mov     ecx, edi
0x7138C2: pop     edi
0x7138C3: jmp     ??1?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@UAE@XZ; NiTPointerMap<char const *,NiObject * (*)(void)>::~NiTPointerMap<char const *,NiObject * (*)(void)>(void)
