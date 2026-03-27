0x68DB3D: mov     ecx, [ebp+24h]
0x68DB40: xor     edi, edi
0x68DB42: cmp     ecx, edi
0x68DB44: mov     [esp+arg_8], edi
0x68DB48: jz      short loc_68DB53
0x68DB4A: call    MagicCaster_GetFormID
0x68DB4F: mov     [esp+arg_8], eax
0x68DB53: mov     ecx, ds:0B33B00h
0x68DB59: push    4
0x68DB5B: lea     eax, [esp+4+arg_8]
0x68DB5F: push    eax
0x68DB60: call    SaveLoad_SaveFormID
