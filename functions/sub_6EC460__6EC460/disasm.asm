0x6EC460: push    esi
0x6EC461: mov     esi, [esp+4+arg_0]
0x6EC465: push    edi
0x6EC466: push    esi
0x6EC467: call    sub_6EBAC0
0x6EC46C: mov     eax, ds:0B3ED80h
0x6EC471: push    eax; ArgList
0x6EC472: call    TESOutput_PrintString
0x6EC477: movzx   edi, word ptr [esi+0Ah]
0x6EC47B: movzx   ecx, word ptr [esi+8]
0x6EC47F: add     esp, 4
0x6EC482: cmp     edi, ecx
0x6EC484: mov     [esp+8+arg_0], eax
0x6EC488: jb      short loc_6EC498
0x6EC48A: movzx   edx, word ptr [esi+0Eh]
0x6EC48E: add     edx, edi
0x6EC490: push    edx
0x6EC491: mov     ecx, esi
0x6EC493: call    NiTArray_SetSize
0x6EC498: lea     eax, [esp+8+arg_0]
0x6EC49C: push    eax
0x6EC49D: push    edi
0x6EC49E: mov     ecx, esi
0x6EC4A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EC4A5: pop     edi
0x6EC4A6: pop     esi
0x6EC4A7: retn    4
