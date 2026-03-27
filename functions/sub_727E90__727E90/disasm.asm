0x727E90: push    ebx
0x727E91: push    esi
0x727E92: mov     esi, [esp+8+arg_0]
0x727E96: push    edi
0x727E97: push    esi
0x727E98: mov     ebx, ecx
0x727E9A: call    sub_7278B0
0x727E9F: mov     eax, ds:0B3FD98h
0x727EA4: push    eax; ArgList
0x727EA5: call    TESOutput_PrintString
0x727EAA: movzx   edi, word ptr [esi+0Ah]
0x727EAE: movzx   ecx, word ptr [esi+8]
0x727EB2: add     esp, 4
0x727EB5: cmp     edi, ecx
0x727EB7: mov     [esp+0Ch+arg_0], eax
0x727EBB: jb      short loc_727ECB
0x727EBD: movzx   edx, word ptr [esi+0Eh]
0x727EC1: add     edx, edi
0x727EC3: push    edx
0x727EC4: mov     ecx, esi
0x727EC6: call    NiTArray_SetSize
0x727ECB: lea     eax, [esp+0Ch+arg_0]
0x727ECF: push    eax
0x727ED0: push    edi
0x727ED1: mov     ecx, esi
0x727ED3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x727ED8: mov     ecx, [ebx+2Ch]
0x727EDB: push    ecx; int
0x727EDC: push    offset aM_uishaderdecl; "m_uiShaderDeclarationIndex"
0x727EE1: call    TESOutput_PrintLabeledUnsignedInt
0x727EE6: movzx   edi, word ptr [esi+0Ah]
0x727EEA: movzx   edx, word ptr [esi+8]
0x727EEE: add     esp, 8
0x727EF1: cmp     edi, edx
0x727EF3: mov     [esp+0Ch+arg_0], eax
0x727EF7: jb      short loc_727F07
0x727EF9: movzx   eax, word ptr [esi+0Eh]
0x727EFD: add     eax, edi
0x727EFF: push    eax
0x727F00: mov     ecx, esi
0x727F02: call    NiTArray_SetSize
0x727F07: lea     ecx, [esp+0Ch+arg_0]
0x727F0B: push    ecx
0x727F0C: push    edi
0x727F0D: mov     ecx, esi
0x727F0F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x727F14: pop     edi
0x727F15: pop     esi
0x727F16: pop     ebx
0x727F17: retn    4
