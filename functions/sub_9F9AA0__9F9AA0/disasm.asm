0x9F9AA0: push    offset aConfidence; "Confidence"
0x9F9AA5: push    offset aStraitnameconf; "sTraitNameConfidence"
0x9F9AAA: mov     ecx, offset sTraitNameConfidence
0x9F9AAF: call    GameSetting_ConstrAndReg
0x9F9AB4: push    offset sub_A23AC0; void (__cdecl *)()
0x9F9AB9: call    _atexit
0x9F9ABE: pop     ecx
0x9F9ABF: retn
