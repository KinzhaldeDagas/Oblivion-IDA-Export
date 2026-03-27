0x6DEFC0: push    esi
0x6DEFC1: mov     esi, [esp+4+arg_0]
0x6DEFC5: push    edi
0x6DEFC6: push    esi
0x6DEFC7: call    sub_6ECC30
0x6DEFCC: mov     eax, ds:0B3DE94h
0x6DEFD1: push    eax; ArgList
0x6DEFD2: call    TESOutput_PrintString
0x6DEFD7: movzx   edi, word ptr [esi+0Ah]
0x6DEFDB: movzx   ecx, word ptr [esi+8]
0x6DEFDF: add     esp, 4
0x6DEFE2: cmp     edi, ecx
0x6DEFE4: mov     [esp+8+arg_0], eax
0x6DEFE8: jb      short loc_6DEFF8
0x6DEFEA: movzx   edx, word ptr [esi+0Eh]
0x6DEFEE: add     edx, edi
0x6DEFF0: push    edx
0x6DEFF1: mov     ecx, esi
0x6DEFF3: call    NiTArray_SetSize
0x6DEFF8: lea     eax, [esp+8+arg_0]
0x6DEFFC: push    eax
0x6DEFFD: push    edi
0x6DEFFE: mov     ecx, esi
0x6DF000: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DF005: pop     edi
0x6DF006: pop     esi
0x6DF007: retn    4
