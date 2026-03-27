0x9F1900: push    offset aAutoAttempt; "Auto Attempt"
0x9F1905: push    offset aSautoattempt; "sAutoAttempt"
0x9F190A: mov     ecx, offset dword_B38928
0x9F190F: call    GameSetting_ConstrAndReg
0x9F1914: push    offset sub_A21970; void (__cdecl *)()
0x9F1919: call    _atexit
0x9F191E: pop     ecx
0x9F191F: retn
