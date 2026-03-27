0x6EAD90: push    ebx
0x6EAD91: push    esi
0x6EAD92: mov     esi, [esp+8+arg_0]
0x6EAD96: push    edi
0x6EAD97: push    esi
0x6EAD98: mov     ebx, ecx
0x6EAD9A: call    sub_6CDDB0
0x6EAD9F: mov     eax, ds:0B3E980h
0x6EADA4: push    eax; ArgList
0x6EADA5: call    TESOutput_PrintString
0x6EADAA: movzx   edi, word ptr [esi+0Ah]
0x6EADAE: movzx   ecx, word ptr [esi+8]
0x6EADB2: add     esp, 4
0x6EADB5: cmp     edi, ecx
0x6EADB7: mov     [esp+0Ch+arg_0], eax
0x6EADBB: jb      short loc_6EADCB
0x6EADBD: movzx   edx, word ptr [esi+0Eh]
0x6EADC1: add     edx, edi
0x6EADC3: push    edx
0x6EADC4: mov     ecx, esi
0x6EADC6: call    NiTArray_SetSize
0x6EADCB: lea     eax, [esp+0Ch+arg_0]
0x6EADCF: push    eax
0x6EADD0: push    edi
0x6EADD1: mov     ecx, esi
0x6EADD3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EADD8: push    offset aM_kpoint3value; "m_kPoint3Value"
0x6EADDD: lea     ecx, [ebx+30h]
0x6EADE0: call    sub_707280
0x6EADE5: movzx   edi, word ptr [esi+0Ah]
0x6EADE9: movzx   ecx, word ptr [esi+8]
0x6EADED: cmp     edi, ecx
0x6EADEF: mov     [esp+0Ch+arg_0], eax
0x6EADF3: jb      short loc_6EAE03
0x6EADF5: movzx   edx, word ptr [esi+0Eh]
0x6EADF9: add     edx, edi
0x6EADFB: push    edx
0x6EADFC: mov     ecx, esi
0x6EADFE: call    NiTArray_SetSize
0x6EAE03: lea     eax, [esp+0Ch+arg_0]
0x6EAE07: push    eax
0x6EAE08: push    edi
0x6EAE09: mov     ecx, esi
0x6EAE0B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EAE10: pop     edi
0x6EAE11: pop     esi
0x6EAE12: pop     ebx
0x6EAE13: retn    4
