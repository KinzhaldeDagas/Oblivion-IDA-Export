0x742320: push    esi
0x742321: mov     esi, [esp+4+arg_0]
0x742325: push    edi
0x742326: push    esi
0x742327: call    sub_71A790
0x74232C: mov     eax, ds:0B40224h
0x742331: push    eax; ArgList
0x742332: call    TESOutput_PrintString
0x742337: movzx   edi, word ptr [esi+0Ah]
0x74233B: movzx   ecx, word ptr [esi+8]
0x74233F: add     esp, 4
0x742342: cmp     edi, ecx
0x742344: mov     [esp+8+arg_0], eax
0x742348: jb      short loc_742358
0x74234A: movzx   edx, word ptr [esi+0Eh]
0x74234E: add     edx, edi
0x742350: push    edx
0x742351: mov     ecx, esi
0x742353: call    NiTArray_SetSize
0x742358: lea     eax, [esp+8+arg_0]
0x74235C: push    eax
0x74235D: push    edi
0x74235E: mov     ecx, esi
0x742360: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x742365: pop     edi
0x742366: pop     esi
0x742367: retn    4
