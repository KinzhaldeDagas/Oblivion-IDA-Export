0x711E60: push    ecx
0x711E61: mov     eax, ds:0B3FB00h
0x711E66: push    ebx
0x711E67: push    esi
0x711E68: push    edi
0x711E69: push    eax; ArgList
0x711E6A: mov     ebx, ecx
0x711E6C: call    TESOutput_PrintString
0x711E71: mov     esi, [esp+14h+arg_0]
0x711E75: movzx   edi, word ptr [esi+0Ah]
0x711E79: movzx   ecx, word ptr [esi+8]
0x711E7D: add     esp, 4
0x711E80: cmp     edi, ecx
0x711E82: mov     [esp+10h+var_4], eax
0x711E86: jb      short loc_711E96
0x711E88: movzx   edx, word ptr [esi+0Eh]
0x711E8C: add     edx, edi
0x711E8E: push    edx
0x711E8F: mov     ecx, esi
0x711E91: call    NiTArray_SetSize
0x711E96: lea     eax, [esp+10h+var_4]
0x711E9A: push    eax
0x711E9B: push    edi
0x711E9C: mov     ecx, esi
0x711E9E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x711EA3: mov     ecx, [ebx+8]
0x711EA6: push    ecx; int
0x711EA7: push    offset aM_pksceneobjec; "m_pkSceneObject"
0x711EAC: call    TESOutput_PrintLabeledPointer
0x711EB1: movzx   edi, word ptr [esi+0Ah]
0x711EB5: movzx   edx, word ptr [esi+8]
0x711EB9: add     esp, 8
0x711EBC: cmp     edi, edx
0x711EBE: mov     [esp+10h+arg_0], eax
0x711EC2: jb      short loc_711ED2
0x711EC4: movzx   eax, word ptr [esi+0Eh]
0x711EC8: add     eax, edi
0x711ECA: push    eax
0x711ECB: mov     ecx, esi
0x711ECD: call    NiTArray_SetSize
0x711ED2: lea     ecx, [esp+10h+arg_0]
0x711ED6: push    ecx
0x711ED7: push    edi
0x711ED8: mov     ecx, esi
0x711EDA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x711EDF: pop     edi
0x711EE0: pop     esi
0x711EE1: pop     ebx
0x711EE2: pop     ecx
0x711EE3: retn    4
