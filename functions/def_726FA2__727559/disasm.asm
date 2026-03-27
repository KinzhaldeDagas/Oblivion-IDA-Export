0x727559: push    offset aUnknown_4; jumptable 00726FA2 default case
0x72755E: push    offset aM_uitype; "        m_uiType"
0x727563: call    TESOutput_PrintLabeledString
0x727568: mov     esi, dword ptr [esp+8+arg_10]
0x72756C: movzx   edi, word ptr [esi+0Ah]
0x727570: movzx   ecx, word ptr [esi+8]
0x727574: add     esp, 8
0x727577: cmp     edi, ecx
0x727579: mov     [esp+arg_8], eax
0x72757D: jb      short loc_72758D
0x72757F: movzx   edx, word ptr [esi+0Eh]
0x727583: add     edx, edi
0x727585: push    edx
0x727586: mov     ecx, esi
0x727588: call    NiTArray_SetSize
0x72758D: lea     eax, [esp+arg_8]
0x727591: push    eax
0x727592: push    edi
0x727593: mov     ecx, esi
0x727595: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72759A: mov     ecx, [ebx+8]
0x72759D: push    ecx; int
0x72759E: push    offset aM_uiunitsize; "        m_uiUnitSize"
0x7275A3: call    TESOutput_PrintLabeledUnsignedInt
0x7275A8: movzx   edi, word ptr [esi+0Ah]
0x7275AC: movzx   edx, word ptr [esi+8]
0x7275B0: add     esp, 8
0x7275B3: cmp     edi, edx
0x7275B5: mov     dword ptr [esp+arg_10], eax
0x7275B9: jb      short loc_7275C9
0x7275BB: movzx   eax, word ptr [esi+0Eh]
0x7275BF: add     eax, edi
0x7275C1: push    eax
0x7275C2: mov     ecx, esi
0x7275C4: call    NiTArray_SetSize
0x7275C9: lea     ecx, [esp+arg_10]
0x7275CD: push    ecx
0x7275CE: push    edi
0x7275CF: mov     ecx, esi
0x7275D1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7275D6: mov     edx, [ebx+0Ch]
0x7275D9: push    edx; int
0x7275DA: push    offset aM_uitotalsize; "        m_uiTotalSize"
0x7275DF: call    TESOutput_PrintLabeledUnsignedInt
0x7275E4: movzx   edi, word ptr [esi+0Ah]
0x7275E8: mov     dword ptr [esp+8+arg_10], eax
0x7275EC: movzx   eax, word ptr [esi+8]
0x7275F0: add     esp, 8
0x7275F3: cmp     edi, eax
0x7275F5: jb      short loc_727605
0x7275F7: movzx   ecx, word ptr [esi+0Eh]
0x7275FB: add     ecx, edi
0x7275FD: push    ecx
0x7275FE: mov     ecx, esi
0x727600: call    NiTArray_SetSize
0x727605: lea     edx, [esp+arg_10]
0x727609: push    edx
0x72760A: push    edi
0x72760B: mov     ecx, esi
0x72760D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x727612: mov     eax, [ebx+10h]
0x727615: push    eax; int
0x727616: push    offset aM_uistride; "        m_uiStride"
0x72761B: call    TESOutput_PrintLabeledUnsignedInt
0x727620: movzx   edi, word ptr [esi+0Ah]
0x727624: movzx   ecx, word ptr [esi+8]
0x727628: add     esp, 8
0x72762B: cmp     edi, ecx
0x72762D: mov     dword ptr [esp+arg_10], eax
0x727631: jb      short loc_727641
0x727633: movzx   edx, word ptr [esi+0Eh]
0x727637: add     edx, edi
0x727639: push    edx
0x72763A: mov     ecx, esi
0x72763C: call    NiTArray_SetSize
0x727641: lea     eax, [esp+arg_10]
0x727645: push    eax
0x727646: push    edi
0x727647: mov     ecx, esi
0x727649: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72764E: mov     ecx, [ebx+14h]
0x727651: push    ecx; int
0x727652: push    offset aM_uiblockindex; "        m_uiBlockIndex"
0x727657: call    TESOutput_PrintLabeledUnsignedInt
0x72765C: movzx   edi, word ptr [esi+0Ah]
0x727660: movzx   edx, word ptr [esi+8]
0x727664: add     esp, 8
0x727667: cmp     edi, edx
0x727669: mov     dword ptr [esp+arg_10], eax
0x72766D: jb      short loc_72767D
0x72766F: movzx   eax, word ptr [esi+0Eh]
0x727673: add     eax, edi
0x727675: push    eax
0x727676: mov     ecx, esi
0x727678: call    NiTArray_SetSize
0x72767D: lea     ecx, [esp+arg_10]
0x727681: push    ecx
0x727682: push    edi
0x727683: mov     ecx, esi
0x727685: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72768A: mov     edx, [ebx+18h]
0x72768D: push    edx; int
0x72768E: push    offset aM_uiblockoffse; "        m_uiBlockOffset"
0x727693: call    TESOutput_PrintLabeledUnsignedInt
0x727698: movzx   edi, word ptr [esi+0Ah]
0x72769C: mov     dword ptr [esp+8+arg_10], eax
0x7276A0: movzx   eax, word ptr [esi+8]
0x7276A4: add     esp, 8
0x7276A7: cmp     edi, eax
0x7276A9: jb      short loc_7276B9
0x7276AB: movzx   ecx, word ptr [esi+0Eh]
0x7276AF: add     ecx, edi
0x7276B1: push    ecx
0x7276B2: mov     ecx, esi
0x7276B4: call    NiTArray_SetSize
0x7276B9: lea     edx, [esp+arg_10]
0x7276BD: push    edx
0x7276BE: push    edi
0x7276BF: mov     ecx, esi
0x7276C1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7276C6: mov     al, [ebx]
0x7276C8: and     al, 1
0x7276CA: mov     [esp+arg_10], al
0x7276CE: mov     ecx, dword ptr [esp+arg_10]
0x7276D2: push    ecx; char
0x7276D3: push    offset aKeep; "        Keep"
0x7276D8: call    TESOutput_PrintLabeledBool
0x7276DD: movzx   edi, word ptr [esi+0Ah]
0x7276E1: movzx   edx, word ptr [esi+8]
0x7276E5: add     esp, 8
0x7276E8: cmp     edi, edx
0x7276EA: mov     dword ptr [esp+arg_10], eax
0x7276EE: jb      short loc_7276FE
0x7276F0: movzx   eax, word ptr [esi+0Eh]
0x7276F4: add     eax, edi
0x7276F6: push    eax
0x7276F7: mov     ecx, esi
0x7276F9: call    NiTArray_SetSize
0x7276FE: lea     ecx, [esp+arg_10]
0x727702: push    ecx
0x727703: push    edi
0x727704: mov     ecx, esi
0x727706: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72770B: movzx   eax, byte ptr [ebx]
0x72770E: and     eax, 6
0x727711: sub     eax, 2
0x727714: jz      short loc_727750
0x727716: sub     eax, 1
0x727719: jz      short loc_727749
0x72771B: sub     eax, 1
0x72771E: jnz     short loc_727749
0x727720: push    offset aVolatile; "VOLATILE"
0x727725: push    offset aConsistency; "        Consistency"
0x72772A: call    TESOutput_PrintLabeledString
0x72772F: add     esp, 8
0x727732: lea     edx, [esp+arg_10]
0x727736: push    edx
0x727737: mov     ecx, esi
0x727739: mov     dword ptr [esp+4+arg_10], eax
0x72773D: call    NiTArray_Add
0x727742: pop     edi
0x727743: pop     esi
0x727744: pop     ebx
0x727745: pop     ecx
0x727746: retn    4
0x727749: push    offset aStatic; "STATIC"
0x72774E: jmp     short loc_727755
0x727750: push    offset aMutable; "MUTABLE"
0x727755: push    offset aConsistency; "        Consistency"
0x72775A: call    TESOutput_PrintLabeledString
0x72775F: movzx   edi, word ptr [esi+0Ah]
0x727763: mov     dword ptr [esp+8+arg_10], eax
0x727767: movzx   eax, word ptr [esi+8]
0x72776B: add     esp, 8
0x72776E: cmp     edi, eax
0x727770: jb      short loc_727780
0x727772: movzx   ecx, word ptr [esi+0Eh]
0x727776: add     ecx, edi
0x727778: push    ecx
0x727779: mov     ecx, esi
0x72777B: call    NiTArray_SetSize
0x727780: lea     edx, [esp+arg_10]
0x727784: push    edx
0x727785: push    edi
0x727786: mov     ecx, esi
0x727788: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72778D: pop     edi
0x72778E: pop     esi
0x72778F: pop     ebx
0x727790: pop     ecx
0x727791: retn    4
