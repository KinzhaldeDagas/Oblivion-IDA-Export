0x9F0C30: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0C35: push    offset aSmagicdescript; "sMagicDescription"
0x9F0C3A: mov     ecx, offset dword_B385F8
0x9F0C3F: call    GameSetting_ConstrAndReg
0x9F0C44: push    offset sub_A21310; void (__cdecl *)()
0x9F0C49: call    _atexit
0x9F0C4E: pop     ecx
0x9F0C4F: retn
