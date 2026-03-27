0x741C20: push    ebx
0x741C21: push    esi
0x741C22: mov     esi, [esp+8+arg_0]
0x741C26: push    edi
0x741C27: push    esi
0x741C28: mov     ebx, ecx
0x741C2A: call    sub_70BAE0
0x741C2F: mov     eax, ds:0B4020Ch
0x741C34: push    eax; ArgList
0x741C35: call    TESOutput_PrintString
0x741C3A: movzx   edi, word ptr [esi+0Ah]
0x741C3E: movzx   ecx, word ptr [esi+8]
0x741C42: add     esp, 4
0x741C45: cmp     edi, ecx
0x741C47: mov     [esp+0Ch+arg_0], eax
0x741C4B: jb      short loc_741C5B
0x741C4D: movzx   edx, word ptr [esi+0Eh]
0x741C51: add     edx, edi
0x741C53: push    edx
0x741C54: mov     ecx, esi
0x741C56: call    NiTArray_SetSize
0x741C5B: lea     eax, [esp+0Ch+arg_0]
0x741C5F: push    eax
0x741C60: push    edi
0x741C61: mov     ecx, esi
0x741C63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741C68: push    offset aM_kmodelplane; "m_kModelPlane"
0x741C6D: lea     ecx, [ebx+0DCh]
0x741C73: call    sub_716E40
0x741C78: movzx   edi, word ptr [esi+0Ah]
0x741C7C: movzx   ecx, word ptr [esi+8]
0x741C80: cmp     edi, ecx
0x741C82: mov     [esp+0Ch+arg_0], eax
0x741C86: jb      short loc_741C96
0x741C88: movzx   edx, word ptr [esi+0Eh]
0x741C8C: add     edx, edi
0x741C8E: push    edx
0x741C8F: mov     ecx, esi
0x741C91: call    NiTArray_SetSize
0x741C96: lea     eax, [esp+0Ch+arg_0]
0x741C9A: push    eax
0x741C9B: push    edi
0x741C9C: mov     ecx, esi
0x741C9E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741CA3: push    offset aM_kworldplane; "m_kWorldPlane"
0x741CA8: lea     ecx, [ebx+0ECh]
0x741CAE: call    sub_716E40
0x741CB3: movzx   edi, word ptr [esi+0Ah]
0x741CB7: movzx   ecx, word ptr [esi+8]
0x741CBB: cmp     edi, ecx
0x741CBD: mov     [esp+0Ch+arg_0], eax
0x741CC1: jb      short loc_741CD1
0x741CC3: movzx   edx, word ptr [esi+0Eh]
0x741CC7: add     edx, edi
0x741CC9: push    edx
0x741CCA: mov     ecx, esi
0x741CCC: call    NiTArray_SetSize
0x741CD1: lea     eax, [esp+0Ch+arg_0]
0x741CD5: push    eax
0x741CD6: push    edi
0x741CD7: mov     ecx, esi
0x741CD9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741CDE: pop     edi
0x741CDF: pop     esi
0x741CE0: pop     ebx
0x741CE1: retn    4
