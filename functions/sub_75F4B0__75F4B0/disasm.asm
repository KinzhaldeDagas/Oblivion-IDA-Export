0x75F4B0: push    esi
0x75F4B1: mov     esi, [esp+4+arg_0]
0x75F4B5: push    edi
0x75F4B6: push    esi
0x75F4B7: call    sub_75E760
0x75F4BC: mov     eax, ds:0B41F2Ch
0x75F4C1: push    eax; ArgList
0x75F4C2: call    TESOutput_PrintString
0x75F4C7: movzx   edi, word ptr [esi+0Ah]
0x75F4CB: movzx   ecx, word ptr [esi+8]
0x75F4CF: add     esp, 4
0x75F4D2: cmp     edi, ecx
0x75F4D4: mov     [esp+8+arg_0], eax
0x75F4D8: jb      short loc_75F4E8
0x75F4DA: movzx   edx, word ptr [esi+0Eh]
0x75F4DE: add     edx, edi
0x75F4E0: push    edx
0x75F4E1: mov     ecx, esi
0x75F4E3: call    NiTArray_SetSize
0x75F4E8: lea     eax, [esp+8+arg_0]
0x75F4EC: push    eax
0x75F4ED: push    edi
0x75F4EE: mov     ecx, esi
0x75F4F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F4F5: pop     edi
0x75F4F6: pop     esi
0x75F4F7: retn    4
