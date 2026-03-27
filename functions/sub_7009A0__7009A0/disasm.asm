0x7009A0: push    ecx
0x7009A1: mov     eax, ds:0B3F684h
0x7009A6: push    ebx
0x7009A7: push    esi
0x7009A8: push    edi
0x7009A9: push    eax; ArgList
0x7009AA: mov     ebx, ecx
0x7009AC: call    TESOutput_PrintString
0x7009B1: mov     esi, [esp+14h+arg_0]
0x7009B5: movzx   edi, word ptr [esi+0Ah]
0x7009B9: movzx   ecx, word ptr [esi+8]
0x7009BD: add     esp, 4
0x7009C0: cmp     edi, ecx
0x7009C2: mov     [esp+10h+var_4], eax
0x7009C6: jb      short loc_7009D6
0x7009C8: movzx   edx, word ptr [esi+0Eh]
0x7009CC: add     edx, edi
0x7009CE: push    edx
0x7009CF: mov     ecx, esi
0x7009D1: call    NiTArray_SetSize
0x7009D6: lea     eax, [esp+10h+var_4]
0x7009DA: push    eax
0x7009DB: push    edi
0x7009DC: mov     ecx, esi
0x7009DE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7009E3: push    ebx; int
0x7009E4: push    offset aThis; "this"
0x7009E9: call    TESOutput_PrintLabeledPointer
0x7009EE: movzx   edi, word ptr [esi+0Ah]
0x7009F2: movzx   ecx, word ptr [esi+8]
0x7009F6: add     esp, 8
0x7009F9: cmp     edi, ecx
0x7009FB: mov     [esp+10h+arg_0], eax
0x7009FF: jb      short loc_700A0F
0x700A01: movzx   edx, word ptr [esi+0Eh]
0x700A05: add     edx, edi
0x700A07: push    edx
0x700A08: mov     ecx, esi
0x700A0A: call    NiTArray_SetSize
0x700A0F: lea     eax, [esp+10h+arg_0]
0x700A13: push    eax
0x700A14: push    edi
0x700A15: mov     ecx, esi
0x700A17: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x700A1C: mov     eax, [ebx+4]
0x700A1F: push    eax; int
0x700A20: push    offset aM_uirefcount; "m_uiRefCount"
0x700A25: call    TESOutput_PrintLabeledUnsignedInt
0x700A2A: movzx   edi, word ptr [esi+0Ah]
0x700A2E: movzx   ecx, word ptr [esi+8]
0x700A32: add     esp, 8
0x700A35: cmp     edi, ecx
0x700A37: mov     [esp+10h+arg_0], eax
0x700A3B: jb      short loc_700A4B
0x700A3D: movzx   edx, word ptr [esi+0Eh]
0x700A41: add     edx, edi
0x700A43: push    edx
0x700A44: mov     ecx, esi
0x700A46: call    NiTArray_SetSize
0x700A4B: lea     eax, [esp+10h+arg_0]
0x700A4F: push    eax
0x700A50: push    edi
0x700A51: mov     ecx, esi
0x700A53: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x700A58: pop     edi
0x700A59: pop     esi
0x700A5A: pop     ebx
0x700A5B: pop     ecx
0x700A5C: retn    4
