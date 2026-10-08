0x68EDA0: sub     esp, 0Ch; Verified per-effect load version dispatch: before save version 0x2A reads the legacy MagicItem/index header; version 0x2A and later reads a record-size field before the same source lookup and effect-item selection.
0x68EDA3: mov     ecx, ds:0B33B00h
0x68EDA9: mov     [esp+0Ch+var_C], 1Ch
0x68EDB0: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x68EDB4: jb      short ActiveEffect_Base_Load___LoadMagicItem
