0x73FFC0: push    esi
0x73FFC1: mov     esi, [esp+4+arg_0]
0x73FFC5: push    edi
0x73FFC6: push    esi
0x73FFC7: call    sub_700B10
0x73FFCC: mov     eax, ds:0B401D0h
0x73FFD1: push    eax; ArgList
0x73FFD2: call    TESOutput_PrintString
0x73FFD7: movzx   edi, word ptr [esi+0Ah]
0x73FFDB: movzx   ecx, word ptr [esi+8]
0x73FFDF: add     esp, 4
0x73FFE2: cmp     edi, ecx
0x73FFE4: mov     [esp+8+arg_0], eax
0x73FFE8: jb      short loc_73FFF8
0x73FFEA: movzx   edx, word ptr [esi+0Eh]
0x73FFEE: add     edx, edi
0x73FFF0: push    edx
0x73FFF1: mov     ecx, esi
0x73FFF3: call    NiTArray_SetSize
0x73FFF8: lea     eax, [esp+8+arg_0]
0x73FFFC: push    eax
0x73FFFD: push    edi
0x73FFFE: mov     ecx, esi
0x740000: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x740005: pop     edi
0x740006: pop     esi
0x740007: retn    4
