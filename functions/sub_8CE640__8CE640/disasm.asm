0x8CE640: push    esi
0x8CE641: mov     esi, [esp+4+arg_0]
0x8CE645: push    edi
0x8CE646: push    esi
0x8CE647: call    sub_8A2A50
0x8CE64C: mov     eax, ds:0BA8170h
0x8CE651: push    eax; ArgList
0x8CE652: call    TESOutput_PrintString
0x8CE657: movzx   edi, word ptr [esi+0Ah]
0x8CE65B: movzx   ecx, word ptr [esi+8]
0x8CE65F: add     esp, 4
0x8CE662: cmp     edi, ecx
0x8CE664: mov     [esp+8+arg_0], eax
0x8CE668: jb      short loc_8CE678
0x8CE66A: movzx   edx, word ptr [esi+0Eh]
0x8CE66E: add     edx, edi
0x8CE670: push    edx
0x8CE671: mov     ecx, esi
0x8CE673: call    NiTArray_SetSize
0x8CE678: lea     eax, [esp+8+arg_0]
0x8CE67C: push    eax
0x8CE67D: push    edi
0x8CE67E: mov     ecx, esi
0x8CE680: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8CE685: pop     edi
0x8CE686: pop     esi
0x8CE687: retn    4
