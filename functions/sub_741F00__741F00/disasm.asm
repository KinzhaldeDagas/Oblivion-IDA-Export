0x741F00: push    ebx
0x741F01: push    esi
0x741F02: mov     esi, [esp+8+arg_0]
0x741F06: push    edi
0x741F07: push    esi
0x741F08: mov     ebx, ecx
0x741F0A: call    sub_721730
0x741F0F: mov     eax, ds:0B40214h
0x741F14: push    eax; ArgList
0x741F15: call    TESOutput_PrintString
0x741F1A: movzx   edi, word ptr [esi+0Ah]
0x741F1E: movzx   ecx, word ptr [esi+8]
0x741F22: add     esp, 4
0x741F25: cmp     edi, ecx
0x741F27: mov     [esp+0Ch+arg_0], eax
0x741F2B: jb      short loc_741F3B
0x741F2D: movzx   edx, word ptr [esi+0Eh]
0x741F31: add     edx, edi
0x741F33: push    edx
0x741F34: mov     ecx, esi
0x741F36: call    NiTArray_SetSize
0x741F3B: lea     eax, [esp+0Ch+arg_0]
0x741F3F: push    eax
0x741F40: push    edi
0x741F41: mov     ecx, esi
0x741F43: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741F48: movzx   ecx, byte ptr [ebx+0Ch]
0x741F4C: push    ecx; char
0x741F4D: push    offset aM_bvalue; "m_bValue"
0x741F52: call    TESOutput_PrintLabeledBool
0x741F57: movzx   edi, word ptr [esi+0Ah]
0x741F5B: movzx   edx, word ptr [esi+8]
0x741F5F: add     esp, 8
0x741F62: cmp     edi, edx
0x741F64: mov     [esp+0Ch+arg_0], eax
0x741F68: jb      short loc_741F78
0x741F6A: movzx   eax, word ptr [esi+0Eh]
0x741F6E: add     eax, edi
0x741F70: push    eax
0x741F71: mov     ecx, esi
0x741F73: call    NiTArray_SetSize
0x741F78: lea     ecx, [esp+0Ch+arg_0]
0x741F7C: push    ecx
0x741F7D: push    edi
0x741F7E: mov     ecx, esi
0x741F80: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741F85: pop     edi
0x741F86: pop     esi
0x741F87: pop     ebx
0x741F88: retn    4
