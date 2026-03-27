0x9F0B50: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B55: push    offset aSpersonalityde; "sPersonalityDescription"
0x9F0B5A: mov     ecx, offset unk_B385C0
0x9F0B5F: call    GameSetting_ConstrAndReg
0x9F0B64: push    offset sub_A212A0; void (__cdecl *)()
0x9F0B69: call    _atexit
0x9F0B6E: pop     ecx
0x9F0B6F: retn
