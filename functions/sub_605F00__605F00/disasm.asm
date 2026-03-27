0x605F00: mov     edx, [esp+arg_0]
0x605F04: add     ecx, 1Ch
0x605F07: mov     eax, ecx
0x605F09: jz      short loc_605F1B
0x605F0B: jmp     short loc_605F10
0x605F0D: align 10h
0x605F10: cmp     [eax], edx
0x605F12: jz      short locret_605F24
0x605F14: mov     eax, [eax+4]
0x605F17: test    eax, eax
0x605F19: jnz     short loc_605F10
0x605F1B: mov     [esp+arg_0], edx
0x605F1F: jmp     BSSimpleList_PushFront
0x605F24: retn    4
