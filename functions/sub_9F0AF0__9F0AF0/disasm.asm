0x9F0AF0: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0AF5: push    offset aSagilitydescri; "sAgilityDescription"
0x9F0AFA: mov     ecx, offset unk_B385A8
0x9F0AFF: call    GameSetting_ConstrAndReg
0x9F0B04: push    offset sub_A21270; void (__cdecl *)()
0x9F0B09: call    _atexit
0x9F0B0E: pop     ecx
0x9F0B0F: retn
