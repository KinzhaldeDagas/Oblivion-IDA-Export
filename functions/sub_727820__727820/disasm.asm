0x727820: push    ecx
0x727821: push    ebx
0x727822: push    esi
0x727823: mov     ebx, ecx
0x727825: mov     eax, [ebx+4]
0x727828: push    edi
0x727829: push    eax; int
0x72782A: push    offset aM_uidatablocks; "        m_uiDataBlockSize"
0x72782F: call    TESOutput_PrintLabeledUnsignedInt
0x727834: mov     esi, [esp+18h+arg_0]
0x727838: movzx   edi, word ptr [esi+0Ah]
0x72783C: movzx   ecx, word ptr [esi+8]
0x727840: add     esp, 8
0x727843: cmp     edi, ecx
0x727845: mov     [esp+10h+var_4], eax
0x727849: jb      short loc_727859
0x72784B: movzx   edx, word ptr [esi+0Eh]
0x72784F: add     edx, edi
0x727851: push    edx
0x727852: mov     ecx, esi
0x727854: call    NiTArray_SetSize
0x727859: lea     eax, [esp+10h+var_4]
0x72785D: push    eax
0x72785E: push    edi
0x72785F: mov     ecx, esi
0x727861: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x727866: mov     ecx, [ebx+8]
0x727869: push    ecx; int
0x72786A: push    offset aM_pucdatablock; "        m_pucDataBlock"
0x72786F: call    TESOutput_PrintLabeledPointer
0x727874: movzx   edi, word ptr [esi+0Ah]
0x727878: movzx   edx, word ptr [esi+8]
0x72787C: add     esp, 8
0x72787F: cmp     edi, edx
0x727881: mov     [esp+10h+arg_0], eax
0x727885: jb      short loc_727895
0x727887: movzx   eax, word ptr [esi+0Eh]
0x72788B: add     eax, edi
0x72788D: push    eax
0x72788E: mov     ecx, esi
0x727890: call    NiTArray_SetSize
0x727895: lea     ecx, [esp+10h+arg_0]
0x727899: push    ecx
0x72789A: push    edi
0x72789B: mov     ecx, esi
0x72789D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7278A2: pop     edi
0x7278A3: pop     esi
0x7278A4: pop     ebx
0x7278A5: pop     ecx
0x7278A6: retn    4
