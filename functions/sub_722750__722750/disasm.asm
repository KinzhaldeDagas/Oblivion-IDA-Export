0x722750: push    esi
0x722751: mov     esi, [esp+4+arg_0]
0x722755: push    edi
0x722756: push    esi
0x722757: call    sub_723620
0x72275C: mov     eax, ds:0B3FD54h
0x722761: push    eax; ArgList
0x722762: call    TESOutput_PrintString
0x722767: movzx   edi, word ptr [esi+0Ah]
0x72276B: movzx   ecx, word ptr [esi+8]
0x72276F: add     esp, 4
0x722772: cmp     edi, ecx
0x722774: mov     [esp+8+arg_0], eax
0x722778: jb      short loc_722788
0x72277A: movzx   edx, word ptr [esi+0Eh]
0x72277E: add     edx, edi
0x722780: push    edx
0x722781: mov     ecx, esi
0x722783: call    NiTArray_SetSize
0x722788: lea     eax, [esp+8+arg_0]
0x72278C: push    eax
0x72278D: push    edi
0x72278E: mov     ecx, esi
0x722790: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x722795: pop     edi
0x722796: pop     esi
0x722797: retn    4
