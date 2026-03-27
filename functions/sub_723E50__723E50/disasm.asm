0x723E50: push    ebx
0x723E51: push    esi
0x723E52: mov     esi, [esp+8+arg_0]
0x723E56: push    edi
0x723E57: push    esi
0x723E58: mov     ebx, ecx
0x723E5A: call    sub_7248C0
0x723E5F: mov     eax, ds:0B3FD68h
0x723E64: push    eax; ArgList
0x723E65: call    TESOutput_PrintString
0x723E6A: movzx   edi, word ptr [esi+0Ah]
0x723E6E: movzx   ecx, word ptr [esi+8]
0x723E72: add     esp, 4
0x723E75: cmp     edi, ecx
0x723E77: mov     [esp+0Ch+arg_0], eax
0x723E7B: jb      short loc_723E8B
0x723E7D: movzx   edx, word ptr [esi+0Eh]
0x723E81: add     edx, edi
0x723E83: push    edx
0x723E84: mov     ecx, esi
0x723E86: call    NiTArray_SetSize
0x723E8B: lea     eax, [esp+0Ch+arg_0]
0x723E8F: push    eax
0x723E90: push    edi
0x723E91: mov     ecx, esi
0x723E93: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x723E98: mov     ecx, [ebx+0FCh]
0x723E9E: test    ecx, ecx
0x723EA0: jz      short loc_723EB0
0x723EA2: mov     edx, [ecx]
0x723EA4: mov     eax, [edx+30h]
0x723EA7: push    esi
0x723EA8: call    eax
0x723EAA: pop     edi
0x723EAB: pop     esi
0x723EAC: pop     ebx
0x723EAD: retn    4
0x723EB0: movzx   edi, word ptr [esi+0Ah]
0x723EB4: movzx   ecx, word ptr [esi+8]
0x723EB8: cmp     edi, ecx
0x723EBA: mov     [esp+0Ch+arg_0], offset aNullLodData; "NULL LOD Data"
0x723EC2: jb      short loc_723ED2
0x723EC4: movzx   edx, word ptr [esi+0Eh]
0x723EC8: add     edx, edi
0x723ECA: push    edx
0x723ECB: mov     ecx, esi
0x723ECD: call    NiTArray_SetSize
0x723ED2: lea     eax, [esp+0Ch+arg_0]
0x723ED6: push    eax
0x723ED7: push    edi
0x723ED8: mov     ecx, esi
0x723EDA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x723EDF: pop     edi
0x723EE0: pop     esi
0x723EE1: pop     ebx
0x723EE2: retn    4
