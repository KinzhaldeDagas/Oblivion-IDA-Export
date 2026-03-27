0x9F0C10: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0C15: push    offset aScombatdescrip; "sCombatDescription"
0x9F0C1A: mov     ecx, offset dword_B385F0
0x9F0C1F: call    GameSetting_ConstrAndReg
0x9F0C24: push    offset sub_A21300; void (__cdecl *)()
0x9F0C29: call    _atexit
0x9F0C2E: pop     ecx
0x9F0C2F: retn
