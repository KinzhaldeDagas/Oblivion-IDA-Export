0x68DD89: mov     ecx, [esi+0Ch]
0x68DD8C: push    ecx
0x68DD8D: mov     ecx, [esi+8]
0x68DD90: add     ecx, 0Ch
0x68DD93: call    EffectItemList_GetIndexOfItem
0x68DD98: mov     ecx, ds:0B33B00h
0x68DD9E: push    1; Size
0x68DDA0: lea     edx, [esp+4+arg_10]
0x68DDA4: push    edx; Src
0x68DDA5: mov     [esp+8+arg_10], al
0x68DDA9: call    SaveLoad_SaveData
