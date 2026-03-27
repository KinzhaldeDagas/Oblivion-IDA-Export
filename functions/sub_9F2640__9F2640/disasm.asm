0x9F2640: push    offset aMainMenu; "Main Menu"
0x9F2645: push    offset aSmiscplayerd_1; "sMiscPlayerDeadMenuOption"
0x9F264A: mov     ecx, offset dword_B38C18
0x9F264F: call    GameSetting_ConstrAndReg
0x9F2654: push    offset sub_A21F50; void (__cdecl *)()
0x9F2659: call    _atexit
0x9F265E: pop     ecx
0x9F265F: retn
