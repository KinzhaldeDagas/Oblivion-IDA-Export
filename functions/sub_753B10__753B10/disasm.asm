0x753B10: push    ebx
0x753B11: push    esi
0x753B12: mov     esi, [esp+8+arg_0]
0x753B16: push    edi
0x753B17: push    esi
0x753B18: mov     ebx, ecx
0x753B1A: call    sub_75EAA0
0x753B1F: mov     eax, ds:0B40D88h
0x753B24: push    eax; ArgList
0x753B25: call    TESOutput_PrintString
0x753B2A: movzx   edi, word ptr [esi+0Ah]
0x753B2E: movzx   ecx, word ptr [esi+8]
0x753B32: add     esp, 4
0x753B35: cmp     edi, ecx
0x753B37: mov     [esp+0Ch+arg_0], eax
0x753B3B: jb      short loc_753B4B
0x753B3D: movzx   edx, word ptr [esi+0Eh]
0x753B41: add     edx, edi
0x753B43: push    edx
0x753B44: mov     ecx, esi
0x753B46: call    NiTArray_SetSize
0x753B4B: lea     eax, [esp+0Ch+arg_0]
0x753B4F: push    eax
0x753B50: push    edi
0x753B51: mov     ecx, esi
0x753B53: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x753B58: push    offset aDirection_0; "Direction"
0x753B5D: lea     ecx, [ebx+30h]
0x753B60: call    sub_707280
0x753B65: movzx   edi, word ptr [esi+0Ah]
0x753B69: movzx   ecx, word ptr [esi+8]
0x753B6D: cmp     edi, ecx
0x753B6F: mov     [esp+0Ch+arg_0], eax
0x753B73: jb      short loc_753B83
0x753B75: movzx   edx, word ptr [esi+0Eh]
0x753B79: add     edx, edi
0x753B7B: push    edx
0x753B7C: mov     ecx, esi
0x753B7E: call    NiTArray_SetSize
0x753B83: lea     eax, [esp+0Ch+arg_0]
0x753B87: push    eax
0x753B88: push    edi
0x753B89: mov     ecx, esi
0x753B8B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x753B90: pop     edi
0x753B91: pop     esi
0x753B92: pop     ebx
0x753B93: retn    4
