0x9F0510: push    offset aHighestLockLev; "Highest Lock Level Picked: "
0x9F0515: push    offset aSmischighlockl; "sMiscHighLockLevel"
0x9F051A: mov     ecx, offset sMiscHighLockLevel
0x9F051F: call    GameSetting_ConstrAndReg
0x9F0524: push    offset sub_A20F80; void (__cdecl *)()
0x9F0529: call    _atexit
0x9F052E: pop     ecx
0x9F052F: retn
