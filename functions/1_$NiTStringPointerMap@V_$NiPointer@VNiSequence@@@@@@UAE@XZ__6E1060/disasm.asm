0x6E1060: push    edi
0x6E1061: mov     edi, ecx
0x6E1063: cmp     byte ptr [edi+10h], 0
0x6E1067: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDV?$NiPointer@VNiSequence@@@@@@V?$NiPointer@VNiSequence@@@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiSequence>>,NiPointer<NiSequence>>::`vftable'
0x6E106D: jz      short loc_6E10A0
0x6E106F: push    ebx
0x6E1070: xor     ebx, ebx
0x6E1072: cmp     [edi+4], ebx
0x6E1075: jbe     short loc_6E109F
0x6E1077: push    esi
0x6E1078: mov     eax, [edi+8]
0x6E107B: mov     esi, [eax+ebx*4]
0x6E107E: test    esi, esi
0x6E1080: jz      short loc_6E1096
0x6E1082: mov     eax, esi
0x6E1084: mov     ecx, [eax+4]
0x6E1087: mov     esi, [esi]
0x6E1089: push    ecx
0x6E108A: call    FormHeapFree
0x6E108F: add     esp, 4
0x6E1092: test    esi, esi
0x6E1094: jnz     short loc_6E1082
0x6E1096: add     ebx, 1
0x6E1099: cmp     ebx, [edi+4]
0x6E109C: jb      short loc_6E1078
0x6E109E: pop     esi
0x6E109F: pop     ebx
0x6E10A0: mov     ecx, edi
0x6E10A2: pop     edi
0x6E10A3: jmp     ??1?$NiTPointerMap@PBDV?$NiPointer@VNiSequence@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(void)
