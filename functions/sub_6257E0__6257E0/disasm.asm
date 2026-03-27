0x6257E0: mov     eax, [esp+arg_0]
0x6257E4: lea     edx, [eax-0Ch]
0x6257E7: cmp     edx, 6
0x6257EA: jbe     short loc_62582D
0x6257EC: cmp     eax, 1Ch
0x6257EF: jz      short loc_62582D
0x6257F1: lea     edx, [eax-13h]
0x6257F4: cmp     edx, 6
0x6257F7: ja      short loc_62580F
0x6257F9: fld     [esp+arg_4]
0x6257FD: push    ecx
0x6257FE: mov     eax, 13h
0x625803: fstp    [esp+4+var_4]; float
0x625806: push    eax; int
0x625807: call    Actor_ModBaseAVf
0x62580C: retn    8
0x62580F: lea     edx, [eax-1Ah]
0x625812: cmp     edx, 6
0x625815: ja      short loc_625832
0x625817: fld     [esp+arg_4]
0x62581B: push    ecx
0x62581C: mov     eax, 1Ah
0x625821: fstp    [esp+4+var_4]; float
0x625824: push    eax; int
0x625825: call    Actor_ModBaseAVf
0x62582A: retn    8
0x62582D: mov     eax, 0Ch
0x625832: fld     [esp+arg_4]
0x625836: push    ecx
0x625837: fstp    [esp+4+var_4]; float
0x62583A: push    eax; int
0x62583B: call    Actor_ModBaseAVf
0x625840: retn    8
