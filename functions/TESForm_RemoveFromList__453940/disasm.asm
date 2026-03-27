0x453940: add     ecx, 30h ; '0'
0x453943: mov     eax, ecx
0x453945: jz      short locret_45395B
0x453947: mov     edx, [esp+arg_0]
0x45394B: jmp     short loc_453950
0x45394D: align 10h
0x453950: cmp     [eax], edx
0x453952: jz      short loc_45395E
0x453954: mov     eax, [eax+4]
0x453957: test    eax, eax
0x453959: jnz     short loc_453950
0x45395B: retn    4
0x45395E: mov     [esp+arg_0], edx
0x453962: jmp     BSSimpleList_Remove
