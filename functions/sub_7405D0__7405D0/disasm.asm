0x7405D0: push    esi
0x7405D1: mov     esi, [esp+4+arg_0]
0x7405D5: push    edi
0x7405D6: push    esi
0x7405D7: call    sub_73FB80
0x7405DC: mov     eax, ds:0B401DCh
0x7405E1: push    eax; ArgList
0x7405E2: call    TESOutput_PrintString
0x7405E7: movzx   edi, word ptr [esi+0Ah]
0x7405EB: movzx   ecx, word ptr [esi+8]
0x7405EF: add     esp, 4
0x7405F2: cmp     edi, ecx
0x7405F4: mov     [esp+8+arg_0], eax
0x7405F8: jb      short loc_740608
0x7405FA: movzx   edx, word ptr [esi+0Eh]
0x7405FE: add     edx, edi
0x740600: push    edx
0x740601: mov     ecx, esi
0x740603: call    NiTArray_SetSize
0x740608: lea     eax, [esp+8+arg_0]
0x74060C: push    eax
0x74060D: push    edi
0x74060E: mov     ecx, esi
0x740610: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x740615: pop     edi
0x740616: pop     esi
0x740617: retn    4
