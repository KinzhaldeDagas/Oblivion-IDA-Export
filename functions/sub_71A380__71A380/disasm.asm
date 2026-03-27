0x71A380: push    ebx
0x71A381: push    esi
0x71A382: mov     esi, [esp+8+arg_0]
0x71A386: push    edi
0x71A387: push    esi
0x71A388: mov     edi, ecx
0x71A38A: call    sub_732EF0
0x71A38F: mov     eax, ds:0B3FD0Ch
0x71A394: push    eax; ArgList
0x71A395: call    TESOutput_PrintString
0x71A39A: movzx   ebx, word ptr [esi+0Ah]
0x71A39E: movzx   ecx, word ptr [esi+8]
0x71A3A2: add     esp, 4
0x71A3A5: cmp     ebx, ecx
0x71A3A7: mov     [esp+0Ch+arg_0], eax
0x71A3AB: jb      short loc_71A3BB
0x71A3AD: movzx   edx, word ptr [esi+0Eh]
0x71A3B1: add     edx, ebx
0x71A3B3: push    edx
0x71A3B4: mov     ecx, esi
0x71A3B6: call    NiTArray_SetSize
0x71A3BB: lea     eax, [esp+0Ch+arg_0]
0x71A3BF: push    eax
0x71A3C0: push    ebx
0x71A3C1: mov     ecx, esi
0x71A3C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A3C8: movzx   ecx, word ptr [edi+44h]
0x71A3CC: push    ecx; __int16
0x71A3CD: push    offset aM_usstrips; "m_usStrips"
0x71A3D2: call    TESOutput_PrintLabeledUnsignedShort
0x71A3D7: movzx   ebx, word ptr [esi+0Ah]
0x71A3DB: movzx   edx, word ptr [esi+8]
0x71A3DF: add     esp, 8
0x71A3E2: cmp     ebx, edx
0x71A3E4: mov     [esp+0Ch+arg_0], eax
0x71A3E8: jb      short loc_71A3F8
0x71A3EA: movzx   eax, word ptr [esi+0Eh]
0x71A3EE: add     eax, ebx
0x71A3F0: push    eax
0x71A3F1: mov     ecx, esi
0x71A3F3: call    NiTArray_SetSize
0x71A3F8: lea     ecx, [esp+0Ch+arg_0]
0x71A3FC: push    ecx
0x71A3FD: push    ebx
0x71A3FE: mov     ecx, esi
0x71A400: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A405: mov     edx, [edi+48h]
0x71A408: push    edx; int
0x71A409: push    offset aM_pusstripleng; "m_pusStripLengths"
0x71A40E: call    TESOutput_PrintLabeledPointer
0x71A413: movzx   ebx, word ptr [esi+0Ah]
0x71A417: mov     [esp+14h+arg_0], eax
0x71A41B: movzx   eax, word ptr [esi+8]
0x71A41F: add     esp, 8
0x71A422: cmp     ebx, eax
0x71A424: jb      short loc_71A434
0x71A426: movzx   ecx, word ptr [esi+0Eh]
0x71A42A: add     ecx, ebx
0x71A42C: push    ecx
0x71A42D: mov     ecx, esi
0x71A42F: call    NiTArray_SetSize
0x71A434: lea     edx, [esp+0Ch+arg_0]
0x71A438: push    edx
0x71A439: push    ebx
0x71A43A: mov     ecx, esi
0x71A43C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A441: mov     eax, [edi+4Ch]
0x71A444: push    eax; int
0x71A445: push    offset aM_pusstriplist; "m_pusStripLists"
0x71A44A: call    TESOutput_PrintLabeledPointer
0x71A44F: movzx   edi, word ptr [esi+0Ah]
0x71A453: movzx   ecx, word ptr [esi+8]
0x71A457: add     esp, 8
0x71A45A: cmp     edi, ecx
0x71A45C: mov     [esp+0Ch+arg_0], eax
0x71A460: jb      short loc_71A470
0x71A462: movzx   edx, word ptr [esi+0Eh]
0x71A466: add     edx, edi
0x71A468: push    edx
0x71A469: mov     ecx, esi
0x71A46B: call    NiTArray_SetSize
0x71A470: lea     eax, [esp+0Ch+arg_0]
0x71A474: push    eax
0x71A475: push    edi
0x71A476: mov     ecx, esi
0x71A478: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A47D: pop     edi
0x71A47E: pop     esi
0x71A47F: pop     ebx
0x71A480: retn    4
