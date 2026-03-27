0x75F730: push    esi
0x75F731: mov     esi, [esp+4+arg_0]
0x75F735: push    edi
0x75F736: push    esi
0x75F737: call    sub_75E760
0x75F73C: mov     eax, ds:0B41F8Ch
0x75F741: push    eax; ArgList
0x75F742: call    TESOutput_PrintString
0x75F747: movzx   edi, word ptr [esi+0Ah]
0x75F74B: movzx   ecx, word ptr [esi+8]
0x75F74F: add     esp, 4
0x75F752: cmp     edi, ecx
0x75F754: mov     [esp+8+arg_0], eax
0x75F758: jb      short loc_75F768
0x75F75A: movzx   edx, word ptr [esi+0Eh]
0x75F75E: add     edx, edi
0x75F760: push    edx
0x75F761: mov     ecx, esi
0x75F763: call    NiTArray_SetSize
0x75F768: lea     eax, [esp+8+arg_0]
0x75F76C: push    eax
0x75F76D: push    edi
0x75F76E: mov     ecx, esi
0x75F770: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75F775: pop     edi
0x75F776: pop     esi
0x75F777: retn    4
