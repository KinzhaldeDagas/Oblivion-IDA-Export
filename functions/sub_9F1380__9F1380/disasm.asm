0x9F1380: push    offset aNewGame; "New Game"
0x9F1385: push    offset aSnewgame; "sNewGame"
0x9F138A: mov     ecx, offset dword_B387C8
0x9F138F: call    GameSetting_ConstrAndReg
0x9F1394: push    offset sub_A216B0; void (__cdecl *)()
0x9F1399: call    _atexit
0x9F139E: pop     ecx
0x9F139F: retn
