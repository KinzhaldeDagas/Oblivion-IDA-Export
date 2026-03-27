0x9F6F90: push    offset aJawNeckSlopeHi; "Jaw-Neck slope high/low"
0x9F6F95: push    offset aSjawneck; "sJawNeck"
0x9F6F9A: mov     ecx, offset dword_B39158
0x9F6F9F: call    GameSetting_ConstrAndReg
0x9F6FA4: push    offset sub_A229D0; void (__cdecl *)()
0x9F6FA9: call    _atexit
0x9F6FAE: pop     ecx
0x9F6FAF: retn
