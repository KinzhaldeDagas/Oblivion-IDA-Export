0x9DA400: push    offset aTouch; "Touch"
0x9DA405: push    offset aSmagicrangetou; "sMagicRangeTouch"
0x9DA40A: mov     ecx, offset sMagicRangeTouch
0x9DA40F: call    GameSetting_ConstrAndReg
0x9DA414: push    offset sub_A177A0; void (__cdecl *)()
0x9DA419: call    _atexit
0x9DA41E: pop     ecx
0x9DA41F: retn
