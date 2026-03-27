0x756C40: push    esi
0x756C41: mov     esi, [esp+4+arg_0]
0x756C45: push    edi
0x756C46: push    esi
0x756C47: call    sub_75F730
0x756C4C: mov     eax, ds:0B41224h
0x756C51: push    eax; ArgList
0x756C52: call    TESOutput_PrintString
0x756C57: movzx   edi, word ptr [esi+0Ah]
0x756C5B: movzx   ecx, word ptr [esi+8]
0x756C5F: add     esp, 4
0x756C62: cmp     edi, ecx
0x756C64: mov     [esp+8+arg_0], eax
0x756C68: jb      short loc_756C78
0x756C6A: movzx   edx, word ptr [esi+0Eh]
0x756C6E: add     edx, edi
0x756C70: push    edx
0x756C71: mov     ecx, esi
0x756C73: call    NiTArray_SetSize
0x756C78: lea     eax, [esp+8+arg_0]
0x756C7C: push    eax
0x756C7D: push    edi
0x756C7E: mov     ecx, esi
0x756C80: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756C85: pop     edi
0x756C86: pop     esi
0x756C87: retn    4
