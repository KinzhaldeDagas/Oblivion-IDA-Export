0x6EBAC0: push    esi
0x6EBAC1: mov     esi, [esp+4+a2]
0x6EBAC5: push    edi
0x6EBAC6: push    esi; a2
0x6EBAC7: call    sub_7009A0
0x6EBACC: mov     eax, ds:0B3EB8Ch
0x6EBAD1: push    eax; ArgList
0x6EBAD2: call    TESOutput_PrintString
0x6EBAD7: movzx   edi, word ptr [esi+0Ah]
0x6EBADB: movzx   ecx, word ptr [esi+8]
0x6EBADF: add     esp, 4
0x6EBAE2: cmp     edi, ecx
0x6EBAE4: mov     [esp+8+a2], eax
0x6EBAE8: jb      short loc_6EBAF8
0x6EBAEA: movzx   edx, word ptr [esi+0Eh]
0x6EBAEE: add     edx, edi
0x6EBAF0: push    edx
0x6EBAF1: mov     ecx, esi
0x6EBAF3: call    NiTArray_SetSize
0x6EBAF8: lea     eax, [esp+8+a2]
0x6EBAFC: push    eax
0x6EBAFD: push    edi
0x6EBAFE: mov     ecx, esi
0x6EBB00: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EBB05: pop     edi
0x6EBB06: pop     esi
0x6EBB07: retn    4
