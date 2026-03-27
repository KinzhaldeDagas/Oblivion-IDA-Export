0x68DB65: mov     ecx, [ebp+20h]
0x68DB68: cmp     ecx, edi
0x68DB6A: mov     [esp+arg_C], edi
0x68DB6E: jz      short loc_68DB79
0x68DB70: call    MagicTarget_GetParentFormID
0x68DB75: mov     [esp+arg_C], eax
0x68DB79: push    4
0x68DB7B: lea     ecx, [esp+4+arg_C]
0x68DB7F: push    ecx
0x68DB80: mov     ecx, ds:0B33B00h
0x68DB86: call    SaveLoad_SaveFormID
