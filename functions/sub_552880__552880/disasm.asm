0x552880: push    esi
0x552881: mov     esi, [esp+4+arg_0]
0x552885: test    esi, esi
0x552887: jz      short loc_5528E2
0x552889: fldz
0x55288B: push    ecx
0x55288C: fstp    [esp+8+var_8]; int
0x55288F: lea     ecx, [esi+8]; int
0x552892: push    32h ; '2'; int
0x552894: mov     dword ptr [esi], 32h ; '2'
0x55289A: mov     dword ptr [esi+4], 1
0x5528A1: call    sub_527160
0x5528A6: fldz
0x5528A8: push    ecx
0x5528A9: fstp    [esp+8+var_8]; int
0x5528AC: push    1Eh; int
0x5528AE: lea     ecx, [esi+20h]; int
0x5528B1: mov     dword ptr [esi+18h], 1Eh
0x5528B8: mov     dword ptr [esi+1Ch], 1
0x5528BF: call    sub_527160
0x5528C4: fldz
0x5528C6: push    ecx
0x5528C7: fstp    [esp+8+var_8]; int
0x5528CA: push    32h ; '2'; int
0x5528CC: lea     ecx, [esi+38h]; int
0x5528CF: mov     dword ptr [esi+30h], 32h ; '2'
0x5528D6: mov     dword ptr [esi+34h], 1
0x5528DD: call    sub_527160
0x5528E2: pop     esi
0x5528E3: retn
