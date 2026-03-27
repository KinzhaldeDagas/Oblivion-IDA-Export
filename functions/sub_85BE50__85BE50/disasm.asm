0x85BE50: push    esi
0x85BE51: mov     esi, [esp+4+arg_0]
0x85BE55: push    edi
0x85BE56: push    esi
0x85BE57: call    sub_7E28E0
0x85BE5C: mov     eax, ds:0B47848h
0x85BE61: push    eax; ArgList
0x85BE62: call    TESOutput_PrintString
0x85BE67: movzx   edi, word ptr [esi+0Ah]
0x85BE6B: movzx   ecx, word ptr [esi+8]
0x85BE6F: add     esp, 4
0x85BE72: cmp     edi, ecx
0x85BE74: mov     [esp+8+arg_0], eax
0x85BE78: jb      short loc_85BE88
0x85BE7A: movzx   edx, word ptr [esi+0Eh]
0x85BE7E: add     edx, edi
0x85BE80: push    edx
0x85BE81: mov     ecx, esi
0x85BE83: call    NiTArray_SetSize
0x85BE88: lea     eax, [esp+8+arg_0]
0x85BE8C: push    eax
0x85BE8D: push    edi
0x85BE8E: mov     ecx, esi
0x85BE90: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x85BE95: pop     edi
0x85BE96: pop     esi
0x85BE97: retn    4
