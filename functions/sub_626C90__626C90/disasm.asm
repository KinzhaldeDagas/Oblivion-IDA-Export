0x626C90: mov     edx, [esp+arg_0]
0x626C94: add     ecx, 54h ; 'T'
0x626C97: mov     eax, ecx
0x626C99: jz      short loc_626CAB
0x626C9B: jmp     short loc_626CA0
0x626C9D: align 10h
0x626CA0: cmp     [eax], edx
0x626CA2: jz      short locret_626CB4
0x626CA4: mov     eax, [eax+4]
0x626CA7: test    eax, eax
0x626CA9: jnz     short loc_626CA0
0x626CAB: mov     [esp+arg_0], edx
0x626CAF: jmp     BSSimpleList_PushFront
0x626CB4: retn    4
