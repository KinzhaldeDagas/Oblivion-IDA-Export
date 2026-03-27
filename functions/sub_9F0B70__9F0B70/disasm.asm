0x9F0B70: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B75: push    offset aSluckdescripti; "sLuckDescription"
0x9F0B7A: mov     ecx, offset unk_B385C8
0x9F0B7F: call    GameSetting_ConstrAndReg
0x9F0B84: push    offset sub_A212B0; void (__cdecl *)()
0x9F0B89: call    _atexit
0x9F0B8E: pop     ecx
0x9F0B8F: retn
