0x6ECA60: push    esi
0x6ECA61: mov     esi, [esp+4+arg_0]
0x6ECA65: push    edi
0x6ECA66: push    esi
0x6ECA67: call    sub_716140
0x6ECA6C: mov     eax, ds:0B3EEA8h
0x6ECA71: push    eax; ArgList
0x6ECA72: call    TESOutput_PrintString
0x6ECA77: movzx   edi, word ptr [esi+0Ah]
0x6ECA7B: movzx   ecx, word ptr [esi+8]
0x6ECA7F: add     esp, 4
0x6ECA82: cmp     edi, ecx
0x6ECA84: mov     [esp+8+arg_0], eax
0x6ECA88: jb      short loc_6ECA98
0x6ECA8A: movzx   edx, word ptr [esi+0Eh]
0x6ECA8E: add     edx, edi
0x6ECA90: push    edx
0x6ECA91: mov     ecx, esi
0x6ECA93: call    NiTArray_SetSize
0x6ECA98: lea     eax, [esp+8+arg_0]
0x6ECA9C: push    eax
0x6ECA9D: push    edi
0x6ECA9E: mov     ecx, esi
0x6ECAA0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ECAA5: pop     edi
0x6ECAA6: pop     esi
0x6ECAA7: retn    4
