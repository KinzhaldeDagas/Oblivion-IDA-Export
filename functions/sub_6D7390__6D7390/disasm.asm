0x6D7390: push    esi
0x6D7391: mov     esi, [esp+4+arg_0]
0x6D7395: push    edi
0x6D7396: push    esi
0x6D7397: call    sub_6EC1D0
0x6D739C: mov     eax, ds:0B3D9B4h
0x6D73A1: push    eax; ArgList
0x6D73A2: call    TESOutput_PrintString
0x6D73A7: movzx   edi, word ptr [esi+0Ah]
0x6D73AB: movzx   ecx, word ptr [esi+8]
0x6D73AF: add     esp, 4
0x6D73B2: cmp     edi, ecx
0x6D73B4: mov     [esp+8+arg_0], eax
0x6D73B8: jb      short loc_6D73C8
0x6D73BA: movzx   edx, word ptr [esi+0Eh]
0x6D73BE: add     edx, edi
0x6D73C0: push    edx
0x6D73C1: mov     ecx, esi
0x6D73C3: call    NiTArray_SetSize
0x6D73C8: lea     eax, [esp+8+arg_0]
0x6D73CC: push    eax
0x6D73CD: push    edi
0x6D73CE: mov     ecx, esi
0x6D73D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D73D5: pop     edi
0x6D73D6: pop     esi
0x6D73D7: retn    4
