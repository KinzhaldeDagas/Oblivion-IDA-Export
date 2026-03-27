0x69DBB0: push    esi
0x69DBB1: mov     esi, ecx
0x69DBB3: mov     ecx, ds:0B33B00h
0x69DBB9: push    4; Size
0x69DBBB: lea     eax, [esi+20h]
0x69DBBE: push    eax; Src
0x69DBBF: call    SaveLoad_SaveData
0x69DBC4: push    1; Size
0x69DBC6: lea     ecx, [esi+24h]
0x69DBC9: push    ecx; Src
0x69DBCA: mov     ecx, ds:0B33B00h
0x69DBD0: call    SaveLoad_SaveData
0x69DBD5: mov     ecx, ds:0B33B00h
0x69DBDB: cmp     byte ptr [ecx+7Ch], 72h ; 'r'
0x69DBDF: jb      short loc_69DBEC
0x69DBE1: push    4; Size
0x69DBE3: add     esi, 8
0x69DBE6: push    esi; Src
0x69DBE7: call    SaveLoad_SaveData
0x69DBEC: pop     esi
0x69DBED: retn    8
