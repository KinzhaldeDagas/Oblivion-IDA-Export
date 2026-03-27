0x6255F0: mov     eax, [esp+arg_0]
0x6255F4: lea     edx, [eax-0Ch]
0x6255F7: cmp     edx, 6
0x6255FA: jbe     short loc_62562D
0x6255FC: cmp     eax, 1Ch
0x6255FF: jz      short loc_62562D
0x625601: lea     edx, [eax-13h]
0x625604: cmp     edx, 6
0x625607: ja      short loc_625617
0x625609: mov     eax, 13h
0x62560E: mov     [esp+arg_0], eax
0x625612: jmp     Actor_ForceModCurAVi
0x625617: lea     edx, [eax-1Ah]
0x62561A: cmp     edx, 6
0x62561D: ja      short loc_625632
0x62561F: mov     eax, 1Ah
0x625624: mov     [esp+arg_0], eax
0x625628: jmp     Actor_ForceModCurAVi
0x62562D: mov     eax, 0Ch
0x625632: mov     [esp+arg_0], eax
0x625636: jmp     Actor_ForceModCurAVi
