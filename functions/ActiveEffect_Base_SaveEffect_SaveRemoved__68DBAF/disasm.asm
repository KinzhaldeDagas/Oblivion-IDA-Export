0x68DBAF: push    1; Size
0x68DBB1: lea     ecx, [ebp+12h]
0x68DBB4: push    ecx; Src
0x68DBB5: mov     ecx, ds:0B33B00h
0x68DBBB: call    SaveLoad_SaveData
0x68DBC0: mov     ecx, ds:0B33B00h
0x68DBC6: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x68DBCA: jb      short ActiveEffect_Base_SaveEffect___SkipDataList
0x68DBCC: push    esi
0x68DBCD: mov     byte ptr [esp+4+Src+3], 0
0x68DBD2: mov     edx, [ecx+14h]
0x68DBD5: push    1; Size
0x68DBD7: lea     eax, [esp+8+Src+3]
0x68DBDB: push    eax; Src
0x68DBDC: mov     [esp+0Ch+arg_14], edx
0x68DBE0: call    SaveLoad_SaveData
