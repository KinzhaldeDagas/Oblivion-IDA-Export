0x9F1060: push    offset aNoSavedGames_; "No saved games."
0x9F1065: push    offset aSmenudisplayno; "sMenuDisplayNoSaves"
0x9F106A: mov     ecx, offset dword_B38700
0x9F106F: call    GameSetting_ConstrAndReg
0x9F1074: push    offset sub_A21520; void (__cdecl *)()
0x9F1079: call    _atexit
0x9F107E: pop     ecx
0x9F107F: retn
