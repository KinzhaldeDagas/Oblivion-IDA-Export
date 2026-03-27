0x9DF300: push    offset aFirstSeed; "First Seed"
0x9DF305: push    offset aSmonthfirstsee; "sMonthFirstSeed"
0x9DF30A: mov     ecx, offset unk_B350FC
0x9DF30F: call    GameSetting_ConstrAndReg
0x9DF314: push    offset sub_A19F40; void (__cdecl *)()
0x9DF319: call    _atexit
0x9DF31E: pop     ecx
0x9DF31F: retn
