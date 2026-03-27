0x757EC0: push    esi
0x757EC1: mov     esi, [esp+4+arg_0]
0x757EC5: push    edi
0x757EC6: push    esi
0x757EC7: call    sub_75F730
0x757ECC: mov     eax, ds:0B41578h
0x757ED1: push    eax; ArgList
0x757ED2: call    TESOutput_PrintString
0x757ED7: movzx   edi, word ptr [esi+0Ah]
0x757EDB: movzx   ecx, word ptr [esi+8]
0x757EDF: add     esp, 4
0x757EE2: cmp     edi, ecx
0x757EE4: mov     [esp+8+arg_0], eax
0x757EE8: jb      short loc_757EF8
0x757EEA: movzx   edx, word ptr [esi+0Eh]
0x757EEE: add     edx, edi
0x757EF0: push    edx
0x757EF1: mov     ecx, esi
0x757EF3: call    NiTArray_SetSize
0x757EF8: lea     eax, [esp+8+arg_0]
0x757EFC: push    eax
0x757EFD: push    edi
0x757EFE: mov     ecx, esi
0x757F00: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757F05: pop     edi
0x757F06: pop     esi
0x757F07: retn    4
