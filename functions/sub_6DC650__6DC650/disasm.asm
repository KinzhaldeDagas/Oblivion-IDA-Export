0x6DC650: push    esi
0x6DC651: mov     esi, [esp+4+arg_0]
0x6DC655: push    edi
0x6DC656: push    esi
0x6DC657: call    sub_6EC460
0x6DC65C: mov     eax, ds:0B3DD4Ch
0x6DC661: push    eax; ArgList
0x6DC662: call    TESOutput_PrintString
0x6DC667: movzx   edi, word ptr [esi+0Ah]
0x6DC66B: movzx   ecx, word ptr [esi+8]
0x6DC66F: add     esp, 4
0x6DC672: cmp     edi, ecx
0x6DC674: mov     [esp+8+arg_0], eax
0x6DC678: jb      short loc_6DC688
0x6DC67A: movzx   edx, word ptr [esi+0Eh]
0x6DC67E: add     edx, edi
0x6DC680: push    edx
0x6DC681: mov     ecx, esi
0x6DC683: call    NiTArray_SetSize
0x6DC688: lea     eax, [esp+8+arg_0]
0x6DC68C: push    eax
0x6DC68D: push    edi
0x6DC68E: mov     ecx, esi
0x6DC690: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DC695: pop     edi
0x6DC696: pop     esi
0x6DC697: retn    4
