0x625640: mov     eax, [esp+arg_0]
0x625644: lea     edx, [eax-0Ch]
0x625647: cmp     edx, 6
0x62564A: jbe     short loc_625697
0x62564C: cmp     eax, 1Ch
0x62564F: jz      short loc_625697
0x625651: lea     edx, [eax-13h]
0x625654: cmp     edx, 6
0x625657: ja      short loc_625674
0x625659: mov     edx, [esp+arg_8]
0x62565D: fld     [esp+arg_4]
0x625661: push    edx; int
0x625662: push    ecx
0x625663: mov     eax, 13h
0x625668: fstp    [esp+8+var_8]; float
0x62566B: push    eax; int
0x62566C: call    Actor_ForceModCurAVf
0x625671: retn    0Ch
0x625674: lea     edx, [eax-1Ah]
0x625677: cmp     edx, 6
0x62567A: ja      short loc_62569C
0x62567C: mov     edx, [esp+arg_8]
0x625680: fld     [esp+arg_4]
0x625684: push    edx; int
0x625685: push    ecx
0x625686: mov     eax, 1Ah
0x62568B: fstp    [esp+8+var_8]; float
0x62568E: push    eax; int
0x62568F: call    Actor_ForceModCurAVf
0x625694: retn    0Ch
0x625697: mov     eax, 0Ch
0x62569C: mov     edx, [esp+arg_8]
0x6256A0: fld     [esp+arg_4]
0x6256A4: push    edx; int
0x6256A5: push    ecx
0x6256A6: fstp    [esp+8+var_8]; float
0x6256A9: push    eax; int
0x6256AA: call    Actor_ForceModCurAVf
0x6256AF: retn    0Ch
