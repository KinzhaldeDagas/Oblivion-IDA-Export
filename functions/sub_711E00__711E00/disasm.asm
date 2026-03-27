0x711E00: push    ebx
0x711E01: push    esi
0x711E02: mov     esi, [esp+8+a2]
0x711E06: push    edi
0x711E07: push    esi; a2
0x711E08: mov     edi, ecx
0x711E0A: call    sub_7009A0
0x711E0F: mov     eax, ds:0B3FB00h
0x711E14: push    eax; ArgList
0x711E15: call    TESOutput_PrintString
0x711E1A: movzx   ebx, word ptr [esi+0Ah]
0x711E1E: movzx   ecx, word ptr [esi+8]
0x711E22: add     esp, 4
0x711E25: cmp     ebx, ecx
0x711E27: mov     [esp+0Ch+a2], eax
0x711E2B: jb      short loc_711E3B
0x711E2D: movzx   edx, word ptr [esi+0Eh]
0x711E31: add     edx, ebx
0x711E33: push    edx
0x711E34: mov     ecx, esi
0x711E36: call    NiTArray_SetSize
0x711E3B: lea     eax, [esp+0Ch+a2]
0x711E3F: push    eax
0x711E40: push    ebx
0x711E41: mov     ecx, esi
0x711E43: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x711E48: mov     edx, [edi]
0x711E4A: mov     eax, [edx+34h]
0x711E4D: push    esi
0x711E4E: mov     ecx, edi
0x711E50: call    eax
0x711E52: pop     edi
0x711E53: pop     esi
0x711E54: pop     ebx
0x711E55: retn    4
