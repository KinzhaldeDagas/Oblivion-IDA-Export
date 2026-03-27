0x9F2720: push    offset aExitTheGame?; "Exit the game?"
0x9F2725: push    offset aSexitgamequest; "sExitGameQuestion"
0x9F272A: mov     ecx, offset dword_B38C50
0x9F272F: call    GameSetting_ConstrAndReg
0x9F2734: push    offset sub_A21FC0; void (__cdecl *)()
0x9F2739: call    _atexit
0x9F273E: pop     ecx
0x9F273F: retn
