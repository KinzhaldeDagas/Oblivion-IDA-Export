0x68E5B6: mov     al, [ecx+7Ch]
0x68E5B9: cmp     al, 48h ; 'H'
0x68E5BB: jb      short ActiveEffect_Base_LoadEffect___Lowbit_Unk14
0x68E5BD: push    4; Size
0x68E5BF: add     ebp, 14h
0x68E5C2: push    ebp; Dst
0x68E5C3: call    SaveLoad_LoadData
0x68E5C8: jmp     short ActiveEffect_Base_LoadEffect___Epilogue
