0x756A60: push    esi
0x756A61: mov     esi, [esp+4+arg_0]
0x756A65: push    edi
0x756A66: push    esi
0x756A67: call    sub_75F730
0x756A6C: mov     eax, ds:0B4116Ch
0x756A71: push    eax; ArgList
0x756A72: call    TESOutput_PrintString
0x756A77: movzx   edi, word ptr [esi+0Ah]
0x756A7B: movzx   ecx, word ptr [esi+8]
0x756A7F: add     esp, 4
0x756A82: cmp     edi, ecx
0x756A84: mov     [esp+8+arg_0], eax
0x756A88: jb      short loc_756A98
0x756A8A: movzx   edx, word ptr [esi+0Eh]
0x756A8E: add     edx, edi
0x756A90: push    edx
0x756A91: mov     ecx, esi
0x756A93: call    NiTArray_SetSize
0x756A98: lea     eax, [esp+8+arg_0]
0x756A9C: push    eax
0x756A9D: push    edi
0x756A9E: mov     ecx, esi
0x756AA0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756AA5: pop     edi
0x756AA6: pop     esi
0x756AA7: retn    4
