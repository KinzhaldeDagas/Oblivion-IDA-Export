0x68EDA0: sub     esp, 0Ch
0x68EDA3: mov     ecx, ds:0B33B00h
0x68EDA9: mov     [esp+0Ch+var_C], 1Ch
0x68EDB0: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x68EDB4: jb      short ActiveEffect_Base_Load___LoadMagicItem
