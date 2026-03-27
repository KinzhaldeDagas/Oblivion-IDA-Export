0x68DD6B: mov     ecx, [esi+8]; int
0x68DD6E: call    MagicItem_GetFormID
0x68DD73: mov     ecx, ds:0B33B00h
0x68DD79: mov     [esp+arg_8], eax
0x68DD7D: push    4
0x68DD7F: lea     eax, [esp+4+arg_8]
0x68DD83: push    eax
0x68DD84: call    SaveLoad_SaveFormID
