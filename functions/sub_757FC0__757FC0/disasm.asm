0x757FC0: push    esi
0x757FC1: mov     esi, [esp+4+arg_0]
0x757FC5: push    edi
0x757FC6: push    esi
0x757FC7: call    sub_75F730
0x757FCC: mov     eax, ds:0B415F4h
0x757FD1: push    eax; ArgList
0x757FD2: call    TESOutput_PrintString
0x757FD7: movzx   edi, word ptr [esi+0Ah]
0x757FDB: movzx   ecx, word ptr [esi+8]
0x757FDF: add     esp, 4
0x757FE2: cmp     edi, ecx
0x757FE4: mov     [esp+8+arg_0], eax
0x757FE8: jb      short loc_757FF8
0x757FEA: movzx   edx, word ptr [esi+0Eh]
0x757FEE: add     edx, edi
0x757FF0: push    edx
0x757FF1: mov     ecx, esi
0x757FF3: call    NiTArray_SetSize
0x757FF8: lea     eax, [esp+8+arg_0]
0x757FFC: push    eax
0x757FFD: push    edi
0x757FFE: mov     ecx, esi
0x758000: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758005: pop     edi
0x758006: pop     esi
0x758007: retn    4
