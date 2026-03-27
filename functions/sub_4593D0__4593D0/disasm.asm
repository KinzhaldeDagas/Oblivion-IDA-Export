0x4593D0: mov     edx, [esp+arg_0]
0x4593D4: add     ecx, 64h ; 'd'
0x4593D7: mov     eax, ecx
0x4593D9: jz      short loc_4593EB
0x4593DB: jmp     short loc_4593E0
0x4593DD: align 10h
0x4593E0: cmp     [eax], edx
0x4593E2: jz      short locret_4593F4
0x4593E4: mov     eax, [eax+4]
0x4593E7: test    eax, eax
0x4593E9: jnz     short loc_4593E0
0x4593EB: mov     [esp+arg_0], edx
0x4593EF: jmp     BSSimpleList_PushFront
0x4593F4: retn    4
