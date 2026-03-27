0x625520: mov     eax, [esp+arg_0]
0x625524: lea     edx, [eax-0Ch]
0x625527: cmp     edx, 6
0x62552A: jbe     short loc_62555D
0x62552C: cmp     eax, 1Ch
0x62552F: jz      short loc_62555D
0x625531: lea     edx, [eax-13h]
0x625534: cmp     edx, 6
0x625537: ja      short loc_625547
0x625539: mov     eax, 13h
0x62553E: mov     [esp+arg_0], eax
0x625542: jmp     Actor_ModMaxAVi
0x625547: lea     edx, [eax-1Ah]
0x62554A: cmp     edx, 6
0x62554D: ja      short loc_625562
0x62554F: mov     eax, 1Ah
0x625554: mov     [esp+arg_0], eax
0x625558: jmp     Actor_ModMaxAVi
0x62555D: mov     eax, 0Ch
0x625562: mov     [esp+arg_0], eax
0x625566: jmp     Actor_ModMaxAVi
