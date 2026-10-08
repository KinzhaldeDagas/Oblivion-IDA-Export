0x411F20: add     ecx, 4
0x411F23: push    20h ; ' '; byteCount
0x411F25: push    ecx; source
0x411F26: mov     ecx, g_TESSaveLoadGame; self
0x411F2C: call    SaveLoad_SaveData
0x411F31: retn    4
