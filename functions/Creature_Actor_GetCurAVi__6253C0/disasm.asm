0x6253C0: mov     eax, [esp+arg_0]
0x6253C4: lea     edx, [eax-0Ch]
0x6253C7: cmp     edx, 6
0x6253CA: jbe     short loc_6253FD
0x6253CC: cmp     eax, 1Ch
0x6253CF: jz      short loc_6253FD
0x6253D1: lea     edx, [eax-13h]
0x6253D4: cmp     edx, 6
0x6253D7: ja      short loc_6253E7
0x6253D9: mov     eax, 13h
0x6253DE: mov     [esp+arg_0], eax
0x6253E2: jmp     Actor_GetCurAVi
0x6253E7: lea     edx, [eax-1Ah]
0x6253EA: cmp     edx, 6
0x6253ED: ja      short loc_625402
0x6253EF: mov     eax, 1Ah
0x6253F4: mov     [esp+arg_0], eax
0x6253F8: jmp     Actor_GetCurAVi
0x6253FD: mov     eax, 0Ch
0x625402: mov     [esp+arg_0], eax
0x625406: jmp     Actor_GetCurAVi
