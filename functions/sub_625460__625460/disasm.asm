0x625460: mov     eax, [esp+arg_0]
0x625464: lea     edx, [eax-0Ch]
0x625467: cmp     edx, 6
0x62546A: jbe     short loc_62549D
0x62546C: cmp     eax, 1Ch
0x62546F: jz      short loc_62549D
0x625471: lea     edx, [eax-13h]
0x625474: cmp     edx, 6
0x625477: ja      short loc_625487
0x625479: mov     eax, 13h
0x62547E: mov     [esp+arg_0], eax
0x625482: jmp     Actor_SetBaseAVi
0x625487: lea     edx, [eax-1Ah]
0x62548A: cmp     edx, 6
0x62548D: ja      short loc_6254A2
0x62548F: mov     eax, 1Ah
0x625494: mov     [esp+arg_0], eax
0x625498: jmp     Actor_SetBaseAVi
0x62549D: mov     eax, 0Ch
0x6254A2: mov     [esp+arg_0], eax
0x6254A6: jmp     Actor_SetBaseAVi
