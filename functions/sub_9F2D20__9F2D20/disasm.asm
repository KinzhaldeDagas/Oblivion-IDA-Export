0x9F2D20: push    offset aAcceptsYourYie; "accepts your yield."
0x9F2D25: push    offset aSyieldaccepted; "sYieldAccepted"
0x9F2D2A: mov     ecx, offset sYieldAccepted
0x9F2D2F: call    GameSetting_ConstrAndReg
0x9F2D34: push    offset sub_A222C0; void (__cdecl *)()
0x9F2D39: call    _atexit
0x9F2D3E: pop     ecx
0x9F2D3F: retn
