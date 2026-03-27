0x6DDE70: push    esi
0x6DDE71: mov     esi, [esp+4+arg_0]
0x6DDE75: push    edi
0x6DDE76: push    esi
0x6DDE77: call    sub_716140
0x6DDE7C: mov     eax, ds:0B3DDC0h
0x6DDE81: push    eax; ArgList
0x6DDE82: call    TESOutput_PrintString
0x6DDE87: movzx   edi, word ptr [esi+0Ah]
0x6DDE8B: movzx   ecx, word ptr [esi+8]
0x6DDE8F: add     esp, 4
0x6DDE92: cmp     edi, ecx
0x6DDE94: mov     [esp+8+arg_0], eax
0x6DDE98: jb      short loc_6DDEA8
0x6DDE9A: movzx   edx, word ptr [esi+0Eh]
0x6DDE9E: add     edx, edi
0x6DDEA0: push    edx
0x6DDEA1: mov     ecx, esi
0x6DDEA3: call    NiTArray_SetSize
0x6DDEA8: lea     eax, [esp+8+arg_0]
0x6DDEAC: push    eax
0x6DDEAD: push    edi
0x6DDEAE: mov     ecx, esi
0x6DDEB0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DDEB5: pop     edi
0x6DDEB6: pop     esi
0x6DDEB7: retn    4
