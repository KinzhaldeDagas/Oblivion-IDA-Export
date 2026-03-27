0x700B10: push    esi
0x700B11: mov     esi, [esp+4+arg_0]
0x700B15: push    edi
0x700B16: push    esi
0x700B17: call    sub_700540
0x700B1C: mov     eax, ds:0B3F68Ch
0x700B21: push    eax; ArgList
0x700B22: call    TESOutput_PrintString
0x700B27: movzx   edi, word ptr [esi+0Ah]
0x700B2B: movzx   ecx, word ptr [esi+8]
0x700B2F: add     esp, 4
0x700B32: cmp     edi, ecx
0x700B34: mov     [esp+8+arg_0], eax
0x700B38: jb      short loc_700B48
0x700B3A: movzx   edx, word ptr [esi+0Eh]
0x700B3E: add     edx, edi
0x700B40: push    edx
0x700B41: mov     ecx, esi
0x700B43: call    NiTArray_SetSize
0x700B48: lea     eax, [esp+8+arg_0]
0x700B4C: push    eax
0x700B4D: push    edi
0x700B4E: mov     ecx, esi
0x700B50: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x700B55: pop     edi
0x700B56: pop     esi
0x700B57: retn    4
