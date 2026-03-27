0x689BB0: push    ebx
0x689BB1: mov     ebx, [esp+4+arg_0]
0x689BB5: test    ebx, ebx
0x689BB7: push    esi
0x689BB8: mov     esi, ecx
0x689BBA: jz      short loc_689BFF
0x689BBC: mov     ecx, ebx
0x689BBE: call    BSSimpleList_Clear
0x689BC3: add     esi, 4
0x689BC6: jz      short loc_689BFF
0x689BC8: push    edi
0x689BC9: lea     esp, [esp+0]
0x689BD0: cmp     dword ptr [esi+4], 0
0x689BD4: jnz     short loc_689BDB
0x689BD6: cmp     dword ptr [esi], 0
0x689BD9: jz      short loc_689BFE
0x689BDB: mov     edi, [esi]
0x689BDD: mov     ecx, edi
0x689BDF: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x689BE4: test    eax, eax
0x689BE6: jnz     short loc_689BF7
0x689BE8: mov     ecx, edi
0x689BEA: call    sub_68B0F0
0x689BEF: push    eax
0x689BF0: mov     ecx, ebx
0x689BF2: call    BSSimpleList_PushBack
0x689BF7: mov     esi, [esi+4]
0x689BFA: test    esi, esi
0x689BFC: jnz     short loc_689BD0
0x689BFE: pop     edi
0x689BFF: pop     esi
0x689C00: pop     ebx
0x689C01: retn    4
