0x6DA9D0: push    ebx
0x6DA9D1: push    esi
0x6DA9D2: mov     esi, [esp+8+arg_0]
0x6DA9D6: push    edi
0x6DA9D7: push    esi
0x6DA9D8: mov     ebx, ecx
0x6DA9DA: call    sub_6EC460
0x6DA9DF: mov     eax, ds:0B3DCF0h
0x6DA9E4: push    eax; ArgList
0x6DA9E5: call    TESOutput_PrintString
0x6DA9EA: movzx   edi, word ptr [esi+0Ah]
0x6DA9EE: movzx   ecx, word ptr [esi+8]
0x6DA9F2: add     esp, 4
0x6DA9F5: cmp     edi, ecx
0x6DA9F7: mov     [esp+0Ch+arg_0], eax
0x6DA9FB: jb      short loc_6DAA0B
0x6DA9FD: movzx   edx, word ptr [esi+0Eh]
0x6DAA01: add     edx, edi
0x6DAA03: push    edx
0x6DAA04: mov     ecx, esi
0x6DAA06: call    NiTArray_SetSize
0x6DAA0B: lea     eax, [esp+0Ch+arg_0]
0x6DAA0F: push    eax
0x6DAA10: push    edi
0x6DAA11: mov     ecx, esi
0x6DAA13: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DAA18: push    offset aM_kpoint3value; "m_kPoint3Value"
0x6DAA1D: lea     ecx, [ebx+0Ch]
0x6DAA20: call    sub_707280
0x6DAA25: movzx   edi, word ptr [esi+0Ah]
0x6DAA29: movzx   ecx, word ptr [esi+8]
0x6DAA2D: cmp     edi, ecx
0x6DAA2F: mov     [esp+0Ch+arg_0], eax
0x6DAA33: jb      short loc_6DAA43
0x6DAA35: movzx   edx, word ptr [esi+0Eh]
0x6DAA39: add     edx, edi
0x6DAA3B: push    edx
0x6DAA3C: mov     ecx, esi
0x6DAA3E: call    NiTArray_SetSize
0x6DAA43: lea     eax, [esp+0Ch+arg_0]
0x6DAA47: push    eax
0x6DAA48: push    edi
0x6DAA49: mov     ecx, esi
0x6DAA4B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DAA50: mov     ebx, [ebx+18h]
0x6DAA53: push    ebx; int
0x6DAA54: push    offset aM_sppoint3data; "m_spPoint3Data"
0x6DAA59: call    TESOutput_PrintLabeledPointer
0x6DAA5E: movzx   edi, word ptr [esi+0Ah]
0x6DAA62: movzx   ecx, word ptr [esi+8]
0x6DAA66: add     esp, 8
0x6DAA69: cmp     edi, ecx
0x6DAA6B: mov     [esp+0Ch+arg_0], eax
0x6DAA6F: jb      short loc_6DAA7F
0x6DAA71: movzx   edx, word ptr [esi+0Eh]
0x6DAA75: add     edx, edi
0x6DAA77: push    edx
0x6DAA78: mov     ecx, esi
0x6DAA7A: call    NiTArray_SetSize
0x6DAA7F: lea     eax, [esp+0Ch+arg_0]
0x6DAA83: push    eax
0x6DAA84: push    edi
0x6DAA85: mov     ecx, esi
0x6DAA87: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DAA8C: pop     edi
0x6DAA8D: pop     esi
0x6DAA8E: pop     ebx
0x6DAA8F: retn    4
