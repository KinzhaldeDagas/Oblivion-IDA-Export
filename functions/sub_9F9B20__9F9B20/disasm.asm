0x9F9B20: push    offset aFame_0; "Fame"
0x9F9B25: push    offset aSvirtuenamefam; "sVirtueNameFame"
0x9F9B2A: mov     ecx, offset sVirtueNameFame
0x9F9B2F: call    GameSetting_ConstrAndReg
0x9F9B34: push    offset sub_A23B00; void (__cdecl *)()
0x9F9B39: call    _atexit
0x9F9B3E: pop     ecx
0x9F9B3F: retn
