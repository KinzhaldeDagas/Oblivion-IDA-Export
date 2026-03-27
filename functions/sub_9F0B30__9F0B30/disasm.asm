0x9F0B30: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B35: push    offset aSendurancedesc; "sEnduranceDescription"
0x9F0B3A: mov     ecx, offset unk_B385B8
0x9F0B3F: call    GameSetting_ConstrAndReg
0x9F0B44: push    offset sub_A21290; void (__cdecl *)()
0x9F0B49: call    _atexit
0x9F0B4E: pop     ecx
0x9F0B4F: retn
