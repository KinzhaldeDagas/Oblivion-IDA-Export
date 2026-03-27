0x6254B0: mov     eax, [esp+arg_0]
0x6254B4: lea     edx, [eax-0Ch]
0x6254B7: cmp     edx, 6
0x6254BA: jbe     short loc_6254FD
0x6254BC: cmp     eax, 1Ch
0x6254BF: jz      short loc_6254FD
0x6254C1: lea     edx, [eax-13h]
0x6254C4: cmp     edx, 6
0x6254C7: ja      short loc_6254DF
0x6254C9: fld     [esp+arg_4]
0x6254CD: push    ecx
0x6254CE: mov     eax, 13h
0x6254D3: fstp    [esp+4+var_4]; float
0x6254D6: push    eax; int
0x6254D7: call    Actor_SetBaseAVf
0x6254DC: retn    8
0x6254DF: lea     edx, [eax-1Ah]
0x6254E2: cmp     edx, 6
0x6254E5: ja      short loc_625502
0x6254E7: fld     [esp+arg_4]
0x6254EB: push    ecx
0x6254EC: mov     eax, 1Ah
0x6254F1: fstp    [esp+4+var_4]; float
0x6254F4: push    eax; int
0x6254F5: call    Actor_SetBaseAVf
0x6254FA: retn    8
0x6254FD: mov     eax, 0Ch
0x625502: fld     [esp+arg_4]
0x625506: push    ecx
0x625507: fstp    [esp+4+var_4]; float
0x62550A: push    eax; int
0x62550B: call    Actor_SetBaseAVf
0x625510: retn    8
