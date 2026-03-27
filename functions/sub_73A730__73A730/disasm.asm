0x73A730: push    esi
0x73A731: mov     esi, [esp+4+arg_0]
0x73A735: push    edi
0x73A736: push    esi
0x73A737: call    sub_717790
0x73A73C: mov     eax, ds:0B40140h
0x73A741: push    eax; ArgList
0x73A742: call    TESOutput_PrintString
0x73A747: movzx   edi, word ptr [esi+0Ah]
0x73A74B: movzx   ecx, word ptr [esi+8]
0x73A74F: add     esp, 4
0x73A752: cmp     edi, ecx
0x73A754: mov     [esp+8+arg_0], eax
0x73A758: jb      short loc_73A768
0x73A75A: movzx   edx, word ptr [esi+0Eh]
0x73A75E: add     edx, edi
0x73A760: push    edx
0x73A761: mov     ecx, esi
0x73A763: call    NiTArray_SetSize
0x73A768: lea     eax, [esp+8+arg_0]
0x73A76C: push    eax
0x73A76D: push    edi
0x73A76E: mov     ecx, esi
0x73A770: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A775: pop     edi
0x73A776: pop     esi
0x73A777: retn    4
