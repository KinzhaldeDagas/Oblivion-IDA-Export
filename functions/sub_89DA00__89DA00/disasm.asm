0x89DA00: push    esi
0x89DA01: mov     esi, [esp+4+arg_0]
0x89DA05: push    edi
0x89DA06: push    esi
0x89DA07: call    sub_89D820
0x89DA0C: mov     eax, ds:0BA7D04h
0x89DA11: push    eax; ArgList
0x89DA12: call    TESOutput_PrintString
0x89DA17: movzx   edi, word ptr [esi+0Ah]
0x89DA1B: movzx   ecx, word ptr [esi+8]
0x89DA1F: add     esp, 4
0x89DA22: cmp     edi, ecx
0x89DA24: mov     [esp+8+arg_0], eax
0x89DA28: jb      short loc_89DA38
0x89DA2A: movzx   edx, word ptr [esi+0Eh]
0x89DA2E: add     edx, edi
0x89DA30: push    edx
0x89DA31: mov     ecx, esi
0x89DA33: call    NiTArray_SetSize
0x89DA38: lea     eax, [esp+8+arg_0]
0x89DA3C: push    eax
0x89DA3D: push    edi
0x89DA3E: mov     ecx, esi
0x89DA40: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89DA45: pop     edi
0x89DA46: pop     esi
0x89DA47: retn    4
