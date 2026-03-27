0x730D30: push    esi
0x730D31: mov     esi, [esp+4+arg_0]
0x730D35: push    edi
0x730D36: push    esi
0x730D37: call    sub_721730
0x730D3C: mov     eax, ds:0B3FFA8h
0x730D41: push    eax; ArgList
0x730D42: call    TESOutput_PrintString
0x730D47: movzx   edi, word ptr [esi+0Ah]
0x730D4B: movzx   ecx, word ptr [esi+8]
0x730D4F: add     esp, 4
0x730D52: cmp     edi, ecx
0x730D54: mov     [esp+8+arg_0], eax
0x730D58: jb      short loc_730D68
0x730D5A: movzx   edx, word ptr [esi+0Eh]
0x730D5E: add     edx, edi
0x730D60: push    edx
0x730D61: mov     ecx, esi
0x730D63: call    NiTArray_SetSize
0x730D68: lea     eax, [esp+8+arg_0]
0x730D6C: push    eax
0x730D6D: push    edi
0x730D6E: mov     ecx, esi
0x730D70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x730D75: pop     edi
0x730D76: pop     esi
0x730D77: retn    4
