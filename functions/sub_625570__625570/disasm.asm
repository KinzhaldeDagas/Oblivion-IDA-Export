0x625570: mov     eax, [esp+arg_0]
0x625574: lea     edx, [eax-0Ch]
0x625577: cmp     edx, 6
0x62557A: jbe     short loc_6255C7
0x62557C: cmp     eax, 1Ch
0x62557F: jz      short loc_6255C7
0x625581: lea     edx, [eax-13h]
0x625584: cmp     edx, 6
0x625587: ja      short loc_6255A4
0x625589: mov     edx, [esp+arg_8]
0x62558D: fld     [esp+arg_4]
0x625591: push    edx; int
0x625592: push    ecx
0x625593: mov     eax, 13h
0x625598: fstp    [esp+8+var_8]; float
0x62559B: push    eax; int
0x62559C: call    Actor_ModMaxAVf
0x6255A1: retn    0Ch
0x6255A4: lea     edx, [eax-1Ah]
0x6255A7: cmp     edx, 6
0x6255AA: ja      short loc_6255CC
0x6255AC: mov     edx, [esp+arg_8]
0x6255B0: fld     [esp+arg_4]
0x6255B4: push    edx; int
0x6255B5: push    ecx
0x6255B6: mov     eax, 1Ah
0x6255BB: fstp    [esp+8+var_8]; float
0x6255BE: push    eax; int
0x6255BF: call    Actor_ModMaxAVf
0x6255C4: retn    0Ch
0x6255C7: mov     eax, 0Ch
0x6255CC: mov     edx, [esp+arg_8]
0x6255D0: fld     [esp+arg_4]
0x6255D4: push    edx; int
0x6255D5: push    ecx
0x6255D6: fstp    [esp+8+var_8]; float
0x6255D9: push    eax; int
0x6255DA: call    Actor_ModMaxAVf
0x6255DF: retn    0Ch
