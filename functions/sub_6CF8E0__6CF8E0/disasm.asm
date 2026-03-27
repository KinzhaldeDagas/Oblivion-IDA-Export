0x6CF8E0: push    ebx
0x6CF8E1: push    esi
0x6CF8E2: mov     esi, [esp+8+arg_0]
0x6CF8E6: push    edi
0x6CF8E7: push    esi
0x6CF8E8: mov     ebx, ecx
0x6CF8EA: call    sub_6CDDB0
0x6CF8EF: mov     eax, ds:0B3CD1Ch
0x6CF8F4: push    eax; ArgList
0x6CF8F5: call    TESOutput_PrintString
0x6CF8FA: movzx   edi, word ptr [esi+0Ah]
0x6CF8FE: movzx   ecx, word ptr [esi+8]
0x6CF902: add     esp, 4
0x6CF905: cmp     edi, ecx
0x6CF907: mov     [esp+0Ch+arg_0], eax
0x6CF90B: jb      short loc_6CF91B
0x6CF90D: movzx   edx, word ptr [esi+0Eh]
0x6CF911: add     edx, edi
0x6CF913: push    edx
0x6CF914: mov     ecx, esi
0x6CF916: call    NiTArray_SetSize
0x6CF91B: lea     eax, [esp+0Ch+arg_0]
0x6CF91F: push    eax
0x6CF920: push    edi
0x6CF921: mov     ecx, esi
0x6CF923: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CF928: push    esi
0x6CF929: lea     ecx, [ebx+30h]
0x6CF92C: call    sub_6CBAD0
0x6CF931: pop     edi
0x6CF932: pop     esi
0x6CF933: pop     ebx
0x6CF934: retn    4
