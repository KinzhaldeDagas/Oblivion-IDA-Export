0x411F20: add     ecx, 4
0x411F23: push    20h ; ' '; Size
0x411F25: push    ecx; Src
0x411F26: mov     ecx, SaveLoad_CurrentSavegame
0x411F2C: call    SaveLoad_SaveData
0x411F31: retn    4
