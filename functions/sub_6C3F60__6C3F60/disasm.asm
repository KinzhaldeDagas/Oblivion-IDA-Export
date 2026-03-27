0x6C3F60: push    esi
0x6C3F61: mov     esi, [esp+4+arg_0]
0x6C3F65: push    edi
0x6C3F66: push    esi
0x6C3F67: call    sub_6CE3F0
0x6C3F6C: mov     eax, ds:0B3CA58h
0x6C3F71: push    eax; ArgList
0x6C3F72: call    TESOutput_PrintString
0x6C3F77: movzx   edi, word ptr [esi+0Ah]
0x6C3F7B: movzx   ecx, word ptr [esi+8]
0x6C3F7F: add     esp, 4
0x6C3F82: cmp     edi, ecx
0x6C3F84: mov     [esp+8+arg_0], eax
0x6C3F88: jb      short loc_6C3F98
0x6C3F8A: movzx   edx, word ptr [esi+0Eh]
0x6C3F8E: add     edx, edi
0x6C3F90: push    edx
0x6C3F91: mov     ecx, esi
0x6C3F93: call    NiTArray_SetSize
0x6C3F98: lea     eax, [esp+8+arg_0]
0x6C3F9C: push    eax
0x6C3F9D: push    edi
0x6C3F9E: mov     ecx, esi
0x6C3FA0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6C3FA5: pop     edi
0x6C3FA6: pop     esi
0x6C3FA7: retn    4
