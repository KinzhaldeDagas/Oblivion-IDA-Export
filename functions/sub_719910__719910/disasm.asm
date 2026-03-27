0x719910: push    esi
0x719911: mov     esi, [esp+4+arg_0]
0x719915: push    edi
0x719916: push    esi
0x719917: call    sub_71A790
0x71991C: mov     eax, ds:0B3FCFCh
0x719921: push    eax; ArgList
0x719922: call    TESOutput_PrintString
0x719927: movzx   edi, word ptr [esi+0Ah]
0x71992B: movzx   ecx, word ptr [esi+8]
0x71992F: add     esp, 4
0x719932: cmp     edi, ecx
0x719934: mov     [esp+8+arg_0], eax
0x719938: jb      short loc_719948
0x71993A: movzx   edx, word ptr [esi+0Eh]
0x71993E: add     edx, edi
0x719940: push    edx
0x719941: mov     ecx, esi
0x719943: call    NiTArray_SetSize
0x719948: lea     eax, [esp+8+arg_0]
0x71994C: push    eax
0x71994D: push    edi
0x71994E: mov     ecx, esi
0x719950: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719955: pop     edi
0x719956: pop     esi
0x719957: retn    4
