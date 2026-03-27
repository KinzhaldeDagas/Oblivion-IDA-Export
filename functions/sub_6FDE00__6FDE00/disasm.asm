0x6FDE00: push    ecx
0x6FDE01: mov     eax, ds:0B3F52Ch
0x6FDE06: push    ebx
0x6FDE07: push    esi
0x6FDE08: push    edi
0x6FDE09: push    eax; ArgList
0x6FDE0A: mov     ebx, ecx
0x6FDE0C: call    TESOutput_PrintString
0x6FDE11: mov     esi, [esp+14h+arg_0]
0x6FDE15: movzx   edi, word ptr [esi+0Ah]
0x6FDE19: movzx   ecx, word ptr [esi+8]
0x6FDE1D: add     esp, 4
0x6FDE20: cmp     edi, ecx
0x6FDE22: mov     [esp+10h+var_4], eax
0x6FDE26: jb      short loc_6FDE36
0x6FDE28: movzx   edx, word ptr [esi+0Eh]
0x6FDE2C: add     edx, edi
0x6FDE2E: push    edx
0x6FDE2F: mov     ecx, esi
0x6FDE31: call    NiTArray_SetSize
0x6FDE36: lea     eax, [esp+10h+var_4]
0x6FDE3A: push    eax
0x6FDE3B: push    edi
0x6FDE3C: mov     ecx, esi
0x6FDE3E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FDE43: mov     ecx, [ebx+3Ch]
0x6FDE46: push    ecx; int
0x6FDE47: push    offset aM_ilod; "m_iLOD"
0x6FDE4C: call    TESOutput_PrintLabeledSignedInt
0x6FDE51: movzx   edi, word ptr [esi+0Ah]
0x6FDE55: movzx   edx, word ptr [esi+8]
0x6FDE59: add     esp, 8
0x6FDE5C: cmp     edi, edx
0x6FDE5E: mov     [esp+10h+arg_0], eax
0x6FDE62: jb      short loc_6FDE72
0x6FDE64: movzx   eax, word ptr [esi+0Eh]
0x6FDE68: add     eax, edi
0x6FDE6A: push    eax
0x6FDE6B: mov     ecx, esi
0x6FDE6D: call    NiTArray_SetSize
0x6FDE72: lea     ecx, [esp+10h+arg_0]
0x6FDE76: push    ecx
0x6FDE77: push    edi
0x6FDE78: mov     ecx, esi
0x6FDE7A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FDE7F: mov     edx, [ebx+40h]
0x6FDE82: push    edx; int
0x6FDE83: push    offset aM_uinumlods; "m_uiNumLODs"
0x6FDE88: call    TESOutput_PrintLabeledUnsignedInt
0x6FDE8D: movzx   edi, word ptr [esi+0Ah]
0x6FDE91: mov     [esp+18h+arg_0], eax
0x6FDE95: movzx   eax, word ptr [esi+8]
0x6FDE99: add     esp, 8
0x6FDE9C: cmp     edi, eax
0x6FDE9E: jb      short loc_6FDEAE
0x6FDEA0: movzx   ecx, word ptr [esi+0Eh]
0x6FDEA4: add     ecx, edi
0x6FDEA6: push    ecx
0x6FDEA7: mov     ecx, esi
0x6FDEA9: call    NiTArray_SetSize
0x6FDEAE: lea     edx, [esp+10h+arg_0]
0x6FDEB2: push    edx
0x6FDEB3: push    edi
0x6FDEB4: mov     ecx, esi
0x6FDEB6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FDEBB: pop     edi
0x6FDEBC: pop     esi
0x6FDEBD: pop     ebx
0x6FDEBE: pop     ecx
0x6FDEBF: retn    4
