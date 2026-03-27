0x68DA40: push    ecx
0x68DA41: mov     eax, ds:0B33B00h
0x68DA46: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68DA4A: push    edi
0x68DA4B: mov     edi, ecx
0x68DA4D: mov     [esp+8+var_4], 1Ch
0x68DA55: jb      short ActiveEffect_Base_SaveSize___SkipDataList
