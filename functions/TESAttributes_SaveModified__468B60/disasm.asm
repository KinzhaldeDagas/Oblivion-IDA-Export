0x468B60: test    [esp+arg_0], 8
0x468B65: jz      short locret_468B78
0x468B67: add     ecx, 4
0x468B6A: push    8; Size
0x468B6C: push    ecx; Src
0x468B6D: mov     ecx, ds:0B33B00h
0x468B73: call    SaveLoad_SaveData
0x468B78: retn    4
