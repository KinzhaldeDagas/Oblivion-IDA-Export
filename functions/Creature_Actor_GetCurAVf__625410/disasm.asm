0x625410: mov     eax, [esp+arg_0]
0x625414: lea     edx, [eax-0Ch]
0x625417: cmp     edx, 6
0x62541A: jbe     short loc_62544D
0x62541C: cmp     eax, 1Ch
0x62541F: jz      short loc_62544D
0x625421: lea     edx, [eax-13h]
0x625424: cmp     edx, 6
0x625427: ja      short loc_625437
0x625429: mov     eax, 13h
0x62542E: mov     [esp+arg_0], eax
0x625432: jmp     Actor_GetCurAVf
0x625437: lea     edx, [eax-1Ah]
0x62543A: cmp     edx, 6
0x62543D: ja      short loc_625452
0x62543F: mov     eax, 1Ah
0x625444: mov     [esp+arg_0], eax
0x625448: jmp     Actor_GetCurAVf
0x62544D: mov     eax, 0Ch
0x625452: mov     [esp+arg_0], eax
0x625456: jmp     Actor_GetCurAVf
