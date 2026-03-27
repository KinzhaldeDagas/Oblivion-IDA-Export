0x755740: push    esi
0x755741: mov     esi, [esp+4+arg_0]
0x755745: push    edi
0x755746: push    esi
0x755747: call    sub_752EC0
0x75574C: mov     eax, ds:0B40FD0h
0x755751: push    eax; ArgList
0x755752: call    TESOutput_PrintString
0x755757: movzx   edi, word ptr [esi+0Ah]
0x75575B: movzx   ecx, word ptr [esi+8]
0x75575F: add     esp, 4
0x755762: cmp     edi, ecx
0x755764: mov     [esp+8+arg_0], eax
0x755768: jb      short loc_755778
0x75576A: movzx   edx, word ptr [esi+0Eh]
0x75576E: add     edx, edi
0x755770: push    edx
0x755771: mov     ecx, esi
0x755773: call    NiTArray_SetSize
0x755778: lea     eax, [esp+8+arg_0]
0x75577C: push    eax
0x75577D: push    edi
0x75577E: mov     ecx, esi
0x755780: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x755785: pop     edi
0x755786: pop     esi
0x755787: retn    4
