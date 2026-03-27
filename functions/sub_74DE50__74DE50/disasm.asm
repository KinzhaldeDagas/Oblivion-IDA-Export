0x74DE50: push    esi
0x74DE51: mov     esi, [esp+4+arg_0]
0x74DE55: push    edi
0x74DE56: push    esi
0x74DE57: call    sub_752EC0
0x74DE5C: mov     eax, ds:0B40A28h
0x74DE61: push    eax; ArgList
0x74DE62: call    TESOutput_PrintString
0x74DE67: movzx   edi, word ptr [esi+0Ah]
0x74DE6B: movzx   ecx, word ptr [esi+8]
0x74DE6F: add     esp, 4
0x74DE72: cmp     edi, ecx
0x74DE74: mov     [esp+8+arg_0], eax
0x74DE78: jb      short loc_74DE88
0x74DE7A: movzx   edx, word ptr [esi+0Eh]
0x74DE7E: add     edx, edi
0x74DE80: push    edx
0x74DE81: mov     ecx, esi
0x74DE83: call    NiTArray_SetSize
0x74DE88: lea     eax, [esp+8+arg_0]
0x74DE8C: push    eax
0x74DE8D: push    edi
0x74DE8E: mov     ecx, esi
0x74DE90: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74DE95: pop     edi
0x74DE96: pop     esi
0x74DE97: retn    4
