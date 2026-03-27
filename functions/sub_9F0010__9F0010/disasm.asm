0x9F0010: push    offset aContinue; "Continue"
0x9F0015: push    offset aScontinue; "sContinue"
0x9F001A: mov     ecx, offset dword_B382F0
0x9F001F: call    GameSetting_ConstrAndReg
0x9F0024: push    offset sub_A20D00; void (__cdecl *)()
0x9F0029: call    _atexit
0x9F002E: pop     ecx
0x9F002F: retn
