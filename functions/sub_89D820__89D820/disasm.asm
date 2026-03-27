0x89D820: push    esi
0x89D821: mov     esi, [esp+4+arg_0]
0x89D825: push    edi
0x89D826: push    esi
0x89D827: call    sub_89D510
0x89D82C: mov     eax, ds:0BA7C00h
0x89D831: push    eax; ArgList
0x89D832: call    TESOutput_PrintString
0x89D837: movzx   edi, word ptr [esi+0Ah]
0x89D83B: movzx   ecx, word ptr [esi+8]
0x89D83F: add     esp, 4
0x89D842: cmp     edi, ecx
0x89D844: mov     [esp+8+arg_0], eax
0x89D848: jb      short loc_89D858
0x89D84A: movzx   edx, word ptr [esi+0Eh]
0x89D84E: add     edx, edi
0x89D850: push    edx
0x89D851: mov     ecx, esi
0x89D853: call    NiTArray_SetSize
0x89D858: lea     eax, [esp+8+arg_0]
0x89D85C: push    eax
0x89D85D: push    edi
0x89D85E: mov     ecx, esi
0x89D860: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89D865: pop     edi
0x89D866: pop     esi
0x89D867: retn    4
