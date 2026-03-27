0x625710: mov     eax, [esp+arg_0]
0x625714: lea     edx, [eax-0Ch]
0x625717: cmp     edx, 6
0x62571A: jbe     short loc_625767
0x62571C: cmp     eax, 1Ch
0x62571F: jz      short loc_625767
0x625721: lea     edx, [eax-13h]
0x625724: cmp     edx, 6
0x625727: ja      short loc_625744
0x625729: mov     edx, [esp+arg_8]
0x62572D: fld     [esp+arg_4]
0x625731: push    edx
0x625732: push    ecx
0x625733: mov     eax, 13h
0x625738: fstp    [esp+8+var_8]; float
0x62573B: push    eax; int
0x62573C: call    Actor_ModCurAVf
0x625741: retn    0Ch
0x625744: lea     edx, [eax-1Ah]
0x625747: cmp     edx, 6
0x62574A: ja      short loc_62576C
0x62574C: mov     edx, [esp+arg_8]
0x625750: fld     [esp+arg_4]
0x625754: push    edx
0x625755: push    ecx
0x625756: mov     eax, 1Ah
0x62575B: fstp    [esp+8+var_8]; float
0x62575E: push    eax; int
0x62575F: call    Actor_ModCurAVf
0x625764: retn    0Ch
0x625767: mov     eax, 0Ch
0x62576C: mov     edx, [esp+arg_8]
0x625770: fld     [esp+arg_4]
0x625774: push    edx
0x625775: push    ecx
0x625776: fstp    [esp+8+var_8]; float
0x625779: push    eax; int
0x62577A: call    Actor_ModCurAVf
0x62577F: retn    0Ch
