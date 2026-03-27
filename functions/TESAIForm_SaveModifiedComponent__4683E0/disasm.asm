0x4683E0: test    [esp+arg_0], 100h
0x4683E8: push    esi
0x4683E9: mov     esi, ecx
0x4683EB: jz      short loc_468431
0x4683ED: mov     ecx, ds:0B33B00h
0x4683F3: push    1; Size
0x4683F5: lea     eax, [esi+4]
0x4683F8: push    eax; Src
0x4683F9: call    SaveLoad_SaveData
0x4683FE: push    1; Size
0x468400: lea     ecx, [esi+5]
0x468403: push    ecx; Src
0x468404: mov     ecx, ds:0B33B00h
0x46840A: call    SaveLoad_SaveData
0x46840F: mov     ecx, ds:0B33B00h
0x468415: push    1; Size
0x468417: lea     edx, [esi+6]
0x46841A: push    edx; Src
0x46841B: call    SaveLoad_SaveData
0x468420: mov     ecx, ds:0B33B00h
0x468426: push    1; Size
0x468428: add     esi, 7
0x46842B: push    esi; Src
0x46842C: call    SaveLoad_SaveData
0x468431: pop     esi
0x468432: retn    4
