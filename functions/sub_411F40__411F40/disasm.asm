0x411F40: add     ecx, 4
0x411F43: push    20h ; ' '; Size
0x411F45: push    ecx; Dst
0x411F46: mov     ecx, SaveLoad_CurrentSavegame
0x411F4C: call    SaveLoad_LoadData
0x411F51: retn    4
