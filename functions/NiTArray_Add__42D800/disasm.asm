0x42D800: push    esi
0x42D801: mov     esi, ecx
0x42D803: movzx   eax, word ptr [esi+8]
0x42D807: push    edi
0x42D808: movzx   edi, word ptr [esi+0Ah]
0x42D80C: cmp     edi, eax
0x42D80E: jb      short loc_42D81E
0x42D810: movzx   ecx, word ptr [esi+0Eh]
0x42D814: add     ecx, edi
0x42D816: push    ecx
0x42D817: mov     ecx, esi
0x42D819: call    NiTArray_SetSize
0x42D81E: mov     edx, [esp+8+arg_0]
0x42D822: push    edx
0x42D823: push    edi
0x42D824: mov     ecx, esi
0x42D826: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42D82B: mov     eax, edi
0x42D82D: pop     edi
0x42D82E: pop     esi
0x42D82F: retn    4
