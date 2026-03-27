0x6E8B70: push    ebx
0x6E8B71: push    esi
0x6E8B72: mov     esi, [esp+8+a2]
0x6E8B76: push    edi
0x6E8B77: push    esi; a2
0x6E8B78: mov     ebx, ecx
0x6E8B7A: call    sub_7009A0
0x6E8B7F: mov     eax, ds:0B3E838h
0x6E8B84: push    eax; ArgList
0x6E8B85: call    TESOutput_PrintString
0x6E8B8A: movzx   edi, word ptr [esi+0Ah]
0x6E8B8E: movzx   ecx, word ptr [esi+8]
0x6E8B92: add     esp, 4
0x6E8B95: cmp     edi, ecx
0x6E8B97: mov     [esp+0Ch+a2], eax
0x6E8B9B: jb      short loc_6E8BAB
0x6E8B9D: movzx   edx, word ptr [esi+0Eh]
0x6E8BA1: add     edx, edi
0x6E8BA3: push    edx
0x6E8BA4: mov     ecx, esi
0x6E8BA6: call    NiTArray_SetSize
0x6E8BAB: lea     eax, [esp+0Ch+a2]
0x6E8BAF: push    eax
0x6E8BB0: push    edi
0x6E8BB1: mov     ecx, esi
0x6E8BB3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E8BB8: mov     ecx, [ebx+8]
0x6E8BBB: push    ecx; int
0x6E8BBC: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6E8BC1: call    TESOutput_PrintLabeledUnsignedInt
0x6E8BC6: movzx   edi, word ptr [esi+0Ah]
0x6E8BCA: movzx   edx, word ptr [esi+8]
0x6E8BCE: add     esp, 8
0x6E8BD1: cmp     edi, edx
0x6E8BD3: mov     [esp+0Ch+a2], eax
0x6E8BD7: jb      short loc_6E8BE7
0x6E8BD9: movzx   eax, word ptr [esi+0Eh]
0x6E8BDD: add     eax, edi
0x6E8BDF: push    eax
0x6E8BE0: mov     ecx, esi
0x6E8BE2: call    NiTArray_SetSize
0x6E8BE7: lea     ecx, [esp+0Ch+a2]
0x6E8BEB: push    ecx
0x6E8BEC: push    edi
0x6E8BED: mov     ecx, esi
0x6E8BEF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E8BF4: pop     edi
0x6E8BF5: pop     esi
0x6E8BF6: pop     ebx
0x6E8BF7: retn    4
