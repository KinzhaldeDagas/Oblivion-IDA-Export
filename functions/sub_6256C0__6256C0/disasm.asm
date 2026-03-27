0x6256C0: mov     eax, [esp+arg_0]
0x6256C4: lea     edx, [eax-0Ch]
0x6256C7: cmp     edx, 6
0x6256CA: jbe     short loc_6256FD
0x6256CC: cmp     eax, 1Ch
0x6256CF: jz      short loc_6256FD
0x6256D1: lea     edx, [eax-13h]
0x6256D4: cmp     edx, 6
0x6256D7: ja      short loc_6256E7
0x6256D9: mov     eax, 13h
0x6256DE: mov     [esp+arg_0], eax
0x6256E2: jmp     Actor_ModCurAVi
0x6256E7: lea     edx, [eax-1Ah]
0x6256EA: cmp     edx, 6
0x6256ED: ja      short loc_625702
0x6256EF: mov     eax, 1Ah
0x6256F4: mov     [esp+arg_0], eax
0x6256F8: jmp     Actor_ModCurAVi
0x6256FD: mov     eax, 0Ch
0x625702: mov     [esp+arg_0], eax
0x625706: jmp     Actor_ModCurAVi
