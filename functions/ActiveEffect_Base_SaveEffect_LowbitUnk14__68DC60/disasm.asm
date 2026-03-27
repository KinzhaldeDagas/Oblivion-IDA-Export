0x68DC60: cmp     al, 41h ; 'A'
0x68DC62: jb      short ActiveEffect_Base_SaveEffect___SkipUnk14
0x68DC64: mov     al, [ebp+14h]
0x68DC67: push    1; Size
0x68DC69: lea     edx, [esp+4+Src]
0x68DC6D: and     al, 1
0x68DC6F: push    edx; Src
0x68DC70: mov     [esp+8+Src], al
0x68DC74: call    SaveLoad_SaveData
