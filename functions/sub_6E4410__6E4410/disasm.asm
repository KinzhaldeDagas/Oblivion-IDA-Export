0x6E4410: push    esi
0x6E4411: mov     esi, [esp+4+arg_0]
0x6E4415: push    edi
0x6E4416: push    esi
0x6E4417: call    sub_6ED000
0x6E441C: mov     eax, ds:0B3E314h
0x6E4421: push    eax; ArgList
0x6E4422: call    TESOutput_PrintString
0x6E4427: movzx   edi, word ptr [esi+0Ah]
0x6E442B: movzx   ecx, word ptr [esi+8]
0x6E442F: add     esp, 4
0x6E4432: cmp     edi, ecx
0x6E4434: mov     [esp+8+arg_0], eax
0x6E4438: jb      short loc_6E4448
0x6E443A: movzx   edx, word ptr [esi+0Eh]
0x6E443E: add     edx, edi
0x6E4440: push    edx
0x6E4441: mov     ecx, esi
0x6E4443: call    NiTArray_SetSize
0x6E4448: lea     eax, [esp+8+arg_0]
0x6E444C: push    eax
0x6E444D: push    edi
0x6E444E: mov     ecx, esi
0x6E4450: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E4455: pop     edi
0x6E4456: pop     esi
0x6E4457: retn    4
