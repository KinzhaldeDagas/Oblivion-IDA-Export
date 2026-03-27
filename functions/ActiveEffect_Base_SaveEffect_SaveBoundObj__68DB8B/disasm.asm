0x68DB8B: mov     eax, [ebp+30h]
0x68DB8E: cmp     eax, edi
0x68DB90: mov     [esp+arg_10], edi
0x68DB94: jz      short loc_68DB9D
0x68DB96: mov     edx, [eax+0Ch]
0x68DB99: mov     [esp+arg_10], edx
0x68DB9D: mov     ecx, ds:0B33B00h
0x68DBA3: push    4
0x68DBA5: lea     eax, [esp+4+arg_10]
0x68DBA9: push    eax
0x68DBAA: call    SaveLoad_SaveFormID
