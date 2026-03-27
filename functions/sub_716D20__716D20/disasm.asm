0x716D20: push    ebx
0x716D21: push    esi
0x716D22: mov     esi, [esp+8+arg_0]
0x716D26: push    edi
0x716D27: push    esi
0x716D28: mov     ebx, ecx
0x716D2A: call    sub_721730
0x716D2F: mov     eax, ds:0B3FCC0h
0x716D34: push    eax; ArgList
0x716D35: call    TESOutput_PrintString
0x716D3A: movzx   edi, word ptr [esi+0Ah]
0x716D3E: movzx   ecx, word ptr [esi+8]
0x716D42: add     esp, 4
0x716D45: cmp     edi, ecx
0x716D47: mov     [esp+0Ch+arg_0], eax
0x716D4B: jb      short loc_716D5B
0x716D4D: movzx   edx, word ptr [esi+0Eh]
0x716D51: add     edx, edi
0x716D53: push    edx
0x716D54: mov     ecx, esi
0x716D56: call    NiTArray_SetSize
0x716D5B: lea     eax, [esp+0Ch+arg_0]
0x716D5F: push    eax
0x716D60: push    edi
0x716D61: mov     ecx, esi
0x716D63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716D68: mov     ecx, [ebx+0Ch]
0x716D6B: push    ecx; int
0x716D6C: push    offset aM_pstring; "m_pString"
0x716D71: call    TESOutput_PrintLabeledString
0x716D76: movzx   edi, word ptr [esi+0Ah]
0x716D7A: movzx   edx, word ptr [esi+8]
0x716D7E: add     esp, 8
0x716D81: cmp     edi, edx
0x716D83: mov     [esp+0Ch+arg_0], eax
0x716D87: jb      short loc_716D97
0x716D89: movzx   eax, word ptr [esi+0Eh]
0x716D8D: add     eax, edi
0x716D8F: push    eax
0x716D90: mov     ecx, esi
0x716D92: call    NiTArray_SetSize
0x716D97: lea     ecx, [esp+0Ch+arg_0]
0x716D9B: push    ecx
0x716D9C: push    edi
0x716D9D: mov     ecx, esi
0x716D9F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716DA4: pop     edi
0x716DA5: pop     esi
0x716DA6: pop     ebx
0x716DA7: retn    4
