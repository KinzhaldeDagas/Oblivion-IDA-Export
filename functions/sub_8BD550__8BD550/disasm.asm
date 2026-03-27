0x8BD550: push    esi
0x8BD551: mov     esi, [esp+4+arg_0]
0x8BD555: push    edi
0x8BD556: push    esi
0x8BD557: call    sub_8AEE90
0x8BD55C: mov     eax, ds:0BA8050h
0x8BD561: push    eax; ArgList
0x8BD562: call    TESOutput_PrintString
0x8BD567: movzx   edi, word ptr [esi+0Ah]
0x8BD56B: movzx   ecx, word ptr [esi+8]
0x8BD56F: add     esp, 4
0x8BD572: cmp     edi, ecx
0x8BD574: mov     [esp+8+arg_0], eax
0x8BD578: jb      short loc_8BD588
0x8BD57A: movzx   edx, word ptr [esi+0Eh]
0x8BD57E: add     edx, edi
0x8BD580: push    edx
0x8BD581: mov     ecx, esi
0x8BD583: call    NiTArray_SetSize
0x8BD588: lea     eax, [esp+8+arg_0]
0x8BD58C: push    eax
0x8BD58D: push    edi
0x8BD58E: mov     ecx, esi
0x8BD590: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BD595: pop     edi
0x8BD596: pop     esi
0x8BD597: retn    4
