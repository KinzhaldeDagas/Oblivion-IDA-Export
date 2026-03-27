0x453910: mov     edx, [esp+arg_0]
0x453914: add     ecx, 30h ; '0'
0x453917: mov     eax, ecx
0x453919: jz      short loc_45392B
0x45391B: jmp     short loc_453920
0x45391D: align 10h
0x453920: cmp     [eax], edx
0x453922: jz      short locret_453934
0x453924: mov     eax, [eax+4]
0x453927: test    eax, eax
0x453929: jnz     short loc_453920
0x45392B: mov     [esp+arg_0], edx
0x45392F: jmp     BSSimpleList_PushFront
0x453934: retn    4
