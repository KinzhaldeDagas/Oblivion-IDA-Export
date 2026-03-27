0x6D4680: push    esi
0x6D4681: mov     esi, [esp+4+arg_0]
0x6D4685: push    edi
0x6D4686: push    esi
0x6D4687: call    sub_6EC660
0x6D468C: mov     eax, ds:0B3D80Ch
0x6D4691: push    eax; ArgList
0x6D4692: call    TESOutput_PrintString
0x6D4697: movzx   edi, word ptr [esi+0Ah]
0x6D469B: movzx   ecx, word ptr [esi+8]
0x6D469F: add     esp, 4
0x6D46A2: cmp     edi, ecx
0x6D46A4: mov     [esp+8+arg_0], eax
0x6D46A8: jb      short loc_6D46B8
0x6D46AA: movzx   edx, word ptr [esi+0Eh]
0x6D46AE: add     edx, edi
0x6D46B0: push    edx
0x6D46B1: mov     ecx, esi
0x6D46B3: call    NiTArray_SetSize
0x6D46B8: lea     eax, [esp+8+arg_0]
0x6D46BC: push    eax
0x6D46BD: push    edi
0x6D46BE: mov     ecx, esi
0x6D46C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D46C5: pop     edi
0x6D46C6: pop     esi
0x6D46C7: retn    4
