0x68DD30: mov     eax, ds:0B33B00h
0x68DD35: sub     esp, 8
0x68DD38: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68DD3C: push    esi
0x68DD3D: mov     esi, [esp+0Ch+arg_0]
0x68DD41: push    edi
0x68DD42: mov     edi, [esp+10h+arg_4]
0x68DD46: jb      short ActiveEffect_Base_Save___SaveMagicItem
