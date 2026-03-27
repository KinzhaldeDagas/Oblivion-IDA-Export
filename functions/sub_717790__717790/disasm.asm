0x717790: push    esi
0x717791: mov     esi, [esp+4+arg_0]
0x717795: push    edi
0x717796: push    esi
0x717797: call    sub_722750
0x71779C: mov     eax, ds:0B3FCD4h
0x7177A1: push    eax; ArgList
0x7177A2: call    TESOutput_PrintString
0x7177A7: movzx   edi, word ptr [esi+0Ah]
0x7177AB: movzx   ecx, word ptr [esi+8]
0x7177AF: add     esp, 4
0x7177B2: cmp     edi, ecx
0x7177B4: mov     [esp+8+arg_0], eax
0x7177B8: jb      short loc_7177C8
0x7177BA: movzx   edx, word ptr [esi+0Eh]
0x7177BE: add     edx, edi
0x7177C0: push    edx
0x7177C1: mov     ecx, esi
0x7177C3: call    NiTArray_SetSize
0x7177C8: lea     eax, [esp+8+arg_0]
0x7177CC: push    eax
0x7177CD: push    edi
0x7177CE: mov     ecx, esi
0x7177D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7177D5: pop     edi
0x7177D6: pop     esi
0x7177D7: retn    4
