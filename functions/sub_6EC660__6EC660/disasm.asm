0x6EC660: push    esi
0x6EC661: mov     esi, [esp+4+arg_0]
0x6EC665: push    edi
0x6EC666: push    esi
0x6EC667: call    sub_6CE3F0
0x6EC66C: mov     eax, ds:0B3EDD4h
0x6EC671: push    eax; ArgList
0x6EC672: call    TESOutput_PrintString
0x6EC677: movzx   edi, word ptr [esi+0Ah]
0x6EC67B: movzx   ecx, word ptr [esi+8]
0x6EC67F: add     esp, 4
0x6EC682: cmp     edi, ecx
0x6EC684: mov     [esp+8+arg_0], eax
0x6EC688: jb      short loc_6EC698
0x6EC68A: movzx   edx, word ptr [esi+0Eh]
0x6EC68E: add     edx, edi
0x6EC690: push    edx
0x6EC691: mov     ecx, esi
0x6EC693: call    NiTArray_SetSize
0x6EC698: lea     eax, [esp+8+arg_0]
0x6EC69C: push    eax
0x6EC69D: push    edi
0x6EC69E: mov     ecx, esi
0x6EC6A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EC6A5: pop     edi
0x6EC6A6: pop     esi
0x6EC6A7: retn    4
