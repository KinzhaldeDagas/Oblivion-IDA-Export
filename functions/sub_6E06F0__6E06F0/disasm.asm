0x6E06F0: push    esi
0x6E06F1: mov     esi, [esp+4+arg_0]
0x6E06F5: push    edi
0x6E06F6: push    esi
0x6E06F7: call    sub_716140
0x6E06FC: mov     eax, ds:0B3DF34h
0x6E0701: push    eax; ArgList
0x6E0702: call    TESOutput_PrintString
0x6E0707: movzx   edi, word ptr [esi+0Ah]
0x6E070B: movzx   ecx, word ptr [esi+8]
0x6E070F: add     esp, 4
0x6E0712: cmp     edi, ecx
0x6E0714: mov     [esp+8+arg_0], eax
0x6E0718: jb      short loc_6E0728
0x6E071A: movzx   edx, word ptr [esi+0Eh]
0x6E071E: add     edx, edi
0x6E0720: push    edx
0x6E0721: mov     ecx, esi
0x6E0723: call    NiTArray_SetSize
0x6E0728: lea     eax, [esp+8+arg_0]
0x6E072C: push    eax
0x6E072D: push    edi
0x6E072E: mov     ecx, esi
0x6E0730: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E0735: pop     edi
0x6E0736: pop     esi
0x6E0737: retn    4
