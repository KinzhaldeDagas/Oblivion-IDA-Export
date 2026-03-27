0x723620: push    ebx
0x723621: push    esi
0x723622: mov     esi, [esp+8+arg_0]
0x723626: push    edi
0x723627: push    esi
0x723628: mov     ebx, ecx
0x72362A: call    sub_7086B0
0x72362F: mov     eax, ds:0B3FD5Ch
0x723634: push    eax; ArgList
0x723635: call    TESOutput_PrintString
0x72363A: movzx   edi, word ptr [esi+0Ah]
0x72363E: movzx   ecx, word ptr [esi+8]
0x723642: add     esp, 4
0x723645: cmp     edi, ecx
0x723647: mov     [esp+0Ch+arg_0], eax
0x72364B: jb      short loc_72365B
0x72364D: movzx   edx, word ptr [esi+0Eh]
0x723651: add     edx, edi
0x723653: push    edx
0x723654: mov     ecx, esi
0x723656: call    NiTArray_SetSize
0x72365B: lea     eax, [esp+0Ch+arg_0]
0x72365F: push    eax
0x723660: push    edi
0x723661: mov     ecx, esi
0x723663: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x723668: mov     eax, [ebx+0B4h]
0x72366E: push    eax; int
0x72366F: push    offset aGeomdata; "GeomData"
0x723674: call    TESOutput_PrintLabeledPointer
0x723679: movzx   edi, word ptr [esi+0Ah]
0x72367D: movzx   ecx, word ptr [esi+8]
0x723681: add     esp, 8
0x723684: cmp     edi, ecx
0x723686: mov     [esp+0Ch+arg_0], eax
0x72368A: jb      short loc_72369A
0x72368C: movzx   edx, word ptr [esi+0Eh]
0x723690: add     edx, edi
0x723692: push    edx
0x723693: mov     ecx, esi
0x723695: call    NiTArray_SetSize
0x72369A: lea     eax, [esp+0Ch+arg_0]
0x72369E: push    eax
0x72369F: push    edi
0x7236A0: mov     ecx, esi
0x7236A2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7236A7: mov     ecx, [ebx+0BCh]
0x7236AD: test    ecx, ecx
0x7236AF: jz      short loc_7236F3
0x7236B1: mov     edx, [ecx]
0x7236B3: mov     eax, [edx+4]
0x7236B6: call    eax
0x7236B8: mov     eax, [eax]
0x7236BA: push    eax; int
0x7236BB: push    offset aShader_0; "shader"
0x7236C0: call    TESOutput_PrintLabeledString
0x7236C5: movzx   edi, word ptr [esi+0Ah]
0x7236C9: movzx   ecx, word ptr [esi+8]
0x7236CD: add     esp, 8
0x7236D0: cmp     edi, ecx
0x7236D2: mov     [esp+0Ch+arg_0], eax
0x7236D6: jb      short loc_7236E6
0x7236D8: movzx   edx, word ptr [esi+0Eh]
0x7236DC: add     edx, edi
0x7236DE: push    edx
0x7236DF: mov     ecx, esi
0x7236E1: call    NiTArray_SetSize
0x7236E6: lea     eax, [esp+0Ch+arg_0]
0x7236EA: push    eax
0x7236EB: push    edi
0x7236EC: mov     ecx, esi
0x7236EE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7236F3: mov     ebx, [ebx+0B8h]
0x7236F9: test    ebx, ebx
0x7236FB: jz      short loc_723740
0x7236FD: mov     eax, [ebx+0Ch]
0x723700: test    eax, eax
0x723702: jz      short loc_723740
0x723704: mov     eax, [eax+8]
0x723707: push    eax; int
0x723708: push    offset aSkinPartitions; "skin partitions"
0x72370D: call    TESOutput_PrintLabeledUnsignedInt
0x723712: movzx   edi, word ptr [esi+0Ah]
0x723716: movzx   ecx, word ptr [esi+8]
0x72371A: add     esp, 8
0x72371D: cmp     edi, ecx
0x72371F: mov     [esp+0Ch+arg_0], eax
0x723723: jb      short loc_723733
0x723725: movzx   edx, word ptr [esi+0Eh]
0x723729: add     edx, edi
0x72372B: push    edx
0x72372C: mov     ecx, esi
0x72372E: call    NiTArray_SetSize
0x723733: lea     eax, [esp+0Ch+arg_0]
0x723737: push    eax
0x723738: push    edi
0x723739: mov     ecx, esi
0x72373B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x723740: pop     edi
0x723741: pop     esi
0x723742: pop     ebx
0x723743: retn    4
