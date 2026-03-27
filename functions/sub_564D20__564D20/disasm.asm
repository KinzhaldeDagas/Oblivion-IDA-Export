0x564D20: push    ebx
0x564D21: push    esi
0x564D22: mov     esi, [esp+8+arg_0]
0x564D26: push    edi
0x564D27: push    esi
0x564D28: mov     edi, ecx
0x564D2A: call    sub_70BAE0
0x564D2F: push    offset aBstreenode; "BSTreeNode"
0x564D34: call    TESOutput_PrintString
0x564D39: movzx   ebx, word ptr [esi+0Ah]
0x564D3D: mov     [esp+10h+arg_0], eax
0x564D41: movzx   eax, word ptr [esi+8]
0x564D45: add     esp, 4
0x564D48: cmp     ebx, eax
0x564D4A: jb      short loc_564D5A
0x564D4C: movzx   ecx, word ptr [esi+0Eh]
0x564D50: add     ecx, ebx
0x564D52: push    ecx
0x564D53: mov     ecx, esi
0x564D55: call    NiTArray_SetSize
0x564D5A: lea     edx, [esp+0Ch+arg_0]
0x564D5E: push    edx
0x564D5F: push    ebx
0x564D60: mov     ecx, esi
0x564D62: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x564D67: cmp     dword ptr [edi+0DCh], 0
0x564D6E: push    20h ; ' '; Size
0x564D70: jz      short loc_564DEB
0x564D72: call    FormHeapAlloc
0x564D77: mov     ecx, [edi+0DCh]
0x564D7D: add     esp, 4
0x564D80: cmp     dword ptr [ecx+8], 2
0x564D84: mov     [esp+0Ch+arg_0], eax
0x564D88: jnz     short loc_564D91
0x564D8A: push    offset aTypeInstance; "Type = Instance"
0x564D8F: jmp     short loc_564D96
0x564D91: push    offset aTypeBase; "Type = Base"
0x564D96: push    eax
0x564D97: call    __sprintf
0x564D9C: movzx   ebx, word ptr [esi+0Ah]
0x564DA0: movzx   edx, word ptr [esi+8]
0x564DA4: add     esp, 8
0x564DA7: cmp     ebx, edx
0x564DA9: jb      short loc_564DB9
0x564DAB: movzx   eax, word ptr [esi+0Eh]
0x564DAF: add     eax, ebx
0x564DB1: push    eax
0x564DB2: mov     ecx, esi
0x564DB4: call    NiTArray_SetSize
0x564DB9: lea     ecx, [esp+0Ch+arg_0]
0x564DBD: push    ecx
0x564DBE: push    ebx
0x564DBF: mov     ecx, esi
0x564DC1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x564DC6: push    20h ; ' '; Size
0x564DC8: call    FormHeapAlloc
0x564DCD: mov     edx, [edi+0DCh]
0x564DD3: mov     ecx, [edx+48h]
0x564DD6: push    ecx
0x564DD7: push    offset aSeedD; "Seed = %d"
0x564DDC: push    eax
0x564DDD: mov     [esp+1Ch+arg_0], eax
0x564DE1: call    __sprintf
0x564DE6: add     esp, 10h
0x564DE9: jmp     short loc_564E02
0x564DEB: call    FormHeapAlloc
0x564DF0: push    offset aNoModel; "-No Model-"
0x564DF5: push    eax
0x564DF6: mov     [esp+18h+arg_0], eax
0x564DFA: call    __sprintf
0x564DFF: add     esp, 0Ch
0x564E02: movzx   edx, word ptr [esi+8]
0x564E06: movzx   edi, word ptr [esi+0Ah]
0x564E0A: cmp     edi, edx
0x564E0C: jb      short loc_564E1C
0x564E0E: movzx   eax, word ptr [esi+0Eh]
0x564E12: add     eax, edi
0x564E14: push    eax
0x564E15: mov     ecx, esi
0x564E17: call    NiTArray_SetSize
0x564E1C: lea     ecx, [esp+0Ch+arg_0]
0x564E20: push    ecx
0x564E21: push    edi
0x564E22: mov     ecx, esi
0x564E24: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x564E29: pop     edi
0x564E2A: pop     esi
0x564E2B: pop     ebx
0x564E2C: retn    4
