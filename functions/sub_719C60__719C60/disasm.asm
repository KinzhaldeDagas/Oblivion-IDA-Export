0x719C60: push    esi
0x719C61: mov     esi, [esp+4+arg_0]
0x719C65: push    edi
0x719C66: push    esi
0x719C67: call    sub_722750
0x719C6C: mov     eax, ds:0B3FD04h
0x719C71: push    eax; ArgList
0x719C72: call    TESOutput_PrintString
0x719C77: movzx   edi, word ptr [esi+0Ah]
0x719C7B: movzx   ecx, word ptr [esi+8]
0x719C7F: add     esp, 4
0x719C82: cmp     edi, ecx
0x719C84: mov     [esp+8+arg_0], eax
0x719C88: jb      short loc_719C98
0x719C8A: movzx   edx, word ptr [esi+0Eh]
0x719C8E: add     edx, edi
0x719C90: push    edx
0x719C91: mov     ecx, esi
0x719C93: call    NiTArray_SetSize
0x719C98: lea     eax, [esp+8+arg_0]
0x719C9C: push    eax
0x719C9D: push    edi
0x719C9E: mov     ecx, esi
0x719CA0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719CA5: pop     edi
0x719CA6: pop     esi
0x719CA7: retn    4
