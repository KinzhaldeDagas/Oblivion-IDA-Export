0x9A2290: push    esi
0x9A2291: mov     esi, [esp+4+a2]
0x9A2295: push    edi
0x9A2296: push    esi; a2
0x9A2297: call    sub_7009A0
0x9A229C: mov     eax, dword_BAA888
0x9A22A1: push    eax; ArgList
0x9A22A2: call    TESOutput_PrintString
0x9A22A7: movzx   edi, word ptr [esi+0Ah]
0x9A22AB: movzx   ecx, word ptr [esi+8]
0x9A22AF: add     esp, 4
0x9A22B2: cmp     edi, ecx
0x9A22B4: mov     [esp+8+a2], eax
0x9A22B8: jb      short loc_9A22C8
0x9A22BA: movzx   edx, word ptr [esi+0Eh]
0x9A22BE: add     edx, edi
0x9A22C0: push    edx
0x9A22C1: mov     ecx, esi
0x9A22C3: call    NiTArray_SetSize
0x9A22C8: lea     eax, [esp+8+a2]
0x9A22CC: push    eax
0x9A22CD: push    edi
0x9A22CE: mov     ecx, esi
0x9A22D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x9A22D5: pop     edi
0x9A22D6: pop     esi
0x9A22D7: retn    4
