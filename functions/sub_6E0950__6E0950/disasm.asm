0x6E0950: push    esi
0x6E0951: mov     esi, [esp+4+arg_0]
0x6E0955: push    edi
0x6E0956: push    esi
0x6E0957: call    sub_6EC1D0
0x6E095C: mov     eax, ds:0B3DFA4h
0x6E0961: push    eax; ArgList
0x6E0962: call    TESOutput_PrintString
0x6E0967: movzx   edi, word ptr [esi+0Ah]
0x6E096B: movzx   ecx, word ptr [esi+8]
0x6E096F: add     esp, 4
0x6E0972: cmp     edi, ecx
0x6E0974: mov     [esp+8+arg_0], eax
0x6E0978: jb      short loc_6E0988
0x6E097A: movzx   edx, word ptr [esi+0Eh]
0x6E097E: add     edx, edi
0x6E0980: push    edx
0x6E0981: mov     ecx, esi
0x6E0983: call    NiTArray_SetSize
0x6E0988: lea     eax, [esp+8+arg_0]
0x6E098C: push    eax
0x6E098D: push    edi
0x6E098E: mov     ecx, esi
0x6E0990: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E0995: pop     edi
0x6E0996: pop     esi
0x6E0997: retn    4
