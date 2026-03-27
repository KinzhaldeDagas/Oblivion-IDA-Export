0x6E2500: push    ebx
0x6E2501: push    esi
0x6E2502: mov     esi, [esp+8+a2]
0x6E2506: push    edi
0x6E2507: push    esi; a2
0x6E2508: mov     edi, ecx
0x6E250A: call    sub_7009A0
0x6E250F: mov     eax, ds:0B3E0C4h
0x6E2514: push    eax; ArgList
0x6E2515: call    TESOutput_PrintString
0x6E251A: movzx   ebx, word ptr [esi+0Ah]
0x6E251E: movzx   ecx, word ptr [esi+8]
0x6E2522: add     esp, 4
0x6E2525: cmp     ebx, ecx
0x6E2527: mov     [esp+0Ch+a2], eax
0x6E252B: jb      short loc_6E253B
0x6E252D: movzx   edx, word ptr [esi+0Eh]
0x6E2531: add     edx, ebx
0x6E2533: push    edx
0x6E2534: mov     ecx, esi
0x6E2536: call    NiTArray_SetSize
0x6E253B: lea     eax, [esp+0Ch+a2]
0x6E253F: push    eax
0x6E2540: push    ebx
0x6E2541: mov     ecx, esi
0x6E2543: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2548: movzx   ecx, word ptr [edi+8]
0x6E254C: push    ecx; __int16
0x6E254D: push    offset aM_usnumrotkeys; "m_usNumRotKeys"
0x6E2552: call    TESOutput_PrintLabeledUnsignedShort
0x6E2557: movzx   ebx, word ptr [esi+0Ah]
0x6E255B: movzx   edx, word ptr [esi+8]
0x6E255F: add     esp, 8
0x6E2562: cmp     ebx, edx
0x6E2564: mov     [esp+0Ch+a2], eax
0x6E2568: jb      short loc_6E2578
0x6E256A: movzx   eax, word ptr [esi+0Eh]
0x6E256E: add     eax, ebx
0x6E2570: push    eax
0x6E2571: mov     ecx, esi
0x6E2573: call    NiTArray_SetSize
0x6E2578: lea     ecx, [esp+0Ch+a2]
0x6E257C: push    ecx
0x6E257D: push    ebx
0x6E257E: mov     ecx, esi
0x6E2580: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2585: movzx   edx, word ptr [edi+0Ah]
0x6E2589: push    edx; __int16
0x6E258A: push    offset aM_usnumposkeys; "m_usNumPosKeys"
0x6E258F: call    TESOutput_PrintLabeledUnsignedShort
0x6E2594: movzx   ebx, word ptr [esi+0Ah]
0x6E2598: mov     [esp+14h+a2], eax
0x6E259C: movzx   eax, word ptr [esi+8]
0x6E25A0: add     esp, 8
0x6E25A3: cmp     ebx, eax
0x6E25A5: jb      short loc_6E25B5
0x6E25A7: movzx   ecx, word ptr [esi+0Eh]
0x6E25AB: add     ecx, ebx
0x6E25AD: push    ecx
0x6E25AE: mov     ecx, esi
0x6E25B0: call    NiTArray_SetSize
0x6E25B5: lea     edx, [esp+0Ch+a2]
0x6E25B9: push    edx
0x6E25BA: push    ebx
0x6E25BB: mov     ecx, esi
0x6E25BD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E25C2: movzx   eax, word ptr [edi+0Ch]
0x6E25C6: push    eax; __int16
0x6E25C7: push    offset aM_usnumscaleke; "m_usNumScaleKeys"
0x6E25CC: call    TESOutput_PrintLabeledUnsignedShort
0x6E25D1: movzx   edi, word ptr [esi+0Ah]
0x6E25D5: movzx   ecx, word ptr [esi+8]
0x6E25D9: add     esp, 8
0x6E25DC: cmp     edi, ecx
0x6E25DE: mov     [esp+0Ch+a2], eax
0x6E25E2: jb      short loc_6E25F2
0x6E25E4: movzx   edx, word ptr [esi+0Eh]
0x6E25E8: add     edx, edi
0x6E25EA: push    edx
0x6E25EB: mov     ecx, esi
0x6E25ED: call    NiTArray_SetSize
0x6E25F2: lea     eax, [esp+0Ch+a2]
0x6E25F6: push    eax
0x6E25F7: push    edi
0x6E25F8: mov     ecx, esi
0x6E25FA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E25FF: pop     edi
0x6E2600: pop     esi
0x6E2601: pop     ebx
0x6E2602: retn    4
