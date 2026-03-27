0x9F6F30: push    offset aForeheadTiltFo; "Forehead tilt forward/back"
0x9F6F35: push    offset aSforeheadtilt; "sForeheadtilt"
0x9F6F3A: mov     ecx, offset dword_B39140
0x9F6F3F: call    GameSetting_ConstrAndReg
0x9F6F44: push    offset sub_A229A0; void (__cdecl *)()
0x9F6F49: call    _atexit
0x9F6F4E: pop     ecx
0x9F6F4F: retn
