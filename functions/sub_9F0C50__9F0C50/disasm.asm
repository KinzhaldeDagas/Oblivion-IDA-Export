0x9F0C50: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0C55: push    offset aSstealthdescri; "sStealthDescription"
0x9F0C5A: mov     ecx, offset dword_B38600
0x9F0C5F: call    GameSetting_ConstrAndReg
0x9F0C64: push    offset sub_A21320; void (__cdecl *)()
0x9F0C69: call    _atexit
0x9F0C6E: pop     ecx
0x9F0C6F: retn
