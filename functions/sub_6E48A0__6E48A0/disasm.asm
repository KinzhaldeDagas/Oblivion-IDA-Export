0x6E48A0: push    ebx
0x6E48A1: push    esi
0x6E48A2: mov     esi, [esp+8+a2]
0x6E48A6: push    edi
0x6E48A7: push    esi; a2
0x6E48A8: mov     ebx, ecx
0x6E48AA: call    sub_7009A0
0x6E48AF: mov     eax, ds:0B3E350h
0x6E48B4: push    eax; ArgList
0x6E48B5: call    TESOutput_PrintString
0x6E48BA: movzx   edi, word ptr [esi+0Ah]
0x6E48BE: movzx   ecx, word ptr [esi+8]
0x6E48C2: add     esp, 4
0x6E48C5: cmp     edi, ecx
0x6E48C7: mov     [esp+0Ch+a2], eax
0x6E48CB: jb      short loc_6E48DB
0x6E48CD: movzx   edx, word ptr [esi+0Eh]
0x6E48D1: add     edx, edi
0x6E48D3: push    edx
0x6E48D4: mov     ecx, esi
0x6E48D6: call    NiTArray_SetSize
0x6E48DB: lea     eax, [esp+0Ch+a2]
0x6E48DF: push    eax
0x6E48E0: push    edi
0x6E48E1: mov     ecx, esi
0x6E48E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E48E8: mov     ecx, [ebx+8]
0x6E48EB: push    ecx; int
0x6E48EC: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6E48F1: call    TESOutput_PrintLabeledUnsignedInt
0x6E48F6: movzx   edi, word ptr [esi+0Ah]
0x6E48FA: movzx   edx, word ptr [esi+8]
0x6E48FE: add     esp, 8
0x6E4901: cmp     edi, edx
0x6E4903: mov     [esp+0Ch+a2], eax
0x6E4907: jb      short loc_6E4917
0x6E4909: movzx   eax, word ptr [esi+0Eh]
0x6E490D: add     eax, edi
0x6E490F: push    eax
0x6E4910: mov     ecx, esi
0x6E4912: call    NiTArray_SetSize
0x6E4917: lea     ecx, [esp+0Ch+a2]
0x6E491B: push    ecx
0x6E491C: push    edi
0x6E491D: mov     ecx, esi
0x6E491F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E4924: pop     edi
0x6E4925: pop     esi
0x6E4926: pop     ebx
0x6E4927: retn    4
