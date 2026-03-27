0x6136B0: cmp     dword ptr ds:0B3B90Ch, 0
0x6136B7: jnz     short loc_6136D4
0x6136B9: mov     eax, ds:0B33398h
0x6136BE: mov     ecx, [eax+24h]
0x6136C1: test    ecx, ecx
0x6136C3: jz      short loc_6136D4
0x6136C5: fld1
0x6136C7: push    ecx
0x6136C8: fstp    [esp+4+var_4]
0x6136CB: push    0
0x6136CD: push    4
0x6136CF: call    sub_6ACD10
0x6136D4: add     dword ptr ds:0B3B90Ch, 1
0x6136DB: retn
