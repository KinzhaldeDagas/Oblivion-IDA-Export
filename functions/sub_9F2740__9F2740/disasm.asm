0x9F2740: push    offset aExitGame; "Exit Game"
0x9F2745: push    offset aSexitgameaffir; "sExitGameAffirm"
0x9F274A: mov     ecx, offset dword_B38C58
0x9F274F: call    GameSetting_ConstrAndReg
0x9F2754: push    offset sub_A21FD0; void (__cdecl *)()
0x9F2759: call    _atexit
0x9F275E: pop     ecx
0x9F275F: retn
